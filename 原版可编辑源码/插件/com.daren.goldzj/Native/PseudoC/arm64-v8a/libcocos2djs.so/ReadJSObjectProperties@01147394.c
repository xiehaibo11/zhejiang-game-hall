
/* v8::internal::ValueDeserializer::ReadJSObjectProperties(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::SerializationTag, bool) */

ulong __thiscall
v8::internal::ValueDeserializer::ReadJSObjectProperties
          (ValueDeserializer *this,ulong *param_2,char param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  char local_11c [4];
  ulong *local_118;
  long *local_110;
  long *plStack_108;
  long *local_100;
  undefined8 local_f8;
  ulong *puStack_f0;
  ulong local_e8;
  ulong local_e0;
  int local_d8;
  Isolate *local_a0;
  ulong *local_98;
  ulong local_90;
  Isolate *local_88;
  int local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((param_4 & 1) != 0) {
    pIVar6 = *(Isolate **)this;
    uVar19 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar19;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar19);
    }
    local_110 = operator_new(0x40);
    local_100 = local_110 + 8;
    plStack_108 = local_110;
LAB_01147470:
    pcVar13 = *(char **)(this + 0x10);
    pcVar15 = pcVar13;
    do {
      if (*(char **)(this + 0x18) <= pcVar15) goto LAB_01147830;
      cVar1 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar1 == '\0');
    if (cVar1 == param_3) goto LAB_01147974;
    local_a0 = *(Isolate **)this;
    local_90 = *puVar7;
    local_88 = local_a0 + *(uint *)(local_90 + 0x23);
    iVar4 = 1;
    local_98 = puVar7;
    if ((((ulong)local_88 & 1) != 0) && ((int)local_88 != 3)) {
      uVar19 = (ulong)local_88 & 3;
      iVar4 = (int)uVar19;
      if (uVar19 != 3) {
        if (uVar19 != 1) goto LAB_01147b7c;
        uVar19 = (ulong)local_88 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar19 + *(uint *)(local_88 + -1)) == 0x98) {
          iVar4 = 4;
        }
        else {
          iVar4 = (uint)(*(short *)(uVar19 + *(uint *)(local_88 + -1)) != 100) << 1;
        }
      }
    }
    local_80 = iVar4;
    puVar8 = (ulong *)TransitionsAccessor::ExpectedTransitionKey((TransitionsAccessor *)&local_a0);
    if ((puVar8 == (ulong *)0x0) || (uVar19 = ReadExpectedString(this,puVar8), (uVar19 & 1) == 0)) {
      puVar8 = (ulong *)ReadObject(this);
      if (puVar8 != (ulong *)0x0) {
        uVar19 = *puVar8;
        if ((uVar19 & 1) != 0) {
          uVar14 = uVar19 & 0xffffffff00000000 | 7;
          if ((0x40 < *(ushort *)(uVar14 + *(uint *)(uVar19 - 1))) &&
             (*(short *)(uVar14 + *(uint *)(uVar19 - 1)) != 0x42)) goto LAB_01147830;
          if (*(ushort *)(uVar14 + *(uint *)(uVar19 - 1)) < 0x40) {
            uVar16 = *(ulong *)this;
            if (0x1f < *(ushort *)(uVar14 + *(uint *)(uVar19 - 1))) {
              puVar8 = (ulong *)StringTable::LookupString(uVar16,puVar8);
              uVar16 = *(ulong *)this;
            }
            local_e8 = *puVar7;
            local_e0 = *(uint *)(local_e8 + 0x23) + uVar16;
            iVar4 = 1;
            local_f8 = uVar16;
            puStack_f0 = puVar7;
            if (((local_e0 & 1) != 0) && ((int)local_e0 != 3)) {
              uVar19 = local_e0 & 3;
              iVar4 = (int)uVar19;
              if (uVar19 != 3) {
                if (uVar19 != 1) goto LAB_01147b7c;
                uVar19 = local_e0 & 0xffffffff00000000 | 7;
                if (*(short *)(uVar19 + *(uint *)(local_e0 - 1)) == 0x98) {
                  iVar4 = 4;
                }
                else {
                  iVar4 = (uint)(*(short *)(uVar19 + *(uint *)(local_e0 - 1)) != 100) << 1;
                }
              }
            }
            local_d8 = iVar4;
            puVar9 = (ulong *)TransitionsAccessor::FindTransitionToDataProperty
                                        ((TransitionsAccessor *)&local_f8,puVar8,1);
            bVar5 = puVar9 != (ulong *)0x0;
            goto LAB_011476d0;
          }
        }
        puVar9 = (ulong *)0x0;
        bVar5 = false;
        goto LAB_011476d0;
      }
LAB_01147830:
      uVar14 = 0;
      goto LAB_01147838;
    }
    if (local_80 == 3) {
      uVar19 = (ulong)local_88 & 0xfffffffffffffffd;
    }
    else {
      if (local_80 != 4) {
LAB_01147b7c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar19 = (ulong)local_88 & 0xffffffff00000000 | (ulong)*(uint *)(local_88 + 0x13) & 0xfffffffd
      ;
    }
    if (*(CanonicalHandleScope **)(local_a0 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar6 = local_a0 + 0x95a0;
      puVar9 = *(ulong **)pIVar6;
      if (puVar9 == *(ulong **)(local_a0 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(local_a0);
      }
      *(ulong **)pIVar6 = puVar9 + 1;
      *puVar9 = uVar19;
      bVar5 = true;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(local_a0 + 0x95b8),uVar19);
      bVar5 = true;
    }
LAB_011476d0:
    local_118 = (ulong *)0x0;
    puVar10 = (ulong *)ReadObject(this);
    if (puVar10 == (ulong *)0x0) goto LAB_01147830;
    local_118 = puVar10;
    if (bVar5) {
      uVar19 = *puVar9 & 0xffffffff00000000;
      uVar22 = (long)plStack_108 - (long)local_110 >> 3;
      uVar14 = (long)(uVar22 * 0xc00000000 + 0x1000000000) >> 0x20;
      uVar16 = uVar19 | *(uint *)(*puVar9 + 0x17);
      uVar17 = *puVar10;
      uVar20 = *(int *)((uVar14 | 3) + uVar16) >> 1;
      uVar2 = uVar20 >> 6 & 7;
      if ((uVar2 == 1) && (FLAG_track_fields != '\0')) {
        if ((uVar17 & 1) != 0) goto LAB_01147998;
      }
      else if ((uVar2 == 2) && (FLAG_track_double_fields != '\0')) {
        if (((uVar17 & 1) != 0) &&
           (*(short *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0x42))
        goto LAB_01147998;
      }
      else {
        if ((uVar2 == 3) && (FLAG_track_heap_object_fields != '\0')) {
          if ((uVar17 & 1) == 0) goto LAB_01147998;
        }
        else {
          if ((FLAG_track_fields != '\0') && (uVar2 == 0)) goto LAB_01147998;
          if (uVar2 != 3) goto LAB_01147810;
        }
        local_f8 = Map::UnwrapFieldType(uVar19 | *(uint *)(uVar14 + uVar16 + 7));
        uVar19 = FieldType::NowContains((FieldType *)&local_f8,*local_118);
        if ((uVar19 & 1) == 0) {
          local_f8 = *local_118;
          uVar11 = Object::OptimalType((Object *)&local_f8,*(undefined8 *)this,uVar2);
          Map::GeneralizeField(*(undefined8 *)this,puVar9,uVar22,uVar20 >> 2 & 1,uVar2,uVar11);
        }
      }
LAB_01147810:
      puVar7 = puVar9;
      if (plStack_108 == local_100) {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Object>const&>
                  ((vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
                    *)&local_110,(Handle *)&local_118);
      }
      else {
        *plStack_108 = (long)local_118;
        plStack_108 = plStack_108 + 1;
      }
      goto LAB_01147470;
    }
    uVar22 = (long)plStack_108 - (long)local_110 >> 3;
LAB_01147998:
    if (0xfffffffe < uVar22) goto LAB_01147b44;
    JSObject::AllocateStorageForMap(param_2,puVar7);
    uVar19 = *param_2;
    lVar12 = (long)plStack_108 - (long)local_110;
    if (lVar12 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar19 & 0xffffffff00000000;
      uVar20 = *(uint *)((uVar14 | *(uint *)(uVar19 - 1)) + 0x17);
      lVar21 = 0x1000000000;
      for (lVar18 = 0; local_f8 = uVar19,
          JSObject::WriteToField
                    ((JSObject *)&local_f8,lVar18,
                     *(int *)((lVar21 >> 0x20 | 3U) + (uVar14 | uVar20)) >> 1,
                     *(undefined8 *)local_110[lVar18]), (lVar12 >> 3) + -1 != lVar18;
          lVar18 = lVar18 + 1) {
        uVar19 = *param_2;
        lVar21 = lVar21 + 0xc00000000;
      }
      uVar14 = (ulong)((long)plStack_108 - (long)local_110) >> 3;
    }
    LookupIterator::PropertyOrElement
              ((LookupIterator *)&local_f8,*(undefined8 *)this,param_2,puVar8,local_11c,1);
    if ((local_11c[0] == '\0') || (local_f8._4_4_ != 4)) {
LAB_01147838:
      uVar19 = 0;
      bVar5 = true;
    }
    else {
      lVar12 = JSObject::DefineOwnPropertyIgnoreAttributes(&local_f8,local_118,0,1);
      bVar5 = lVar12 == 0;
      uVar19 = 0;
      uVar20 = (uint)uVar14;
      if (!bVar5) {
        uVar20 = uVar20 + 1;
      }
      uVar14 = (ulong)uVar20;
    }
    goto joined_r0x01147844;
  }
  uVar14 = 0;
  goto LAB_01147854;
  while( true ) {
    cVar1 = *pcVar13;
    *(char **)(this + 0x10) = pcVar13 + 1;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != '\0') break;
LAB_01147920:
    if (*(char **)(this + 0x18) <= pcVar13) {
      v8::V8::FromJustIsNothing();
      break;
    }
  }
  uVar19 = uVar14 << 0x20 | 1;
  goto LAB_0114793c;
  while( true ) {
    cVar1 = *pcVar13;
    *(char **)(this + 0x10) = pcVar13 + 1;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != '\0') break;
LAB_01147974:
    if (*(char **)(this + 0x18) <= pcVar13) {
      v8::V8::FromJustIsNothing();
      break;
    }
  }
  JSObject::AllocateStorageForMap(param_2,puVar7);
  uVar19 = *param_2;
  lVar12 = (long)plStack_108 - (long)local_110;
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    uVar14 = uVar19 & 0xffffffff00000000;
    uVar20 = *(uint *)((uVar14 | *(uint *)(uVar19 - 1)) + 0x17);
    lVar21 = 0x1000000000;
    for (lVar18 = 0; local_f8 = uVar19,
        JSObject::WriteToField
                  ((JSObject *)&local_f8,lVar18,
                   *(int *)((lVar21 >> 0x20 | 3U) + (uVar14 | uVar20)) >> 1,
                   *(undefined8 *)local_110[lVar18]), (lVar12 >> 3) + -1 != lVar18;
        lVar18 = lVar18 + 1) {
      uVar19 = *param_2;
      lVar21 = lVar21 + 0xc00000000;
    }
    lVar12 = (long)plStack_108 - (long)local_110;
    if (0xfffffffe < (ulong)(lVar12 >> 3)) {
LAB_01147b44:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","properties.size() < std::numeric_limits<uint32_t>::max()");
    }
  }
  uVar14 = 0;
  bVar5 = true;
  uVar19 = lVar12 << 0x1d | 1;
joined_r0x01147844:
  if (local_110 != (long *)0x0) {
    plStack_108 = local_110;
    operator_delete(local_110);
  }
  if (bVar5) goto LAB_0114793c;
LAB_01147854:
  while( true ) {
    pcVar13 = *(char **)(this + 0x10);
    do {
      if (*(char **)(this + 0x18) <= pcVar13) goto LAB_01147938;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 == '\0');
    pcVar13 = *(char **)(this + 0x10);
    if (cVar1 == param_3) goto LAB_01147920;
    puVar7 = (ulong *)ReadObject(this);
    uVar19 = 0;
    if (puVar7 == (ulong *)0x0) goto LAB_0114793c;
    uVar19 = *puVar7;
    if (((((uVar19 & 1) != 0) &&
         (uVar16 = uVar19 & 0xffffffff00000000 | 7,
         0x40 < *(ushort *)(uVar16 + *(uint *)(uVar19 - 1)))) &&
        (*(short *)(uVar16 + *(uint *)(uVar19 - 1)) != 0x42)) ||
       (lVar12 = ReadObject(this), lVar12 == 0)) break;
    LookupIterator::PropertyOrElement
              ((LookupIterator *)&local_f8,*(undefined8 *)this,param_2,puVar7,&local_a0,1);
    if (((local_a0._0_1_ == (TransitionsAccessor)0x0) || (local_f8._4_4_ != 4)) ||
       (lVar12 = JSObject::DefineOwnPropertyIgnoreAttributes(&local_f8,lVar12,0,1), lVar12 == 0))
    break;
    uVar14 = (ulong)((int)uVar14 + 1);
  }
LAB_01147938:
  uVar19 = 0;
LAB_0114793c:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

