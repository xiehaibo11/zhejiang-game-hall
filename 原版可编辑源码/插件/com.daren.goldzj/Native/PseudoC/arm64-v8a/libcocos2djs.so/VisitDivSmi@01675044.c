
/* v8::internal::compiler::BytecodeGraphBuilder::VisitDivSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitDivSmi(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Divide(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOpWithImmediate(this,pOVar1);
  return;
}

