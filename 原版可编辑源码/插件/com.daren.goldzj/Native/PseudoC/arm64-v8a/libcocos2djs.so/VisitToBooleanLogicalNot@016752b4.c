
/* v8::internal::compiler::BytecodeGraphBuilder::VisitToBooleanLogicalNot() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitToBooleanLogicalNot(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  long lVar4;
  Node *local_28;
  
  pOVar1 = (Operator *)
           SimplifiedOperatorBuilder::ToBoolean
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
  lVar4 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar4 + 0x5c) <
      (ulong)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3)) {
    local_28 = *(Node **)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x5c) * 8);
    pNVar2 = (Node *)MakeNode(this,pOVar1,1,&local_28,false);
    pOVar1 = (Operator *)
             SimplifiedOperatorBuilder::BooleanNot
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    local_28 = pNVar2;
    uVar3 = MakeNode(this,pOVar1,1,&local_28,false);
    lVar4 = *(long *)(this + 0xa8);
    if ((ulong)(long)*(int *)(lVar4 + 0x5c) <
        (ulong)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3)) {
      *(undefined8 *)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x5c) * 8) = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

