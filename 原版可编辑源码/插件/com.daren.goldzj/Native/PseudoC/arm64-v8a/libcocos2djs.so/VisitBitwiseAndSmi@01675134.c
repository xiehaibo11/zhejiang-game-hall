
/* v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseAndSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseAndSmi(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::BitwiseAnd(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOpWithImmediate(this,pOVar1);
  return;
}

