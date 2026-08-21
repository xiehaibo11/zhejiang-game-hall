
/* v8::internal::compiler::SimdScalarLowering::Mask(v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::Mask(SimdScalarLowering *this,Node *param_1,int param_2)

{
  Operator *pOVar1;
  Graph *this_00;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = (Graph *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32And((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)this,param_2);
  local_40 = param_1;
  Graph::NewNode(this_00,pOVar1,2,&local_40,false);
  return;
}

