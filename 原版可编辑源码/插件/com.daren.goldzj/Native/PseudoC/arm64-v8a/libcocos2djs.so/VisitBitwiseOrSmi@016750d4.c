
/* v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseOrSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseOrSmi(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::BitwiseOr(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOpWithImmediate(this,pOVar1);
  return;
}

