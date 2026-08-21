
undefined4 android_setCpu(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if ((DAT_01d35bf4 & 1) == 0) {
    uVar1 = 1;
    DAT_01d35be0 = 1;
    if (param_1 < 2) {
      param_1 = 1;
    }
    DAT_01d35be8 = param_2;
    DAT_01d35bf0 = param_1;
    pthread_once((pthread_once_t *)&DAT_01d35bdc,FUN_00870d44);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

