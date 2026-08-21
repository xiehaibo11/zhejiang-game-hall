
/* v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseXor() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseXor(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::BitwiseXor(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOp(this,pOVar1);
  return;
}

