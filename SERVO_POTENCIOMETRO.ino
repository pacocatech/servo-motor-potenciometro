/**
   Criado por Paçoca Tech

   Youtube: https://www.youtube.com/channel/UCW6OP5j28zFsnKxpQ2v9CsA
   Instagram: http://instagram.com/pacocatech
   Github: http://github.com/pacocatech
   E-mail: pacocatech@gmail.com


   Manipulando SERVO motor com potenciometro.
*/

#include <Servo.h>

#define pinoMotor 4
#define pinoPotenciometro A2

//objeto para controlar o motor
Servo motor;

void setup() {
  //iniciando o monitor serial
  Serial.begin(9600);

  //iniciando o objeto que irá controlar o motor
  motor.attach(pinoMotor);

}

void loop() {
  //vamos efetuar a leitura do potenciometro
  int angulo = analogRead(pinoPotenciometro); 

  //vamos fazer a conversão do valor para faixa de angulo que o servo suporta
  angulo = map(angulo, 0, 1023, 0, 179); 

  //vamos verificar o angulo obtido
  Serial.print("Angulo obtido");
  Serial.println(angulo);

  //enviamos a posição para o servo motor
  motor.write(angulo); 
  
  delay(5);
}
