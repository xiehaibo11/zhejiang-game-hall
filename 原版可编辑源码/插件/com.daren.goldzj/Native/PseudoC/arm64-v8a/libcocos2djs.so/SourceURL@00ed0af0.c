
/* v8::debug::Script::SourceURL() const */

ulong * __thiscall v8::debug::Script::SourceURL(Script *this)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  CanonicalHandleScope *pCVar8;
  ulong *puVar9;
  Isolate *pIVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  
  uVar5 = *(uint *)(this + 4);
  piVar1 = (int *)((ulong)uVar5 << 0x20 | 0x95b0);
  puVar2 = (undefined8 *)((ulong)uVar5 << 0x20 | 0x95a0);
  plVar3 = (long *)((ulong)uVar5 << 0x20 | 0x95a8);
  puVar13 = (ulong *)*puVar2;
  puVar12 = (ulong *)*plVar3;
  *piVar1 = *piVar1 + 1;
  puVar4 = (undefined8 *)((ulong)uVar5 << 0x20 | 0x95b8);
  pCVar8 = (CanonicalHandleScope *)*puVar4;
  uVar7 = *(uint *)(*(ulong *)this + 0x33);
  pIVar10 = (Isolate *)((ulong)uVar5 << 0x20);
  uVar11 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar7;
  if (pCVar8 == (CanonicalHandleScope *)0x0) {
    puVar9 = puVar13;
    if (puVar12 == puVar13) {
      puVar9 = (ulong *)internal::HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar11;
    if ((uVar7 & 1) == 0) goto LAB_00ed0bf4;
  }
  else {
    puVar9 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar8,uVar11);
    uVar11 = *puVar9;
    if ((uVar11 & 1) == 0) goto LAB_00ed0bf4;
  }
  if (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0x40) {
    *puVar2 = puVar13;
    *piVar1 = *piVar1 + -1;
    if ((ulong *)*plVar3 != puVar12) {
      *plVar3 = (long)puVar12;
      internal::HandleScope::DeleteExtensions(pIVar10);
    }
    pCVar8 = (CanonicalHandleScope *)*puVar4;
    if (pCVar8 != (CanonicalHandleScope *)0x0) {
      puVar12 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar8,uVar11);
      return puVar12;
    }
    puVar12 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar12 == (ulong *)*plVar3) {
      puVar12 = (ulong *)internal::HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar12 + 1;
    *puVar12 = uVar11;
    return puVar12;
  }
LAB_00ed0bf4:
  if (uVar5 != 0) {
    iVar6 = *piVar1;
    puVar9 = (ulong *)*plVar3;
    *puVar2 = puVar13;
    *piVar1 = iVar6 + -1;
    if (puVar9 != puVar12) {
      *plVar3 = (long)puVar12;
      internal::HandleScope::DeleteExtensions(pIVar10);
    }
  }
  return (ulong *)0x0;
}

