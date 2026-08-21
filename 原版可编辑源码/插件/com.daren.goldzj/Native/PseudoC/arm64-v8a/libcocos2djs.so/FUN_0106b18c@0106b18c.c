
/* WARNING: Removing unreachable block (ram,0x0106b1a4) */

undefined8 FUN_0106b18c(long param_1)

{
  char cVar1;
  bool bVar2;
  
  while( true ) {
    if (0x10100000000 < DAT_01d3f5f0) {
      return 0;
    }
    if (0x10100000000 - DAT_01d3f5f0 < **(ulong **)(param_1 + 8)) break;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1d3f5f0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_01d3f5f0 = DAT_01d3f5f0 + **(ulong **)(param_1 + 8);
    }
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

