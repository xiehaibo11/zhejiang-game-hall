
/* v8::internal::compiler::InstructionSelector::NeedsPoisoning(v8::internal::compiler::IsSafetyCheck)
   const */

bool __thiscall
v8::internal::compiler::InstructionSelector::NeedsPoisoning(InstructionSelector *this,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x16c);
  if (iVar1 == 2) {
    return param_2 == '\0';
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      return param_2 != '\x02';
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return false;
}

