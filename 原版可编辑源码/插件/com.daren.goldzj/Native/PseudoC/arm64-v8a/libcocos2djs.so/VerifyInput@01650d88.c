
/* v8::internal::compiler::RegisterAllocatorVerifier::VerifyInput(v8::internal::compiler::RegisterAllocatorVerifier::OperandConstraint
   const&) */

void v8::internal::compiler::RegisterAllocatorVerifier::VerifyInput(OperandConstraint *param_1)

{
  if (*(int *)param_1 != 1) {
    if (*(int *)param_1 == 0xb) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kSameAsFirst != constraint.type_");
    }
    if (*(int *)(param_1 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "InstructionOperand::kInvalidVirtualRegister != constraint.virtual_register_");
    }
  }
  return;
}

