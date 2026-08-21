
/* v8::internal::compiler::JSNativeContextSpecialization::JSNativeContextSpecialization(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::JSGraph*, v8::internal::compiler::JSHeapBroker*,
   v8::base::Flags<v8::internal::compiler::JSNativeContextSpecialization::Flag, int>,
   v8::internal::compiler::CompilationDependencies*, v8::internal::Zone*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::JSNativeContextSpecialization
          (JSNativeContextSpecialization *this,undefined8 param_1,undefined8 param_2,long param_3,
          undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  
  *(undefined8 *)(this + 0x10) = param_2;
  *(long *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x20) = param_5;
  *(undefined ***)this = &PTR__Reducer_01ccdbb0;
  *(undefined8 *)(this + 8) = param_1;
  if (*(char *)(param_3 + 0x18) == '\x01') {
    uStack_58 = *(undefined8 *)(param_3 + 0x28);
    local_60 = *(undefined8 *)(param_3 + 0x20);
    local_50 = NativeContextRef::global_object((NativeContextRef *)&local_60);
    uVar1 = JSGlobalObjectRef::object((JSGlobalObjectRef *)local_50);
    *(undefined8 *)(this + 0x28) = uVar1;
    if (*(char *)(param_3 + 0x18) == '\x01') {
      uStack_58 = *(undefined8 *)(param_3 + 0x28);
      local_60 = *(undefined8 *)(param_3 + 0x20);
      auVar2 = NativeContextRef::global_proxy_object((NativeContextRef *)&local_60);
      local_50 = auVar2;
      uVar1 = JSGlobalProxyRef::object((JSGlobalProxyRef *)local_50);
      *(undefined8 *)(this + 0x30) = uVar1;
      *(undefined8 *)(this + 0x38) = param_6;
      *(undefined8 *)(this + 0x40) = param_7;
      *(undefined8 *)(this + 0x48) = param_8;
      uVar1 = TypeCache::Get();
      *(undefined8 *)(this + 0x50) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","storage_.is_populated_");
}

