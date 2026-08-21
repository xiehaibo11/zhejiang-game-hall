
/* v8::internal::compiler::BytecodeGraphBuilder::VisitShiftRightSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitShiftRightSmi(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::ShiftRight(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOpWithImmediate(this,pOVar1);
  return;
}

