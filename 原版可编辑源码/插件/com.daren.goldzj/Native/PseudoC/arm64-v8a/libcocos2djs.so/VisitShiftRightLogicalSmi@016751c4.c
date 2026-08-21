
/* v8::internal::compiler::BytecodeGraphBuilder::VisitShiftRightLogicalSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitShiftRightLogicalSmi(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::ShiftRightLogical
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOpWithImmediate(this,pOVar1);
  return;
}

