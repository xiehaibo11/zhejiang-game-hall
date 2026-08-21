
undefined8 appendWholeNativeLog(char *param_1)

{
  size_t sVar1;
  
  if (param_1 != (char *)0x0) {
    if (DAT_0013f328 == 0) {
      FUN_00110bfc();
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013f300);
    sVar1 = strlen(param_1);
    insertCircularQueue(DAT_0013f328,param_1,sVar1);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013f300);
    return 1;
  }
  return 0;
}

