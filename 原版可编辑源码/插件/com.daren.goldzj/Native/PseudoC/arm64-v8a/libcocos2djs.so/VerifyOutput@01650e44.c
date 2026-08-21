
/* v8::internal::compiler::RegisterAllocatorVerifier::VerifyOutput(v8::internal::compiler::RegisterAllocatorVerifier::OperandConstraint
   const&) */

void v8::internal::compiler::RegisterAllocatorVerifier::VerifyOutput(OperandConstraint *param_1)

{
  if (*(int *)param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kImmediate != constraint.type_");
  }
  if (*(int *)(param_1 + 0xc) != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "InstructionOperand::kInvalidVirtualRegister != constraint.virtual_register_");
}

