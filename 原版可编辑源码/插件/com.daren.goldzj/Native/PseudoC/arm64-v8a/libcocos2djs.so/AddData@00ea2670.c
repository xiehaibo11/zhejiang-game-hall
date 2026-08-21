
/* v8::SnapshotCreator::AddData(v8::Local<v8::Context>, unsigned long) */

long __thiscall v8::SnapshotCreator::AddData(undefined8 param_1,ulong *param_2,ulong param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  CanonicalHandleScope *pCVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  Isolate *pIVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  
  uVar7 = *(uint *)((long)param_2 + 4);
  piVar3 = (int *)((ulong)uVar7 << 0x20 | 0x95b0);
  puVar4 = (undefined8 *)((ulong)uVar7 << 0x20 | 0x95a0);
  plVar5 = (long *)((ulong)uVar7 << 0x20 | 0x95a8);
  puVar15 = (ulong *)*puVar4;
  puVar18 = (ulong *)*plVar5;
  *piVar3 = *piVar3 + 1;
  puVar6 = (undefined8 *)((ulong)uVar7 << 0x20 | 0x95b8);
  pCVar9 = (CanonicalHandleScope *)*puVar6;
  pIVar14 = (Isolate *)((ulong)uVar7 << 0x20);
  if (pCVar9 == (CanonicalHandleScope *)0x0) {
    puVar10 = puVar15;
    if (puVar18 == puVar15) {
      puVar10 = (ulong *)internal::HandleScope::Extend(pIVar14);
    }
    *(ulong **)(pIVar14 + 0x95a0) = puVar10 + 1;
    *puVar10 = param_3;
  }
  else {
    puVar10 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar9,param_3);
  }
  uVar12 = *param_2 & 0xffffffff00000000;
  puVar1 = (uint *)(*param_2 + 0x27f);
  uVar8 = *puVar1;
  if ((uVar8 == *(uint *)(uVar12 + 0x168)) ||
     (*(int *)((uVar12 | uVar8) - 1) == *(int *)(uVar12 + 0x1b8))) {
    pCVar9 = (CanonicalHandleScope *)*puVar6;
    uVar12 = uVar12 | *puVar1;
    if (pCVar9 == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar11 == (ulong *)*plVar5) {
        puVar11 = (ulong *)internal::HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar12;
    }
    else {
      puVar11 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar9,uVar12);
    }
  }
  else {
    puVar11 = (ulong *)internal::ArrayList::New(pIVar14,1);
  }
  if (*(uint *)(*puVar11 + 3) < 2) {
    lVar17 = 0;
  }
  else {
    lVar17 = (long)((ulong)*(uint *)(*puVar11 + 7) << 0x20) >> 0x21;
  }
  puVar10 = (ulong *)internal::ArrayList::Add(pIVar14,puVar11,puVar10);
  uVar16 = *param_2;
  uVar12 = *puVar10;
  puVar2 = (undefined4 *)(uVar16 + 0x27f);
  *puVar2 = (int)uVar12;
  if ((uVar12 & 1) != 0) {
    uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar16,puVar2,uVar12);
      uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar16,puVar2,uVar12);
    }
  }
  if (uVar7 != 0) {
    *puVar4 = puVar15;
    *piVar3 = *piVar3 + -1;
    if ((ulong *)*plVar5 != puVar18) {
      *plVar5 = (long)puVar18;
      internal::HandleScope::DeleteExtensions(pIVar14);
    }
  }
  return lVar17;
}

