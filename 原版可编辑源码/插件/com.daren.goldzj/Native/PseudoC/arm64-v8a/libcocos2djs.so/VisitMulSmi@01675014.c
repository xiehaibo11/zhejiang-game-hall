
/* v8::internal::compiler::BytecodeGraphBuilder::VisitMulSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitMulSmi(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Multiply(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOpWithImmediate(this,pOVar1);
  return;
}

