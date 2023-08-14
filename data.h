

const char* ssid_1     = "zatiel33";
const char* password_1 = "zatiel8661233918";
const char* ssid_2     = "Subcribanse";
const char* password_2 = "alswnet";

const String Pagina =  R"====(
<!DOCTYPE html>
<html lang="es">
 <head>
    <meta charset="utf-8">
    <title>Identificador</title>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <style>
       body {
            background-image: linear-gradient(to top,#5a07f0, #d17bff);
            margin: 1%;
            padding: 9.5%;
            font-family: Impact, Haettenschweiler, 'Arial Narrow Bold', sans-serif;
            
            
        }
        input {
            color: white;
            font-weight: bold;
            margin-bottom: 20%;
        }
        p {
            color: black;
            font-weight: bold;
        }

        h1 {
            text-align: center;
            font-size: 24px;
            color: white;
            padding: 20px 0;
        }
        
        .container {
            color: white;
            width: 80%;
            height: inherit;
            display: flex;
            flex-wrap: wrap;
            justify-content: center;
            align-items: center;
            padding: 0%;
            margin: 12%;
            background-color: white;
            position: relative;
            border: 2px solid;
            border-radius: 20px;
            box-shadow: rgb(150,150,150) 5px 5px 20px;
        }

        .box {
            padding-left: 10px;
            text-align: center;
        }

        .box input {
                background-image: linear-gradient(to top,#186a3b,  #2ecc71);
                display: block;
                text-decoration: none;
                color: white;
                padding: 10px;
                border-radius: 15px;
                transition: background-color 0.3s;
                
        }

        .box input:hover {
            background-color: #e3bf0e;
        }

        .box input:active{
            background-color: red;
        }

        @media (min-width: 768px) {
            .container {
                max-width: 600px;
            }
        }

        @media (min-width: 992px) {
            .container {
                max-width: 800px;
            }
        }

        @media (min-width: 1200px) {
            .container {
                max-width: 1000px;
            }
        }

    </style>
</head>
  <body>
  <title>ESP con JavaScript</title>
  <h1>Botones</h1>
  <div class="container">
    <div class="box">
    <input id=botonEncender type=button value=Encendido onclick=botonEncender()> 
    <input id=botonApagar type=button value=Apagado onclick=botonApagar()>
    </div>
  </div>
  <script>function botonEncender(){
        console.log("Encender LED");
        consultarGET("encender");
    }

    function botonApagar(){
        console.log("Apagar LED");
        consultarGET("apagar");
    }

    function consultarGET(consulta){
        const Http = new XMLHttpRequest();
        Http.open("GET", consulta);
        Http.send();

        Http.onreadystatechange = (e) => {
            console.log(Http.status);
            console.log(Http.response);
        }
    }

    const elementoApagar = document.getElementById("botonApagar");
    elementoApagar.addEventListener("click", botonApagar)</script>
</body>  </html>)====";
const String pagina6 =  R"====( </div> <script>
function botonEncender(){
        console.log("Encender LED");
        consultarGET("encender
        const String pagina7 =  R"====(");
    })====";
const String pagina8 =  R"====(
    function botonApagar(){
        console.log("Apagar LED");
        consultarGET("apagar)====";
        const String pagina9 =  R"====(");
    })====";
const String pagina10 =  R"====(
    function consultarGET(consulta){
        const Http = new XMLHttpRequest();
        console.log(`Consulta ${consulta}`);
        Http.open("GET", consulta);
        Http.send();

        Http.onreadystatechange = (e) => {
            console.log(Http.status);
            console.log(Http.response);
        }
    }</script>)====";


 const String pagina1 =  R"====(<div class="box">
        <p>SALIDA )====";
     const String pagina2  = R"====(</p>
        <input id=botonEncender)====";
     const String pagina3  = R"====( type=button value=Encendido onclick=botonEncender()>
        <input id=botonApagar)====";
     const String pagina4  = R"====(type=button value=Apagado onclick=botonAapagar()>
    </div>)====";  
  const String pagina5 =  R"====(  </div>    </body>  </html>
     )====";
