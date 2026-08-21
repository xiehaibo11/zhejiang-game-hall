
/* v8::internal::compiler::BytecodeGraphBuilder::VisitShiftLeft() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitShiftLeft(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::ShiftLeft(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOp(this,pOVar1);
  return;
}

