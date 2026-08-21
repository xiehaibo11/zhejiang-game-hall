
/* v8::internal::PrototypeIterator::Advance() */

void __thiscall v8::internal::PrototypeIterator::Advance(PrototypeIterator *this)

{
  PrototypeIterator *pPVar1;
  uint uVar2;
  PrototypeIterator PVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  PrototypeIterator *pPVar6;
  ulong uVar7;
  ulong uVar8;
  
  pPVar6 = *(PrototypeIterator **)(this + 0x10);
  if (pPVar6 == (PrototypeIterator *)0x0) {
    uVar7 = *(ulong *)(this + 8);
    if (((uVar7 & 1) != 0) &&
       (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xa9)) {
      this[0x1c] = (PrototypeIterator)0x1;
      *(undefined8 *)(this + 8) = *(undefined8 *)(*(long *)this + 0xb0);
      return;
    }
  }
  else if (*(short *)((*(ulong *)pPVar6 & 0xffffffff00000000 | 7) +
                     (ulong)*(uint *)(*(ulong *)pPVar6 - 1)) == 0xa9) {
    this[0x1c] = (PrototypeIterator)0x1;
    puVar5 = (ulong *)(*(long *)this + 0xb0);
    goto LAB_00eb8510;
  }
  pPVar1 = this + 8;
  if (pPVar6 != (PrototypeIterator *)0x0) {
    pPVar1 = pPVar6;
  }
  pIVar4 = *(Isolate **)this;
  uVar7 = *(ulong *)pPVar1 & 0xffffffff00000000;
  uVar8 = uVar7 | *(uint *)(*(ulong *)pPVar1 - 1);
  uVar2 = *(uint *)(uVar8 + 0xf);
  if (uVar2 == *(uint *)(pIVar4 + 0xb0)) {
    PVar3 = (PrototypeIterator)0x1;
  }
  else if (*(int *)(this + 0x18) == 1) {
    PVar3 = (PrototypeIterator)(*(short *)(uVar8 + 7) != 0xab);
  }
  else {
    PVar3 = (PrototypeIterator)0x0;
  }
  uVar7 = uVar7 | uVar2;
  this[0x1c] = PVar3;
  if (pPVar6 == (PrototypeIterator *)0x0) {
    *(ulong *)(this + 8) = uVar7;
    return;
  }
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
  }
LAB_00eb8510:
  *(ulong **)(this + 0x10) = puVar5;
  return;
}

