
/* v8::internal::compiler::SimplifiedLowering::DoNumberToBit(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::SimplifiedLowering::DoNumberToBit(SimplifiedLowering *this,Node *param_1)

{
  Node *this_00;
  Node *this_01;
  Operator *pOVar1;
  Node *pNVar2;
  Graph *this_02;
  Use *pUVar3;
  Zone *pZVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *local_48;
  
  pNVar2 = param_1 + 0x20;
  pNVar5 = pNVar2;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  this_00 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)this,0.0);
  pNVar6 = pNVar2;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  this_01 = *(Node **)pNVar6;
  if (this_01 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar3 = (Use *)(*(long *)pNVar2 + -0x18);
    }
    else {
      pUVar3 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar3);
    }
    *(Node **)pNVar6 = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar3);
    }
  }
  this_02 = (Graph *)**(undefined8 **)this;
  pZVar4 = *(Zone **)this_02;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Float64Abs((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_48 = pNVar5;
  pNVar2 = (Node *)Graph::NewNode(this_02,pOVar1,1,&local_48,false);
  Node::AppendInput(param_1,pZVar4,pNVar2);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Float64LessThan
                     (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
  NodeProperties::ChangeOp(param_1,pOVar1);
  return;
}

