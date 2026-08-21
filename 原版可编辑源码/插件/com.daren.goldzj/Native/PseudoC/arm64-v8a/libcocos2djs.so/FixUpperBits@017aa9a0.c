
/* v8::internal::compiler::SimdScalarLowering::FixUpperBits(v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::FixUpperBits
          (SimdScalarLowering *this,Node *param_1,int param_2)

{
  Operator *pOVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Graph *this_00;
  Graph *this_01;
  Node *local_60;
  undefined8 uStack_58;
  
  this_00 = (Graph *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Sar((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  this_01 = (Graph *)**(undefined8 **)this;
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Word32Shl((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)this,param_2);
  local_60 = param_1;
  pNVar3 = (Node *)Graph::NewNode(this_01,pOVar2,2,&local_60,false);
  uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)this,param_2);
  local_60 = pNVar3;
  Graph::NewNode(this_00,pOVar1,2,&local_60,false);
  return;
}

