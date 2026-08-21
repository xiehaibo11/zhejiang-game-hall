
/* v8::internal::compiler::BytecodeGraphBuilder::VisitMod() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitMod(BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::Modulus(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  BuildBinaryOp(this,pOVar1);
  return;
}

