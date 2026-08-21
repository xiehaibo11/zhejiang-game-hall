
/* v8::internal::compiler::InstructionSelector::GetRename(int) */

void __thiscall
v8::internal::compiler::InstructionSelector::GetRename(InstructionSelector *this,int param_1)

{
  do {
    if ((ulong)(*(long *)(this + 0x140) - *(long *)(this + 0x138) >> 2) <= (ulong)(long)param_1) {
      return;
    }
    param_1 = *(int *)(*(long *)(this + 0x138) + (long)param_1 * 4);
  } while (param_1 != -1);
  return;
}

