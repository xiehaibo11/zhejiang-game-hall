
/* v8::internal::interpreter::BytecodeRegisterOptimizer::AllocateRegister(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::AllocateRegister
          (BytecodeRegisterOptimizer *this,RegisterInfo *param_1)

{
  int iVar1;
  
  param_1[9] = (RegisterInfo)0x1;
  if (param_1[8] != (RegisterInfo)0x0) {
    return;
  }
  iVar1 = *(int *)(this + 0x98);
  *(int *)(this + 0x98) = iVar1 + 1;
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(RegisterInfo **)(param_1 + 0x10) = param_1;
  *(RegisterInfo **)(param_1 + 0x18) = param_1;
  *(int *)(param_1 + 4) = iVar1 + 1;
  param_1[8] = (RegisterInfo)0x1;
  return;
}

