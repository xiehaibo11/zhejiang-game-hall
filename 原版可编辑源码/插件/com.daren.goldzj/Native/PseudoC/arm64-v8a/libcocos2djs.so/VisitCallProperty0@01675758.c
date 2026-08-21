
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCallProperty0() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCallProperty0(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Environment *pEVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pEVar4 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  uVar2 = Environment::LookupRegister(pEVar4,uVar1);
  pEVar4 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  uVar3 = Environment::LookupRegister(pEVar4,uVar1);
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,2);
  local_40 = uVar2;
  uStack_38 = uVar3;
  BuildCall(this,1,&local_40,2,uVar1);
  return;
}

