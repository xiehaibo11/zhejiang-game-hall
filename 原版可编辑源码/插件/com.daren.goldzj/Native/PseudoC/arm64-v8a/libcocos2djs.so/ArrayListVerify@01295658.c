
/* v8::internal::TorqueGeneratedClassVerifiers::ArrayListVerify(v8::internal::ArrayList,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::ArrayListVerify(ulong param_1,Isolate *param_2)

{
  ulong local_18;
  
  local_18 = param_1;
  FixedArray::FixedArrayVerify((FixedArray *)&local_18,param_2);
  if (((int)local_18 != *(int *)((local_18 & 0xffffffff00000000) + 0x168)) &&
     (*(int *)(local_18 - 1) != *(int *)((local_18 & 0xffffffff00000000) + 0x1b8))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsArrayList()");
  }
  return;
}

