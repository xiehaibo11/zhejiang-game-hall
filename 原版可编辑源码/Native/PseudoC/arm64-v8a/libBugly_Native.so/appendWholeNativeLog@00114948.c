
undefined8 appendWholeNativeLog(char *param_1)

{
  long lVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1 != (char *)0x0) {
    if (DAT_00140350 == 0) {
      FUN_00114b04();
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00140358);
    lVar1 = DAT_00140350;
    sVar2 = strlen(param_1);
    insertCircularQueue(lVar1,param_1,sVar2);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00140358);
    uVar3 = 1;
  }
  return uVar3;
}

