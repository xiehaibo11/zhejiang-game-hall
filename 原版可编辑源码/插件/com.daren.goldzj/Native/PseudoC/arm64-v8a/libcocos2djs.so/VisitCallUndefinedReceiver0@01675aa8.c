
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCallUndefinedReceiver0() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCallUndefinedReceiver0
          (BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Environment *pEVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pEVar4 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  uVar2 = Environment::LookupRegister(pEVar4,uVar1);
  uVar3 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  local_40 = uVar2;
  uStack_38 = uVar3;
  BuildCall(this,0,&local_40,2,uVar1);
  return;
}

