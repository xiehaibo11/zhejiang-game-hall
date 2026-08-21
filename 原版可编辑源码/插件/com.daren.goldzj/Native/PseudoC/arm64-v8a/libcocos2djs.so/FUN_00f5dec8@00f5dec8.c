
undefined8 FUN_00f5dec8(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  
  iVar15 = *(int *)(*param_2 + 3);
  iVar3 = iVar15 >> 1;
  puVar6 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_1,iVar3,0);
  if (1 < iVar15) {
    iVar15 = 0;
    lVar16 = 0;
    pIVar1 = param_1 + 0x95a0;
    do {
      uVar13 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + (long)iVar15 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar13;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
      }
      uVar13 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar13 = uVar13 | *(uint *)((uVar13 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar1;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = uVar13;
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
        uVar13 = *puVar8;
      }
      uVar13 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0x97);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar1;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = uVar13;
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
      }
      puVar8 = (ulong *)v8::internal::JSObject::New(puVar8,puVar8,0);
      if (puVar8 == (ulong *)0x0) {
        return 0;
      }
      uVar13 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 3);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar1;
        if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
          puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = uVar13;
      }
      else {
        puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
      }
      iVar5 = *(int *)(*puVar7 + 7);
      lVar10 = v8::internal::JSObject::SetOwnPropertyIgnoreAttributes
                         (puVar8,param_1 + 0xb10,puVar9,2);
      if (lVar10 == 0) {
        return 0;
      }
      uVar4 = iVar5 >> 1;
      uVar13 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar13;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
      }
      lVar10 = v8::internal::JSObject::SetOwnPropertyIgnoreAttributes
                         (puVar8,param_1 + 0xb18,puVar7,2);
      if (lVar10 == 0) {
        return 0;
      }
      uVar14 = *puVar6;
      uVar13 = *puVar8;
      puVar2 = (undefined4 *)(uVar14 + (long)iVar15 + 7);
      *puVar2 = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar14,puVar2,uVar13);
          uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar14,puVar2,uVar13);
        }
      }
      lVar16 = lVar16 + 1;
      iVar15 = iVar15 + 4;
    } while (lVar16 < iVar3);
  }
  uVar11 = v8::internal::Factory::NewJSArrayWithElements
                     (param_1,puVar6,3,*(int *)(*puVar6 + 3) >> 1,0);
  return uVar11;
}

