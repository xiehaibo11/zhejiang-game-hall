
/* v8::internal::compiler::MemoryLowering::NeedsPoisoning(v8::internal::LoadSensitivity) const */

bool __thiscall
v8::internal::compiler::MemoryLowering::NeedsPoisoning(MemoryLowering *this,int param_2)

{
  int iVar1;
  
  if (param_2 != 2) {
    iVar1 = *(int *)(this + 0x44);
    if (iVar1 == 2) {
      return param_2 == 0;
    }
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        return true;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  return false;
}

