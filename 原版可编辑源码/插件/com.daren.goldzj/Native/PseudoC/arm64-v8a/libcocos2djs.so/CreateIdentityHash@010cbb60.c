
/* v8::internal::JSReceiver::CreateIdentityHash(v8::internal::Isolate*, v8::internal::JSReceiver) */

ulong v8::internal::JSReceiver::CreateIdentityHash(Isolate *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = Isolate::GenerateIdentityHash(param_1,0xfffff);
  SetIdentityHash((JSReceiver *)&local_8,uVar1);
  return -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
}

