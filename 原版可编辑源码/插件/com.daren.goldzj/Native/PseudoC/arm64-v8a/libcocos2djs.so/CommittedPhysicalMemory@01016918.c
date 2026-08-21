
/* v8::internal::PagedSpace::CommittedPhysicalMemory() */

long __thiscall v8::internal::PagedSpace::CommittedPhysicalMemory(PagedSpace *this)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar3 = base::OS::HasLazyCommits();
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x010169e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (**(code **)(*(long *)this + 0x38))(this);
    return lVar4;
  }
  lVar4 = *(long *)(this + 0x68);
  if (lVar4 != 0) {
    uVar3 = lVar4 - 1U & 0xfffffffffffc0000;
    lVar4 = lVar4 - uVar3;
    plVar6 = (long *)(uVar3 | 0x98);
    do {
      while( true ) {
        if (lVar4 <= *plVar6) goto LAB_01016974;
        if (*plVar6 == *plVar6) break;
        ClearExclusiveLocal();
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
LAB_01016974:
  plVar6 = *(long **)(this + 0x20);
  if (plVar6 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    uVar3 = base::OS::HasLazyCommits();
    while( true ) {
      plVar5 = plVar6;
      if (((uVar3 & 1) != 0) &&
         (((*(byte *)((long)plVar6 + 10) >> 5 & 1) != 0 || (*(int *)(plVar6[0xb] + 0x48) != 5)))) {
        plVar5 = plVar6 + 0x13;
      }
      plVar6 = (long *)plVar6[0x1c];
      lVar4 = *plVar5 + lVar4;
      if (plVar6 == (long *)0x0) break;
      uVar3 = base::OS::HasLazyCommits();
    }
  }
  return lVar4;
}

