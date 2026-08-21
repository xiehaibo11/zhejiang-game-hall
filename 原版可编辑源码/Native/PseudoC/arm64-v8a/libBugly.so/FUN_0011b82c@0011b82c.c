
long FUN_0011b82c(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = DAT_00171e28;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x171e28,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00171e28 = DAT_00171e28 + (param_1 + 0xfU & 0xfffffffffffffff0);
    }
  } while (cVar1 != '\0');
  return lVar3 + 0x171e30;
}

