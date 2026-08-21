
/* v8::internal::MapUpdater::BuildDescriptorArray() */

undefined8 * __thiscall v8::internal::MapUpdater::BuildDescriptorArray(MapUpdater *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  int iVar14;
  Isolate *pIVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  DescriptorArray *pDVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  uint uVar23;
  Isolate *pIVar24;
  undefined8 *puVar25;
  ulong uVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  long lVar34;
  undefined1 auVar35 [16];
  ulong *local_108;
  int local_e4;
  undefined1 local_e0 [16];
  undefined8 *local_d0;
  int iStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 *local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 *local_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  uVar26 = **(ulong **)(this + 0x20);
  uVar5 = *(ushort *)(**(long **)(this + 8) + 7);
  uVar23 = *(uint *)(uVar26 + 0xb);
  pIVar15 = *(Isolate **)this;
  uVar26 = uVar26 & 0xffffffff00000000 | (ulong)*(uint *)(uVar26 + 0x17);
  if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    local_108 = *(ulong **)(pIVar15 + 0x95a0);
    if (local_108 == *(ulong **)(pIVar15 + 0x95a8)) {
      local_108 = (ulong *)HandleScope::Extend(pIVar15);
    }
    *(ulong **)(pIVar15 + 0x95a0) = local_108 + 1;
    *local_108 = uVar26;
  }
  else {
    local_108 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar26);
  }
  iVar2 = *(int *)(this + 0x30);
  iVar28 = (int)*(short *)(**(long **)(this + 0x10) + 5);
  if (*(short *)(**(long **)(this + 0x10) + 5) <= iVar2) {
    iVar28 = iVar2;
  }
  puVar16 = (undefined8 *)DescriptorArray::Allocate(*(Isolate **)this,iVar2,iVar28 - iVar2);
  uVar26 = (ulong)(*(uint *)(**(long **)(this + 0x18) + 0xb) >> 10) & 0x3ff;
  if ((int)uVar26 == 0) {
    local_e4 = 0;
  }
  else {
    uVar31 = 0;
    lVar34 = 0x17;
    local_e4 = 0;
    do {
      lVar1 = lVar34 + **(ulong **)(this + 0x10);
      uVar27 = *(uint *)(lVar1 + -4);
      pIVar15 = *(Isolate **)this;
      uVar30 = **(ulong **)(this + 0x10) & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + -8);
      if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar17 = *(ulong **)(pIVar15 + 0x95a0);
        if (puVar17 == *(ulong **)(pIVar15 + 0x95a8)) {
          puVar17 = (ulong *)HandleScope::Extend(pIVar15);
        }
        *(ulong **)(pIVar15 + 0x95a0) = puVar17 + 1;
        *puVar17 = uVar30;
      }
      else {
        puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar30);
      }
      uVar3 = *(uint *)(lVar34 + **(ulong **)(this + 0x10));
      uVar30 = (ulong)uVar3;
      pIVar24 = *(Isolate **)this;
      uVar29 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
      iStack_a8 = 0;
      uStack_a4 = 0;
      uVar32 = uVar29 | uVar30;
      pIVar15 = pIVar24 + 0x95a0;
      if ((uVar3 == 3) || ((uVar30 & 3) != 3)) {
        if (*(CanonicalHandleScope **)(pIVar24 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar18 = *(ulong **)pIVar15;
          if (puVar18 == *(ulong **)(pIVar24 + 0x95a8)) {
            puVar18 = (ulong *)HandleScope::Extend(pIVar24);
          }
          *(ulong **)pIVar15 = puVar18 + 1;
          *puVar18 = uVar32;
        }
        else {
          puVar18 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar24 + 0x95b8),uVar32);
        }
        uVar22 = 1;
      }
      else {
        uVar29 = uVar29 | uVar30 & 0xfffffffffffffffd;
        if (*(CanonicalHandleScope **)(pIVar24 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar18 = *(ulong **)pIVar15;
          if (puVar18 == *(ulong **)(pIVar24 + 0x95a8)) {
            puVar18 = (ulong *)HandleScope::Extend(pIVar24);
          }
          uVar22 = 0;
          *(ulong **)pIVar15 = puVar18 + 1;
          *puVar18 = uVar29;
        }
        else {
          puVar18 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar24 + 0x95b8),uVar29);
          uVar22 = 0;
        }
      }
      iStack_a8 = (int)puVar18;
      uStack_a4 = (undefined4)((ulong)puVar18 >> 0x20);
      local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,uVar22);
      Descriptor::Descriptor((Descriptor *)&local_90,puVar17,&local_b0,(int)uVar27 >> 1);
      auVar35._8_8_ = local_e0._8_8_;
      auVar35._0_8_ = local_e0._0_8_;
      local_b0 = (undefined8 *)*puVar16;
      uVar21 = *local_90;
      puVar17 = (ulong *)CONCAT44(uStack_7c,local_80);
      if (iStack_88 == 0) {
        local_e0 = auVar35;
        if (puVar17 == (ulong *)0x0) goto LAB_01529c94;
        uVar30 = *puVar17 | 2;
      }
      else {
        if (puVar17 == (ulong *)0x0) goto LAB_01529c94;
        uVar30 = *puVar17;
      }
      local_e4 = ((uVar27 >> 2 ^ 0xffffffff) & 1) + local_e4;
      DescriptorArray::Set((DescriptorArray *)&local_b0,uVar31,uVar21,uVar30,local_78);
      uVar31 = uVar31 + 1;
      lVar34 = lVar34 + 0xc;
    } while (uVar26 != uVar31);
  }
  uVar31 = (ulong)(uVar23 >> 10) & 0x3ff;
  if ((int)uVar26 != (int)uVar31) {
    lVar34 = uVar26 * 0xc00000000 + 0x1000000000;
    uVar23 = uVar5 - 0x411;
    do {
      uVar29 = lVar34 >> 0x20;
      pIVar15 = *(Isolate **)this;
      uVar30 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
               (ulong)*(uint *)(uVar29 + **(ulong **)(this + 0x10) + -1);
      if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar17 = *(ulong **)(pIVar15 + 0x95a0);
        if (puVar17 == *(ulong **)(pIVar15 + 0x95a8)) {
          puVar17 = (ulong *)HandleScope::Extend(pIVar15);
        }
        *(ulong **)(pIVar15 + 0x95a0) = puVar17 + 1;
        *puVar17 = uVar30;
      }
      else {
        puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar30);
      }
      uVar30 = *(ulong *)(this + 0x58);
      if (uVar26 == uVar30) {
        if ((*(uint *)(this + 0x38) & 0xfffffffe) == 4) {
          uVar27 = *(uint *)(**(long **)(this + 0x10) + (uVar29 | 3)) >> 4 & 7;
        }
        else {
          uVar27 = *(uint *)(this + 100);
        }
        uVar27 = *(uint *)(this + 0x60) | uVar27 << 3 | *(int *)(this + 0x6c) << 1 |
                 *(int *)(this + 0x68) << 2 | (uint)(byte)this[0x70] << 6;
      }
      else {
        uVar27 = *(int *)(**(long **)(this + 0x10) + (uVar29 | 3)) >> 1;
      }
      uVar4 = *(uint *)(*local_108 + (uVar29 | 3));
      bVar13 = true;
      uVar3 = (int)uVar4 >> 1;
      if (((uVar27 >> 1 & 1) != 0) && ((uVar4 >> 2 & 1) != 0)) {
        if (uVar26 == uVar30) {
          iVar28 = (int)**(undefined8 **)(this + 0x80);
        }
        else {
          iVar28 = *(int *)(**(long **)(this + 0x10) + uVar29 + 7);
        }
        bVar13 = *(int *)(*local_108 + uVar29 + 7) != iVar28;
      }
      uVar6 = uVar27 >> 6 & 7;
      uVar7 = uVar3 >> 6 & 7;
      bVar10 = (uVar3 >> 6 & 7) == 0;
      if (uVar6 != 3) {
        bVar10 = uVar7 < uVar6;
      }
      uVar8 = uVar27 >> 3 & 7;
      uVar33 = uVar6;
      if ((uVar7 != uVar6) && (!bVar10)) {
        bVar10 = uVar6 == 0;
        if (uVar7 != 3) {
          bVar10 = uVar6 < uVar7;
        }
        uVar33 = uVar7;
        if (!bVar10) {
          uVar33 = 4;
        }
      }
      if (bVar13) {
        uVar21 = GetOrComputeFieldType(this,uVar26,uVar27 >> 1 & 1,uVar33);
        if ((uVar4 >> 2 & 1) == 0) {
          uVar30 = Map::UnwrapFieldType
                             (*local_108 & 0xffffffff00000000 |
                              (ulong)*(uint *)(uVar29 + *local_108 + 7));
          pIVar15 = *(Isolate **)this;
          if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar18 = *(ulong **)(pIVar15 + 0x95a0);
            if (puVar18 == *(ulong **)(pIVar15 + 0x95a8)) {
              puVar18 = (ulong *)HandleScope::Extend(pIVar15);
            }
            *(ulong **)(pIVar15 + 0x95a0) = puVar18 + 1;
            *puVar18 = uVar30;
          }
          else {
            puVar18 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar30);
          }
        }
        else {
          local_90 = (undefined8 *)
                     (*local_108 & 0xffffffff00000000 | (ulong)*(uint *)(uVar29 + *local_108 + 7));
          puVar18 = (ulong *)Object::OptimalType((Object *)&local_90,*(undefined8 *)this,uVar33);
        }
        uVar21 = Map::GeneralizeFieldType(uVar6,uVar21,uVar33,puVar18,*(undefined8 *)this);
        if ((uVar23 < 0x13) && ((1 << (ulong)(uVar23 & 0x1f) & 0x60001U) != 0)) {
          uVar21 = FieldType::Any(*(Isolate **)this);
          uVar33 = 4;
        }
        auVar35 = Map::WrapFieldType(*(undefined8 *)this,uVar21);
        local_d0 = auVar35._0_8_;
        iStack_c8 = auVar35._8_4_;
        local_c4 = auVar35._12_4_;
        Descriptor::Descriptor((Descriptor *)&local_90);
        if ((uVar27 & 1) != 0) goto LAB_01529ca8;
        Descriptor::DataField
                  ((Descriptor *)&local_b0,puVar17,local_e4,uVar8,(uVar3 & uVar27 & 7) >> 2,uVar33,
                   &local_d0);
        auVar11._8_8_ = local_e0._8_8_;
        auVar11._0_8_ = local_e0._0_8_;
        local_90 = local_b0;
        uStack_7c = uStack_9c;
        local_78 = uStack_98;
        local_80 = uStack_a0;
        iStack_88 = iStack_a8;
        uStack_84 = uStack_a4;
        puVar25 = (undefined8 *)*puVar16;
        uVar21 = *local_b0;
        puVar17 = (ulong *)CONCAT44(uStack_9c,uStack_a0);
        local_b0 = puVar25;
        if (iStack_a8 == 0) {
          if (puVar17 == (ulong *)0x0) goto LAB_01529c94;
          uVar30 = *puVar17 | 2;
        }
        else {
          local_e0 = auVar11;
          if (puVar17 == (ulong *)0x0) goto LAB_01529c94;
          uVar30 = *puVar17;
        }
        local_e4 = local_e4 + 1;
      }
      else {
        if (uVar26 == uVar30) {
          uVar30 = **(ulong **)(this + 0x80);
        }
        else {
          uVar30 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
                   (ulong)*(uint *)(uVar29 + **(ulong **)(this + 0x10) + 7);
        }
        pIVar15 = *(Isolate **)this;
        if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar18 = *(ulong **)(pIVar15 + 0x95a0);
          if (puVar18 == *(ulong **)(pIVar15 + 0x95a8)) {
            puVar18 = (ulong *)HandleScope::Extend(pIVar15);
          }
          *(ulong **)(pIVar15 + 0x95a0) = puVar18 + 1;
          *puVar18 = uVar30;
        }
        else {
          puVar18 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar30);
        }
        Descriptor::AccessorConstant((Descriptor *)&local_90,puVar17,puVar18,uVar8);
        auVar12._8_8_ = local_e0._8_8_;
        auVar12._0_8_ = local_e0._0_8_;
        local_b0 = (undefined8 *)*puVar16;
        uVar21 = *local_90;
        puVar17 = (ulong *)CONCAT44(uStack_7c,local_80);
        if (iStack_88 == 0) {
          local_e0 = auVar12;
          if (puVar17 == (ulong *)0x0) goto LAB_01529c94;
          uVar30 = *puVar17 | 2;
        }
        else {
          if (puVar17 == (ulong *)0x0) goto LAB_01529c94;
          uVar30 = *puVar17;
        }
      }
      DescriptorArray::Set((DescriptorArray *)&local_b0,uVar26,uVar21,uVar30,local_78);
      uVar26 = uVar26 + 1;
      lVar34 = lVar34 + 0xc00000000;
    } while (uVar31 != uVar26);
  }
  iVar28 = *(int *)(this + 0x30);
  if (uVar31 != (long)iVar28) {
    lVar34 = uVar31 * 0xc00000000 + 0x1000000000;
    do {
      uVar26 = lVar34 >> 0x20;
      if (uVar31 == *(ulong *)(this + 0x58)) {
        if ((*(uint *)(this + 0x38) & 0xfffffffe) == 4) {
          uVar30 = **(ulong **)(this + 0x10);
          uVar23 = *(uint *)(uVar30 + (uVar26 | 3)) >> 4 & 7;
        }
        else {
          uVar23 = *(uint *)(this + 100);
          uVar30 = **(ulong **)(this + 0x10);
        }
        uVar23 = *(uint *)(this + 0x60) | uVar23 << 3 | *(int *)(this + 0x6c) << 1 |
                 *(int *)(this + 0x68) << 2 | (uint)(byte)this[0x70] << 6;
      }
      else {
        uVar30 = **(ulong **)(this + 0x10);
        uVar23 = *(int *)(uVar30 + (uVar26 | 3)) >> 1;
      }
      pIVar15 = *(Isolate **)this;
      uVar30 = uVar30 & 0xffffffff00000000 | (ulong)*(uint *)(uVar26 + uVar30 + -1);
      if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar17 = *(ulong **)(pIVar15 + 0x95a0);
        if (puVar17 == *(ulong **)(pIVar15 + 0x95a8)) {
          puVar17 = (ulong *)HandleScope::Extend(pIVar15);
        }
        *(ulong **)(pIVar15 + 0x95a0) = puVar17 + 1;
        *puVar17 = uVar30;
      }
      else {
        puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar30);
      }
      uVar27 = uVar23 >> 3 & 7;
      Descriptor::Descriptor((Descriptor *)&local_90);
      if ((uVar23 >> 1 & 1) == 0) {
        uVar3 = uVar23 >> 6 & 7;
        piVar20 = (int *)GetOrComputeFieldType(this,uVar31,0,uVar3);
        if ((uVar3 == 3) && (this[0x55] != (MapUpdater)0x0)) {
          iVar2 = *piVar20;
          iVar14 = FieldType::Any();
          if (iVar2 != iVar14) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "is_transitionable_fast_elements_kind_ implies Map::IsMostGeneralFieldType(next_representation, *next_field_type)"
                    );
          }
        }
        auVar35 = Map::WrapFieldType(*(undefined8 *)this,piVar20);
        local_e0 = auVar35;
        Descriptor::Descriptor((Descriptor *)&local_b0);
        if ((uVar23 & 1) != 0) {
LAB_01529ca8:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unimplemented code");
        }
        Descriptor::DataField
                  ((Descriptor *)&local_d0,puVar17,local_e4,uVar27,uVar23 >> 2 & 1,uVar3,local_e0);
        local_b0 = local_d0;
        uStack_9c = (undefined4)uStack_bc;
        uStack_98 = (undefined4)((ulong)uStack_bc >> 0x20);
        uStack_a0 = uStack_c0;
        iStack_a8 = iStack_c8;
        uStack_a4 = local_c4;
        puVar25 = (undefined8 *)*puVar16;
        uVar21 = *local_d0;
        puVar17 = (ulong *)CONCAT44(uStack_9c,uStack_c0);
        local_d0 = puVar25;
        if (iStack_c8 == 0) {
          if (puVar17 == (ulong *)0x0) goto LAB_01529c94;
          uVar26 = *puVar17 | 2;
        }
        else {
          if (puVar17 == (ulong *)0x0) goto LAB_01529c94;
          uVar26 = *puVar17;
        }
        pDVar19 = (DescriptorArray *)&local_d0;
        local_e4 = local_e4 + 1;
      }
      else {
        if (uVar31 == *(ulong *)(this + 0x58)) {
          uVar26 = **(ulong **)(this + 0x80);
        }
        else {
          uVar26 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
                   (ulong)*(uint *)(uVar26 + **(ulong **)(this + 0x10) + 7);
        }
        pIVar15 = *(Isolate **)this;
        if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar18 = *(ulong **)(pIVar15 + 0x95a0);
          if (puVar18 == *(ulong **)(pIVar15 + 0x95a8)) {
            puVar18 = (ulong *)HandleScope::Extend(pIVar15);
          }
          *(ulong **)(pIVar15 + 0x95a0) = puVar18 + 1;
          *puVar18 = uVar26;
        }
        else {
          puVar18 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar26);
        }
        if ((uVar23 & 1) == 0) {
          Descriptor::DataConstant();
        }
        else {
          Descriptor::AccessorConstant((Descriptor *)&local_b0,puVar17,puVar18,uVar27);
        }
        local_90 = local_b0;
        iStack_88 = iStack_a8;
        uStack_7c = uStack_9c;
        local_78 = uStack_98;
        uStack_84 = uStack_a4;
        puVar25 = (undefined8 *)*puVar16;
        uVar21 = *local_b0;
        puVar17 = (ulong *)CONCAT44(uStack_9c,uStack_a0);
        local_b0 = puVar25;
        if (iStack_a8 == 0) {
          if (puVar17 == (ulong *)0x0) {
LAB_01529c94:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr",uVar21);
          }
          uVar26 = *puVar17 | 2;
        }
        else {
          if (puVar17 == (ulong *)0x0) goto LAB_01529c94;
          uVar26 = *puVar17;
        }
        pDVar19 = (DescriptorArray *)&local_b0;
      }
      DescriptorArray::Set(pDVar19,uVar31,uVar21,uVar26,uStack_98);
      uVar31 = uVar31 + 1;
      lVar34 = lVar34 + 0xc00000000;
    } while ((long)iVar28 != uVar31);
  }
  local_90 = (undefined8 *)*puVar16;
  DescriptorArray::Sort((DescriptorArray *)&local_90);
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar16;
}

