
/* v8::internal::compiler::BytecodeGraphBuilder::VisitLdaImmutableCurrentContextSlot() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitLdaImmutableCurrentContextSlot
          (BytecodeGraphBuilder *this)

{
  ulong uVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  long lVar4;
  JSOperatorBuilder *this_00;
  
  this_00 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pOVar2 = (Operator *)JSOperatorBuilder::LoadContext(this_00,0,uVar1 & 0xffffffff,true);
  uVar3 = MakeNode(this,pOVar2,0,(Node **)0x0,false);
  lVar4 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar4 + 0x5c) <
      (ulong)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x5c) * 8) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

