
/* v8::internal::compiler::BytecodeGraphBuilder::VisitSub() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitSub(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Subtract(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOp(this,pOVar1);
  return;
}

