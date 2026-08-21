
/* v8::internal::JSReceiver::SetPrototype(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Object>, bool, v8::internal::ShouldThrow) */

undefined2 v8::internal::JSReceiver::SetPrototype(ulong *param_1,undefined8 param_2,uint param_3)

{
  undefined2 uVar1;
  
  if (*(short *)((*param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_1 - 1)) == 0xa9) {
    uVar1 = JSProxy::SetPrototype();
  }
  else {
    uVar1 = JSObject::SetPrototype(param_1,param_2,param_3 & 1);
  }
  return uVar1;
}

