
/* v8::internal::compiler::SimplifiedLowering::Int32Abs(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::SimplifiedLowering::Int32Abs(SimplifiedLowering *this,Node *param_1)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Operator *pOVar3;
  Graph *pGVar4;
  Graph *this_00;
  Node *pNVar5;
  Node *local_50;
  undefined8 uStack_48;
  
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  pGVar4 = (Graph *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Sar((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  uStack_48 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x1f);
  local_50 = pNVar5;
  uVar2 = Graph::NewNode(pGVar4,pOVar1,2,&local_50,false);
  this_00 = (Graph *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Int32Sub((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  pGVar4 = (Graph *)**(undefined8 **)this;
  pOVar3 = (Operator *)
           MachineOperatorBuilder::Word32Xor((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_50 = pNVar5;
  uStack_48 = uVar2;
  local_50 = (Node *)Graph::NewNode(pGVar4,pOVar3,2,&local_50,false);
  uStack_48 = uVar2;
  Graph::NewNode(this_00,pOVar1,2,&local_50,false);
  return;
}

