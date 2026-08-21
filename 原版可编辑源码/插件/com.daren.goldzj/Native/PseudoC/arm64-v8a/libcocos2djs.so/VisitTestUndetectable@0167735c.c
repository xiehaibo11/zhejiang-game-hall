
/* v8::internal::compiler::BytecodeGraphBuilder::VisitTestUndetectable() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitTestUndetectable(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  undefined8 uVar2;
  long lVar3;
  Node *pNVar4;
  Node *local_28;
  
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
      (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
    pNVar4 = *(Node **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8);
    pOVar1 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsUndetectable
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    local_28 = pNVar4;
    uVar2 = MakeNode(this,pOVar1,1,&local_28,false);
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

