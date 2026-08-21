
/* v8::internal::compiler::BytecodeGraphBuilder::BuildJumpIfToBooleanTrue() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildJumpIfToBooleanTrue(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  long lVar2;
  Node *pNVar3;
  Node *local_28;
  
  lVar2 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar2 + 0x5c) <
      (ulong)(*(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28) >> 3)) {
    pNVar3 = *(Node **)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x5c) * 8);
    pOVar1 = (Operator *)
             SimplifiedOperatorBuilder::ToBoolean
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    local_28 = pNVar3;
    pNVar3 = (Node *)MakeNode(this,pOVar1,1,&local_28,false);
    BuildJumpIf(this,pNVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

