
/* v8::internal::compiler::BytecodeGraphBuilder::VisitMul() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitMul(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Multiply(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOp(this,pOVar1);
  return;
}

