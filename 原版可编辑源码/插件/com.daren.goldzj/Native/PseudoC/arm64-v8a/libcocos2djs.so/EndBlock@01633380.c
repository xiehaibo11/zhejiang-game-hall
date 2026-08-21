
/* v8::internal::compiler::InstructionSelector::EndBlock(v8::internal::compiler::RpoNumber) */

void __thiscall
v8::internal::compiler::InstructionSelector::EndBlock(InstructionSelector *this,undefined4 param_2)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x160) == 1) &&
     (uVar1 = InstructionScheduler::SchedulerSupported(), (uVar1 & 1) != 0)) {
    InstructionScheduler::EndBlock(*(InstructionScheduler **)(this + 0x158),param_2);
    return;
  }
  InstructionSequence::EndBlock(*(undefined8 *)(this + 0x10),param_2);
  return;
}

