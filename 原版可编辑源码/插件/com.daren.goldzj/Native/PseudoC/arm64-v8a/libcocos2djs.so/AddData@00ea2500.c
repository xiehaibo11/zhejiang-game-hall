
/* v8::SnapshotCreator::AddData(unsigned long) */

long __thiscall v8::SnapshotCreator::AddData(SnapshotCreator *this,ulong param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  Isolate *pIVar7;
  ulong uVar8;
  long lVar9;
  
  pIVar7 = *(Isolate **)(*(long *)this + 8);
  pIVar1 = pIVar7 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(pIVar7 + 0x95a8);
  *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = puVar2;
    if (puVar3 == puVar2) {
      puVar4 = (ulong *)internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = param_1;
  }
  else {
    puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),param_1);
  }
  uVar8 = *(ulong *)(pIVar7 + 0xf88);
  if (((int)uVar8 == *(int *)((uVar8 & 0xffffffff00000000) + 0x168)) ||
     (*(int *)(uVar8 - 1) == *(int *)((uVar8 & 0xffffffff00000000) + 0x1b8))) {
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar5 = (ulong *)internal::HandleScope::Extend(pIVar7);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar8;
    }
    else {
      puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar8);
    }
  }
  else {
    puVar5 = (ulong *)internal::ArrayList::New(pIVar7,1);
  }
  if (*(uint *)(*puVar5 + 3) < 2) {
    lVar9 = 0;
  }
  else {
    lVar9 = (long)((ulong)*(uint *)(*puVar5 + 7) << 0x20) >> 0x21;
  }
  puVar6 = (undefined8 *)internal::ArrayList::Add(pIVar7,puVar5,puVar4);
  internal::Heap::SetSerializedObjects((Heap *)(pIVar7 + 0x8850),*puVar6);
  if (pIVar7 != (Isolate *)0x0) {
    *(ulong **)pIVar1 = puVar2;
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
    if (*(ulong **)(pIVar7 + 0x95a8) != puVar3) {
      *(ulong **)(pIVar7 + 0x95a8) = puVar3;
      internal::HandleScope::DeleteExtensions(pIVar7);
    }
  }
  return lVar9;
}

