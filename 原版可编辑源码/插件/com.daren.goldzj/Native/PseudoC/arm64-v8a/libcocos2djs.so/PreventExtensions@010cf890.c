
/* v8::internal::JSReceiver::PreventExtensions(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::ShouldThrow) */

undefined2 v8::internal::JSReceiver::PreventExtensions(ulong *param_1)

{
  undefined2 uVar1;
  
  if (*(short *)((*param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_1 - 1)) == 0xa9) {
    uVar1 = JSProxy::PreventExtensions();
  }
  else {
    uVar1 = JSObject::PreventExtensions();
  }
  return uVar1;
}

