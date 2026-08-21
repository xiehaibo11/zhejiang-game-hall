
/* v8::internal::compiler::BytecodeGraphBuilder::VisitLdaSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitLdaSmi(BytecodeGraphBuilder *this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  JSGraph *this_00;
  
  this_00 = *(JSGraph **)(this + 0x10);
  iVar1 = interpreter::BytecodeArrayAccessor::GetImmediateOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  uVar2 = JSGraph::Constant(this_00,(double)iVar1);
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
      (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

