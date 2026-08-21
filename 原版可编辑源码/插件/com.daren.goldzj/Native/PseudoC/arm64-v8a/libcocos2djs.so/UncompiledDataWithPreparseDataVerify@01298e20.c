
/* v8::internal::TorqueGeneratedClassVerifiers::UncompiledDataWithPreparseDataVerify(v8::internal::UncompiledDataWithPreparseData,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::UncompiledDataWithPreparseDataVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedUncompiledData<v8::internal::UncompiledData,v8::internal::HeapObject>::
  UncompiledDataVerify((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x95) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsUncompiledDataWithPreparseData()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0xa3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","preparse_data__value.IsPreparseData()");
}

