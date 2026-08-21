
undefined4 android_getCpuCount(void)

{
  pthread_once((pthread_once_t *)&DAT_01d35bdc,FUN_008709e4);
  return DAT_01d35bf0;
}

