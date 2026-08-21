
/* v8::internal::Heap::AllocateRawWithRetryOrFailSlowPath(int, v8::internal::AllocationType,
   v8::internal::AllocationOrigin, v8::internal::AllocationAlignment) */

void __thiscall
v8::internal::Heap::AllocateRawWithRetryOrFailSlowPath
          (Heap *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  Heap *pHVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  
  iVar4 = AllocateRawWithLightRetrySlowPath();
  if (iVar4 == 0) {
    lVar7 = *(long *)(this + 0xcd0);
    if (*(char *)(lVar7 + 0x1b38) == '\0') {
      *(char *)(lVar7 + 0x1b38) = '\x01';
      piVar5 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar7 + 0x1b20));
      *(int **)(lVar7 + 0x1b30) = piVar5;
    }
    else {
      piVar5 = *(int **)(lVar7 + 0x1b30);
    }
    if (piVar5 != (int *)0x0) {
      *piVar5 = *piVar5 + 1;
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
    uVar6 = AllocateRaw(this,param_1,param_3,param_4,param_5);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pHVar1,0x10);
      if (bVar3) {
        *(long *)pHVar1 = *(long *)pHVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory(this,"CALL_AND_RETRY_LAST");
    }
  }
  return;
}

