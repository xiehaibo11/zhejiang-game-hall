
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceGlobalAccess(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::NameRef
   const&, v8::internal::compiler::AccessMode, v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceGlobalAccess
          (JSNativeContextSpecialization *this,undefined8 param_1,undefined8 param_2,
          undefined8 param_3,undefined8 param_4,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_78 [16];
  char local_68 [8];
  undefined1 auStack_60 [16];
  
  lVar2 = *(long *)(this + 0x18);
  if (*(char *)(lVar2 + 0x18) == '\x01') {
    uStack_88 = *(undefined8 *)(lVar2 + 0x28);
    local_90 = *(undefined8 *)(lVar2 + 0x20);
    local_78 = NativeContextRef::global_object((NativeContextRef *)&local_90);
    JSGlobalObjectRef::GetPropertyCell(local_68,local_78,param_4,0);
    if (local_68[0] == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = ReduceGlobalAccess(this,param_1,param_2,param_3,param_4,param_6,param_7,auStack_60);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","storage_.is_populated_");
}

