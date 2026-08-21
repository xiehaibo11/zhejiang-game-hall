
/* v8::internal::compiler::BytecodeGraphBuilder::VisitGetSuperConstructor() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitGetSuperConstructor(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  long lVar4;
  Environment *pEVar5;
  Node *local_18;
  
  pOVar2 = (Operator *)
           JSOperatorBuilder::GetSuperConstructor
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  lVar4 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar4 + 0x5c) <
      (ulong)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3)) {
    local_18 = *(Node **)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x5c) * 8);
    uVar3 = MakeNode(this,pOVar2,1,&local_18,false);
    pEVar5 = *(Environment **)(this + 0xa8);
    uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                      ((BytecodeArrayAccessor *)(this + 0x88),0);
    Environment::BindRegister(pEVar5,uVar1,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

