
/* v8::internal::compiler::SimplifiedLowering::DoNumberToUint8Clamped(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::SimplifiedLowering::DoNumberToUint8Clamped
          (SimplifiedLowering *this,Node *param_1)

{
  Node *pNVar1;
  Graph *this_00;
  Node *pNVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Operator *pOVar7;
  Operator *extraout_x1;
  Use *pUVar8;
  Node *pNVar9;
  Graph *pGVar10;
  Graph *this_01;
  Node *local_78;
  Node *pNStack_70;
  Node *local_68;
  
  pNVar1 = param_1 + 0x20;
  pNVar9 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar9 = *(Node **)pNVar9;
  pNVar2 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)this,0.0);
  uVar3 = MachineGraph::Float64Constant(*(MachineGraph **)this,255.0);
  this_00 = (Graph *)**(undefined8 **)this;
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Select((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0xc,0);
  pGVar10 = (Graph *)**(undefined8 **)this;
  pOVar5 = (Operator *)
           MachineOperatorBuilder::Float64LessThan
                     ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_78 = pNVar2;
  pNStack_70 = pNVar9;
  pNVar6 = (Node *)Graph::NewNode(pGVar10,pOVar5,2,&local_78,false);
  pGVar10 = (Graph *)**(undefined8 **)this;
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Select((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0xc,0);
  this_01 = (Graph *)**(undefined8 **)this;
  pOVar7 = (Operator *)
           MachineOperatorBuilder::Float64LessThan
                     ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_78 = pNVar9;
  pNStack_70 = (Node *)uVar3;
  local_78 = (Node *)Graph::NewNode(this_01,pOVar7,2,&local_78,false);
  pNStack_70 = pNVar9;
  local_68 = (Node *)uVar3;
  pNStack_70 = (Node *)Graph::NewNode(pGVar10,pOVar5,3,&local_78,false);
  local_78 = pNVar6;
  local_68 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(this_00,pOVar4,3,&local_78,false);
  pNVar9 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar9 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar6 = *(Node **)pNVar9;
  if (pNVar6 != pNVar2) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar8 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar8 = (Use *)(param_1 + -0x18);
    }
    if (pNVar6 != (Node *)0x0) {
      Node::RemoveUse(pNVar6,pUVar8);
    }
    *(Node **)pNVar9 = pNVar2;
    if (pNVar2 != (Node *)0x0) {
      Node::AppendUse(pNVar2,pUVar8);
    }
  }
  MachineOperatorBuilder::Float64RoundTiesEven(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
  NodeProperties::ChangeOp(param_1,extraout_x1);
  return;
}

