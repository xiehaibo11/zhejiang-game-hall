
undefined4 android_getCpuFamily(void)

{
  undefined4 uVar1;
  
  pthread_once((pthread_once_t *)&DAT_01d35bdc,FUN_008709e4);
  uVar1 = 4;
  if (DAT_01d35be0 == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}

