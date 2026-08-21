
/* v8::debug::GetDetailedStackTrace(v8::Isolate*, v8::Local<v8::Object>) */

undefined8 v8::debug::GetDetailedStackTrace(undefined8 param_1,ulong *param_2)

{
  undefined8 uVar1;
  
  if (0xa9 < *(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1))) {
    uVar1 = internal::Isolate::GetDetailedStackTrace();
    return uVar1;
  }
  return 0;
}

