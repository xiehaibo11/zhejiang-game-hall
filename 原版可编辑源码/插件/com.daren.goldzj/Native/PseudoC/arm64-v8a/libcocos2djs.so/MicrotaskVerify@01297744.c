
/* v8::internal::TorqueGeneratedClassVerifiers::MicrotaskVerify(v8::internal::Microtask,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::MicrotaskVerify(ulong param_1)

{
  ulong local_18;
  
  local_18 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_18);
  if (*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) - 0x47 < 5)
  {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsMicrotask()");
}

