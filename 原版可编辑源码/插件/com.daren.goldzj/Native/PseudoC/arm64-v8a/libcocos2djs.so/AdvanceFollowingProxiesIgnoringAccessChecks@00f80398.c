
/* v8::internal::PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks() */

undefined8 __thiscall
v8::internal::PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
          (PrototypeIterator *this)

{
  PrototypeIterator *pPVar1;
  int iVar2;
  uint uVar3;
  PrototypeIterator PVar4;
  PrototypeIterator *pPVar5;
  undefined8 uVar6;
  ulong *puVar7;
  int *piVar8;
  Isolate *pIVar9;
  ulong uVar10;
  ulong uVar11;
  
  pPVar5 = *(PrototypeIterator **)(this + 0x10);
  if ((pPVar5 == (PrototypeIterator *)0x0) ||
     (*(short *)((*(ulong *)pPVar5 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)(*(ulong *)pPVar5 - 1)) != 0xa9)) {
    pPVar1 = this + 8;
    if (pPVar5 != (PrototypeIterator *)0x0) {
      pPVar1 = pPVar5;
    }
    pIVar9 = *(Isolate **)this;
    uVar10 = *(ulong *)pPVar1 & 0xffffffff00000000;
    uVar11 = uVar10 | *(uint *)(*(ulong *)pPVar1 - 1);
    uVar3 = *(uint *)(uVar11 + 0xf);
    if (uVar3 == *(uint *)(pIVar9 + 0xb0)) {
      PVar4 = (PrototypeIterator)0x1;
    }
    else if (*(int *)(this + 0x18) == 1) {
      PVar4 = (PrototypeIterator)(*(short *)(uVar11 + 7) != 0xab);
    }
    else {
      PVar4 = (PrototypeIterator)0x0;
    }
    uVar10 = uVar10 | uVar3;
    this[0x1c] = PVar4;
    if (pPVar5 == (PrototypeIterator *)0x0) {
      *(ulong *)(this + 8) = uVar10;
    }
    else if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar10;
      *(ulong **)(this + 0x10) = puVar7;
    }
    else {
      uVar6 = CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar10);
      *(undefined8 *)(this + 0x10) = uVar6;
    }
  }
  else {
    iVar2 = *(int *)(this + 0x20);
    *(int *)(this + 0x20) = iVar2 + 1;
    if (0x18fff < iVar2) {
      Isolate::StackOverflow(*(Isolate **)this);
      return 0;
    }
    piVar8 = (int *)JSProxy::GetPrototype();
    if (piVar8 == (int *)0x0) {
      *(undefined8 *)(this + 0x10) = 0;
      return 0;
    }
    *(int **)(this + 0x10) = piVar8;
    PVar4 = (PrototypeIterator)0x1;
    if (*(int *)(this + 0x18) != 1) {
      PVar4 = (PrototypeIterator)(*piVar8 == *(int *)(*(long *)this + 0xb0));
    }
    this[0x1c] = PVar4;
  }
  return 1;
}

