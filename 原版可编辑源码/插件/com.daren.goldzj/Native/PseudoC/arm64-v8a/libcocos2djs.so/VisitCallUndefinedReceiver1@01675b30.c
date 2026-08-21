
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCallUndefinedReceiver1() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCallUndefinedReceiver1
          (BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Environment *pEVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  pEVar5 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  uVar2 = Environment::LookupRegister(pEVar5,uVar1);
  uVar3 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  pEVar5 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  uVar4 = Environment::LookupRegister(pEVar5,uVar1);
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,2);
  local_58 = uVar2;
  uStack_50 = uVar3;
  local_48 = uVar4;
  BuildCall(this,0,&local_58,3,uVar1);
  return;
}

