#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);
int moisture = 0;

char numero_texto[5];
void setup()
  
{
lcd.begin (16,2);
pinMode(A3, INPUT);
Serial.begin(9600);
  
}

void loop()
{
  
  nivel();
  irrigar(nivel());
  delay(1000);
}

void lcd_texto(char texto[],int linha,int col){
  lcd.setBacklight(HIGH);
  lcd.setCursor(col,linha);
  lcd.print(texto);
  
}

int nivel(){
  moisture = analogRead(A3);
  moisture = moisture/8.76;
  Serial.println(moisture);
  
  //Serial.println(analogRead(A3));
  moisture = moisture-(moisture%5);
  char *valor = dtostrf(moisture,0,0,numero_texto);
  
  lcd_texto("Nivel Umidade:",0,0);
  lcd_texto(valor,1,0);
  if(moisture<10){
    lcd_texto("% ",1,1);
  }
  else if(moisture ==100){
    lcd_texto("%",1,3);}
  else{
  lcd_texto("%",1,2);}
  return moisture;
}

void irrigar(int nivel){
  if (nivel <=50){
    lcd_texto("Irrigando",1,7);
  }
  else{
    lcd_texto("         ",1,7);
     }
}
