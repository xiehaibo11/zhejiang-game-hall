
ulong * FUN_01559ea4(Isolate *param_1,ulong *param_2)

{
  long lVar1;
  Isolate *pIVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  pIVar2 = param_1 + 0x95a0;
  uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar2;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
  }
  puVar5 = (ulong *)v8::internal::Factory::CopyFixedArrayWithMap(param_1,param_2,puVar5);
  uVar8 = *puVar5;
  if ((int)*(uint *)(uVar8 + 0xf) >> 1 != 0) {
    lVar11 = (long)((ulong)*(uint *)(uVar8 + 0xf) << 0x20) >> 0x21;
    lVar10 = 0x1400000000;
    while( true ) {
      lVar11 = lVar11 + -1;
      lVar1 = (lVar10 >> 0x20) + 7;
      uVar4 = *(uint *)(uVar8 + lVar1);
      if (((uVar4 & 1) != 0) &&
         (uVar9 = uVar8 & 0xffffffff00000000 | (ulong)uVar4,
         *(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x52)) {
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pIVar2;
          if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
            puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar6 + 1;
          *puVar6 = uVar9;
        }
        else {
          puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
        }
        puVar6 = (ulong *)v8::internal::AccessorPair::Copy(param_1,puVar6);
        uVar9 = *puVar5;
        uVar8 = *puVar6;
        puVar3 = (undefined4 *)(uVar9 + lVar1);
        *puVar3 = (int)uVar8;
        if ((uVar8 & 1) != 0) {
          uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar9,puVar3,uVar8);
            uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            v8::internal::Heap_GenerationalBarrierSlow(uVar9,puVar3,uVar8);
          }
        }
      }
      if (lVar11 == 0) break;
      uVar8 = *puVar5;
      lVar10 = lVar10 + 0xc00000000;
    }
  }
  return puVar5;
}

