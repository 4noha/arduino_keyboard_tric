#ifdef __TRANSMITCODE__
#include <SoftwareSerial.h>
#endif __TRANSMITCODE__

#define KEY_DELAY 50
//Grobal value
uint8_t buf[8] = { 0 };     /* Keyboard report buffer 8Byte */

void initKeyboard(){
  Serial.begin(9600);
  delay(200);
}

//【キーを放す】
void releasekey()
{
  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0;          //[2] clear
  buf[3] = 0;          //[3] clear
  buf[4] = 0;          //[4] clear
  buf[5] = 0;          //[5] clear
  buf[6] = 0;          //[6] clear
  buf[7] = 0;          //[7] clear

  Serial.write(buf,8);
}

void putAsciiKey(char key){
  buf[0] = 0;
  buf[1] = 0;
  buf[2] = key-93;     //[2] clear
  buf[3] = 0;          //[3] clear
  buf[4] = 0;          //[4] clear
  buf[5] = 0;          //[5] clear
  buf[6] = 0;          //[6] clear
  buf[7] = 0;          //[7] clear

  Serial.write(buf,8);
  delay(KEY_DELAY);
  releasekey();
  delay(KEY_DELAY);
}

void windows(){
  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0xe3;
  buf[3] = 0;
  buf[4] = 0;
  buf[5] = 0;
  buf[6] = 0;
  buf[7] = 0;

  Serial.write(buf,8);
  delay(KEY_DELAY);
  releasekey();
  delay(KEY_DELAY);
}

void space(){
  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0x2c;       //[2] clear
  buf[3] = 0;          //[3] clear
  buf[4] = 0;          //[4] clear
  buf[5] = 0;          //[5] clear
  buf[6] = 0;          //[6] clear
  buf[7] = 0;          //[7] clear

  Serial.write(buf,8);
  delay(KEY_DELAY);
  releasekey();
  delay(KEY_DELAY);
}

void ctrlEnter(){
  buf[0] = 0x01;       //[0] clear
  buf[1] = 0;
  buf[2] = 0x28;       //[2] clear
  buf[3] = 0;          //[3] clear
  buf[4] = 0;          //[4] clear
  buf[5] = 0;          //[5] clear
  buf[6] = 0;          //[6] clear
  buf[7] = 0;          //[7] clear

  Serial.write(buf,8);
  delay(KEY_DELAY);
  releasekey();
  delay(KEY_DELAY);
}
void ctrlSpace(){

  buf[0] = 0x01;       //[0] clear
  buf[1] = 0;
  buf[2] = 0x2c;       //[2] clear
  buf[3] = 0;          //[3] clear
  buf[4] = 0;          //[4] clear
  buf[5] = 0;          //[5] clear
  buf[6] = 0;          //[6] clear
  buf[7] = 0;          //[7] clear

  Serial.write(buf,8);
  delay(KEY_DELAY);
  releasekey();
  delay(KEY_DELAY);
}

void winKey(char key){
  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0xe3;       //[2] clear
  buf[3] = 0;          //[3] clear
  buf[4] = 0;          //[4] clear
  buf[5] = 0;          //[5] clear
  buf[6] = 0;          //[6] clear
  buf[7] = 0;          //[7] clear
  Serial.write(buf,8);
  delay(KEY_DELAY);

  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0xe3;       //[2] clear
  buf[3] = key-93;     //[3] clear
  buf[4] = 0;          //[4] clear
  buf[5] = 0;          //[5] clear
  buf[6] = 0;          //[6] clear
  buf[7] = 0;          //[7] clear
  Serial.write(buf,8);
  delay(KEY_DELAY);
  releasekey();
  delay(KEY_DELAY);
}
void kana(){

  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0x90;       //[2] clear
  buf[3] = 0;          //[3] clear
  buf[4] = 0;          //[4] clear
  buf[5] = 0;          //[5] clear
  buf[6] = 0;          //[6] clear
  buf[7] = 0;          //[7] clear

  Serial.write(buf,8);
  delay(KEY_DELAY);
  releasekey();
  delay(KEY_DELAY);
}

void eng(){

  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0x91;       //[2] clear
  buf[3] = 0;          //[3] clear
  buf[4] = 0;          //[4] clear
  buf[5] = 0;          //[5] clear
  buf[6] = 0;          //[6] clear
  buf[7] = 0;          //[7] clear

  Serial.write(buf,8);
  delay(KEY_DELAY);
  releasekey();
  delay(KEY_DELAY);
}

//【enter】
void enter(){
  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0x28;       //[2] clear
  buf[3] = 0;          //[3] clear
  buf[4] = 0;          //[4] clear
  buf[5] = 0;          //[5] clear
  buf[6] = 0;          //[6] clear
  buf[7] = 0;          //[7] clear

  Serial.write(buf,8);
  delay(KEY_DELAY);
  releasekey();
  delay(KEY_DELAY);
}
