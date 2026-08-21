
/* v8::internal::compiler::ZoneStats::StatsScope::GetMaxAllocatedBytes() */

ulong __thiscall
v8::internal::compiler::ZoneStats::StatsScope::GetMaxAllocatedBytes(StatsScope *this)

{
  StatsScope *pSVar1;
  ulong *puVar2;
  ulong *puVar3;
  StatsScope *pSVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  StatsScope *pSVar8;
  StatsScope *pSVar9;
  
  puVar3 = (ulong *)**(long **)this;
  puVar2 = (ulong *)(*(long **)this)[1];
  if (puVar3 == puVar2) {
    uVar5 = 0;
  }
  else {
    pSVar4 = this + 0x10;
    uVar5 = 0;
    do {
      plVar6 = (long *)*puVar3;
      lVar7 = 0;
      if (plVar6[5] != 0) {
        lVar7 = (plVar6[2] - plVar6[5]) + -0x18;
      }
      uVar5 = lVar7 + uVar5 + *plVar6;
      pSVar8 = pSVar4;
      pSVar9 = *(StatsScope **)pSVar4;
      if (*(StatsScope **)pSVar4 != (StatsScope *)0x0) {
        do {
          if (*(long **)(pSVar9 + 0x20) >= plVar6) {
            pSVar8 = pSVar9;
          }
          pSVar1 = pSVar9 + (ulong)(*(long **)(pSVar9 + 0x20) < plVar6) * 8;
          pSVar9 = *(StatsScope **)pSVar1;
        } while (*(StatsScope **)pSVar1 != (StatsScope *)0x0);
        if ((pSVar8 != pSVar4) && (*(long **)(pSVar8 + 0x20) <= plVar6)) {
          uVar5 = uVar5 - *(long *)(pSVar8 + 0x28);
        }
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2);
  }
  if (uVar5 <= *(ulong *)(this + 0x28)) {
    uVar5 = *(ulong *)(this + 0x28);
  }
  return uVar5;
}

