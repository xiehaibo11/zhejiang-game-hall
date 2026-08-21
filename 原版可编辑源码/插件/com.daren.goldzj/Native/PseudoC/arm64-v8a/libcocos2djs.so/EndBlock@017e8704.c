
/* v8::internal::compiler::InstructionScheduler::EndBlock(v8::internal::compiler::RpoNumber) */

void __thiscall
v8::internal::compiler::InstructionScheduler::EndBlock
          (InstructionScheduler *this,undefined4 param_2)

{
  if (FLAG_turbo_stress_instruction_scheduling == '\0') {
    Schedule<v8::internal::compiler::InstructionScheduler::CriticalPathFirstQueue>(this);
  }
  else {
    Schedule<v8::internal::compiler::InstructionScheduler::StressSchedulerQueue>(this);
  }
  InstructionSequence::EndBlock(*(undefined8 *)(this + 8),param_2);
  return;
}

