
/* v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseXorSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseXorSmi(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::BitwiseXor(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOpWithImmediate(this,pOVar1);
  return;
}

