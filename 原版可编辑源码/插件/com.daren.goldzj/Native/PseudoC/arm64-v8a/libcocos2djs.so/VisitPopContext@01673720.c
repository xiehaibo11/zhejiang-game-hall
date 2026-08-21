
/* v8::internal::compiler::BytecodeGraphBuilder::VisitPopContext() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitPopContext(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Environment *pEVar3;
  
  pEVar3 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  uVar2 = Environment::LookupRegister(pEVar3,uVar1);
  *(undefined8 *)(*(long *)(this + 0xa8) + 0x10) = uVar2;
  return;
}

