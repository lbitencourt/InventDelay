# InventDelay


Construindo o imagem
docker build -t arduino-esp8266 .


Executando o container
docker run -it --rm -v $(pwd):/root/Arduino/libraries/InventDelay -v $(pwd)/examples/Ex01:/Ex01 arduino-esp8266 

Compilar
arduino-cli compile --fqbn esp8266:esp8266:nodemcuv2 .
