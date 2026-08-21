
undefined8 FUN_0155a054(Isolate *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  Isolate *pIVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  uVar9 = *param_2;
  if ((int)*(uint *)(uVar9 + 0xf) >> 1 == 0) {
    return 1;
  }
  lVar12 = (long)((ulong)*(uint *)(uVar9 + 0xf) << 0x20) >> 0x21;
  lVar13 = 0x1400000000;
  lVar11 = 0x1000000000;
  pIVar2 = param_1 + 0x95a0;
  do {
    lVar12 = lVar12 + -1;
    uVar4 = *(uint *)(uVar9 + (lVar11 >> 0x20) + 7);
    if ((uVar4 == *(uint *)(param_1 + 0xa8)) || (uVar4 == *(uint *)(param_1 + 0xa0)))
    goto joined_r0x0155a1ec;
    uVar9 = uVar9 & 0xffffffff00000000 | (ulong)uVar4;
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
    lVar1 = (lVar13 >> 0x20) + 7;
    uVar4 = *(uint *)(*param_2 + lVar1);
    uVar9 = *param_2 & 0xffffffff00000000 | (ulong)uVar4;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar2;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = puVar7 + 1;
      *puVar7 = uVar9;
      if ((uVar4 & 1) != 0) goto LAB_0155a21c;
LAB_0155a164:
      puVar6 = (ulong *)FUN_0155a580(param_1,param_4,uVar9,param_3,param_1 + 200,puVar6);
      if (puVar6 == (ulong *)0x0) {
        return 0;
      }
      uVar9 = *param_2;
      uVar14 = *puVar6;
      puVar3 = (undefined4 *)(uVar9 + lVar1);
      *puVar3 = (int)uVar14;
      if ((uVar14 & 1) != 0) {
        uVar10 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar9,puVar3,uVar14);
          uVar10 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar10 & 0x18) != 0) {
          bVar5 = *(byte *)((uVar9 & 0xfffffffffffc0000) + 8);
joined_r0x0155a350:
          if ((bVar5 & 0x18) == 0) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar9,puVar3,uVar14);
          }
        }
      }
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      uVar9 = *puVar7;
      if ((uVar9 & 1) == 0) goto LAB_0155a164;
LAB_0155a21c:
      if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x52) {
        if ((*(uint *)(uVar9 + 3) & 1) == 0) {
          puVar8 = (ulong *)FUN_0155a580(param_1,param_4,
                                         uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 3),
                                         param_3,param_1 + 0x700,puVar6);
          if (puVar8 == (ulong *)0x0) {
            return 0;
          }
          uVar9 = *puVar7;
          uVar14 = *puVar8;
          *(int *)(uVar9 + 3) = (int)uVar14;
          if ((uVar14 & 1) != 0) {
            uVar10 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar10 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 3,uVar14);
              uVar10 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar10 & 0x18) != 0) &&
               ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 3,uVar14);
            }
          }
        }
        uVar4 = *(uint *)(*puVar7 + 7);
        if ((uVar4 & 1) != 0) goto joined_r0x0155a1ec;
        puVar6 = (ulong *)FUN_0155a580(param_1,param_4,*puVar7 & 0xffffffff00000000 | (ulong)uVar4,
                                       param_3,param_1 + 0x9b0,puVar6);
        if (puVar6 == (ulong *)0x0) {
          return 0;
        }
        uVar9 = *puVar7;
        uVar14 = *puVar6;
        *(int *)(uVar9 + 7) = (int)uVar14;
        if ((uVar14 & 1) == 0) goto joined_r0x0155a1ec;
        uVar10 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
        puVar3 = (undefined4 *)(uVar9 + 7);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar9,puVar3,uVar14);
          uVar10 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar10 & 0x18) == 0) goto joined_r0x0155a1ec;
        bVar5 = *(byte *)((uVar9 & 0xfffffffffffc0000) + 8);
        goto joined_r0x0155a350;
      }
    }
joined_r0x0155a1ec:
    if (lVar12 == 0) {
      return 1;
    }
    uVar9 = *param_2;
    lVar13 = lVar13 + 0xc00000000;
    lVar11 = lVar11 + 0xc00000000;
  } while( true );
}

