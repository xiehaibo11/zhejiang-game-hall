
undefined8 getNativeLog(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (DAT_0013f328 == (uint *)0x0) {
    log2Console(4,"CrashReport-Native","Native log has not been initiated.");
    uVar4 = 0;
  }
  else if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_2 < *DAT_0013f328) {
      log2Console(6,"CrashReport-Native","Buffer is not enough to save whole native log.");
      return 0;
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013f300);
    uVar1 = DAT_0013f328[4];
    iVar2 = locateCircularQueue(DAT_0013f328,&DAT_001260e0,3);
    uVar3 = readCircularQueue(DAT_0013f328,param_1,iVar2 + 3,uVar1);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013f300);
    log2Console(3,"CrashReport-Native","Length of native log: %d byte.",uVar3);
    uVar4 = 1;
  }
  return uVar4;
}

