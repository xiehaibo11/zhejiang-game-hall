
/* v8::internal::Object::GetPropertyWithDefinedGetter(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::JSReceiver>) */

undefined8 v8::internal::Object::GetPropertyWithDefinedGetter(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  Isolate *this;
  Isolate *local_18;
  
  this = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  local_18 = this;
  uVar1 = StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_18,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = Execution::Call(this,param_2,param_1,0,0);
  }
  else {
    Isolate::StackOverflow(this);
    uVar2 = 0;
  }
  return uVar2;
}

