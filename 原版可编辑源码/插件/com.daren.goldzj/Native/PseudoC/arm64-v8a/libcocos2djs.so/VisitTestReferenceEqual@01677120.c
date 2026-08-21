
/* v8::internal::compiler::BytecodeGraphBuilder::VisitTestReferenceEqual() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitTestReferenceEqual(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  Node *pNVar2;
  Operator *pOVar3;
  long lVar4;
  Environment *pEVar5;
  undefined8 uVar6;
  Node *local_40;
  undefined8 uStack_38;
  
  pEVar5 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pNVar2 = (Node *)Environment::LookupRegister(pEVar5,uVar1);
  lVar4 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar4 + 0x5c) <
      (ulong)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3)) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x5c) * 8);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    local_40 = pNVar2;
    uStack_38 = uVar6;
    uVar6 = MakeNode(this,pOVar3,2,&local_40,false);
    lVar4 = *(long *)(this + 0xa8);
    if ((ulong)(long)*(int *)(lVar4 + 0x5c) <
        (ulong)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3)) {
      *(undefined8 *)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x5c) * 8) = uVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

