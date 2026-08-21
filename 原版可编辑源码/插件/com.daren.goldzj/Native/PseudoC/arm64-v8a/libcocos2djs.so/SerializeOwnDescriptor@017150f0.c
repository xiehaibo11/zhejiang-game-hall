
/* v8::internal::compiler::MapData::SerializeOwnDescriptor(v8::internal::compiler::JSHeapBroker*,
   v8::internal::InternalIndex) */

void __thiscall
v8::internal::compiler::MapData::SerializeOwnDescriptor
          (MapData *this,JSHeapBroker *param_1,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  Isolate *pIVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  basic_ostream *pbVar15;
  int *piVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong local_98;
  int local_7c;
  long local_78 [2];
  int *local_68;
  
  TraceScope::TraceScope((TraceScope *)local_78,param_1,this,"MapData::SerializeOwnDescriptor");
  puVar22 = *(undefined8 **)(this + 0x70);
  puVar24 = *(ulong **)this;
  if (puVar22 == (undefined8 *)0x0) {
    pIVar6 = *(Isolate **)param_1;
    uVar23 = *puVar24 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar24 + 0x17);
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar23;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar23);
    }
    puVar22 = (undefined8 *)JSHeapBroker::GetOrCreateData(param_1,puVar7);
    if (*(int *)(puVar22 + 1) != 1) goto LAB_01715640;
    if (*(short *)(puVar22[2] + 0x18) != 0x9c) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsDescriptorArray()");
    }
    *(undefined8 **)(this + 0x70) = puVar22;
  }
  iVar21 = (int)param_3;
  if ((int)(*(uint *)(*puVar24 + 0xb) >> 10 & 0x3ff) <= iVar21) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","descriptor_index.as_int() < map->NumberOfOwnDescriptors()");
  }
  puVar17 = puVar22 + 4;
  puVar18 = (undefined8 *)*puVar17;
  puVar20 = puVar17;
  if (puVar18 != (undefined8 *)0x0) {
    do {
      if (iVar21 <= *(int *)(puVar18 + 4)) {
        puVar20 = puVar18;
      }
      puVar18 = (undefined8 *)puVar18[*(int *)(puVar18 + 4) < iVar21];
    } while (puVar18 != (undefined8 *)0x0);
    if ((puVar20 != puVar17) && (*(int *)(puVar20 + 4) <= iVar21)) goto LAB_01715610;
  }
  puVar7 = (ulong *)*puVar22;
  uVar23 = *puVar7;
  if (*(int *)(*puVar24 + 0x17) != (int)uVar23) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","*descriptors == map->instance_descriptors()");
  }
  pIVar6 = *(Isolate **)param_1;
  uVar25 = param_3 * 0xc00000000 + 0x1000000000 >> 0x20;
  uVar23 = uVar23 & 0xffffffff00000000 | (ulong)*(uint *)(uVar25 + uVar23 + -1);
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar23;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar23);
  }
  lVar9 = JSHeapBroker::GetOrCreateData(param_1,puVar8);
  if (*(int *)(lVar9 + 8) != 1) {
LAB_01715640:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (0x40 < *(ushort *)(*(long *)(lVar9 + 0x10) + 0x18)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()");
  }
  uVar23 = *puVar7;
  uVar19 = (ulong)*(uint *)(uVar23 + uVar25 + 7);
  if ((uVar19 & 3) == 1) {
    pIVar10 = *(Isolate **)param_1;
    uVar19 = uVar23 & 0xffffffff00000000 | uVar19;
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar19;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar19);
    }
    uVar11 = JSHeapBroker::GetOrCreateData(param_1,puVar8);
    uVar23 = *puVar7;
  }
  else {
    uVar11 = 0;
  }
  uVar2 = *(uint *)(uVar23 + (uVar25 | 3));
  if ((uVar2 >> 2 & 1) == 0) {
    piVar16 = (int *)*puVar24;
    uVar1 = *(int *)(((ulong)piVar16 & 0xffffffff00000000) + (uVar25 | 3) +
                    (ulong)*(uint *)((long)piVar16 + 0x17)) >> 1;
    uVar5 = uVar1 >> 0x13 & 0x3ff;
    iVar4 = (uint)*(byte *)((long)piVar16 + 3) - (uint)*(byte *)(piVar16 + 1);
    if ((int)uVar5 < iVar4) {
      local_98 = (ulong)*(byte *)(piVar16 + 1) << 0x1c;
      iVar3 = (uVar5 + *(byte *)(piVar16 + 1)) * 4;
    }
    else {
      iVar3 = (uVar5 - iVar4) * 4 + 8;
      local_98 = 0x20000000;
    }
    uVar1 = uVar1 >> 6 & 7;
    local_68 = (int *)CONCAT71(local_68._1_7_,(char)uVar1);
    if (4 < uVar1) {
      uVar11 = Representation::Mnemonic((Representation *)&local_68);
      PrintF("%s\n",uVar11);
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_68 = piVar16;
    uVar23 = Map::FindFieldOwner((Map *)&local_68,pIVar6,param_3);
    pIVar6 = *(Isolate **)param_1;
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar24 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar24 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar24 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar24 + 1;
      *puVar24 = uVar23;
    }
    else {
      puVar24 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar23);
    }
    lVar12 = JSHeapBroker::GetOrCreateData(param_1,puVar24);
    if (*(int *)(lVar12 + 8) != 1) goto LAB_01715640;
    if (*(short *)(*(long *)(lVar12 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    uVar23 = (ulong)((int)uVar5 < iVar4) << 0xd | (long)iVar4 << 0x10 | (long)iVar3 | local_98 |
             *(ulong *)(&DAT_01a5e7b0 + (ulong)uVar1 * 8);
    uVar25 = Map::UnwrapFieldType
                       (*puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + uVar25 + 7));
    pIVar6 = *(Isolate **)param_1;
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar24 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar24 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar24 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar24 + 1;
      *puVar24 = uVar25;
    }
    else {
      puVar24 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar25);
    }
    uVar13 = JSHeapBroker::GetOrCreateData(param_1,puVar24);
  }
  else {
    uVar13 = 0;
    lVar12 = 0;
    uVar23 = 0;
  }
  local_68 = &local_7c;
  local_7c = iVar21;
  lVar14 = std::__ndk1::
           __tree<std::__ndk1::__value_type<int,v8::internal::compiler::PropertyDescriptor>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::PropertyDescriptor>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::PropertyDescriptor>>>
           ::
           __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                     ((int *)(puVar22 + 3),(piecewise_construct_t *)&local_7c,(tuple *)&DAT_01a5e7ac
                      ,(tuple *)&local_68);
  *(int *)(lVar14 + 0x38) = (int)uVar2 >> 1;
  *(ulong *)(lVar14 + 0x40) = uVar23;
  *(long *)(lVar14 + 0x48) = lVar12;
  *(undefined8 *)(lVar14 + 0x50) = uVar13;
  *(long *)(lVar14 + 0x28) = lVar9;
  *(undefined8 *)(lVar14 + 0x30) = uVar11;
  *(undefined1 *)(lVar14 + 0x58) = 0;
  if ((uVar2 >> 2 & 1) == 0) {
    SerializeOwnDescriptor((MapData *)lVar12,param_1,param_3);
  }
  if ((param_1[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
    pbVar15 = (basic_ostream *)JSHeapBroker::Trace(param_1);
    pbVar15 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar15,"Copied descriptor ",0x12);
    pbVar15 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar15,iVar21);
    pbVar15 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar15," into ",6);
    pbVar15 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar15,
                         *(void **)(this + 0x70));
    pbVar15 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar15," (",2);
    pbVar15 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar15,puVar22[6]);
    pbVar15 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar15," total)",7);
    local_68 = (int *)CONCAT71(local_68._1_7_,10);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar15,(char *)&local_68,1);
  }
LAB_01715610:
  *(int *)(local_78[0] + 0x170) = *(int *)(local_78[0] + 0x170) + -1;
  return;
}

