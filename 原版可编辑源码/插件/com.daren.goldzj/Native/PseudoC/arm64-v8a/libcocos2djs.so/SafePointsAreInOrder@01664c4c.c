
/* v8::internal::compiler::ReferenceMapPopulator::SafePointsAreInOrder() const */

undefined8 __thiscall
v8::internal::compiler::ReferenceMapPopulator::SafePointsAreInOrder(ReferenceMapPopulator *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  
  lVar4 = *(long *)(*(long *)this + 0x10);
  lVar7 = *(long *)(lVar4 + 0xe0);
  if (*(long *)(lVar4 + 0xe8) != lVar7) {
    uVar3 = *(ulong *)(lVar4 + 0x108);
    uVar1 = *(long *)(lVar4 + 0x110) + uVar3;
    plVar5 = (long *)(lVar7 + (uVar3 >> 6 & 0x3fffffffffffff8));
    plVar6 = (long *)(*plVar5 + (uVar3 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)(lVar7 + (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
    if (plVar2 != plVar6) {
      iVar8 = 0;
      do {
        lVar7 = *plVar6;
        if (*(int *)(lVar7 + 0x20) < iVar8) {
          return 0;
        }
        plVar6 = plVar6 + 1;
        if ((long)plVar6 - *plVar5 == 0x1000) {
          plVar5 = plVar5 + 1;
          plVar6 = (long *)*plVar5;
        }
        iVar8 = *(int *)(lVar7 + 0x20);
      } while (plVar2 != plVar6);
    }
  }
  return 1;
}

