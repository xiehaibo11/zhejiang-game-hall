
/* v8::internal::compiler::BytecodeGraphBuilder::VisitInc() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitInc(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Increment(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildUnaryOp(this,pOVar1);
  return;
}

