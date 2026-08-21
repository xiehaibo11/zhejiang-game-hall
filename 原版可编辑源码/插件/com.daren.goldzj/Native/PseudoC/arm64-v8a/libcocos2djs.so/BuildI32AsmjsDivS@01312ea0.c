
/* v8::internal::compiler::WasmGraphBuilder::BuildI32AsmjsDivS(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI32AsmjsDivS
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  Node *this_00;
  MachineGraph *this_01;
  Operator *pOVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Node *pNVar5;
  int iVar6;
  Node **ppNVar7;
  MachineOperatorBuilder *this_02;
  Graph *pGVar8;
  Graph *local_c8;
  CommonOperatorBuilder *pCStack_c0;
  undefined8 local_a0;
  Node *local_98;
  CommonOperatorBuilder *pCStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  this_01 = *(MachineGraph **)(this + 8);
  this_02 = *(MachineOperatorBuilder **)(this_01 + 0x10);
  if (*(short *)(*(long *)param_2 + 0x10) == 0x17) {
    iVar6 = *(int *)(*(long *)param_2 + 0x2c);
    if (iVar6 == 0) {
      MachineGraph::Int32Constant(this_01,0);
      return;
    }
    pGVar8 = *(Graph **)this_01;
    if (iVar6 == -1) {
      pOVar1 = (Operator *)MachineOperatorBuilder::Int32Sub(this_02);
      local_98 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
      ppNVar7 = &local_98;
      iVar6 = 2;
      pCStack_90 = (CommonOperatorBuilder *)param_1;
      goto LAB_01313140;
    }
    pOVar1 = (Operator *)MachineOperatorBuilder::Int32Div(this_02);
    local_88 = **(undefined8 **)(this + 0x18);
  }
  else {
    if (((byte)this_02[0x15] >> 1 & 1) == 0) {
      pGVar8 = *(Graph **)this_01;
      uVar3 = *(undefined8 *)(this_01 + 8);
      pOVar1 = (Operator *)MachineOperatorBuilder::Word32Equal(this_02);
      pCStack_90 = (CommonOperatorBuilder *)
                   MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
      local_98 = param_2;
      uVar2 = Graph::NewNode(pGVar8,pOVar1,2,&local_98,false);
      Diamond::Diamond((Diamond *)&local_98,pGVar8,uVar3,uVar2,2);
      pGVar8 = (Graph *)**(undefined8 **)(this + 8);
      uVar3 = (*(undefined8 **)(this + 8))[1];
      pOVar1 = (Operator *)MachineOperatorBuilder::Word32Equal(this_02);
      pCStack_c0 = (CommonOperatorBuilder *)
                   MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),-1);
      local_c8 = (Graph *)param_2;
      uVar2 = Graph::NewNode(pGVar8,pOVar1,2,(Node **)&local_c8,false);
      Diamond::Diamond((Diamond *)&local_c8,pGVar8,uVar3,uVar2,2);
      pGVar8 = (Graph *)**(undefined8 **)(this + 8);
      pOVar1 = (Operator *)MachineOperatorBuilder::Int32Div(this_02);
      local_58 = local_78;
      local_68 = param_1;
      pNStack_60 = param_2;
      uVar3 = Graph::NewNode(pGVar8,pOVar1,3,&local_68,false);
      pGVar8 = (Graph *)**(undefined8 **)(this + 8);
      pOVar1 = (Operator *)MachineOperatorBuilder::Int32Sub(this_02);
      local_68 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
      pNStack_60 = param_1;
      pNVar4 = (Node *)Graph::NewNode(pGVar8,pOVar1,2,&local_68,false);
      pNVar5 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
      this_00 = local_98;
      pOVar1 = (Operator *)CommonOperatorBuilder::Phi(pCStack_90,4,2);
      local_58 = local_70;
      local_68 = pNVar5;
      pNStack_60 = (Node *)uVar3;
      uVar3 = Graph::NewNode((Graph *)this_00,pOVar1,3,&local_68,false);
      pGVar8 = local_c8;
      pOVar1 = (Operator *)CommonOperatorBuilder::Phi(pCStack_c0,4,2);
      ppNVar7 = &local_68;
      iVar6 = 3;
      local_58 = local_a0;
      local_68 = pNVar4;
      pNStack_60 = (Node *)uVar3;
      goto LAB_01313140;
    }
    pGVar8 = *(Graph **)this_01;
    pOVar1 = (Operator *)MachineOperatorBuilder::Int32Div(this_02);
    local_88 = *(undefined8 *)(**(long **)(this + 8) + 8);
  }
  ppNVar7 = &local_98;
  iVar6 = 3;
  local_98 = param_1;
  pCStack_90 = (CommonOperatorBuilder *)param_2;
LAB_01313140:
  Graph::NewNode(pGVar8,pOVar1,iVar6,ppNVar7,false);
  return;
}

