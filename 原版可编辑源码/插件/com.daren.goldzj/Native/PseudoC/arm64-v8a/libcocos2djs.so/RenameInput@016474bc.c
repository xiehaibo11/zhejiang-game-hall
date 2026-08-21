
/* v8::internal::compiler::PhiInstruction::RenameInput(unsigned long, int) */

void __thiscall
v8::internal::compiler::PhiInstruction::RenameInput(PhiInstruction *this,ulong param_1,int param_2)

{
  *(int *)(*(long *)(this + 0x10) + param_1 * 4) = param_2;
  return;
}

