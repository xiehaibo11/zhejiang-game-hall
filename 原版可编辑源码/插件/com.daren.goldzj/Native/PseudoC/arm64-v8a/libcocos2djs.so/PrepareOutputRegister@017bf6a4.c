
/* v8::internal::interpreter::BytecodeRegisterOptimizer::PrepareOutputRegister(v8::internal::interpreter::Register)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::PrepareOutputRegister
          (BytecodeRegisterOptimizer *this,int param_2)

{
  int iVar1;
  RegisterInfo *pRVar2;
  
  pRVar2 = *(RegisterInfo **)(*(long *)(this + 0x20) + (long)(*(int *)(this + 0x40) + param_2) * 8);
  if (pRVar2[8] != (RegisterInfo)0x0) {
    CreateMaterializedEquivalent(this,pRVar2);
  }
  iVar1 = *(int *)(this + 0x98);
  *(int *)(this + 0x98) = iVar1 + 1;
  *(undefined8 *)(*(long *)(pRVar2 + 0x10) + 0x18) = *(undefined8 *)(pRVar2 + 0x18);
  *(undefined8 *)(*(long *)(pRVar2 + 0x18) + 0x10) = *(undefined8 *)(pRVar2 + 0x10);
  *(RegisterInfo **)(pRVar2 + 0x10) = pRVar2;
  *(RegisterInfo **)(pRVar2 + 0x18) = pRVar2;
  *(int *)(pRVar2 + 4) = iVar1 + 1;
  pRVar2[8] = (RegisterInfo)0x1;
  iVar1 = *(int *)pRVar2;
  if (*(int *)pRVar2 <= *(int *)(this + 0x1c)) {
    iVar1 = *(int *)(this + 0x1c);
  }
  *(int *)(this + 0x1c) = iVar1;
  return;
}

