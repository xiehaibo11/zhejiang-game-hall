
undefined * FUN_0011e5f0(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = DAT_00172e80;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x172e80,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00172e80 = DAT_00172e80 + (param_1 + 0xfU & 0xfffffffffffffff0);
    }
  } while (cVar1 != '\0');
  return &DAT_00172e90 + lVar3;
}

