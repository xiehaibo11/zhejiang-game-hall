
/* v8::internal::Heap::Verify() */

void __thiscall v8::internal::Heap::Verify(Heap *this)

{
  Heap *pHVar1;
  Isolate *pIVar2;
  uint uVar3;
  CanonicalHandleScope *pCVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  Heap *pHVar8;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined **local_90;
  undefined **ppuStack_88;
  Heap *local_80;
  undefined **local_78;
  undefined **local_70;
  Heap *local_68;
  Heap *pHVar9;
  
  if (*(long *)(this + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","HasBeenSetUp()");
  }
  uVar12 = *(undefined8 *)(this + 0xd50);
  lVar11 = *(long *)(this + 0xd58);
  pIVar2 = (Isolate *)(this + -0x8850);
  *(int *)(this + 0xd60) = *(int *)(this + 0xd60) + 1;
  MarkCompactCollector::EnsureSweepingCompleted(*(MarkCompactCollector **)(this + 0x800));
  local_78 = &PTR__VerifyPointersVisitor_01ca7620;
  local_70 = &PTR__VerifyPointersVisitor_01ca76c8;
  local_68 = this;
  IterateStrongRoots(this,&local_70,5);
  (*(code *)local_70[3])(&local_70,0,0,this + -0x7880);
  (*(code *)local_70[4])(&local_70,0);
  if (*(long *)(this + 0xae8) != *(long *)(this + 0xaf0)) {
    (*(code *)local_70[2])(&local_70,1,0);
  }
  if (*(long *)(this + 0xb00) != *(long *)(this + 0xb08)) {
    (*(code *)local_70[2])(&local_70,1,0);
  }
  pHVar1 = this + 0xd58;
  (*(code *)local_70[4])(&local_70,1);
  uVar6 = *(ulong *)(this + -0x5c88);
  if ((int)uVar6 == 0) goto LAB_00f896b8;
  uVar7 = uVar6 & 0xffffffff00000000;
  uVar3 = *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(uVar6 - 1)) + 0x13)) + 0x1eb);
  pCVar4 = *(CanonicalHandleScope **)(this + 0xd68);
  uVar7 = uVar7 | uVar3;
  if (pCVar4 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0xd50);
    if (puVar5 == *(ulong **)pHVar1) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(this + 0xd50) = puVar5 + 1;
    *puVar5 = uVar7;
    if ((uVar3 & 1) != 0) goto LAB_00f89634;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(pCVar4,uVar7);
    uVar7 = *puVar5;
    if ((uVar7 & 1) != 0) {
LAB_00f89634:
      if ((int)uVar7 == *(int *)(this + -0x87b0)) goto LAB_00f896b8;
    }
  }
  uVar6 = *(ulong *)(this + -0x5c88) & 0xffffffff00000000;
  pCVar4 = *(CanonicalHandleScope **)(this + 0xd68);
  ppuVar10 = (undefined **)
             (uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(this + -0x5c88) - 1
                                                                     )) + 0x13)) + 0x1eb));
  if (pCVar4 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0xd50);
    if (puVar5 == *(ulong **)pHVar1) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(this + 0xd50) = puVar5 + 1;
    *puVar5 = (ulong)ppuVar10;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(pCVar4,(ulong)ppuVar10);
    ppuVar10 = (undefined **)*puVar5;
  }
  local_90 = ppuVar10;
  NormalizedMapCache::NormalizedMapCacheVerify((NormalizedMapCache *)&local_90,pIVar2);
LAB_00f896b8:
  base::RecursiveMutex::Lock((RecursiveMutex *)(this + 0xce0));
  pHVar9 = this + -0x7878;
  do {
    pHVar8 = pHVar9 + 8;
    if (((byte)*pHVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(*current).IsSmi()");
    }
    pHVar9 = pHVar8;
  } while (pHVar8 < this + -0x7840);
  base::RecursiveMutex::Unlock((RecursiveMutex *)(this + 0xce0));
  (**(code **)(**(long **)(this + 0xe8) + 0x90))(*(long **)(this + 0xe8),pIVar2);
  (**(code **)(**(long **)(this + 0xf0) + 0x98))(*(long **)(this + 0xf0),pIVar2,&local_78);
  (**(code **)(**(long **)(this + 0x100) + 0x98))(*(long **)(this + 0x100),pIVar2,&local_78);
  local_90 = &PTR__VerifyPointersVisitor_01ca7620;
  ppuStack_88 = &PTR__VerifyPointersVisitor_01ca76c8;
  local_80 = this;
  (**(code **)(**(long **)(this + 0xf8) + 0x98))(*(long **)(this + 0xf8),pIVar2,&local_90);
  (**(code **)(**(long **)(this + 0x108) + 0x98))(*(long **)(this + 0x108),pIVar2);
  (**(code **)(**(long **)(this + 0x110) + 0x98))(*(long **)(this + 0x110),pIVar2);
  (**(code **)(**(long **)(this + 0x118) + 0x98))(*(long **)(this + 0x118),pIVar2);
  *(undefined8 *)(this + 0xd50) = uVar12;
  *(int *)(this + 0xd60) = *(int *)(this + 0xd60) + -1;
  if (*(long *)pHVar1 != lVar11) {
    *(long *)pHVar1 = lVar11;
    HandleScope::DeleteExtensions(pIVar2);
  }
  return;
}

