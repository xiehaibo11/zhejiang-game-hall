
/* v8::internal::compiler::InstructionSequence::GetRepresentation(int) const */

undefined1 __thiscall
v8::internal::compiler::InstructionSequence::GetRepresentation
          (InstructionSequence *this,int param_1)

{
  if (param_1 < *(int *)(this + 0x130) - (int)*(long *)(this + 0x128)) {
    return *(undefined1 *)(*(long *)(this + 0x128) + (long)param_1);
  }
  return 5;
}

