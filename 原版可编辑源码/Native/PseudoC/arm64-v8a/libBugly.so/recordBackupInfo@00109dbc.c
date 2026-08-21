
void recordBackupInfo(undefined4 *param_1,long param_2)

{
  long lVar1;
  
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (DAT_0013ed80 != 0)) {
    log2File(DAT_0013ed80,"Bugly NDK version:%s\n","3.9.2");
    log2File(DAT_0013ed80,"HandleSignal start %d\n",*param_1);
    recordRegisterInfo2File(param_2,DAT_0013ed80,0xffffffff);
    lVar1 = initCurrentXMapInfoList(1);
    if (lVar1 != 0) {
      recordMapInfo2File(lVar1,0,DAT_0013ed80);
      freeMapInfoList(lVar1);
      return;
    }
  }
  return;
}

