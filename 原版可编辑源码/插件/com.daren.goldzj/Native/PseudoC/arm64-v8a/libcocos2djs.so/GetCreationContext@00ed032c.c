
/* v8::debug::GetCreationContext(v8::Local<v8::Object>) */

undefined8 v8::debug::GetCreationContext(ulong *param_1)

{
  undefined8 uVar1;
  ulong local_18;
  
  local_18 = *param_1;
  if (((local_18 & 1) == 0) ||
     (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) != 0xab)) {
    uVar1 = internal::JSReceiver::GetCreationContext((JSReceiver *)&local_18);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

