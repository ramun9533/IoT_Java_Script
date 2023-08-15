//Toma un parámetro de tipo referencia a "WiFiClient", es decir "WiFiClient &client".
// El "&" en "WiFiClient" & indica que "client" es una referencia al objeto "WiFiClient". 
// asi ya no se tiene que hacer un nuevo objeto .
// En otras palabras, la función puede modificar el objeto original y los cambios se 
// reflejarán fuera de la función.
void web(WiFiClient &cliente){
            cliente.println("HTTP/1.1 200 OK");
            cliente.println("Content-type:text/html");
            cliente.println();
            cliente.print(pagina);
   for (int n=1; n<7; n++)
            {
            cliente.print(pagina1);
            cliente.print(n);
            cliente.print(pagina2);
            cliente.print(n);
            cliente.print(pagina3);
            cliente.print(n);
            cliente.print(pagina4);
            }
            cliente.print(pagina5);
   for (int i=1; i<7; i++){
            //cliente.print(i);
            cliente.print(pagina6);
            cliente.print(i);
            cliente.print(pagina7);
            cliente.print(i);
            cliente.print(pagina8);
            cliente.print(i);
            cliente.print(pagina9);
            cliente.print(i);
            cliente.print(pagina10);
            }
            cliente.print(pagina11);
  }
  
