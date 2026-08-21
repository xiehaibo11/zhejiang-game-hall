
/* v8::internal::JSObject::MigrateSlowToFast(v8::internal::Handle<v8::internal::JSObject>, int, char
   const*) */

void v8::internal::JSObject::MigrateSlowToFast(ulong *param_1,uint param_2,undefined8 param_3)

{
  uint *puVar1;
  long lVar2;
  Isolate *pIVar3;
  Isolate *pIVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  undefined4 uVar12;
  ulong *puVar13;
  long *plVar14;
  ulong *puVar15;
  ulong *puVar16;
  long *plVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  Logger *pLVar26;
  Isolate *this;
  ulong uVar27;
  int iVar28;
  ulong uVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 *local_b0;
  int iStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 *local_90;
  int iStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  uVar23 = *param_1;
  this = (Isolate *)(uVar23 & 0xffffffff00000000);
  if ((*(uint *)(((ulong)this | 0xb) + (ulong)*(uint *)(uVar23 - 1)) >> 0x15 & 1) == 0)
  goto LAB_010d7020;
  if ((*(uint *)(uVar23 + 3) & 1) == 0) {
    uVar23 = *(ulong *)(this + 0x410);
  }
  else {
    uVar23 = (ulong)this | (ulong)*(uint *)(uVar23 + 3);
  }
  pIVar3 = this + 0x95b8;
  if (*(CanonicalHandleScope **)pIVar3 == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)(this + 0x95a0);
    if (puVar13 == *(ulong **)(this + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)(this + 0x95a0) = puVar13 + 1;
    *puVar13 = uVar23;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar3,uVar23);
    uVar23 = *puVar13;
  }
  if (0x7f9 < *(int *)(uVar23 + 7)) goto LAB_010d7020;
  plVar14 = (long *)BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                    ::IterationIndices(this,puVar13);
  iVar30 = *(int *)(*plVar14 + 3);
  iVar5 = iVar30 >> 1;
  if (iVar30 < 2) {
    iVar28 = 0;
  }
  else {
    iVar21 = 0;
    lVar25 = 0;
    iVar28 = 0;
    do {
      lVar31 = (long)iVar21;
      lVar25 = lVar25 + 1;
      iVar21 = iVar21 + 4;
      iVar28 = ((*(uint *)(*puVar13 + 7 +
                          (((long)((ulong)*(uint *)(*plVar14 + 7 + lVar31) << 0x20) >> 0x21) *
                           0xc00000000 + 0x1c00000000 >> 0x20)) >> 1 ^ 0xffffffff) & 1) + iVar28;
    } while (lVar25 < iVar5);
  }
  uVar23 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1);
  if (*(CanonicalHandleScope **)pIVar3 == (CanonicalHandleScope *)0x0) {
    puVar15 = *(ulong **)(this + 0x95a0);
    if (puVar15 == *(ulong **)(this + 0x95a8)) {
      puVar15 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)(this + 0x95a0) = puVar15 + 1;
    *puVar15 = uVar23;
  }
  else {
    puVar15 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar3,uVar23);
    uVar23 = *puVar15;
  }
  bVar8 = *(byte *)(uVar23 + 3);
  bVar9 = *(byte *)(uVar23 + 4);
  puVar16 = (ulong *)Map::CopyDropDescriptors(this);
  uVar23 = *puVar16;
  if ((*(byte *)(uVar23 + 9) >> 2 & 1) == 0) {
    uVar24 = *(uint *)(uVar23 + 0xb) & 0xefffffff;
    if ((*(byte *)(uVar23 + 9) >> 5 & 1) != 0) goto LAB_010d6a6c;
    uVar22 = 0;
  }
  else {
    uVar24 = *(uint *)(uVar23 + 0xb) & 0xefffffff;
LAB_010d6a6c:
    uVar22 = 0x10000000;
  }
  *(uint *)(uVar23 + 0xb) = uVar22 | uVar24;
  *(uint *)(*puVar16 + 0xb) = *(uint *)(*puVar16 + 0xb) & 0xfddfffff;
  if ((*(uint *)(*puVar15 + 0xb) >> 0x14 & 1) != 0) {
    FUN_010d8b9c();
    UpdatePrototypeUserRegistration(puVar15,puVar16,this);
  }
  iVar21 = (uint)bVar8 - (uint)bVar9;
  if (iVar5 == 0) {
    uVar23 = *puVar16;
    if (*(ushort *)(uVar23 + 7) < 0xaa) {
      if (iVar21 != 0) {
LAB_010d7168:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","0 == value");
      }
      *(undefined1 *)(uVar23 + 5) = 0;
    }
    else {
      if (iVar21 < 0) {
LAB_010d7154:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","0 <= value");
      }
      uVar24 = (((uint)*(byte *)(uVar23 + 3) - iVar21) - (uint)*(byte *)(uVar23 + 4)) +
               (uint)*(byte *)(uVar23 + 4);
      if (0xff < uVar24) {
LAB_010d717c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
      }
      *(char *)(uVar23 + 5) = (char)uVar24;
    }
    uVar27 = *param_1;
    uVar23 = *puVar16;
    if ((int)uVar23 == 0) {
      *(undefined4 *)(uVar27 - 1) = 0;
    }
    else {
      Heap::VerifyObjectLayoutChange((Heap *)(uVar27 & 0xffffffff00000000 | 0x8850),uVar27,uVar23);
      *(int *)(uVar27 - 1) = (int)uVar23;
      if (((uVar23 & 1) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        Heap_MarkingBarrierSlow(uVar27,0,uVar23);
      }
    }
    local_90 = (undefined8 *)*param_1;
    JSReceiver::SetProperties((JSReceiver *)&local_90,*(undefined8 *)(this + 0x168));
    if (FLAG_trace_maps != '\0') {
      pLVar26 = *(Logger **)(this + 0x9558);
      uVar23 = Logger::is_logging(pLVar26);
      if ((uVar23 & 1) != 0) {
        Logger::MapEvent(pLVar26,0x19d6f15,*puVar15,*puVar16,param_3,0);
      }
    }
    goto LAB_010d7020;
  }
  plVar17 = (long *)DescriptorArray::Allocate(this,iVar5,0);
  iVar10 = (iVar28 + param_2) - iVar21;
  uVar24 = iVar21 - iVar28;
  iVar28 = 0;
  if (-1 < iVar10) {
    uVar24 = param_2;
    iVar28 = iVar10;
  }
  puVar18 = (ulong *)Factory::NewPropertyArray((Factory *)this,iVar28);
  if (1 < iVar30) {
    pIVar4 = this + 0x95a0;
    iVar30 = 0;
    lVar25 = 0;
    bVar8 = *(byte *)(*puVar15 + 10);
    iVar28 = 0;
    do {
      lVar31 = ((long)((ulong)*(uint *)(*plVar14 + (long)iVar30 + 7) << 0x20) >> 0x21) * 0xc00000000
      ;
      uVar23 = *puVar13 & 0xffffffff00000000;
      uVar27 = uVar23 | *(uint *)(*puVar13 + (lVar31 + 0x1400000000 >> 0x20) + 7);
      if ((*(ushort *)((uVar23 | 7) + (ulong)*(uint *)(uVar27 - 1)) & 0xffe0) == 0x20) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","k.IsUniqueName()");
      }
      if (*(CanonicalHandleScope **)pIVar3 == (CanonicalHandleScope *)0x0) {
        puVar19 = *(ulong **)pIVar4;
        if (puVar19 == *(ulong **)(this + 0x95a8)) {
          puVar19 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)pIVar4 = puVar19 + 1;
        *puVar19 = uVar27;
      }
      else {
        puVar19 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar3,uVar27);
        uVar27 = *puVar19;
      }
      if ((*(short *)((uVar27 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar27 - 1)) == 0x40) &&
         ((*(byte *)(uVar27 + 7) >> 3 & 1) != 0)) {
        *(uint *)(*puVar16 + 0xb) = *(uint *)(*puVar16 + 0xb) | 0x10000000;
      }
      lVar2 = *puVar13 + 7;
      uVar6 = *(uint *)(lVar2 + (lVar31 + 0x1800000000 >> 0x20));
      uVar32 = (ulong)uVar6;
      uVar7 = *(uint *)(lVar2 + (lVar31 + 0x1c00000000 >> 0x20));
      uVar23 = *puVar13 & 0xffffffff00000000;
      uVar27 = uVar23 | uVar32;
      uVar22 = (int)uVar7 >> 1;
      Descriptor::Descriptor((Descriptor *)&local_90);
      if ((uVar7 >> 1 & 1) == 0) {
        local_b8 = FieldType::Any(this);
        local_c0[0] = 1;
        Descriptor::DataField
                  ((Descriptor *)&local_b0,puVar19,iVar28,uVar22 >> 3 & 7,
                   0x2f < bVar8 || (bVar8 & 0xf8) == 0x18,4,local_c0);
      }
      else {
        if (*(CanonicalHandleScope **)pIVar3 == (CanonicalHandleScope *)0x0) {
          puVar20 = *(ulong **)pIVar4;
          if (puVar20 == *(ulong **)(this + 0x95a8)) {
            puVar20 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)pIVar4 = puVar20 + 1;
          *puVar20 = uVar27;
        }
        else {
          puVar20 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar3,uVar27);
        }
        Descriptor::AccessorConstant((Descriptor *)&local_b0,puVar19,puVar20,uVar22 >> 3 & 7);
      }
      iStack_88 = iStack_a8;
      local_90 = local_b0;
      uStack_7c = (undefined4)uStack_9c;
      local_78 = (undefined4)((ulong)uStack_9c >> 0x20);
      uVar12 = local_78;
      local_80 = uStack_a0;
      local_78._0_1_ = (byte)((ulong)uStack_9c >> 0x20);
      bVar9 = (byte)local_78 >> 1;
      local_78 = uVar12;
      if ((bVar9 & 1) == 0) {
        if (iVar28 < iVar21) {
          uVar29 = *param_1;
          puVar1 = (uint *)((uVar29 - 1) +
                           (long)(int)(iVar28 + (uint)*(byte *)((uVar29 & 0xffffffff00000000 |
                                                                (ulong)*(uint *)(uVar29 - 1)) + 4))
                           * 4);
          *puVar1 = uVar6;
          if ((uVar6 & 1) != 0) {
            uVar23 = uVar23 | uVar32 & 0xfffffffffffc0000;
            uVar32 = *(ulong *)(uVar23 + 8);
            uVar22 = (uint)uVar32;
joined_r0x010d6dd0:
            if ((uVar22 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar29,puVar1,uVar27);
              uVar32 = *(ulong *)(uVar23 | 8);
            }
            if (((uVar32 & 0x18) != 0) &&
               ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar29,puVar1,uVar27);
            }
          }
        }
        else {
          uVar29 = *puVar18;
          lVar31 = uVar29 + (long)((iVar28 - iVar21) * 4);
          *(uint *)(lVar31 + 7) = uVar6;
          if ((uVar6 & 1) != 0) {
            uVar23 = uVar23 | uVar32 & 0xfffffffffffc0000;
            uVar32 = *(ulong *)(uVar23 + 8);
            puVar1 = (uint *)(lVar31 + 7);
            uVar22 = (uint)uVar32;
            goto joined_r0x010d6dd0;
          }
        }
        iVar28 = iVar28 + 1;
      }
      local_b0 = (undefined8 *)*plVar17;
      puVar19 = (ulong *)CONCAT44(uStack_7c,local_80);
      if (iStack_88 == 0) {
        if (puVar19 == (ulong *)0x0) {
LAB_010d713c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr",*local_90);
        }
        uVar23 = *puVar19 | 2;
      }
      else {
        if (puVar19 == (ulong *)0x0) goto LAB_010d713c;
        uVar23 = *puVar19;
      }
      DescriptorArray::Set((DescriptorArray *)&local_b0,lVar25,*local_90,uVar23,local_78);
      lVar25 = lVar25 + 1;
      iVar30 = iVar30 + 4;
    } while (lVar25 < iVar5);
  }
  local_90 = (undefined8 *)*plVar17;
  DescriptorArray::Sort((DescriptorArray *)&local_90);
  LayoutDescriptor::New(this,puVar16,plVar17,(int)*(short *)(*plVar17 + 5));
  local_90 = (undefined8 *)*puVar16;
  Map::SetInstanceDescriptors((Map *)&local_90,this,*plVar17,(int)*(short *)(*plVar17 + 5));
  uVar23 = *puVar16;
  if (iVar10 < 1) {
    if (0xa9 < *(ushort *)(uVar23 + 7)) {
      if ((int)uVar24 < 0) goto LAB_010d7154;
      uVar24 = ((*(byte *)(uVar23 + 3) - uVar24) - (uint)*(byte *)(uVar23 + 4)) +
               (uint)*(byte *)(uVar23 + 4);
      if (0xff < uVar24) goto LAB_010d717c;
      goto LAB_010d6f5c;
    }
    if (uVar24 != 0) goto LAB_010d7168;
    *(undefined1 *)(uVar23 + 5) = 0;
  }
  else {
    if (2 < uVar24) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) < JSObject::kFieldsAdded");
    }
LAB_010d6f5c:
    *(char *)(uVar23 + 5) = (char)uVar24;
  }
  if (FLAG_trace_maps != '\0') {
    pLVar26 = *(Logger **)(this + 0x9558);
    uVar23 = Logger::is_logging(pLVar26);
    if ((uVar23 & 1) != 0) {
      Logger::MapEvent(pLVar26,0x19d6f15,*puVar15,*puVar16,param_3,0);
    }
  }
  uVar27 = *param_1;
  uVar23 = *puVar16;
  if ((int)uVar23 == 0) {
    *(undefined4 *)(uVar27 - 1) = 0;
  }
  else {
    Heap::VerifyObjectLayoutChange((Heap *)(uVar27 & 0xffffffff00000000 | 0x8850),uVar27,uVar23);
    *(int *)(uVar27 - 1) = (int)uVar23;
    if (((uVar23 & 1) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar27,0,uVar23);
    }
  }
  local_90 = (undefined8 *)*param_1;
  JSReceiver::SetProperties((JSReceiver *)&local_90,*puVar18);
LAB_010d7020:
  if (*(long *)(lVar11 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

