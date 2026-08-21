
/* v8::internal::Deoptimizer::TrampolineForBuiltinContinuation(v8::internal::BuiltinContinuationMode,
   bool) */

undefined4 v8::internal::Deoptimizer::TrampolineForBuiltinContinuation(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 3) {
    uVar1 = 0x48;
    if ((param_2 & 1) != 0) {
      uVar1 = 0x49;
    }
    return uVar1;
  }
  if (param_1 == 0) {
    uVar1 = 0x46;
    if ((param_2 & 1) != 0) {
      uVar1 = 0x47;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

