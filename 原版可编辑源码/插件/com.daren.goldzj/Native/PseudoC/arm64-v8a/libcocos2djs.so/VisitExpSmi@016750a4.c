
/* v8::internal::compiler::BytecodeGraphBuilder::VisitExpSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitExpSmi(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Exponentiate(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOpWithImmediate(this,pOVar1);
  return;
}

