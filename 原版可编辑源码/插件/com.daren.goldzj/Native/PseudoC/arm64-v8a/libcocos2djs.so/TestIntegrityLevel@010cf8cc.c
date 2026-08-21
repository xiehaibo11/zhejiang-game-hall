
/* v8::internal::JSReceiver::TestIntegrityLevel(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::PropertyAttributes) */

undefined2 v8::internal::JSReceiver::TestIntegrityLevel(ulong *param_1)

{
  undefined2 uVar1;
  
  if (*(ushort *)((*param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1)) + 7) < 0x412) {
    uVar1 = FUN_010cf908();
  }
  else {
    uVar1 = JSObject::TestIntegrityLevel();
  }
  return uVar1;
}

