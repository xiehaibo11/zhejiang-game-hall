
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessNamedAccess(v8::internal::compiler::Hints*,
   v8::internal::compiler::NamedAccessFeedback const&, v8::internal::compiler::AccessMode,
   v8::internal::compiler::Hints*) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessNamedAccess
          (SerializerForBackgroundCompilation *this,Hints *param_1,long param_2,int param_4,
          Hints *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  basic_ostream *pbVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [16];
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long local_1a8;
  long local_190;
  long local_188;
  undefined1 local_130 [8];
  undefined1 local_128;
  undefined1 auStack_118 [40];
  long local_f0;
  long local_e8;
  undefined1 local_90 [16];
  long *local_80;
  long *local_78;
  long *plStack_70;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  for (puVar6 = *(undefined8 **)(param_2 + 0x18); puVar6 != puVar1; puVar6 = puVar6 + 1) {
    uVar9 = *puVar6;
    ObjectRef::ObjectRef((ObjectRef *)&local_80,*(undefined8 *)this,uVar9,0);
    uVar3 = ObjectRef::IsMap((ObjectRef *)&local_80);
    if ((uVar3 & 1) == 0) goto LAB_012ce03c;
    if (((*(JSHeapBroker **)this)[0x74] != (JSHeapBroker)0x0) &&
       (FLAG_trace_heap_broker_verbose != '\0')) {
      pbVar4 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)this);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,"Propagating feedback map ",0x19);
      pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,(ObjectRef *)&local_80);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4," to receiver hints.",0x13);
      local_90[0] = 10;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,local_90,1);
    }
    lVar5 = *(long *)(this + 0x20);
    if (lVar5 == 0) {
      lVar5 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
      *(long *)(this + 0x20) = lVar5;
    }
    Hints::AddMap(param_1,uVar9,lVar5,0);
  }
  if (*(long *)param_1 != 0) {
    puVar6 = *(undefined8 **)(*(long *)param_1 + 8);
    uVar9 = **(undefined8 **)this;
    local_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    local_80 = (long *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        while( true ) {
          local_90._0_8_ = *puVar6;
          local_90._0_8_ = Map::TryUpdate(uVar9);
          if ((long *)local_90._0_8_ != (long *)0x0) break;
          local_90._0_8_ = (long *)0x0;
LAB_012cddbc:
          puVar6 = (undefined8 *)puVar6[1];
joined_r0x012cde28:
          if (puVar6 == (undefined8 *)0x0) goto LAB_012cde2c;
        }
        if (((*(uint *)(*(long *)local_90._0_8_ + 0xb) >> 0x14 & 1) != 0) &&
           ((*(uint *)(*(long *)local_90._0_8_ + 0xb) >> 0x16 & 1) == 0)) goto LAB_012cddbc;
        if (local_78 == plStack_70) {
          std::__ndk1::
          vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
          ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>const&>
                    ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                      *)&local_80,local_90);
          puVar6 = (undefined8 *)puVar6[1];
          goto joined_r0x012cde28;
        }
        *local_78 = local_90._0_8_;
        local_78 = local_78 + 1;
        puVar6 = (undefined8 *)puVar6[1];
      } while (puVar6 != (undefined8 *)0x0);
LAB_012cde2c:
      plVar2 = local_78;
      plVar8 = local_78;
      if (local_80 != local_78) {
        plVar7 = local_80;
        do {
          ObjectRef::ObjectRef((ObjectRef *)local_90,*(undefined8 *)this,*plVar7,0);
          uVar3 = ObjectRef::IsMap((ObjectRef *)local_90);
          if ((uVar3 & 1) == 0) {
LAB_012ce03c:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsMap()");
          }
          local_130[0] = 0;
          local_128 = 0;
          ProcessMapForNamedPropertyAccess
                    (auStack_118,this,param_1,local_90._0_8_,local_90._8_8_,param_2 + 8,param_4,
                     local_130,param_5);
          if (local_f0 != 0) {
            local_e8 = local_f0;
          }
          plVar7 = plVar7 + 1;
          plVar8 = local_80;
        } while (plVar2 != plVar7);
      }
      if (plVar8 != (long *)0x0) {
        local_78 = plVar8;
        operator_delete(plVar8);
      }
    }
    if ((*(undefined8 **)param_1 != (undefined8 *)0x0) &&
       (puVar6 = (undefined8 *)**(undefined8 **)param_1, puVar6 != (undefined8 *)0x0)) {
      do {
        ObjectRef::ObjectRef((ObjectRef *)&local_80,*(undefined8 *)this,*puVar6,1);
        if (param_4 == 0) {
          uVar3 = ObjectRef::IsJSObject((ObjectRef *)&local_80);
          if ((uVar3 & 1) != 0) {
            auVar10 = ObjectRef::AsJSObject((ObjectRef *)&local_80);
            local_90 = auVar10;
            auVar10 = HeapObjectRef::map((HeapObjectRef *)local_90);
            auVar11 = ObjectRef::AsJSObject((ObjectRef *)&local_80);
            local_1d0[0] = 1;
            local_1c8 = auVar11;
            ProcessMapForNamedPropertyAccess
                      (auStack_1b8,this,param_1,auVar10._0_8_,auVar10._8_8_,
                       (ObjectRef *)(param_2 + 8),0,local_1d0,param_5);
            if (local_190 != 0) {
              local_188 = local_190;
            }
            if (local_1b0 != 0) {
              local_1a8 = local_1b0;
            }
          }
          uVar3 = ObjectRef::IsJSFunction((ObjectRef *)&local_80);
          if ((uVar3 & 1) != 0) {
            ObjectRef::ObjectRef((ObjectRef *)local_90,*(long **)this,**(long **)this + 0x908,1);
            uVar3 = ObjectRef::equals((ObjectRef *)(param_2 + 8),(ObjectRef *)local_90);
            if ((uVar3 & 1) != 0) {
              auVar10 = ObjectRef::AsJSFunction((ObjectRef *)&local_80);
              local_90 = auVar10;
              JSFunctionRef::Serialize((JSFunctionRef *)local_90);
              if (param_5 != (Hints *)0x0) {
                uVar3 = JSFunctionRef::has_prototype((JSFunctionRef *)local_90);
                if ((uVar3 & 1) != 0) {
                  auVar10 = JSFunctionRef::prototype((JSFunctionRef *)local_90);
                  local_1e0 = auVar10;
                  uVar9 = ObjectRef::object((ObjectRef *)local_1e0);
                  lVar5 = *(long *)(this + 0x20);
                  if (lVar5 == 0) {
                    lVar5 = ZoneStats::NewEmptyZone
                                      (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
                    *(long *)(this + 0x20) = lVar5;
                  }
                  Hints::AddConstant(param_5,uVar9,lVar5);
                }
              }
            }
          }
        }
        puVar6 = (undefined8 *)puVar6[1];
      } while (puVar6 != (undefined8 *)0x0);
    }
  }
  return;
}

