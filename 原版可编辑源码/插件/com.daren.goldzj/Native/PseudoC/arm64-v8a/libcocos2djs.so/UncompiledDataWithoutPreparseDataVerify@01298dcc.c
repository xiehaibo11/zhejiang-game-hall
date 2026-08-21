
/* v8::internal::TorqueGeneratedClassVerifiers::UncompiledDataWithoutPreparseDataVerify(v8::internal::UncompiledDataWithoutPreparseData,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::UncompiledDataWithoutPreparseDataVerify
               (ulong param_1)

{
  ulong local_18;
  
  local_18 = param_1;
  TorqueGeneratedUncompiledData<v8::internal::UncompiledData,v8::internal::HeapObject>::
  UncompiledDataVerify((Isolate *)&local_18);
  if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x96) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsUncompiledDataWithoutPreparseData()");
}

