
/* v8::internal::compiler::BytecodeGraphBuilder::VisitTestUndefined() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitTestUndefined(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  undefined8 uVar2;
  long lVar3;
  Node *pNVar4;
  Node *local_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
      (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
    pNVar4 = *(Node **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8);
    pOVar1 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    uStack_38 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    local_40 = pNVar4;
    uVar2 = MakeNode(this,pOVar1,2,&local_40,false);
    lVar3 = *(long *)(this + 0xa8);
    if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
        (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
      *(undefined8 *)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

