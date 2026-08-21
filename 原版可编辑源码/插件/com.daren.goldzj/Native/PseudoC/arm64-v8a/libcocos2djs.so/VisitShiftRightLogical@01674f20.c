
/* v8::internal::compiler::BytecodeGraphBuilder::VisitShiftRightLogical() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitShiftRightLogical(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::ShiftRightLogical
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOp(this,pOVar1);
  return;
}

