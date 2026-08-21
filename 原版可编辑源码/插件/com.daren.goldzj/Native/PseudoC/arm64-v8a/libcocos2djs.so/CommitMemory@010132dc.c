
/* v8::internal::MemoryAllocator::CommitMemory(v8::internal::VirtualMemory*) */

undefined8 __thiscall
v8::internal::MemoryAllocator::CommitMemory(MemoryAllocator *this,VirtualMemory *param_1)

{
  MemoryAllocator *pMVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar2 = *(ulong *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar6 = VirtualMemory::SetPermissions(param_1,uVar2,lVar3,2);
  if ((uVar6 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    pMVar1 = this + 0x60;
    do {
      while( true ) {
        if (*(ulong *)pMVar1 <= uVar2) goto LAB_0101333c;
        if (*(ulong *)pMVar1 == *(ulong *)pMVar1) break;
        ClearExclusiveLocal();
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
      if (bVar5) {
        *(ulong *)pMVar1 = uVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_0101333c:
    pMVar1 = this + 0x68;
    do {
      while( true ) {
        if (lVar3 + uVar2 <= *(ulong *)pMVar1) goto LAB_01013368;
        if (*(ulong *)pMVar1 == *(ulong *)pMVar1) break;
        ClearExclusiveLocal();
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
      if (bVar5) {
        *(ulong *)pMVar1 = lVar3 + uVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01013368:
    lVar9 = *(long *)(*(long *)this + 0x9520);
    if (*(char *)(lVar9 + 0x1798) == '\0') {
      *(char *)(lVar9 + 0x1798) = '\x01';
      piVar7 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar9 + 0x1780));
      *(int **)(lVar9 + 0x1790) = piVar7;
    }
    else {
      piVar7 = *(int **)(lVar9 + 0x1790);
    }
    if (piVar7 != (int *)0x0) {
      *piVar7 = *piVar7 + (int)lVar3;
    }
    uVar8 = 1;
  }
  return uVar8;
}

