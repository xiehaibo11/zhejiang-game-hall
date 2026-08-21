
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessConstantForInstanceOf(v8::internal::compiler::ObjectRef
   const&, bool*) */

void v8::internal::compiler::SerializerForBackgroundCompilation::ProcessConstantForInstanceOf
               (ObjectRef *param_1,bool *param_2)

{
  int iVar1;
  ulong uVar2;
  bool *in_x2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  char local_120 [8];
  ObjectRef aOStack_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8 [22];
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  HeapObjectRef local_60 [16];
  
  uVar2 = ObjectRef::IsHeapObject((ObjectRef *)param_2);
  if ((uVar2 & 1) == 0) {
    return;
  }
  local_60 = (HeapObjectRef  [16])ObjectRef::AsHeapObject((ObjectRef *)param_2);
  uVar3 = *(undefined8 *)param_1;
  auVar4 = HeapObjectRef::map(local_60);
  ObjectRef::ObjectRef((ObjectRef *)&local_f8,*(long **)param_1,**(long **)param_1 + 0xc68,0);
  uVar2 = ObjectRef::IsName((ObjectRef *)&local_f8);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()");
  }
  JSHeapBroker::GetPropertyAccessInfo
            (local_e8,uVar3,auVar4._0_8_,auVar4._8_8_,local_f8,uStack_f0,0,
             *(undefined8 *)(param_1 + 8),1);
  if (local_e8[0] == 3) {
    if (local_90 == 0) {
      local_108 = ObjectRef::AsJSObject((ObjectRef *)param_2);
    }
    else {
      ObjectRef::ObjectRef((ObjectRef *)local_108,*(undefined8 *)param_1,local_90,0);
      uVar2 = ObjectRef::IsJSObject((ObjectRef *)local_108);
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsJSObject()");
      }
    }
    JSObjectRef::GetOwnDataProperty(local_120,local_108,local_80,local_88,1);
    if (local_120[0] == '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","constant.has_value()");
    }
    uVar2 = ObjectRef::IsJSFunction(aOStack_118);
    if ((uVar2 & 1) == 0) {
      return;
    }
    local_130 = ObjectRef::AsJSFunction(aOStack_118);
    JSFunctionRef::Serialize((JSFunctionRef *)local_130);
    local_140 = JSFunctionRef::shared((JSFunctionRef *)local_130);
    uVar2 = SharedFunctionInfoRef::HasBuiltinId((SharedFunctionInfoRef *)local_140);
    if ((uVar2 & 1) == 0) {
      return;
    }
    local_150 = JSFunctionRef::shared((JSFunctionRef *)local_130);
    iVar1 = SharedFunctionInfoRef::builtin_id((SharedFunctionInfoRef *)local_150);
    if (iVar1 != 0x144) {
      return;
    }
  }
  else if (local_e8[0] != 1) {
    return;
  }
  ProcessConstantForOrdinaryHasInstance
            ((SerializerForBackgroundCompilation *)param_1,local_60,in_x2);
  return;
}

