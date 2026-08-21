
/* v8::internal::compiler::BytecodeGraphBuilder::VisitJumpIfUndefinedOrNullConstant() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitJumpIfUndefinedOrNullConstant
          (BytecodeGraphBuilder *this)

{
  undefined8 uVar1;
  Operator *pOVar2;
  long lVar3;
  Node *pNVar4;
  Node *local_40;
  undefined8 uStack_38;
  
  uVar1 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
      (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
    pNVar4 = *(Node **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8);
    pOVar2 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    local_40 = pNVar4;
    uStack_38 = uVar1;
    pNVar4 = (Node *)MakeNode(this,pOVar2,2,&local_40,false);
    BuildJumpIf(this,pNVar4);
    uVar1 = JSGraph::NullConstant(*(JSGraph **)(this + 0x10));
    lVar3 = *(long *)(this + 0xa8);
    if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
        (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
      pNVar4 = *(Node **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8);
      pOVar2 = (Operator *)
               SimplifiedOperatorBuilder::ReferenceEqual
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
      local_40 = pNVar4;
      uStack_38 = uVar1;
      pNVar4 = (Node *)MakeNode(this,pOVar2,2,&local_40,false);
      BuildJumpIf(this,pNVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

