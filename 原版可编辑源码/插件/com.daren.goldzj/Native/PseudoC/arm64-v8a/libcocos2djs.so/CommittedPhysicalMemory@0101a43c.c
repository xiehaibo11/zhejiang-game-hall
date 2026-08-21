
/* v8::internal::NewSpace::CommittedPhysicalMemory() */

long __thiscall v8::internal::NewSpace::CommittedPhysicalMemory(NewSpace *this)

{
  NewSpace NVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  uVar4 = base::OS::HasLazyCommits();
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0101a514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (**(code **)(*(long *)this + 0x38))(this);
    return lVar5;
  }
  lVar5 = *(long *)(this + 0x68);
  if (lVar5 != 0) {
    uVar4 = lVar5 - 1U & 0xfffffffffffc0000;
    lVar5 = lVar5 - uVar4;
    plVar7 = (long *)(uVar4 | 0x98);
    do {
      while( true ) {
        if (lVar5 <= *plVar7) goto LAB_0101a49c;
        if (*plVar7 == *plVar7) break;
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
LAB_0101a49c:
  if (this[0x158] == (NewSpace)0x0) {
    lVar5 = 0;
  }
  else {
    plVar7 = *(long **)(this + 0xf0);
    if (plVar7 == (long *)0x0) {
      lVar5 = 0;
      NVar1 = this[0x1f8];
      goto joined_r0x0101a520;
    }
    lVar5 = 0;
    uVar4 = base::OS::HasLazyCommits();
    while( true ) {
      plVar6 = plVar7;
      if (((uVar4 & 1) != 0) &&
         (((*(byte *)((long)plVar7 + 10) >> 5 & 1) != 0 || (*(int *)(plVar7[0xb] + 0x48) != 5)))) {
        plVar6 = plVar7 + 0x13;
      }
      plVar7 = (long *)plVar7[0x1c];
      lVar5 = *plVar6 + lVar5;
      if (plVar7 == (long *)0x0) break;
      uVar4 = base::OS::HasLazyCommits();
    }
  }
  NVar1 = this[0x1f8];
joined_r0x0101a520:
  if (NVar1 != (NewSpace)0x0) {
    plVar7 = *(long **)(this + 400);
    if (plVar7 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      uVar4 = base::OS::HasLazyCommits();
      while( true ) {
        plVar6 = plVar7;
        if (((uVar4 & 1) != 0) &&
           (((*(byte *)((long)plVar7 + 10) >> 5 & 1) != 0 || (*(int *)(plVar7[0xb] + 0x48) != 5))))
        {
          plVar6 = plVar7 + 0x13;
        }
        plVar7 = (long *)plVar7[0x1c];
        lVar8 = *plVar6 + lVar8;
        if (plVar7 == (long *)0x0) break;
        uVar4 = base::OS::HasLazyCommits();
      }
    }
    lVar5 = lVar8 + lVar5;
  }
  return lVar5;
}

