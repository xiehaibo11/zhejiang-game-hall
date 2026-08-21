
/* v8::internal::compiler::BytecodeGraphBuilder::VisitStaModuleVariable() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitStaModuleVariable(BytecodeGraphBuilder *this)

{
  int iVar1;
  ulong uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  long lVar5;
  undefined8 uVar6;
  Node *local_40;
  undefined8 uStack_38;
  
  iVar1 = interpreter::BytecodeArrayAccessor::GetImmediateOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  uVar2 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  pOVar3 = (Operator *)
           JSOperatorBuilder::LoadContext
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar2 & 0xffffffff,2,
                      true);
  pNVar4 = (Node *)MakeNode(this,pOVar3,0,(Node **)0x0,false);
  lVar5 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar5 + 0x5c) <
      (ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 3)) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x5c) * 8);
    pOVar3 = (Operator *)
             JSOperatorBuilder::StoreModule
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),iVar1);
    local_40 = pNVar4;
    uStack_38 = uVar6;
    MakeNode(this,pOVar3,2,&local_40,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

