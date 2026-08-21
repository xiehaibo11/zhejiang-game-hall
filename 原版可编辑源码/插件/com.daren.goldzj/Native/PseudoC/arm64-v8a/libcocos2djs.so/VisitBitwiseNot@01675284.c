
/* v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseNot() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseNot(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::BitwiseNot(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildUnaryOp(this,pOVar1);
  return;
}

