
/* v8::debug::Coverage::GetScriptData(unsigned long) const */

void v8::debug::Coverage::GetScriptData(ulong param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong in_x1;
  long *in_x8;
  
  plVar2 = *(long **)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (in_x1 < (ulong)(plVar2[1] - *plVar2 >> 5)) {
    *in_x8 = *plVar2 + in_x1 * 0x20;
    in_x8[1] = (long)plVar2;
    in_x8[2] = lVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

