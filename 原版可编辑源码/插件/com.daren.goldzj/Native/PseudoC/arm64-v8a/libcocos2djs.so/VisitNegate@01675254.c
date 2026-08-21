
/* v8::internal::compiler::BytecodeGraphBuilder::VisitNegate() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitNegate(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Negate(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildUnaryOp(this,pOVar1);
  return;
}

