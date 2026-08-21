
/* v8::internal::TorqueGeneratedClassVerifiers::StringVerify(v8::internal::String,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::StringVerify(ulong param_1)

{
  ulong local_18;
  
  local_18 = param_1;
  TorqueGeneratedName<v8::internal::Name,v8::internal::PrimitiveHeapObject>::NameVerify
            ((Isolate *)&local_18);
  if (*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) < 0x40) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsString()");
}

