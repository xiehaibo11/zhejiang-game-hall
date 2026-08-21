
/* v8::internal::compiler::CodeAssembler::Float64Constant(double) */

void __thiscall
v8::internal::compiler::CodeAssembler::Float64Constant(CodeAssembler *this,double param_1)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Float64Constant((CommonOperatorBuilder *)(this_00 + 0x48),param_1)
  ;
  RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  return;
}

