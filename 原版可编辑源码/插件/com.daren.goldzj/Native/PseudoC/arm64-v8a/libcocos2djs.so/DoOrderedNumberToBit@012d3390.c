
/* v8::internal::compiler::SimplifiedLowering::DoOrderedNumberToBit(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::SimplifiedLowering::DoOrderedNumberToBit
          (SimplifiedLowering *this,Node *param_1)

{
  Operator *pOVar1;
  Node *this_00;
  Node *this_01;
  Node *pNVar2;
  Graph *this_02;
  Zone *pZVar3;
  Use *pUVar4;
  Node *pNVar5;
  Node *local_50;
  undefined8 uStack_48;
  
  pNVar2 = param_1 + 0x20;
  pNVar5 = pNVar2;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  this_02 = (Graph *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Float64Equal((MachineOperatorBuilder *)(*(undefined8 **)this)[2])
  ;
  uStack_48 = MachineGraph::Float64Constant(*(MachineGraph **)this,0.0);
  local_50 = pNVar5;
  this_00 = (Node *)Graph::NewNode(this_02,pOVar1,2,&local_50,false);
  pNVar5 = pNVar2;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar5 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  this_01 = *(Node **)pNVar5;
  if (this_01 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar4 = (Use *)(*(long *)pNVar2 + -0x18);
    }
    else {
      pUVar4 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar4);
    }
    *(Node **)pNVar5 = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar4);
    }
  }
  pZVar3 = (Zone *)**(undefined8 **)*(MachineGraph **)this;
  pNVar2 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,0);
  Node::AppendInput(param_1,pZVar3,pNVar2);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
  NodeProperties::ChangeOp(param_1,pOVar1);
  return;
}

