
/* v8::internal::compiler::MachineOperatorReducer::Float64PowHalf(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MachineOperatorReducer::Float64PowHalf
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *this_00;
  Operator *pOVar1;
  Graph *pGVar2;
  undefined8 uVar3;
  Node *pNVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Graph *pGVar7;
  Node *local_88;
  Node *pNStack_80;
  undefined8 local_60;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Float64Add
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
  local_88 = (Node *)0x0;
  local_88 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)(this + 0x10),0.0);
  pNStack_80 = param_1;
  pGVar2 = (Graph *)Graph::NewNode(pGVar7,pOVar1,2,&local_88,false);
  puVar6 = *(undefined8 **)(this + 0x10);
  pGVar7 = (Graph *)*puVar6;
  uVar5 = puVar6[1];
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Float64LessThanOrEqual((MachineOperatorBuilder *)puVar6[2]);
  local_88 = (Node *)0xfff0000000000000;
  pNStack_80 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)(this + 0x10),-INFINITY);
  local_88 = (Node *)pGVar2;
  uVar3 = Graph::NewNode(pGVar7,pOVar1,2,&local_88,false);
  Diamond::Diamond((Diamond *)&local_88,pGVar7,uVar5,uVar3,2);
  local_58 = (Node *)0x7ff0000000000000;
  pNVar4 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)(this + 0x10),INFINITY);
  pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Float64Sqrt
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
  local_58 = (Node *)pGVar2;
  uVar5 = Graph::NewNode(pGVar7,pOVar1,1,&local_58,false);
  this_00 = local_88;
  pOVar1 = (Operator *)CommonOperatorBuilder::Phi((CommonOperatorBuilder *)pNStack_80,0xc,2);
  local_48 = local_60;
  local_58 = pNVar4;
  uStack_50 = uVar5;
  Graph::NewNode((Graph *)this_00,pOVar1,3,&local_58,false);
  return;
}

