
undefined4 android_getCpuFamily(void)

{
  undefined4 uVar1;
  
  pthread_once((pthread_once_t *)&DAT_01781cf8,FUN_007cf8d8);
  uVar1 = 4;
  if (DAT_01781cfc == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}

