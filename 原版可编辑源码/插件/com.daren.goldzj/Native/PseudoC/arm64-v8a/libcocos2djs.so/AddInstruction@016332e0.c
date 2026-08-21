
/* v8::internal::compiler::InstructionSelector::AddInstruction(v8::internal::compiler::Instruction*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::AddInstruction
          (InstructionSelector *this,Instruction *param_1)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x160) == 1) &&
     (uVar1 = InstructionScheduler::SchedulerSupported(), (uVar1 & 1) != 0)) {
    InstructionScheduler::AddInstruction(*(InstructionScheduler **)(this + 0x158),param_1);
    return;
  }
  InstructionSequence::AddInstruction(*(InstructionSequence **)(this + 0x10),param_1);
  return;
}

