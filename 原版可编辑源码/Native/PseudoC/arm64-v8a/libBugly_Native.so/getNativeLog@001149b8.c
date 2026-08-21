
undefined8 getNativeLog(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (DAT_00140350 == (uint *)0x0) {
    pcVar5 = "Native log has not been initiated.";
    uVar4 = 4;
  }
  else {
    if (param_1 == 0) {
      return 0;
    }
    if (*DAT_00140350 <= param_2) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_00140358);
      uVar1 = DAT_00140350[4];
      iVar2 = locateCircularQueue(DAT_00140350,&DAT_001281ab,3);
      uVar3 = readCircularQueue(DAT_00140350,param_1,iVar2 + 3,uVar1);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00140358);
      log2Console(3,"eup","Length of native log: %d byte.",uVar3);
      return 1;
    }
    pcVar5 = "Buffer is not enough to save whole native log.";
    uVar4 = 6;
  }
  log2Console(uVar4,"eup",pcVar5);
  return 0;
}

