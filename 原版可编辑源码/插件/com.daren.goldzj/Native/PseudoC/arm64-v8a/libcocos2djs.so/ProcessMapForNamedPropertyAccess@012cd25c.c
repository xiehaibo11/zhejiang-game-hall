
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessMapForNamedPropertyAccess(v8::internal::compiler::Hints*,
   v8::internal::compiler::MapRef, v8::internal::compiler::NameRef const&,
   v8::internal::compiler::AccessMode, v8::base::Optional<v8::internal::compiler::JSObjectRef>,
   v8::internal::compiler::Hints*) */

void v8::internal::compiler::SerializerForBackgroundCompilation::ProcessMapForNamedPropertyAccess
               (uint *param_1_00,long *param_1,Hints *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 *param_6,int param_7,char *param_8,Hints *param_9)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [8];
  ulong uVar6;
  undefined8 uVar7;
  basic_ostream *pbVar8;
  Isolate *pIVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 local_e8 [16];
  ObjectRef aOStack_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  Zone *pZStack_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = param_4;
  uStack_68 = param_5;
  MapRef::SerializeRootMap((MapRef *)&local_70);
  lVar14 = *param_1;
  if (*(char *)(lVar14 + 0x18) != '\x01') {
LAB_012cd820:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  auStack_a8 = *(undefined1 (*) [8])(lVar14 + 0x28);
  local_b0 = *(undefined1 (*) [8])(lVar14 + 0x20);
  local_80 = NativeContextRef::global_proxy_object((NativeContextRef *)local_b0);
  lVar14 = *param_1;
  if (*(char *)(lVar14 + 0x18) != '\x01') goto LAB_012cd820;
  auStack_a8 = *(undefined1 (*) [8])(lVar14 + 0x28);
  local_b0 = *(undefined1 (*) [8])(lVar14 + 0x20);
  local_90 = NativeContextRef::global_object((NativeContextRef *)local_b0);
  _local_b0 = HeapObjectRef::map((HeapObjectRef *)local_80);
  uVar6 = ObjectRef::equals((ObjectRef *)&local_70,(ObjectRef *)local_b0);
  if ((uVar6 & 1) != 0) {
    JSGlobalObjectRef::GetPropertyCell(local_b0,local_90,param_6,1);
    auVar16._8_8_ = local_e8._8_8_;
    auVar16._0_8_ = local_e8._0_8_;
    if ((param_7 == 0) && (local_e8 = auVar16, local_b0[0] != (NativeContextRef)0x0)) {
      local_e8 = PropertyCellRef::value((PropertyCellRef *)auStack_a8);
      uVar7 = ObjectRef::object((ObjectRef *)local_e8);
      lVar14 = param_1[4];
      if (lVar14 == 0) {
        lVar14 = ZoneStats::NewEmptyZone((ZoneStats *)param_1[3],(char *)param_1[2]);
        param_1[4] = lVar14;
      }
      Hints::AddConstant(param_9,uVar7,lVar14);
    }
  }
  JSHeapBroker::GetPropertyAccessInfo
            (param_1_00,*param_1,local_70,uStack_68,*param_6,param_6[1],param_7,param_1[1],1);
  auVar3._8_8_ = local_c0._8_8_;
  auVar3._0_8_ = local_c0._0_8_;
  if (*param_1_00 == 5) {
    ObjectRef::ObjectRef(aOStack_d0,*param_1,*(undefined8 *)(param_1_00 + 0x12),0);
    uVar6 = ObjectRef::IsCell(aOStack_d0);
    if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsCell()");
    }
  }
  else {
    if ((*param_1_00 != 4) ||
       (puVar12 = *(ulong **)(param_1_00 + 0x12), local_c0 = auVar3, puVar12 == (ulong *)0x0))
    goto LAB_012cd3fc;
    uVar6 = *puVar12;
    if ((uVar6 & 1) != 0) {
      uVar15 = uVar6 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar15 + *(uint *)(uVar6 - 1)) == 0x439) {
        ObjectRef::ObjectRef((ObjectRef *)local_e8,*param_1,puVar12,0);
        uVar6 = ObjectRef::IsJSFunction((ObjectRef *)local_e8);
        if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsJSFunction()");
        }
        uVar7 = MapRef::object((MapRef *)&local_70);
        lVar14 = param_1[4];
        if (lVar14 == 0) {
          lVar14 = ZoneStats::NewEmptyZone((ZoneStats *)param_1[3],(char *)param_1[2]);
          param_1[4] = lVar14;
        }
        local_b0 = (undefined1  [8])0x0;
        Hints::AddMap((Hints *)local_b0,uVar7,lVar14,1);
        auVar5 = local_b0;
        pZStack_98 = (Zone *)param_1[4];
        if (pZStack_98 == (Zone *)0x0) {
          pZStack_98 = (Zone *)ZoneStats::NewEmptyZone((ZoneStats *)param_1[3],(char *)param_1[2]);
          param_1[4] = (long)pZStack_98;
        }
        local_b0 = (undefined1  [8])0x0;
        auStack_a8 = (undefined1  [8])0x0;
        local_a0 = (undefined8 *)0x0;
        puVar11 = *(undefined8 **)(pZStack_98 + 0x10);
        if ((ulong)(*(long *)(pZStack_98 + 0x18) - (long)puVar11) < 8) {
          puVar11 = (undefined8 *)Zone::NewExpand(pZStack_98,8);
        }
        else {
          *(undefined8 **)(pZStack_98 + 0x10) = puVar11 + 1;
        }
        local_a0 = puVar11 + 1;
        *puVar11 = auVar5;
        auStack_a8 = (undefined1  [8])(puVar11 + 1);
        local_b0 = (undefined1  [8])puVar11;
        uVar7 = JSFunctionRef::object((JSFunctionRef *)local_e8);
        ProcessCalleeForCallOrConstruct(param_1,uVar7,0,0,local_b0,1,0,param_9);
        local_c0 = JSFunctionRef::shared((JSFunctionRef *)local_e8);
        puVar12 = (ulong *)SharedFunctionInfoRef::object((SharedFunctionInfoRef *)local_c0);
        uVar1 = *(uint *)(*puVar12 + 3);
        if (((uVar1 & 1) != 0) &&
           (uVar6 = *puVar12 & 0xffffffff00000000,
           *(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar1) - 1)) == 0x4e)) {
          lVar14 = *param_1;
          uVar6 = *puVar12 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar12 + 3);
          pIVar9 = *(Isolate **)*param_1;
          if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar12 = *(ulong **)(pIVar9 + 0x95a0);
            if (puVar12 == *(ulong **)(pIVar9 + 0x95a8)) {
              puVar12 = (ulong *)HandleScope::Extend(pIVar9);
            }
            *(ulong **)(pIVar9 + 0x95a0) = puVar12 + 1;
            *puVar12 = uVar6;
          }
          else {
            puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar6);
          }
          ObjectRef::ObjectRef((ObjectRef *)local_c0,lVar14,puVar12,0);
          uVar6 = ObjectRef::IsFunctionTemplateInfo((ObjectRef *)local_c0);
          if ((uVar6 & 1) == 0) goto LAB_012cd85c;
          uVar6 = FunctionTemplateInfoRef::has_call_code((FunctionTemplateInfoRef *)local_c0);
          if ((uVar6 & 1) != 0) {
            FunctionTemplateInfoRef::SerializeCallCode((FunctionTemplateInfoRef *)local_c0);
            uVar4 = local_c0._8_8_;
            uVar7 = local_c0._0_8_;
            uVar10 = MapRef::object((MapRef *)&local_70);
            ProcessReceiverMapForApiCall(param_1,uVar7,uVar4,uVar10);
          }
        }
        auVar2._8_8_ = local_b0;
        auVar2._0_8_ = local_b0;
        if (local_b0 != (undefined1  [8])0x0) {
          _local_b0 = auVar2;
        }
        goto LAB_012cd3fc;
      }
      if (*(short *)(uVar15 + *(uint *)(uVar6 - 1)) == 0x438) {
        ObjectRef::ObjectRef((ObjectRef *)local_b0,*param_1,puVar12,0);
        uVar6 = ObjectRef::IsJSBoundFunction((ObjectRef *)local_b0);
        if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsJSBoundFunction()");
        }
        JSBoundFunctionRef::Serialize((JSBoundFunctionRef *)local_b0);
        goto LAB_012cd3fc;
      }
    }
    ObjectRef::ObjectRef((ObjectRef *)local_b0,*param_1,puVar12,0);
    uVar6 = ObjectRef::IsFunctionTemplateInfo((ObjectRef *)local_b0);
    if ((uVar6 & 1) == 0) {
LAB_012cd85c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFunctionTemplateInfo()");
    }
    uVar6 = FunctionTemplateInfoRef::has_call_code((FunctionTemplateInfoRef *)local_b0);
    if ((uVar6 & 1) != 0) {
      FunctionTemplateInfoRef::SerializeCallCode((FunctionTemplateInfoRef *)local_b0);
    }
  }
LAB_012cd3fc:
  if (param_7 - 1U < 2) {
    if (((*param_1_00 & 0xfffffffe) == 2) && (lVar14 = *(long *)(param_1_00 + 0x14), lVar14 != 0)) {
      ObjectRef::ObjectRef((ObjectRef *)local_b0,*param_1,lVar14,0);
      uVar6 = ObjectRef::IsMap((ObjectRef *)local_b0);
      if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      if ((((JSHeapBroker *)*param_1)[0x74] != (JSHeapBroker)0x0) &&
         (FLAG_trace_heap_broker_verbose != '\0')) {
        pbVar8 = (basic_ostream *)JSHeapBroker::Trace((JSHeapBroker *)*param_1);
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar8,"Propagating transition map ",0x1b);
        pbVar8 = (basic_ostream *)compiler::operator<<(pbVar8,(ObjectRef *)local_b0);
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar8," to receiver hints.",0x13);
        local_e8[0] = (ObjectRef)0xa;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar8,local_e8,1);
      }
      lVar13 = param_1[4];
      if (lVar13 == 0) {
        lVar13 = ZoneStats::NewEmptyZone((ZoneStats *)param_1[3],(char *)param_1[2]);
        param_1[4] = lVar13;
      }
      Hints::AddMap(param_3,lVar14,lVar13,0);
    }
  }
  else if ((param_7 == 0) && (*param_1_00 == 3)) {
    local_b0 = (undefined1  [8])((ulong)local_b0 & 0xffffffffffffff00);
    auStack_a8 = (undefined1  [8])((ulong)auStack_a8 & 0xffffffffffffff00);
    if (*(long *)(param_1_00 + 0x16) == 0) {
      if (*param_8 == '\0') {
        return;
      }
      auVar16 = HeapObjectRef::map((HeapObjectRef *)(param_8 + 8));
      local_e8 = auVar16;
      uVar6 = ObjectRef::equals((ObjectRef *)local_e8,(ObjectRef *)&local_70);
      if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "concrete_receiver.has_value() implies concrete_receiver->map().equals(receiver_map)"
                );
      }
      if (*param_8 == '\0') {
        return;
      }
      _auStack_a8 = *(undefined1 (*) [16])(param_8 + 8);
    }
    else {
      ObjectRef::ObjectRef((ObjectRef *)local_e8,*param_1,*(long *)(param_1_00 + 0x16),0);
      uVar6 = ObjectRef::IsJSObject((ObjectRef *)local_e8);
      if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsJSObject()");
      }
      _auStack_a8 = local_e8;
    }
    if (local_b0[0] == (NativeContextRef)0x0) {
      local_b0._1_7_ = (undefined7)((ulong)local_b0 >> 8);
      local_b0[0] = (NativeContextRef)0x1;
    }
    JSObjectRef::GetOwnDataProperty
              (local_e8,auStack_a8,(char)param_1_00[0x1a],*(undefined8 *)(param_1_00 + 0x18),1);
    if (local_e8[0] != (ObjectRef)0x0) {
      uVar7 = ObjectRef::object((ObjectRef *)(local_e8 + 8));
      lVar14 = param_1[4];
      if (lVar14 == 0) {
        lVar14 = ZoneStats::NewEmptyZone((ZoneStats *)param_1[3],(char *)param_1[2]);
        param_1[4] = lVar14;
      }
      Hints::AddConstant(param_9,uVar7,lVar14);
    }
  }
  return;
}

