//Toma un parámetro de tipo referencia a "WiFiClient", es decir "WiFiClient &client".
// El "&" en "WiFiClient" & indica que "client" es una referencia al objeto "WiFiClient". 
// asi ya no se tiene que hacer un nuevo objeto .
// En otras palabras, la función puede modificar el objeto original y los cambios se 
// reflejarán fuera de la función.
void web(WiFiClient &client){
   for (int n=1; n<7; n++)
            {
            client.print(pagina1);
            client.print(n);
            client.print(pagina2);
            client.print(n);
            client.print(pagina3);
            client.print(n);
            client.print(pagina4);
            }
            client.print(pagina6);
  }
  