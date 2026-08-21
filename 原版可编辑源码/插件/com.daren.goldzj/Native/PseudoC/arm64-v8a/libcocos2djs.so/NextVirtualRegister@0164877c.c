
/* v8::internal::compiler::InstructionSequence::NextVirtualRegister() */

void __thiscall
v8::internal::compiler::InstructionSequence::NextVirtualRegister(InstructionSequence *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xd0);
  *(int *)(this + 0xd0) = iVar1 + 1;
  if (iVar1 != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","virtual_register != InstructionOperand::kInvalidVirtualRegister");
}

