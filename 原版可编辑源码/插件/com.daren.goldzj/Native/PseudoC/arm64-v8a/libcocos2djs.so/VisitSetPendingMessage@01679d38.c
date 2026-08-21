
/* v8::internal::compiler::BytecodeGraphBuilder::VisitSetPendingMessage() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitSetPendingMessage(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  undefined8 uVar2;
  long lVar3;
  Node *local_28;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::LoadMessage(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  uVar2 = MakeNode(this,pOVar1,0,(Node **)0x0,false);
  pOVar1 = (Operator *)
           JSOperatorBuilder::StoreMessage(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
      (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
    local_28 = *(Node **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8);
    MakeNode(this,pOVar1,1,&local_28,false);
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

