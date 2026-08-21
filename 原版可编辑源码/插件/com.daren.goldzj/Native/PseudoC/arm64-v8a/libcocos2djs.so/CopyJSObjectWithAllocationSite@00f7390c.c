
/* v8::internal::Factory::CopyJSObjectWithAllocationSite(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::AllocationSite>) */

ulong * __thiscall
v8::internal::Factory::CopyJSObjectWithAllocationSite(Factory *this,ulong *param_2,long *param_3)

{
  Factory *pFVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  CanonicalHandleScope *pCVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  pFVar1 = this + 0x95a0;
  uVar20 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pFVar1;
    if (puVar7 == *(ulong **)(this + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar7 + 1;
    *puVar7 = uVar20;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar20)
    ;
    uVar20 = *puVar7;
  }
  uVar4 = *(ushort *)(uVar20 + 7) - 0x410;
  if ((0x27 < uVar4) || ((1L << ((ulong)uVar4 & 0x3f) & 0xf8420b0001U) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "map->instance_type() == JS_REG_EXP_TYPE || map->instance_type() == JS_OBJECT_TYPE || map->instance_type() == JS_ERROR_TYPE || map->instance_type() == JS_ARRAY_TYPE || map->instance_type() == JS_API_OBJECT_TYPE || map->instance_type() == WASM_GLOBAL_OBJECT_TYPE || map->instance_type() == WASM_INSTANCE_OBJECT_TYPE || map->instance_type() == WASM_MEMORY_OBJECT_TYPE || map->instance_type() == WASM_MODULE_OBJECT_TYPE || map->instance_type() == WASM_TABLE_OBJECT_TYPE || map->instance_type() == JS_SPECIAL_API_OBJECT_TYPE"
            );
  }
  bVar3 = *(byte *)(uVar20 + 3);
  uVar20 = (ulong)bVar3;
  lVar15 = *(long *)(this + 0x8938);
  lVar16 = *(long *)(lVar15 + 0x68);
  uVar22 = uVar20 * 4;
  uVar21 = (uint)uVar22;
  uVar4 = uVar21;
  if (param_3 != (long *)0x0) {
    uVar4 = uVar21 + 8;
  }
  uVar14 = (ulong)uVar4;
  if ((((ulong)(*(long *)(lVar15 + 0x70) - lVar16) < uVar14) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar8 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar14,0,1,0);
  }
  else {
    uVar8 = lVar16 + 1;
    *(ulong *)(lVar15 + 0x68) = lVar16 + uVar14;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar16,uVar14,1,1);
  }
  if ((uVar21 | 3) < 7) {
LAB_00f73a94:
    pCVar10 = *(CanonicalHandleScope **)(this + 0x95b8);
    if (pCVar10 != (CanonicalHandleScope *)0x0) goto LAB_00f73a9c;
LAB_00f73ac0:
    puVar7 = *(ulong **)pFVar1;
    if (puVar7 == *(ulong **)(this + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar7 + 1;
    *puVar7 = uVar8;
  }
  else {
    puVar9 = (undefined4 *)(uVar8 - 1);
    puVar13 = (undefined4 *)(*param_2 - 1);
    if (bVar3 < 0x10) {
      if ((7 < bVar3) && ((puVar13 + uVar20 <= puVar9 || (puVar9 + uVar20 <= puVar13)))) {
        uVar17 = uVar20 & 0xf8;
        puVar18 = (undefined8 *)(uVar8 + 0xf);
        puVar13 = puVar13 + uVar17;
        puVar9 = puVar9 + uVar17;
        puVar19 = (undefined8 *)(*param_2 + 0xf);
        uVar14 = uVar17;
        do {
          puVar5 = puVar19 + -1;
          uVar24 = puVar19[-2];
          uVar26 = puVar19[1];
          uVar25 = *puVar19;
          uVar14 = uVar14 - 8;
          puVar19 = puVar19 + 4;
          puVar18[-1] = *puVar5;
          puVar18[-2] = uVar24;
          puVar18[1] = uVar26;
          *puVar18 = uVar25;
          puVar18 = puVar18 + 4;
        } while (uVar14 != 0);
        bVar6 = uVar17 == uVar20;
        uVar20 = uVar20 - uVar17;
        if (bVar6) goto LAB_00f73a94;
      }
      do {
        uVar20 = uVar20 - 1;
        *puVar9 = *puVar13;
        puVar9 = puVar9 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar20 != 0);
      goto LAB_00f73a94;
    }
    MemCopy(puVar9,puVar13,uVar22);
    pCVar10 = *(CanonicalHandleScope **)(this + 0x95b8);
    if (pCVar10 == (CanonicalHandleScope *)0x0) goto LAB_00f73ac0;
LAB_00f73a9c:
    puVar7 = (ulong *)CanonicalHandleScope::Lookup(pCVar10,uVar8);
  }
  if (param_3 != (long *)0x0) {
    lVar16 = *param_3;
    *(undefined4 *)(uVar8 + uVar22 + -1) = *(undefined4 *)(this + 0xcd8);
    *(int *)(uVar8 + uVar22 + 3) = (int)lVar16;
    if (FLAG_allocation_site_pretenuring != '\0') {
      *(int *)(lVar16 + 0x13) = *(int *)(lVar16 + 0x13) + 1;
    }
  }
  uVar20 = *param_2;
  uVar22 = uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 7);
  piVar23 = (int *)(uVar22 + 3);
  if (1 < *piVar23) {
    if (*(int *)(uVar22 - 1) != *(int *)(this + 0xe8)) {
      pCVar10 = *(CanonicalHandleScope **)(this + 0x95b8);
      if ((*(byte *)((uVar20 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar20 - 1)) & 0xf0) ==
          0x20) {
        if (pCVar10 == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)pFVar1;
          if (puVar11 == *(ulong **)(this + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)pFVar1 = puVar11 + 1;
          *puVar11 = uVar22;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup(pCVar10,uVar22);
          piVar23 = (int *)(*puVar11 + 3);
        }
        iVar2 = *piVar23 >> 1;
        puVar12 = puVar11;
        if (iVar2 != 0) {
          puVar12 = (ulong *)NewFixedDoubleArray(this,iVar2);
          uVar4 = iVar2 << 3 | 4;
          uVar21 = iVar2 << 3 | 7;
          if (-1 < (int)uVar4) {
            uVar21 = uVar4;
          }
          puVar13 = (undefined4 *)(*puVar12 + 3);
          puVar9 = (undefined4 *)(*puVar11 + 3);
          uVar20 = (long)((ulong)uVar21 << 0x20) >> 0x22;
          if ((uint)((int)uVar21 >> 2) < 0x10) {
            if ((7 < (uint)((int)uVar21 >> 2)) &&
               ((puVar9 + uVar20 <= puVar13 || (puVar13 + uVar20 <= puVar9)))) {
              uVar14 = uVar20 & 0xfffffffffffffff8;
              puVar18 = (undefined8 *)(*puVar12 + 0x13);
              puVar9 = puVar9 + uVar14;
              puVar13 = puVar13 + uVar14;
              puVar19 = (undefined8 *)(*puVar11 + 0x13);
              uVar22 = uVar14;
              do {
                puVar5 = puVar19 + -1;
                uVar24 = puVar19[-2];
                uVar26 = puVar19[1];
                uVar25 = *puVar19;
                uVar22 = uVar22 - 8;
                puVar19 = puVar19 + 4;
                puVar18[-1] = *puVar5;
                puVar18[-2] = uVar24;
                puVar18[1] = uVar26;
                *puVar18 = uVar25;
                puVar18 = puVar18 + 4;
              } while (uVar22 != 0);
              bVar6 = uVar14 == uVar20;
              uVar20 = uVar20 - uVar14;
              if (bVar6) goto LAB_00f73cf8;
            }
            do {
              uVar20 = uVar20 - 1;
              *puVar13 = *puVar9;
              puVar13 = puVar13 + 1;
              puVar9 = puVar9 + 1;
            } while (uVar20 != 0);
          }
          else {
            MemCopy(puVar13,puVar9,uVar20 << 2);
          }
        }
LAB_00f73cf8:
        uVar22 = *puVar12;
      }
      else {
        if (pCVar10 == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)pFVar1;
          if (puVar11 == *(ulong **)(this + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)pFVar1 = puVar11 + 1;
          *puVar11 = uVar22;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup(pCVar10,uVar22);
        }
        uVar22 = *puVar11;
        if (1 < *(uint *)(uVar22 + 3)) {
          uVar20 = uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 - 1);
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar12 = *(ulong **)pFVar1;
            if (puVar12 == *(ulong **)(this + 0x95a8)) {
              puVar12 = (ulong *)HandleScope::Extend((Isolate *)this);
            }
            *(ulong **)pFVar1 = puVar12 + 1;
            *puVar12 = uVar20;
          }
          else {
            puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(this + 0x95b8),uVar20);
          }
          puVar11 = (ulong *)CopyArrayWithMap<v8::internal::FixedArray>(this,puVar11,puVar12);
          uVar22 = *puVar11;
        }
      }
    }
    uVar20 = *puVar7;
    *(int *)(uVar20 + 7) = (int)uVar22;
    if ((uVar22 & 1) != 0) {
      uVar14 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar14 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar20,uVar20 + 7,uVar22);
        uVar14 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar20,uVar20 + 7,uVar22);
      }
    }
  }
  uVar22 = *param_2;
  uVar20 = uVar22 & 0xffffffff00000000;
  if ((*(uint *)((uVar20 | 0xb) + (ulong)*(uint *)(uVar22 - 1)) >> 0x15 & 1) == 0) {
    uVar4 = *(uint *)(uVar22 + 3);
    if (((uVar4 & 1) == 0) || (uVar4 == *(uint *)(uVar20 + 0x168))) {
      uVar20 = *(ulong *)(uVar20 + 0x3b8);
    }
    else {
      uVar20 = uVar20 | uVar4;
    }
    if ((*(ushort *)(uVar20 + 3) & 0x7fe) == 0) {
      return puVar7;
    }
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)pFVar1;
      if (puVar11 == *(ulong **)(this + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar11 + 1;
      *puVar11 = uVar20;
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),uVar20);
    }
    uVar20 = uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 - 1);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)pFVar1;
      if (puVar12 == *(ulong **)(this + 0x95a8)) {
        puVar12 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar12 + 1;
      *puVar12 = uVar20;
    }
    else {
      puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),uVar20);
    }
    puVar11 = (ulong *)CopyArrayWithMap<v8::internal::PropertyArray>(this,puVar11,puVar12);
    uVar22 = *puVar7;
    uVar20 = *puVar11;
    *(int *)(uVar22 + 3) = (int)uVar20;
    if ((uVar20 & 1) == 0) {
      return puVar7;
    }
    uVar14 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
    lVar16 = uVar22 + 3;
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar22,lVar16,uVar20);
      uVar14 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar14 & 0x18) == 0) {
      return puVar7;
    }
    bVar3 = *(byte *)((uVar22 & 0xfffffffffffc0000) + 8);
    goto joined_r0x00f73fcc;
  }
  if ((*(uint *)(uVar22 + 3) & 1) == 0) {
    uVar20 = *(ulong *)(uVar20 + 0x410);
    pCVar10 = *(CanonicalHandleScope **)(this + 0x95b8);
    if (pCVar10 == (CanonicalHandleScope *)0x0) goto LAB_00f73dfc;
LAB_00f73ddc:
    puVar11 = (ulong *)CanonicalHandleScope::Lookup(pCVar10,uVar20);
    uVar20 = *puVar11;
  }
  else {
    uVar20 = uVar20 | *(uint *)(uVar22 + 3);
    pCVar10 = *(CanonicalHandleScope **)(this + 0x95b8);
    if (pCVar10 != (CanonicalHandleScope *)0x0) goto LAB_00f73ddc;
LAB_00f73dfc:
    puVar11 = *(ulong **)pFVar1;
    if (puVar11 == *(ulong **)(this + 0x95a8)) {
      puVar11 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar11 + 1;
    *puVar11 = uVar20;
  }
  if (1 < *(uint *)(uVar20 + 3)) {
    uVar20 = uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 - 1);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)pFVar1;
      if (puVar12 == *(ulong **)(this + 0x95a8)) {
        puVar12 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar12 + 1;
      *puVar12 = uVar20;
    }
    else {
      puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),uVar20);
    }
    puVar11 = (ulong *)CopyArrayWithMap<v8::internal::FixedArray>(this,puVar11,puVar12);
    uVar20 = *puVar11;
  }
  uVar22 = *puVar7;
  *(int *)(uVar22 + 3) = (int)uVar20;
  if ((uVar20 & 1) == 0) {
    return puVar7;
  }
  uVar14 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
  lVar16 = uVar22 + 3;
  if (((uint)uVar14 >> 0x12 & 1) != 0) {
    Heap_MarkingBarrierSlow(uVar22,lVar16,uVar20);
    uVar14 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
  }
  if ((uVar14 & 0x18) == 0) {
    return puVar7;
  }
  bVar3 = *(byte *)((uVar22 & 0xfffffffffffc0000) + 8);
joined_r0x00f73fcc:
  if ((bVar3 & 0x18) == 0) {
    Heap_GenerationalBarrierSlow(uVar22,lVar16,uVar20);
  }
  return puVar7;
}

