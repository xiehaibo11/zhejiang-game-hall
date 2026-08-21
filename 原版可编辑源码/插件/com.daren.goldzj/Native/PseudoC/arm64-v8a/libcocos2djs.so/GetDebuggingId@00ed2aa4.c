
/* v8::debug::GetDebuggingId(v8::Local<v8::Function>) */

undefined8 v8::debug::GetDebuggingId(ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *param_1 & 0xffffffff00000000;
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(*param_1 - 1)) == 0x439) {
    uVar1 = internal::Debug::GetFunctionDebuggingId(*(Debug **)(uVar2 + 0xb6c8),param_1);
    return uVar1;
  }
  return 0;
}

