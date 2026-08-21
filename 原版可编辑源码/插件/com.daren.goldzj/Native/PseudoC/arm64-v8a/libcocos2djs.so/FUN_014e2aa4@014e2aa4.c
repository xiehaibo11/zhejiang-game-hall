
ulong FUN_014e2aa4(ulong *param_1,uint param_2,long param_3,uint param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  do {
    uVar3 = *param_1;
    if (uVar3 != ((ulong)param_2 | param_3 << 0x20)) {
      ClearExclusiveLocal();
      return uVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = (ulong)param_4 | param_5 << 0x20;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return uVar3;
}

