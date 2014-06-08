
void setup()
{
  initKeyboard();
}

//【ループ処理】
void loop()
{
  //homo();
  tweet4Mac();
  //test();
  while(1)
    delay(1000);
}

void homo(){
  putAsciiKey('h');
  putAsciiKey('o');
  putAsciiKey('m');
  putAsciiKey('o');
  enter();
  enter();
}

void wakeUpYorufukurou(){
  eng();
  ctrlSpace();
  putAsciiKey('y');
  putAsciiKey('o');
  putAsciiKey('r');
  delay(500);
  enter();
  delay(900);

  winKey('n');
}

void tweet4Mac(){
  wakeUpYorufukurou();
  kana();
  putAsciiKey('u');
  putAsciiKey('n');
  putAsciiKey('k');
  putAsciiKey('o');
  enter();
  enter();
}




