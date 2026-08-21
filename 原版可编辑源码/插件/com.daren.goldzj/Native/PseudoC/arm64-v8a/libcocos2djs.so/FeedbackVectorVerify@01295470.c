
/* v8::internal::TorqueGeneratedClassVerifiers::FeedbackVectorVerify(v8::internal::FeedbackVector,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::FeedbackVectorVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 - 1);
  uVar3 = param_1 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (uVar4 = uVar3 | 7, *(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map__value.IsMap()");
  }
  if (*(short *)(uVar4 + *(uint *)(param_1 - 1)) != 0x9f) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsFeedbackVector()");
  }
  uVar1 = *(uint *)(param_1 + 3);
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0xa6)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","shared_function_info__value.IsSharedFunctionInfo()");
  }
  uVar1 = *(uint *)(param_1 + 7);
  uVar2 = uVar3 | uVar1;
  MaybeObject::VerifyMaybeObjectPointer(param_2,uVar2);
  if (uVar1 != 3) {
    if ((uVar1 & 1) != 0) {
      uVar2 = uVar3 | (ulong)uVar1 & 0xfffffffffffffffd;
    }
    if ((~uVar1 & 3) == 0) {
      if (((uVar2 & 1) != 0) &&
         (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x9a))
      goto LAB_01295560;
    }
    else if ((uVar2 & 1) == 0) goto LAB_01295560;
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "optimized_code_weak_or_smi__value.IsCleared() || (!optimized_code_weak_or_smi__value.IsWeak() && optimized_code_weak_or_smi__value.GetHeapObjectOrSmi().IsSmi()) || (optimized_code_weak_or_smi__value.IsWeak() && optimized_code_weak_or_smi__value.GetHeapObjectOrSmi().IsCode())"
            );
  }
LAB_01295560:
  uVar1 = *(uint *)(param_1 + 0xb);
  uVar3 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(ushort *)(uVar4 + *(uint *)(uVar3 - 1)) - 0x76 < 0xf)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","closure_feedback_cell_array__value.IsFixedArray()");
}

