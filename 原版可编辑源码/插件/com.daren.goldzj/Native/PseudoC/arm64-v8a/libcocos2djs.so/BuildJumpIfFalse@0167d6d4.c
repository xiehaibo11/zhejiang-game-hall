
/* v8::internal::compiler::BytecodeGraphBuilder::BuildJumpIfFalse() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildJumpIfFalse(BytecodeGraphBuilder *this)

{
  int iVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  Node *pNVar6;
  Node *local_18;
  
  lVar5 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar5 + 0x5c) <
      (ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 3)) {
    pNVar6 = *(Node **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x5c) * 8);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Branch
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),0,2);
    local_18 = pNVar6;
    MakeNode(this,pOVar2,1,&local_18,false);
    uVar3 = Environment::Copy(*(Environment **)(this + 0xa8));
    pOVar2 = (Operator *)
             CommonOperatorBuilder::IfFalse(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8))
    ;
    MakeNode(this,pOVar2,0,(Node **)0x0,false);
    lVar5 = *(long *)(this + 0xa8);
    uVar4 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    if ((ulong)(long)*(int *)(lVar5 + 0x5c) <
        (ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 3)) {
      *(undefined8 *)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x5c) * 8) = uVar4;
      iVar1 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                        ((BytecodeArrayAccessor *)(this + 0x88));
      MergeIntoSuccessorEnvironment(this,iVar1);
      *(undefined8 *)(this + 0xa8) = uVar3;
      pOVar2 = (Operator *)
               CommonOperatorBuilder::IfTrue
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
      MakeNode(this,pOVar2,0,(Node **)0x0,false);
      lVar5 = *(long *)(this + 0xa8);
      uVar3 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
      if ((ulong)(long)*(int *)(lVar5 + 0x5c) <
          (ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 3)) {
        *(undefined8 *)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x5c) * 8) = uVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

