
/* v8::Context::FromSnapshot(v8::Isolate*, unsigned long, v8::DeserializeInternalFieldsCallback,
   v8::ExtensionConfiguration*, v8::MaybeLocal<v8::Value>, v8::MicrotaskQueue*) */

undefined8 __thiscall
v8::Context::FromSnapshot
          (Context *this,long param_1,undefined8 param_2,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = internal::Snapshot::HasContextSnapshot((Isolate *)this,param_1 + 1U);
  if ((uVar1 & 1) != 0) {
    uVar2 = NewContext((v8 *)this,param_5,0,param_6,param_1 + 1U,param_2,param_4,param_7);
    return uVar2;
  }
  return 0;
}

