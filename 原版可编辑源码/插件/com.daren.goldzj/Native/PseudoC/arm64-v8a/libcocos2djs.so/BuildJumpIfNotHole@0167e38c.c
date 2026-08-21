
/* v8::internal::compiler::BytecodeGraphBuilder::BuildJumpIfNotHole() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildJumpIfNotHole(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  long lVar2;
  Node *pNVar3;
  Node *local_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar2 + 0x5c) <
      (ulong)(*(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28) >> 3)) {
    pNVar3 = *(Node **)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x5c) * 8);
    pOVar1 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    uStack_38 = JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x10));
    local_40 = pNVar3;
    pNVar3 = (Node *)MakeNode(this,pOVar1,2,&local_40,false);
    BuildJumpIfNot(this,pNVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

