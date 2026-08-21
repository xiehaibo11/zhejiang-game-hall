
/* v8::internal::compiler::CodeAssembler::Int64Constant(long) */

void __thiscall
v8::internal::compiler::CodeAssembler::Int64Constant(CodeAssembler *this,long param_1)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int64Constant((CommonOperatorBuilder *)(this_00 + 0x48),param_1);
  RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  return;
}

