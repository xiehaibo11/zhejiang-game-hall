
/* v8::internal::compiler::BytecodeGraphBuilder::VisitStaCurrentContextSlot() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitStaCurrentContextSlot(BytecodeGraphBuilder *this)

{
  ulong uVar1;
  Operator *pOVar2;
  long lVar3;
  JSOperatorBuilder *this_00;
  Node *local_28;
  
  this_00 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pOVar2 = (Operator *)JSOperatorBuilder::StoreContext(this_00,0,uVar1 & 0xffffffff);
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
      (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
    local_28 = *(Node **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8);
    MakeNode(this,pOVar2,1,&local_28,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

