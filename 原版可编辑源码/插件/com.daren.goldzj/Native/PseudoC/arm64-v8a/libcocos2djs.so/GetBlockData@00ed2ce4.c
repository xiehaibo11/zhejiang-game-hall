
/* v8::debug::Coverage::FunctionData::GetBlockData(unsigned long) const */

void v8::debug::Coverage::FunctionData::GetBlockData(ulong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong in_x1;
  long *in_x8;
  ulong uVar7;
  
  lVar2 = *(long *)(*(long *)param_1 + 0x18);
  uVar7 = (*(long *)(*(long *)param_1 + 0x20) - lVar2 >> 2) * -0x5555555555555555;
  if (in_x1 <= uVar7 && uVar7 - in_x1 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *in_x8 = lVar2 + in_x1 * 0xc;
    in_x8[1] = lVar3;
    in_x8[2] = lVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

