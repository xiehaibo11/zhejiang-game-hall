
/* v8::internal::compiler::BytecodeGraphBuilder::VisitShiftRight() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitShiftRight(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::ShiftRight(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOp(this,pOVar1);
  return;
}

