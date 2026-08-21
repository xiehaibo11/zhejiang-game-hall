
/* v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseOr() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitBitwiseOr(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::BitwiseOr(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOp(this,pOVar1);
  return;
}

