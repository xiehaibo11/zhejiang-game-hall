
/* v8::internal::compiler::RegisterAllocatorVerifier::VerifyTemp(v8::internal::compiler::RegisterAllocatorVerifier::OperandConstraint
   const&) */

void v8::internal::compiler::RegisterAllocatorVerifier::VerifyTemp(OperandConstraint *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kConstant != constraint.type_");
  }
  if (iVar1 != 1) {
    if (iVar1 != 0xb) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kSameAsFirst != constraint.type_");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kImmediate != constraint.type_");
}

