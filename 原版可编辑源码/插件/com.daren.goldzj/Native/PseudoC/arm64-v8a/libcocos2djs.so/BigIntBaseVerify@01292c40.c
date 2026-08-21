
/* v8::internal::TorqueGeneratedClassVerifiers::BigIntBaseVerify(v8::internal::BigIntBase,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::BigIntBaseVerify(ulong param_1)

{
  ulong local_18;
  
  local_18 = param_1;
  TorqueGeneratedPrimitiveHeapObject<v8::internal::PrimitiveHeapObject,v8::internal::HeapObject>::
  PrimitiveHeapObjectVerify((Isolate *)&local_18);
  if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x41) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsBigIntBase()");
}

