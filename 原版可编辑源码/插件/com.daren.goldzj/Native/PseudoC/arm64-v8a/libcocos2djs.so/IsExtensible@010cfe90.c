
/* v8::internal::JSReceiver::IsExtensible(v8::internal::Handle<v8::internal::JSReceiver>) */

undefined2 v8::internal::JSReceiver::IsExtensible(ulong *param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  
  if (*(short *)((*param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_1 - 1)) == 0xa9) {
    uVar1 = JSProxy::IsExtensible();
  }
  else {
    uVar2 = JSObject::IsExtensible();
    uVar1 = 0x101;
    if ((uVar2 & 1) == 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

