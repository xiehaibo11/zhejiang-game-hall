
/* v8::internal::compiler::BytecodeGraphBuilder::BuildCallVarArgs(v8::internal::ConvertReceiverMode)
    */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildCallVarArgs
          (BytecodeGraphBuilder *this,int param_2)

{
  BytecodeArrayAccessor *this_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  Environment *pEVar5;
  
  pEVar5 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  uVar4 = Environment::LookupRegister(pEVar5,uVar1);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  iVar2 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand(this_00,2);
  uVar3 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,3);
  iVar2 = iVar2 - (uint)(param_2 != 0);
  uVar4 = ProcessCallVarArgs(this,param_2,uVar4,uVar1,iVar2);
  BuildCall(this,param_2,uVar4,(long)(iVar2 + 2),uVar3);
  return;
}

