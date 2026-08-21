
/* v8::internal::compiler::SimplifiedLowering::Float64Round(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::SimplifiedLowering::Float64Round(SimplifiedLowering *this,Node *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Operator *pOVar4;
  Operator *pOVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Operator *extraout_x1;
  Graph *pGVar8;
  Graph *pGVar9;
  Graph *this_00;
  undefined8 uVar10;
  Node *local_78;
  Node *pNStack_70;
  undefined8 local_68;
  
  uVar1 = MachineGraph::Float64Constant(*(MachineGraph **)this,1.0);
  uVar2 = MachineGraph::Float64Constant(*(MachineGraph **)this,0.5);
  local_78 = param_1 + 0x20;
  pNVar3 = local_78;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)local_78 + 0x10);
  }
  uVar10 = *(undefined8 *)pNVar3;
  pGVar8 = (Graph *)**(undefined8 **)this;
  MachineOperatorBuilder::Float64RoundUp((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    local_78 = (Node *)(*(long *)local_78 + 0x10);
  }
  local_78 = *(Node **)local_78;
  pNVar3 = (Node *)Graph::NewNode(pGVar8,extraout_x1,1,&local_78,false);
  pGVar8 = (Graph *)**(undefined8 **)this;
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Select((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0xc,0);
  pGVar9 = (Graph *)**(undefined8 **)this;
  pOVar5 = (Operator *)
           MachineOperatorBuilder::Float64LessThanOrEqual
                     ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  this_00 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           MachineOperatorBuilder::Float64Sub((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_78 = pNVar3;
  pNStack_70 = (Node *)uVar2;
  local_78 = (Node *)Graph::NewNode(this_00,pOVar6,2,&local_78,false);
  pNStack_70 = (Node *)uVar10;
  pNVar7 = (Node *)Graph::NewNode(pGVar9,pOVar5,2,&local_78,false);
  pGVar9 = (Graph *)**(undefined8 **)this;
  pOVar5 = (Operator *)
           MachineOperatorBuilder::Float64Sub((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_78 = pNVar3;
  pNStack_70 = (Node *)uVar1;
  local_68 = Graph::NewNode(pGVar9,pOVar5,2,&local_78,false);
  local_78 = pNVar7;
  pNStack_70 = pNVar3;
  Graph::NewNode(pGVar8,pOVar4,3,&local_78,false);
  return;
}

