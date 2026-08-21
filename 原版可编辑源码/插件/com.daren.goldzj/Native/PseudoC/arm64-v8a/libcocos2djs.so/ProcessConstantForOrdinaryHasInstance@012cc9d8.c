
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessConstantForOrdinaryHasInstance(v8::internal::compiler::HeapObjectRef
   const&, bool*) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessConstantForOrdinaryHasInstance
          (SerializerForBackgroundCompilation *this,HeapObjectRef *param_1,bool *param_2)

{
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  JSFunctionRef local_60 [16];
  JSBoundFunctionRef local_50 [16];
  JSBoundFunctionRef local_40 [16];
  
  uVar2 = ObjectRef::IsJSBoundFunction((ObjectRef *)param_1);
  if ((uVar2 & 1) != 0) {
    local_40 = (JSBoundFunctionRef  [16])ObjectRef::AsJSBoundFunction((ObjectRef *)param_1);
    JSBoundFunctionRef::Serialize(local_40);
    local_50 = (JSBoundFunctionRef  [16])ObjectRef::AsJSBoundFunction((ObjectRef *)param_1);
    auVar4 = JSBoundFunctionRef::bound_target_function(local_50);
    local_40 = (JSBoundFunctionRef  [16])auVar4;
    ProcessConstantForInstanceOf((ObjectRef *)this,(bool *)local_40);
    return;
  }
  uVar2 = ObjectRef::IsJSFunction((ObjectRef *)param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  local_40 = (JSBoundFunctionRef  [16])ObjectRef::AsJSFunction((ObjectRef *)param_1);
  JSFunctionRef::Serialize((JSFunctionRef *)local_40);
  if (*param_2 == false) {
    auVar4 = HeapObjectRef::map(param_1);
    local_40 = (JSBoundFunctionRef  [16])auVar4;
    uVar2 = MapRef::has_prototype_slot((MapRef *)local_40);
    if ((uVar2 & 1) != 0) {
      local_50 = (JSBoundFunctionRef  [16])ObjectRef::AsJSFunction((ObjectRef *)param_1);
      uVar2 = JSFunctionRef::has_prototype((JSFunctionRef *)local_50);
      if ((uVar2 & 1) != 0) {
        local_60 = (JSFunctionRef  [16])ObjectRef::AsJSFunction((ObjectRef *)param_1);
        bVar1 = JSFunctionRef::PrototypeRequiresRuntimeLookup(local_60);
        bVar3 = (bool)(~bVar1 & 1);
        goto LAB_012ccac8;
      }
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
LAB_012ccac8:
  *param_2 = bVar3;
  return;
}

