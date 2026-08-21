
/* v8::internal::compiler::SimplifiedLowering::DoSigned32ToUint8Clamped(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::SimplifiedLowering::DoSigned32ToUint8Clamped
          (SimplifiedLowering *this,Node *param_1)

{
  undefined8 uVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Node *this_00;
  Node *this_01;
  Operator *pOVar4;
  Node *pNVar5;
  Graph *pGVar6;
  Use *pUVar7;
  Zone *pZVar8;
  Node *pNVar9;
  Graph *this_02;
  Node *pNVar10;
  Node *local_78;
  Node *pNStack_70;
  Node *local_68;
  
  pNVar5 = param_1 + 0x20;
  pNVar10 = pNVar5;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar10 = *(Node **)pNVar10;
  uVar1 = MachineGraph::Int32Constant(*(MachineGraph **)this,0);
  pNVar2 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,0xff);
  pGVar6 = (Graph *)**(undefined8 **)this;
  pOVar3 = (Operator *)
           MachineOperatorBuilder::Int32LessThanOrEqual
                     ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_78 = pNVar10;
  pNStack_70 = pNVar2;
  this_00 = (Node *)Graph::NewNode(pGVar6,pOVar3,2,&local_78,false);
  pNVar9 = pNVar5;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar9 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  this_01 = *(Node **)pNVar9;
  if (this_01 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar7 = (Use *)(*(long *)pNVar5 + -0x18);
    }
    else {
      pUVar7 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar7);
    }
    *(Node **)pNVar9 = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar7);
    }
  }
  pGVar6 = (Graph *)**(undefined8 **)this;
  pZVar8 = *(Zone **)pGVar6;
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Select((CommonOperatorBuilder *)(*(undefined8 **)this)[1],4,0);
  this_02 = (Graph *)**(undefined8 **)this;
  pOVar4 = (Operator *)
           MachineOperatorBuilder::Int32LessThan
                     ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_78 = pNVar10;
  pNStack_70 = (Node *)uVar1;
  local_78 = (Node *)Graph::NewNode(this_02,pOVar4,2,&local_78,false);
  pNStack_70 = (Node *)uVar1;
  local_68 = pNVar10;
  pNVar5 = (Node *)Graph::NewNode(pGVar6,pOVar3,3,&local_78,false);
  Node::AppendInput(param_1,pZVar8,pNVar5);
  Node::AppendInput(param_1,*(Zone **)**(undefined8 **)this,pNVar2);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Select(*(CommonOperatorBuilder **)(*(long *)this + 8),4,0);
  NodeProperties::ChangeOp(param_1,pOVar3);
  return;
}

