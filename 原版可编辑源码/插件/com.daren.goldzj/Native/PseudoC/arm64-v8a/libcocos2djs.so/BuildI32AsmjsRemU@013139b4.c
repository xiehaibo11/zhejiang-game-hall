
/* v8::internal::compiler::WasmGraphBuilder::BuildI32AsmjsRemU(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI32AsmjsRemU
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  Node *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  Graph *pGVar6;
  Node *local_88;
  CommonOperatorBuilder *pCStack_80;
  undefined8 local_68;
  undefined8 local_60;
  Node *local_58;
  Node *pNStack_50;
  undefined8 local_48;
  
  puVar5 = *(undefined8 **)(this + 8);
  uVar3 = puVar5[1];
  pGVar6 = (Graph *)*puVar5;
  pOVar1 = (Operator *)MachineOperatorBuilder::Word32Equal((MachineOperatorBuilder *)puVar5[2]);
  pCStack_80 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  local_88 = param_2;
  uVar2 = Graph::NewNode(pGVar6,pOVar1,2,&local_88,false);
  Diamond::Diamond((Diamond *)&local_88,pGVar6,uVar3,uVar2,2);
  pGVar6 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Uint32Mod
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_48 = local_68;
  local_58 = param_1;
  pNStack_50 = param_2;
  uVar3 = Graph::NewNode(pGVar6,pOVar1,3,&local_58,false);
  pNVar4 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  this_00 = local_88;
  pOVar1 = (Operator *)CommonOperatorBuilder::Phi(pCStack_80,4,2);
  local_48 = local_60;
  local_58 = pNVar4;
  pNStack_50 = (Node *)uVar3;
  Graph::NewNode((Graph *)this_00,pOVar1,3,&local_58,false);
  return;
}

