
/* v8::internal::PagedSpace::UpdateInlineAllocationLimit(unsigned long) */

void __thiscall
v8::internal::PagedSpace::UpdateInlineAllocationLimit(PagedSpace *this,ulong param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar6;
  
  lVar11 = *(long *)(this + 0x68);
  if (*(char *)(*(long *)(this + 0x40) + 0x5e0) == '\0') {
    uVar9 = *(ulong *)(this + 0x70);
    uVar4 = (**(code **)(*(long *)this + 0x80))(this);
    uVar10 = uVar9;
    if (((uVar4 & 1) != 0) && (this[0x38] == (PagedSpace)0x0)) {
      if (*(long **)(this + 8) != *(long **)(this + 0x10)) {
        lVar7 = 0;
        plVar5 = *(long **)(this + 8);
        do {
          plVar6 = plVar5 + 1;
          lVar8 = *(long *)(*plVar5 + 0x10);
          lVar1 = lVar7;
          if (lVar8 <= lVar7) {
            lVar1 = lVar8;
          }
          bVar2 = lVar7 != 0;
          lVar7 = lVar8;
          if (bVar2) {
            lVar7 = lVar1;
          }
          plVar5 = plVar6;
        } while (*(long **)(this + 0x10) != plVar6);
        iVar3 = (**(code **)(*(long *)this + 0x68))(this,(int)lVar7 + -1);
        uVar10 = lVar11 + param_1 + (long)iVar3;
        if (uVar9 <= uVar10) {
          uVar10 = uVar9;
        }
      }
    }
  }
  else {
    uVar10 = lVar11 + param_1;
  }
  DecreaseLimit(this,uVar10);
  return;
}

