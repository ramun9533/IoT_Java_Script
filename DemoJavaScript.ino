// Creado ChepeCarlos de ALSW
// Tutorial Completo en https://nocheprogramacion.com
// Canal Youtube https://youtube.com/alswnet?sub_confirmation=1


#if defined(ESP32)
//Librerias para ESP32
#include <WiFi.h>
#include <WiFiMulti.h>
WiFiMulti wifiMulti;

#elif defined(ESP8266)
//Librerias para ESP8266
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
ESP8266WiFiMulti wifiMulti;

#endif

#include "data.h"
#include "data1.h"
#if defined(ESP8266)
int pinLed = LED_BUILTIN;
#elif defined(ESP32)
//int pinLed = 2;
// Pines de los LEDs
const int numLEDs = 7;
static unsigned short int LEDPins[numLEDs] = {2, 0, 4, 5, 18, 19, 3};  // Actualiza los pines de acuerdo a tu configuración
#endif

boolean Estado = false;

const uint32_t TiempoEsperaWifi = 5000;

unsigned long TiempoActual = 0;
unsigned long TiempoAnterior = 0;
const long TiempoCancelacion = 500;

WiFiServer servidor(80);

void setup() {
  Serial.begin(115200);
  Serial.println("\nIniciando multi Wifi");

//  pinMode(pinLed, OUTPUT);
 // digitalWrite(pinLed, 0);
 for (int i = 0; i < numLEDs; i++) {
    pinMode(LEDPins[i], OUTPUT);
  }

  wifiMulti.addAP(ssid_1, password_1);
  wifiMulti.addAP(ssid_2, password_2);

  WiFi.mode(WIFI_STA);
  Serial.print("Conectando a Wifi ..");
  while (wifiMulti.run(TiempoEsperaWifi) != WL_CONNECTED) {
    Serial.print(".");
  }
  Serial.println(".. Conectado");
  Serial.print("SSID:");
  Serial.print(WiFi.SSID());
  Serial.print(" ID:");
  Serial.println(WiFi.localIP());

  servidor.begin();

}

void loop() {
  WiFiClient cliente = servidor.available();

  if (cliente) {
    Serial.println("Nuevo Cliente");
    TiempoActual = millis();
    TiempoAnterior = TiempoActual;
    String LineaActual = "";

    while (cliente.connected() && TiempoActual - TiempoAnterior <= TiempoCancelacion) {
      if (cliente.available()) {
        TiempoActual = millis();
        char Letra = cliente.read();
        if (Letra == '\n') {
          if (LineaActual.length() == 0) {
            digitalWrite(LEDPins[0], Estado);
            digitalWrite(LEDPins[1], Estado);
            
            web(cliente);
            break;
          } else {
            Serial.println(LineaActual);
            VerificarMensaje(LineaActual);
            LineaActual = "";
          }
        }  else if (Letra != '\r') {
          LineaActual += Letra;
        }
      }
    }

    cliente.stop();
    Serial.println("Cliente Desconectado");
    Serial.println();
  }
}

void VerificarMensaje(String Mensaje) {
  if (Mensaje.indexOf("GET /encender") >= 0) {
    Serial.println("Encender Led");
    Estado = true;
  } else if (Mensaje.indexOf("GET /apagar") >= 0) {
    Serial.println("Apagar Led");
    Estado = false;
  }
  if (Mensaje.indexOf("GET /encender1") >= 0) {
    Serial.println("Encender Led1");
    Estado = true;
  } else if (Mensaje.indexOf("GET /apagar1") >= 0) {
    Serial.println("Apagar Led1");
    Estado = false;
  }
}

void ResponderCliente(WiFiClient& cliente) {
  cliente.print(pagina);
}
