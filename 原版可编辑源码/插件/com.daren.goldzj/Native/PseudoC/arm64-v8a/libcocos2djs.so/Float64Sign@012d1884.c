
/* v8::internal::compiler::SimplifiedLowering::Float64Sign(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::SimplifiedLowering::Float64Sign(SimplifiedLowering *this,Node *param_1)

{
  Graph *this_00;
  undefined8 uVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Operator *pOVar7;
  Graph *this_01;
  Graph *pGVar8;
  Node *pNVar9;
  Node *local_78;
  Node *pNStack_70;
  Node *local_68;
  
  uVar1 = MachineGraph::Float64Constant(*(MachineGraph **)this,-1.0);
  pNVar2 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)this,0.0);
  uVar3 = MachineGraph::Float64Constant(*(MachineGraph **)this,1.0);
  pNVar9 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  pNVar9 = *(Node **)pNVar9;
  this_00 = (Graph *)**(undefined8 **)this;
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Select((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0xc,0);
  pGVar8 = (Graph *)**(undefined8 **)this;
  pOVar5 = (Operator *)
           MachineOperatorBuilder::Float64LessThan
                     ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_78 = pNVar9;
  pNStack_70 = pNVar2;
  pNVar6 = (Node *)Graph::NewNode(pGVar8,pOVar5,2,&local_78,false);
  pGVar8 = (Graph *)**(undefined8 **)this;
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Select((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0xc,0);
  this_01 = (Graph *)**(undefined8 **)this;
  pOVar7 = (Operator *)
           MachineOperatorBuilder::Float64LessThan
                     ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_78 = pNVar2;
  pNStack_70 = pNVar9;
  local_78 = (Node *)Graph::NewNode(this_01,pOVar7,2,&local_78,false);
  pNStack_70 = (Node *)uVar3;
  local_68 = pNVar9;
  local_68 = (Node *)Graph::NewNode(pGVar8,pOVar5,3,&local_78,false);
  local_78 = pNVar6;
  pNStack_70 = (Node *)uVar1;
  Graph::NewNode(this_00,pOVar4,3,&local_78,false);
  return;
}

