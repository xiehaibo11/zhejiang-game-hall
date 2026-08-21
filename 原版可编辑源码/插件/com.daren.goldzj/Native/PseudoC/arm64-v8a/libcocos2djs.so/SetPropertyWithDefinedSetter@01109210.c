
/* v8::internal::Object::SetPropertyWithDefinedSetter(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::Object>,
   v8::Maybe<v8::internal::ShouldThrow>) */

undefined8
v8::internal::Object::SetPropertyWithDefinedSetter
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_18;
  
  local_18 = param_3;
  lVar2 = Execution::Call((ulong)*(uint *)(param_2 + 4) << 0x20,param_2,param_1,1,&local_18);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = 0x101;
  }
  return uVar1;
}

