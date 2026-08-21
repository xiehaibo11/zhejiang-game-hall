
/* v8::internal::compiler::CodeAssembler::UnalignedLoadSupported(v8::internal::MachineRepresentation)
   const */

bool __thiscall
v8::internal::compiler::CodeAssembler::UnalignedLoadSupported(CodeAssembler *this,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(**(long **)this + 0x38);
  if (iVar1 == 2) {
    return true;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      return false;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return (*(uint *)(**(long **)this + 0x3c) >> (ulong)(param_2 & 0x1f) & 1) == 0;
}

