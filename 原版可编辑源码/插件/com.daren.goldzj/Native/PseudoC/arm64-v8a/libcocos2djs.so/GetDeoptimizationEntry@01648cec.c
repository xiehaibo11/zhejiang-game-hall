
/* v8::internal::compiler::InstructionSequence::GetDeoptimizationEntry(int) */

long __thiscall
v8::internal::compiler::InstructionSequence::GetDeoptimizationEntry
          (InstructionSequence *this,int param_1)

{
  return *(long *)(this + 0x150) + (long)param_1 * 0x20;
}

