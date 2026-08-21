
/* v8::internal::compiler::BytecodeGraphBuilder::VisitDec() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitDec(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Decrement(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildUnaryOp(this,pOVar1);
  return;
}

