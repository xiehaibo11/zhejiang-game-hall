
/* v8::internal::WasmTableObject::Grow(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, unsigned int,
   v8::internal::Handle<v8::internal::Object>) */

uint v8::internal::WasmTableObject::Grow
               (Isolate *param_1,ulong *param_2,uint param_3,undefined8 param_4)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  
  uVar8 = *param_2;
  uVar12 = *(int *)(uVar8 + 0xf) >> 1;
  if (param_3 == 0) {
    return uVar12;
  }
  uVar14 = *(uint *)(uVar8 + 0x13);
  uVar10 = uVar8 & 0xffffffff00000000;
  if ((uVar14 & 1) == 0) {
    if (-1 < (int)uVar14) {
      dVar11 = (double)(ulong)(uVar14 >> 1);
      goto LAB_0124f8a0;
    }
  }
  else if (*(short *)((uVar10 | 7) + (ulong)*(uint *)((uVar10 | uVar14) - 1)) == 0x42) {
    dVar17 = *(double *)((uVar10 | uVar14) + 3);
    dVar11 = dVar17 + 4503599627370496.0;
    if (((ulong)dVar11 >> 0x20 == 0x43300000) && (dVar17 == (double)((ulong)dVar11 & 0xffffffff)))
    goto LAB_0124f8a0;
  }
  dVar11 = (double)(ulong)FLAG_wasm_max_table_size;
LAB_0124f8a0:
  if (SUB84(dVar11,0) - uVar12 < param_3) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar14 = uVar12 + param_3;
    pIVar1 = param_1 + 0x95a0;
    uVar10 = uVar10 | *(uint *)(uVar8 + 0xb);
    uVar2 = *(int *)(uVar10 + 3) >> 1;
    uVar5 = uVar14 - uVar2;
    if (uVar2 <= uVar14 && uVar5 != 0) {
      uVar3 = uVar2;
      if ((int)uVar2 <= (int)uVar5) {
        uVar3 = uVar5;
      }
      uVar2 = SUB84(dVar11,0) - uVar2;
      if ((int)uVar3 <= (int)uVar2) {
        uVar2 = uVar3;
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar1;
        if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar10;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
      }
      puVar6 = (ulong *)Factory::CopyFixedArrayAndGrow(param_1,puVar6,uVar2);
      uVar10 = *param_2;
      uVar8 = *puVar6;
      *(int *)(uVar10 + 0xb) = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xb,uVar8);
          uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xb,uVar8);
        }
      }
    }
    *(uint *)(*param_2 + 0xf) = uVar14 * 2;
    uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar8;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
      uVar8 = *puVar6;
    }
    if (1 < *(int *)(uVar8 + 3)) {
      iVar13 = 0;
      lVar16 = 0;
      lVar15 = 0x400000000;
      do {
        iVar4 = *(int *)(uVar8 + 7 + (lVar15 >> 0x20));
        uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 7 + (long)iVar13);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar1;
          if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar7 + 1;
          *puVar7 = uVar8;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
        }
        WasmInstanceObject::EnsureIndirectFunctionTableWithMinimumSize(puVar7,iVar4 >> 1,uVar14);
        uVar8 = *puVar6;
        lVar16 = lVar16 + 3;
        iVar13 = iVar13 + 0xc;
        lVar15 = lVar15 + 0xc00000000;
      } while (lVar16 < *(int *)(uVar8 + 3) >> 1);
    }
    if (uVar12 < uVar14) {
      uVar14 = 0;
      do {
        Set(param_1,param_2,uVar12 + uVar14,param_4);
        uVar14 = uVar14 + 1;
      } while (param_3 != uVar14);
    }
  }
  return uVar12;
}

