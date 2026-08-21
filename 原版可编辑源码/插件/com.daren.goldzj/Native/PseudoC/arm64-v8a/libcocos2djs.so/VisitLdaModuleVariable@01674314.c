
/* v8::internal::compiler::BytecodeGraphBuilder::VisitLdaModuleVariable() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitLdaModuleVariable(BytecodeGraphBuilder *this)

{
  int iVar1;
  ulong uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  long lVar6;
  Node *local_18;
  
  iVar1 = interpreter::BytecodeArrayAccessor::GetImmediateOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  uVar2 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  pOVar3 = (Operator *)
           JSOperatorBuilder::LoadContext
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar2 & 0xffffffff,2,
                      true);
  pNVar4 = (Node *)MakeNode(this,pOVar3,0,(Node **)0x0,false);
  pOVar3 = (Operator *)
           JSOperatorBuilder::LoadModule
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),iVar1);
  local_18 = pNVar4;
  uVar5 = MakeNode(this,pOVar3,1,&local_18,false);
  lVar6 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar6 + 0x5c) <
      (ulong)(*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x5c) * 8) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

