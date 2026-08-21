
/* v8::internal::compiler::WasmGraphBuilder::BuildI64RemS(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI64RemS
          (WasmGraphBuilder *this,Node *param_1,Node *param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  Node *pNVar6;
  undefined8 *puVar7;
  Node *pNVar8;
  Graph *pGVar9;
  long *plVar10;
  Node *local_88;
  CommonOperatorBuilder *pCStack_80;
  long local_78;
  undefined8 local_68;
  undefined8 local_60;
  Node *local_58;
  Node *pNStack_50;
  undefined8 local_48;
  
  if (*(char *)(*(long *)(*(long *)(this + 8) + 0x10) + 0x10) == '\x04') {
    uVar3 = ExternalReference::wasm_int64_mod();
    BuildDiv64Call(this,param_1,param_2,uVar3,0x405,5,param_3);
    return;
  }
  TrapIfEq64(this,5,param_2,0,param_3);
  puVar7 = *(undefined8 **)(this + 8);
  pGVar9 = (Graph *)*puVar7;
  uVar3 = puVar7[1];
  pOVar4 = (Operator *)MachineOperatorBuilder::Word64Equal((MachineOperatorBuilder *)puVar7[2]);
  pCStack_80 = (CommonOperatorBuilder *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),-1)
  ;
  local_88 = param_2;
  uVar5 = Graph::NewNode(pGVar9,pOVar4,2,&local_88,false);
  Diamond::Diamond((Diamond *)&local_88,pGVar9,uVar3,uVar5,0);
  pNVar8 = (Node *)**(undefined8 **)(this + 0x18);
  plVar1 = (long *)(local_78 + 0x20);
  uVar2 = *(uint *)(local_78 + 0x14) & 0xf000000;
  plVar10 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar10 = (long *)(*plVar1 + 0x10);
  }
  pNVar6 = (Node *)plVar10[1];
  if (pNVar6 != pNVar8) {
    if (uVar2 == 0xf000000) {
      local_78 = *plVar1;
    }
    if (pNVar6 != (Node *)0x0) {
      Node::RemoveUse(pNVar6,(Use *)(local_78 + -0x30));
    }
    plVar10[1] = (long)pNVar8;
    if (pNVar8 != (Node *)0x0) {
      Node::AppendUse(pNVar8,(Use *)(local_78 + -0x30));
    }
  }
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  pOVar4 = (Operator *)
           MachineOperatorBuilder::Int64Mod
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_48 = local_68;
  local_58 = param_1;
  pNStack_50 = param_2;
  uVar3 = Graph::NewNode(pGVar9,pOVar4,3,&local_58,false);
  pNVar6 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0);
  pNVar8 = local_88;
  pOVar4 = (Operator *)CommonOperatorBuilder::Phi(pCStack_80,5,2);
  local_48 = local_60;
  local_58 = pNVar6;
  pNStack_50 = (Node *)uVar3;
  Graph::NewNode((Graph *)pNVar8,pOVar4,3,&local_58,false);
  return;
}

