// AD7541 Demo
// Pinout 2....13  D0...D11 LSB...MSB
// 

void setup() 
{
for (uint8_t cnt = 2; cnt < 13; cnt++)   {    pinMode(cnt, OUTPUT);  }
pinMode(14, OUTPUT);
Serial.begin(9600);
}

// **********************************************

void loop() 
{
 uint16_t cnt;
 uint8_t dat0,dat1,dat2,dat3,dat4,dat5,dat6,dat7,dat8,dat9,dat10,dat11;
 
 for (uint16_t cnt = 0; cnt < 4095; cnt++)
 {
  
  dat0=((cnt&0x0001)>0) ? 1:0; digitalWrite(2, dat0);
  dat1=((cnt&0x0002)>0) ? 1:0; digitalWrite(3, dat1);
  dat2=((cnt&0x0004)>0) ? 1:0; digitalWrite(4, dat2);
  dat3=((cnt&0x0008)>0) ? 1:0; digitalWrite(5, dat3);
  dat4=((cnt&0x0010)>0) ? 1:0; digitalWrite(6, dat4);
  dat5=((cnt&0x0020)>0) ? 1:0; digitalWrite(7, dat5);
  dat6=((cnt&0x0040)>0) ? 1:0; digitalWrite(8, dat6);
  dat7=((cnt&0x0080)>0) ? 1:0; digitalWrite(9, dat7);
  dat8=((cnt&0x0100)>0) ? 1:0; digitalWrite(10, dat8);
  dat9=((cnt&0x0200)>0) ? 1:0; digitalWrite(11, dat9);
  dat10=((cnt&0x0400)>0) ? 1:0; digitalWrite(12, dat10);
  dat11=((cnt&0x0800)>0) ? 1:0; digitalWrite(13, dat11);

  Serial.print(dat11);Serial.print("-");
  Serial.print(dat10);Serial.print("-");
  Serial.print(dat9);Serial.print("-");
  Serial.print(dat8);Serial.print("-");
  Serial.print(dat7);Serial.print("-");
  Serial.print(dat6);Serial.print("-");
  Serial.print(dat5);Serial.print("-");
  Serial.print(dat4);Serial.print("-");
  Serial.print(dat3);Serial.print("-");
  Serial.print(dat2);Serial.print("-");
  Serial.print(dat1);Serial.print("-");
  Serial.print(dat0);Serial.print("-");
  
  Serial.println(cnt);

  //delay(1);
 
 }
 
} // end of loop()
