
/* universe::Device::getTime() */

void universe::Device::getTime(void)

{
  undefined1 auVar1 [16];
  
  clock();
  auVar1 = __floatditf();
  auVar1 = __multf3(auVar1,0);
  __divtf3(auVar1,0);
  return;
}

