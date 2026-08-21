
/* v8::internal::compiler::JSHeapBroker::GetPropertyAccessInfo(v8::internal::compiler::MapRef,
   v8::internal::compiler::NameRef, v8::internal::compiler::AccessMode,
   v8::internal::compiler::CompilationDependencies*, v8::internal::compiler::SerializationPolicy) */

void v8::internal::compiler::JSHeapBroker::GetPropertyAccessInfo
               (PropertyAccessInfo *param_1,JSHeapBroker *param_2,undefined8 *param_3,
               undefined8 param_4,undefined8 *param_5,undefined8 param_6,undefined4 param_7,
               CompilationDependencies *param_8,int param_9)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  basic_ostream *pbVar4;
  long *plVar5;
  undefined8 *puVar6;
  Zone *extraout_x1;
  Zone *pZVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined4 local_218 [2];
  undefined8 *local_210;
  undefined8 *puStack_208;
  undefined8 local_200;
  Zone *local_1f8;
  undefined8 *local_1f0;
  undefined8 *puStack_1e8;
  undefined8 local_1e0;
  Zone *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  AccessInfoFactory aAStack_190 [32];
  undefined8 *local_170;
  undefined8 uStack_168;
  undefined8 *local_160;
  undefined8 uStack_158;
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  Zone *pZStack_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  Zone *pZStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_170 = param_5;
  uStack_168 = param_6;
  local_160 = param_3;
  uStack_158 = param_4;
  local_a0 = param_3;
  uStack_98 = param_4;
  puStack_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  auVar9 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
           ::find<v8::internal::compiler::PropertyAccessTarget>
                     ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
                       *)(param_2 + 0x1f0),(PropertyAccessTarget *)&local_a0);
  pZVar7 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    if (param_9 == 0) {
      if (param_2[0x74] != (JSHeapBroker)0x0) {
        pbVar4 = (basic_ostream *)Trace(param_2);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,"Missing ",8);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,"PropertyAccessInfo for ",0x17);
        pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,param_7);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4," of property ",0xd);
        pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,(ObjectRef *)&local_170);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4," on map ",8);
        pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,(ObjectRef *)&local_160);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4," (",2);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,"../../src/compiler/js-heap-broker.cc",0x24);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,":",1);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,0x133c);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,")",1);
        std::__ndk1::ios_base::getloc();
        plVar5 = (long *)std::__ndk1::locale::use_facet
                                   ((locale *)&local_150,(id *)&std::__ndk1::ctype<char>::id);
        cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
        std::__ndk1::locale::~locale((locale *)&local_150);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar3);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
        pZVar7 = extraout_x1;
      }
      PropertyAccessInfo::Invalid(*(PropertyAccessInfo **)(param_2 + 0x10),pZVar7);
      goto LAB_0173a178;
    }
    if (param_8 == (CompilationDependencies *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(dependencies) != nullptr");
    }
    AccessInfoFactory::AccessInfoFactory(aAStack_190,param_2,param_8,*(Zone **)(param_2 + 0x10));
    AccessInfoFactory::ComputePropertyAccessInfo(local_218,aAStack_190,*param_3,*param_5,param_7);
    if (FLAG_concurrent_inlining != '\0') {
      if (*(int *)(param_2 + 0x70) != 1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","SerializingAllowed()");
      }
      if ((param_2[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
        pbVar4 = (basic_ostream *)Trace(param_2);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,"Storing PropertyAccessInfo for ",0x1f);
        pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,param_7);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4," of property ",0xd);
        pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,(ObjectRef *)&local_170);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4," on map ",8);
        pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,(ObjectRef *)&local_160);
        local_150 = (undefined8 *)CONCAT71(local_150._1_7_,10);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar4,(char *)&local_150,1);
      }
      local_130 = CONCAT44(uStack_7c,local_80);
      uStack_148 = uStack_98;
      local_150 = local_a0;
      uStack_138 = uStack_88;
      puStack_140 = puStack_90;
      local_128 = local_218[0];
      local_120 = (undefined8 *)0x0;
      local_118 = (undefined8 *)0x0;
      local_110 = (undefined8 *)0x0;
      pZStack_108 = local_1f8;
      uVar1 = (long)puStack_208 - (long)local_210;
      if (uVar1 != 0) {
        if ((ulong)((long)uVar1 >> 3) >> 0x1c != 0) goto LAB_0173a1dc;
        puVar6 = *(undefined8 **)(local_1f8 + 0x10);
        if ((ulong)(*(long *)(local_1f8 + 0x18) - (long)puVar6) < uVar1) {
          puVar6 = (undefined8 *)Zone::NewExpand(local_1f8,uVar1);
        }
        else {
          *(ulong *)(local_1f8 + 0x10) = (long)puVar6 + uVar1;
        }
        local_110 = puVar6 + ((long)uVar1 >> 3);
        local_118 = puVar6;
        for (puVar8 = local_210; local_120 = puVar6, puVar8 != puStack_208; puVar8 = puVar8 + 1) {
          *local_118 = *puVar8;
          local_118 = local_118 + 1;
        }
      }
      local_100 = (undefined8 *)0x0;
      local_f8 = (undefined8 *)0x0;
      uVar1 = (long)puStack_1e8 - (long)local_1f0;
      local_f0 = (undefined8 *)0x0;
      pZStack_e8 = local_1d8;
      if (uVar1 != 0) {
        if ((ulong)((long)uVar1 >> 3) >> 0x1c != 0) {
LAB_0173a1dc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar6 = *(undefined8 **)(local_1d8 + 0x10);
        if ((ulong)(*(long *)(local_1d8 + 0x18) - (long)puVar6) < uVar1) {
          puVar6 = (undefined8 *)Zone::NewExpand(local_1d8,uVar1);
        }
        else {
          *(ulong *)(local_1d8 + 0x10) = (long)puVar6 + uVar1;
        }
        local_f0 = puVar6 + ((long)uVar1 >> 3);
        local_f8 = puVar6;
        for (puVar8 = local_1f0; local_100 = puVar6, puVar8 != puStack_1e8; puVar8 = puVar8 + 1) {
          *local_f8 = *puVar8;
          local_f8 = local_f8 + 1;
        }
      }
      uStack_d8 = uStack_1c8;
      local_e0 = local_1d0;
      uStack_c8 = uStack_1b8;
      uStack_d0 = uStack_1c0;
      uStack_b8 = uStack_1a8;
      local_c0 = local_1b0;
      uStack_a8 = uStack_198;
      uStack_b0 = uStack_1a0;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
      ::
      __emplace_unique_key_args<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::pair<v8::internal::compiler::PropertyAccessTarget_const,v8::internal::compiler::PropertyAccessInfo>>
                ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
                  *)(param_2 + 0x1f0),(PropertyAccessTarget *)&local_150,(pair *)&local_150);
      if (local_100 != (undefined8 *)0x0) {
        local_f8 = local_100;
      }
      if (local_120 != (undefined8 *)0x0) {
        local_118 = local_120;
      }
    }
    puVar8 = puStack_208;
    puVar6 = local_210;
    local_210 = (undefined8 *)0x0;
    puStack_208 = (undefined8 *)0x0;
    *(Zone **)(param_1 + 0x20) = local_1f8;
    *(undefined8 *)(param_1 + 0x18) = local_200;
    *(undefined8 **)(param_1 + 0x10) = puVar8;
    *(undefined8 **)(param_1 + 8) = puVar6;
    *(Zone **)(param_1 + 0x40) = local_1d8;
    *(undefined8 *)(param_1 + 0x38) = local_1e0;
    *(undefined8 **)(param_1 + 0x30) = puStack_1e8;
    *(undefined8 **)(param_1 + 0x28) = local_1f0;
    local_200 = 0;
    local_1f0 = (undefined8 *)0x0;
    puStack_1e8 = (undefined8 *)0x0;
    local_1e0 = 0;
    *(undefined4 *)param_1 = local_218[0];
    *(undefined8 *)(param_1 + 0x80) = uStack_198;
    *(undefined8 *)(param_1 + 0x78) = uStack_1a0;
    *(undefined8 *)(param_1 + 0x70) = uStack_1a8;
    *(undefined8 *)(param_1 + 0x68) = local_1b0;
    *(undefined8 *)(param_1 + 0x60) = uStack_1b8;
    *(undefined8 *)(param_1 + 0x58) = uStack_1c0;
    *(undefined8 *)(param_1 + 0x50) = uStack_1c8;
    *(undefined8 *)(param_1 + 0x48) = local_1d0;
  }
  else {
    PropertyAccessInfo::PropertyAccessInfo(param_1,(PropertyAccessInfo *)(auVar9._0_8_ + 0x38));
  }
LAB_0173a178:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

