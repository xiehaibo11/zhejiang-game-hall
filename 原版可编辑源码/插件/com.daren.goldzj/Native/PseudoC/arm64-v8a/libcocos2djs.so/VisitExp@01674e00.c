
/* v8::internal::compiler::BytecodeGraphBuilder::VisitExp() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitExp(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Exponentiate(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOp(this,pOVar1);
  return;
}

