
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCallProperty2() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCallProperty2(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Environment *pEVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pEVar6 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  uVar2 = Environment::LookupRegister(pEVar6,uVar1);
  pEVar6 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  uVar3 = Environment::LookupRegister(pEVar6,uVar1);
  pEVar6 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,2);
  uVar4 = Environment::LookupRegister(pEVar6,uVar1);
  pEVar6 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,3);
  uVar5 = Environment::LookupRegister(pEVar6,uVar1);
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,4);
  local_60 = uVar2;
  uStack_58 = uVar3;
  local_50 = uVar4;
  uStack_48 = uVar5;
  BuildCall(this,1,&local_60,4,uVar1);
  return;
}

