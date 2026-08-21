
/* v8::internal::interpreter::BytecodeArrayBuilder::RegisterListIsValid(v8::internal::interpreter::RegisterList)
   const */

undefined8 __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::RegisterListIsValid
          (BytecodeArrayBuilder *this,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int local_38 [2];
  
  uVar5 = param_2 >> 0x20;
  iVar4 = (int)(param_2 >> 0x20);
  if ((iVar4 != 0) && (0 < iVar4)) {
    do {
      iVar4 = (int)param_2;
      if (iVar4 == 0x7fffffff) {
        return 0;
      }
      local_38[0] = iVar4;
      uVar3 = Register::is_current_context((Register *)local_38);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = Register::is_function_closure((Register *)local_38), (uVar3 & 1) == 0)) {
        if (local_38[0] < 0) {
          iVar2 = Register::ToParameterIndex((Register *)local_38,*(int *)(this + 0xf8));
          if (iVar2 < 0) {
            return 0;
          }
          if (*(int *)(this + 0xf8) <= iVar2) {
            return 0;
          }
        }
        else if ((*(int *)(this + 0xfc) <= local_38[0]) && (*(int *)(this + 0x100) <= local_38[0]))
        {
          return 0;
        }
      }
      uVar1 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar1;
      param_2 = (ulong)(iVar4 + 1);
    } while (uVar1 != 0);
  }
  return 1;
}

