
/* v8::internal::Heap::AllocateRawCodeInLargeObjectSpace(int) */

void __thiscall v8::internal::Heap::AllocateRawCodeInLargeObjectSpace(Heap *this,int param_1)

{
  Heap *pHVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  uVar4 = CodeLargeObjectSpace::AllocateRaw(*(CodeLargeObjectSpace **)(this + 0x110),param_1);
  if ((uVar4 & 1) == 0) {
    CollectGarbage(this,(int)uVar4 >> 1,1,0);
    uVar4 = CodeLargeObjectSpace::AllocateRaw(*(CodeLargeObjectSpace **)(this + 0x110),param_1);
    if ((uVar4 & 1) == 0) {
      CollectGarbage(this,(int)uVar4 >> 1,1,0);
      uVar5 = CodeLargeObjectSpace::AllocateRaw(*(CodeLargeObjectSpace **)(this + 0x110),param_1);
      if ((uVar5 & 1) == 0) {
        lVar7 = *(long *)(this + 0xcd0);
        if (*(char *)(lVar7 + 0x1b38) == '\0') {
          *(char *)(lVar7 + 0x1b38) = '\x01';
          piVar6 = (int *)StatsCounterBase::FindLocationInStatsTable
                                    ((StatsCounterBase *)(lVar7 + 0x1b20));
          *(int **)(lVar7 + 0x1b30) = piVar6;
        }
        else {
          piVar6 = *(int **)(lVar7 + 0x1b30);
        }
        if (piVar6 != (int *)0x0) {
          *piVar6 = *piVar6 + 1;
        }
        CollectAllAvailableGarbage(this,0xd);
        pHVar1 = this + 0xb8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pHVar1,0x10);
          if (bVar3) {
            *(long *)pHVar1 = *(long *)pHVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = CodeLargeObjectSpace::AllocateRaw(*(CodeLargeObjectSpace **)(this + 0x110),param_1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pHVar1,0x10);
          if (bVar3) {
            *(long *)pHVar1 = *(long *)pHVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FatalProcessOutOfMemory(this,"CALL_AND_RETRY_LAST");
        }
      }
    }
  }
  return;
}

