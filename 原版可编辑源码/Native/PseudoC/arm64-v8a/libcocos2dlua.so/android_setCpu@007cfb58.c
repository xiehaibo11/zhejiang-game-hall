
undefined4 android_setCpu(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if ((DAT_01781d0c & 1) == 0) {
    uVar1 = 1;
    DAT_01781cfc = 1;
    if (param_1 < 2) {
      param_1 = 1;
    }
    DAT_01781d00 = param_2;
    DAT_01781d08 = param_1;
    pthread_once((pthread_once_t *)&DAT_01781cf8,FUN_007cfbc0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

