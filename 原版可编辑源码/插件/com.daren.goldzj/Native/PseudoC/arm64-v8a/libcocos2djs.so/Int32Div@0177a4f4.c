
/* v8::internal::compiler::MachineOperatorReducer::Int32Div(v8::internal::compiler::Node*, int) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::Int32Div
          (MachineOperatorReducer *this,Node *param_1,int param_2)

{
  undefined8 uVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Node *pNVar4;
  int iVar5;
  Graph *pGVar6;
  Node *local_60;
  Node *pNStack_58;
  
  uVar1 = base::SignedDivisionByConstant<unsigned_int>(param_2);
  pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Int32MulHigh
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
  iVar5 = (int)uVar1;
  pNStack_58 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar5);
  local_60 = param_1;
  pNVar3 = (Node *)Graph::NewNode(pGVar6,pOVar2,2,&local_60,false);
  if (param_2 < 1) {
    if ((param_2 == 0) || (iVar5 < 1)) goto LAB_0177a610;
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Int32Sub
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    local_60 = pNVar3;
    pNStack_58 = param_1;
    pNVar3 = (Node *)Graph::NewNode(pGVar6,pOVar2,2,&local_60,false);
    pNVar4 = (Node *)ReduceInt32Sub(this,pNVar3);
  }
  else {
    if (-1 < iVar5) goto LAB_0177a610;
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Int32Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    local_60 = pNVar3;
    pNStack_58 = param_1;
    pNVar3 = (Node *)Graph::NewNode(pGVar6,pOVar2,2,&local_60,false);
    pNVar4 = (Node *)ReduceInt32Add(this,pNVar3);
  }
  if (pNVar4 != (Node *)0x0) {
    pNVar3 = pNVar4;
  }
LAB_0177a610:
  iVar5 = (int)((ulong)uVar1 >> 0x20);
  if (iVar5 != 0) {
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Word32Sar
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    pNStack_58 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar5);
    local_60 = pNVar3;
    pNVar3 = (Node *)Graph::NewNode(pGVar6,pOVar2,2,&local_60,false);
  }
  pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Word32Shr
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
  pNStack_58 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0x1f);
  local_60 = param_1;
  uVar1 = Graph::NewNode(pGVar6,pOVar2,2,&local_60,false);
  pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Int32Add
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
  local_60 = pNVar3;
  pNStack_58 = (Node *)uVar1;
  pNVar3 = (Node *)Graph::NewNode(pGVar6,pOVar2,2,&local_60,false);
  pNVar4 = (Node *)ReduceInt32Add(this,pNVar3);
  if (pNVar4 != (Node *)0x0) {
    pNVar3 = pNVar4;
  }
  return pNVar3;
}

