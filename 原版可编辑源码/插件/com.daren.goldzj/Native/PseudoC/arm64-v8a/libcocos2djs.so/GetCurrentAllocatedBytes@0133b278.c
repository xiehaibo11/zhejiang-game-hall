
/* v8::internal::compiler::ZoneStats::StatsScope::GetCurrentAllocatedBytes() */

long __thiscall
v8::internal::compiler::ZoneStats::StatsScope::GetCurrentAllocatedBytes(StatsScope *this)

{
  StatsScope *pSVar1;
  ulong *puVar2;
  StatsScope *pSVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  StatsScope *pSVar8;
  StatsScope *pSVar9;
  
  puVar5 = (ulong *)**(long **)this;
  puVar2 = (ulong *)(*(long **)this)[1];
  if (puVar5 == puVar2) {
    lVar4 = 0;
  }
  else {
    pSVar3 = this + 0x10;
    lVar4 = 0;
    do {
      plVar6 = (long *)*puVar5;
      lVar7 = 0;
      if (plVar6[5] != 0) {
        lVar7 = (plVar6[2] - plVar6[5]) + -0x18;
      }
      lVar4 = lVar7 + lVar4 + *plVar6;
      pSVar8 = pSVar3;
      pSVar9 = *(StatsScope **)pSVar3;
      if (*(StatsScope **)pSVar3 != (StatsScope *)0x0) {
        do {
          if (*(long **)(pSVar9 + 0x20) >= plVar6) {
            pSVar8 = pSVar9;
          }
          pSVar1 = pSVar9 + (ulong)(*(long **)(pSVar9 + 0x20) < plVar6) * 8;
          pSVar9 = *(StatsScope **)pSVar1;
        } while (*(StatsScope **)pSVar1 != (StatsScope *)0x0);
        if ((pSVar8 != pSVar3) && (*(long **)(pSVar8 + 0x20) <= plVar6)) {
          lVar4 = lVar4 - *(long *)(pSVar8 + 0x28);
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
  }
  return lVar4;
}

