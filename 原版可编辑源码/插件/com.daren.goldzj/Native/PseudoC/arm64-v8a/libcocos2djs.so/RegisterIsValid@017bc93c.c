
/* v8::internal::interpreter::BytecodeArrayBuilder::RegisterIsValid(v8::internal::interpreter::Register)
   const */

bool __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::RegisterIsValid
          (BytecodeArrayBuilder *this,int param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int local_8 [2];
  
  if (param_2 == 0x7fffffff) {
LAB_017bc958:
    bVar1 = false;
  }
  else {
    local_8[0] = param_2;
    uVar3 = Register::is_current_context((Register *)local_8);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = Register::is_function_closure((Register *)local_8), (uVar3 & 1) == 0)) {
      if (local_8[0] < 0) {
        iVar2 = Register::ToParameterIndex((Register *)local_8,*(int *)(this + 0xf8));
        if (-1 < iVar2) {
          return iVar2 < *(int *)(this + 0xf8);
        }
        goto LAB_017bc958;
      }
      if (*(int *)(this + 0xfc) <= local_8[0]) {
        return local_8[0] < *(int *)(this + 0x100);
      }
    }
    bVar1 = true;
  }
  return bVar1;
}

