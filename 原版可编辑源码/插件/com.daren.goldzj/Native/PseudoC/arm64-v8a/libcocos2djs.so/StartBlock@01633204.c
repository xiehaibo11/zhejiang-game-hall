
/* v8::internal::compiler::InstructionSelector::StartBlock(v8::internal::compiler::RpoNumber) */

void __thiscall
v8::internal::compiler::InstructionSelector::StartBlock
          (InstructionSelector *this,undefined4 param_2)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x160) == 1) &&
     (uVar1 = InstructionScheduler::SchedulerSupported(), (uVar1 & 1) != 0)) {
    InstructionScheduler::StartBlock(*(InstructionScheduler **)(this + 0x158),param_2);
    return;
  }
  InstructionSequence::StartBlock(*(InstructionSequence **)(this + 0x10),param_2);
  return;
}

