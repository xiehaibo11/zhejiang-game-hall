
/* v8::internal::compiler::MachineOperatorReducer::Uint32Div(v8::internal::compiler::Node*, unsigned
   int) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::Uint32Div
          (MachineOperatorReducer *this,Node *param_1,uint param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  MachineGraph *this_00;
  int iVar5;
  uint uVar6;
  Graph *pGVar7;
  undefined1 auVar8 [16];
  Node *local_60;
  Node *pNStack_58;
  
  uVar6 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
  if (uVar6 != 0) {
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32Shr
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    pNStack_58 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),uVar6);
    local_60 = param_1;
    param_1 = (Node *)Graph::NewNode(pGVar7,pOVar1,2,&local_60,false);
  }
  auVar8 = base::UnsignedDivisionByConstant<unsigned_int>(param_2 >> (ulong)(uVar6 & 0x1f),uVar6);
  pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Uint32MulHigh
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
  pNStack_58 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),auVar8._0_4_);
  local_60 = param_1;
  pNVar2 = (Node *)Graph::NewNode(pGVar7,pOVar1,2,&local_60,false);
  iVar5 = auVar8._4_4_;
  if ((auVar8._8_8_ & 1) == 0) {
    if (iVar5 == 0) {
      return pNVar2;
    }
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32Shr
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    this_00 = *(MachineGraph **)(this + 0x10);
  }
  else {
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Int32Sub
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    local_60 = param_1;
    pNStack_58 = pNVar2;
    pNVar3 = (Node *)Graph::NewNode(pGVar7,pOVar1,2,&local_60,false);
    pNVar4 = (Node *)ReduceInt32Sub(this,pNVar3);
    if (pNVar4 != (Node *)0x0) {
      pNVar3 = pNVar4;
    }
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32Shr
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    pNStack_58 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),1);
    local_60 = pNVar3;
    pNVar3 = (Node *)Graph::NewNode(pGVar7,pOVar1,2,&local_60,false);
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Int32Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    local_60 = pNVar3;
    pNStack_58 = pNVar2;
    pNVar2 = (Node *)Graph::NewNode(pGVar7,pOVar1,2,&local_60,false);
    pNVar3 = (Node *)ReduceInt32Add(this,pNVar2);
    if (pNVar3 != (Node *)0x0) {
      pNVar2 = pNVar3;
    }
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return pNVar2;
    }
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32Shr
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    this_00 = *(MachineGraph **)(this + 0x10);
  }
  pNStack_58 = (Node *)MachineGraph::Int32Constant(this_00,iVar5);
  local_60 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar7,pOVar1,2,&local_60,false);
  return pNVar2;
}

