//High Temp Oven Class Demo
#include "max6675.h"

#define PIN_INPUT 0
#define RELAY_PIN 12
#define thermoDO 4
#define thermoCS 5
#define thermoCLK 6

//Define Variables we'll be connecting to
int Setpoint;
int TEMP;
int gap;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  //Turn the relay off by default
  digitalWrite(RELAY_PIN, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  Setpoint = 70;
  gap = 5;
  Serial.begin(115200);
  Serial.println("Oven Init");
  // wait for MAX chip to stabilize
  delay(1500);
  Serial.println("Running Program: HDPE");
  Serial.print("Setpoint = ");
  Serial.println(Setpoint);
  Serial.print("Current Temp = "); 
  Serial.print(thermocouple.readCelsius());
  Serial.println(" C");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // basic readout test, just print the current temp
   TEMP = thermocouple.readCelsius();
   if (TEMP < Setpoint) { 
  digitalWrite(RELAY_PIN, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print("Setpoint = ");
  Serial.print(Setpoint);
  Serial.print(" C Current Temp = "); 
  Serial.print(thermocouple.readCelsius());
  Serial.println(" C");
  Serial.println("Relay output on");
   } else {
  digitalWrite(RELAY_PIN, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.print("Setpoint = ");
  Serial.println(Setpoint);
  Serial.print("Current Temp = "); 
  Serial.print(thermocouple.readCelsius());
  Serial.println(" C");
    Serial.println("Relay output off");
   }
  delay(10000);
}
