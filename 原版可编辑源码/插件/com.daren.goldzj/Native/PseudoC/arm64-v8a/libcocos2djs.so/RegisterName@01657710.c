
/* v8::internal::compiler::RegisterAllocator::RegisterName(int) const */

char * __thiscall
v8::internal::compiler::RegisterAllocator::RegisterName(RegisterAllocator *this,int param_1)

{
  if (param_1 == 0x20) {
    return "unassigned";
  }
  if (*(int *)(this + 8) == 0) {
    if (param_1 != -1) {
      return (char *)(&RegisterName(v8::internal::Register)::Names)[param_1];
    }
  }
  else if (param_1 != -1) {
    return (char *)(&RegisterName(v8::internal::VRegister)::Names)[param_1];
  }
  return "invalid";
}

