
/* v8::internal::compiler::WasmGraphBuilder::BuildI32AsmjsDivU(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI32AsmjsDivU
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  MachineOperatorBuilder *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Graph **ppGVar5;
  undefined8 *puVar6;
  Graph *pGVar7;
  Graph *local_88;
  CommonOperatorBuilder *pCStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  Node *local_58;
  Node *pNStack_50;
  undefined8 local_48;
  
  puVar6 = *(undefined8 **)(this + 8);
  this_00 = (MachineOperatorBuilder *)puVar6[2];
  if (((byte)this_00[0x15] >> 2 & 1) == 0) {
    pGVar7 = (Graph *)*puVar6;
    uVar4 = puVar6[1];
    pOVar1 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
    pCStack_80 = (CommonOperatorBuilder *)
                 MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    local_88 = (Graph *)param_2;
    uVar2 = Graph::NewNode(pGVar7,pOVar1,2,(Node **)&local_88,false);
    Diamond::Diamond((Diamond *)&local_88,pGVar7,uVar4,uVar2,2);
    pNVar3 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Uint32Div
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_48 = local_68;
    local_58 = param_1;
    pNStack_50 = param_2;
    uVar4 = Graph::NewNode(pGVar7,pOVar1,3,&local_58,false);
    pGVar7 = local_88;
    pOVar1 = (Operator *)CommonOperatorBuilder::Phi(pCStack_80,4,2);
    ppGVar5 = (Graph **)&local_58;
    local_48 = local_60;
    local_58 = pNVar3;
    pNStack_50 = (Node *)uVar4;
  }
  else {
    pGVar7 = (Graph *)*puVar6;
    pOVar1 = (Operator *)MachineOperatorBuilder::Uint32Div(this_00);
    ppGVar5 = &local_88;
    local_78 = *(undefined8 *)(**(long **)(this + 8) + 8);
    local_88 = (Graph *)param_1;
    pCStack_80 = (CommonOperatorBuilder *)param_2;
  }
  Graph::NewNode(pGVar7,pOVar1,3,(Node **)ppGVar5,false);
  return;
}

