
/* v8::internal::compiler::SimplifiedLowering::DoUnsigned32ToUint8Clamped(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::SimplifiedLowering::DoUnsigned32ToUint8Clamped
          (SimplifiedLowering *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Node *this_00;
  Node *this_01;
  Node *pNVar4;
  Graph *this_02;
  Use *pUVar5;
  Node *pNVar6;
  Node *local_60;
  Node *pNStack_58;
  
  pNVar1 = param_1 + 0x20;
  pNVar4 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  pNVar2 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,0xff);
  this_02 = (Graph *)**(undefined8 **)this;
  pOVar3 = (Operator *)
           MachineOperatorBuilder::Uint32LessThanOrEqual
                     ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_60 = pNVar4;
  pNStack_58 = pNVar2;
  this_00 = (Node *)Graph::NewNode(this_02,pOVar3,2,&local_60,false);
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_01 = *(Node **)pNVar6;
  if (this_01 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar5 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar5 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar5);
    }
    *(Node **)pNVar6 = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar5);
    }
  }
  Node::AppendInput(param_1,*(Zone **)**(undefined8 **)this,pNVar4);
  Node::AppendInput(param_1,*(Zone **)**(undefined8 **)this,pNVar2);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Select(*(CommonOperatorBuilder **)(*(long *)this + 8),4,0);
  NodeProperties::ChangeOp(param_1,pOVar3);
  return;
}

