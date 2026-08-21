
/* v8::internal::compiler::BytecodeGraphBuilder::VisitForInContinue() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitForInContinue(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  long lVar5;
  Environment *pEVar6;
  Node *local_40;
  undefined8 uStack_38;
  
  PrepareEagerCheckpoint(this);
  pEVar6 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pNVar2 = (Node *)Environment::LookupRegister(pEVar6,uVar1);
  pEVar6 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  uVar3 = Environment::LookupRegister(pEVar6,uVar1);
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::SpeculativeNumberLessThan
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178),0);
  local_40 = pNVar2;
  uStack_38 = uVar3;
  uVar3 = MakeNode(this,pOVar4,2,&local_40,false);
  lVar5 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar5 + 0x5c) <
      (ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x5c) * 8) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

