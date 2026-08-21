
/* v8::internal::compiler::BytecodeGraphBuilder::VisitDiv() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitDiv(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Divide(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOp(this,pOVar1);
  return;
}

