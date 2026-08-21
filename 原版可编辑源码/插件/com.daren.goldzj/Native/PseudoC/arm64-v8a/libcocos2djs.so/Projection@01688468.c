
/* v8::internal::compiler::CodeAssembler::Projection(int, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssembler::Projection(CodeAssembler *this,int param_1,Node *param_2)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_28;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Projection
                     ((CommonOperatorBuilder *)(this_00 + 0x48),(long)param_1);
  local_28 = param_2;
  RawMachineAssembler::AddNode(this_00,pOVar1,1,&local_28);
  return;
}

