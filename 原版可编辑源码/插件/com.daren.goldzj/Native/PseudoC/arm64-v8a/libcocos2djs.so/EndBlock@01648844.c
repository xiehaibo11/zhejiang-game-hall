
/* v8::internal::compiler::InstructionSequence::EndBlock(v8::internal::compiler::RpoNumber) */

void v8::internal::compiler::InstructionSequence::EndBlock(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x170) + 0x70);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xb8))) {
    *(int *)(*(long *)(param_1 + 0x170) + 0x74) = *(int *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0x170) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "current_block_->code_start() >= 0 && current_block_->code_start() < end");
}

