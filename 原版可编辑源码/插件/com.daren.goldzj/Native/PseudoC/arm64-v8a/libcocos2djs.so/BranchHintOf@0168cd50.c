
/* v8::internal::compiler::BranchHintOf(v8::internal::compiler::Operator const*) */

Operator v8::internal::compiler::BranchHintOf(Operator *param_1)

{
  short sVar1;
  Operator *pOVar2;
  
  sVar1 = *(short *)(param_1 + 0x10);
  if (sVar1 != 9) {
    if (sVar1 == 8) {
      pOVar2 = param_1 + 0x34;
      goto LAB_0168cd80;
    }
    if (sVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  pOVar2 = param_1 + 0x2c;
LAB_0168cd80:
  return *pOVar2;
}

