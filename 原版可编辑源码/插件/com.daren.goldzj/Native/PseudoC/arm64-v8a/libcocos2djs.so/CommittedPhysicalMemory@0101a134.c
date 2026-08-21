
/* v8::internal::SemiSpace::CommittedPhysicalMemory() */

long __thiscall v8::internal::SemiSpace::CommittedPhysicalMemory(SemiSpace *this)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if ((this[0x88] == (SemiSpace)0x0) || (plVar4 = *(long **)(this + 0x20), plVar4 == (long *)0x0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    uVar1 = base::OS::HasLazyCommits();
    while( true ) {
      plVar2 = plVar4;
      if (((uVar1 & 1) != 0) &&
         (((*(byte *)((long)plVar4 + 10) >> 5 & 1) != 0 || (*(int *)(plVar4[0xb] + 0x48) != 5)))) {
        plVar2 = plVar4 + 0x13;
      }
      plVar4 = (long *)plVar4[0x1c];
      lVar3 = *plVar2 + lVar3;
      if (plVar4 == (long *)0x0) break;
      uVar1 = base::OS::HasLazyCommits();
    }
  }
  return lVar3;
}

