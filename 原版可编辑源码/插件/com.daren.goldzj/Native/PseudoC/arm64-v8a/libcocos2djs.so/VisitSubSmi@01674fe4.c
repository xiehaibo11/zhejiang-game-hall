
/* v8::internal::compiler::BytecodeGraphBuilder::VisitSubSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitSubSmi(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Subtract(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOpWithImmediate(this,pOVar1);
  return;
}

