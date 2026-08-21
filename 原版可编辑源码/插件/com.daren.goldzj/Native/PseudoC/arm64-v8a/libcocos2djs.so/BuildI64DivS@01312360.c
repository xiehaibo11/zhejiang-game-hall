
/* v8::internal::compiler::WasmGraphBuilder::BuildI64DivS(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI64DivS
          (WasmGraphBuilder *this,Node *param_1,Node *param_2,int param_3)

{
  undefined8 uVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  Graph *pGVar5;
  undefined8 *puVar6;
  long lVar7;
  Node *local_78;
  Node *pNStack_70;
  undefined8 local_68;
  
  if (*(char *)(*(long *)(*(long *)(this + 8) + 0x10) + 0x10) == '\x04') {
    uVar1 = ExternalReference::wasm_int64_div();
    BuildDiv64Call(this,param_1,param_2,uVar1,0x405,3,param_3);
    return;
  }
  TrapIfEq64(this,3,param_2,0,param_3);
  lVar7 = **(long **)(this + 0x18);
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Word64Equal
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  pNStack_70 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),-1);
  local_78 = param_2;
  pNVar3 = (Node *)Graph::NewNode(pGVar5,pOVar2,2,&local_78,false);
  puVar6 = *(undefined8 **)(this + 8);
  uVar1 = **(undefined8 **)(this + 0x18);
  pGVar5 = (Graph *)*puVar6;
  pOVar2 = (Operator *)CommonOperatorBuilder::Branch((CommonOperatorBuilder *)puVar6[1],2,1);
  local_78 = pNVar3;
  pNStack_70 = (Node *)uVar1;
  pNVar3 = (Node *)Graph::NewNode(pGVar5,pOVar2,2,&local_78,false);
  pGVar5 = (Graph *)*puVar6;
  pOVar2 = (Operator *)CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)puVar6[1]);
  local_78 = pNVar3;
  lVar4 = Graph::NewNode(pGVar5,pOVar2,1,&local_78,false);
  pGVar5 = (Graph *)*puVar6;
  pOVar2 = (Operator *)CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)puVar6[1]);
  local_78 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar5,pOVar2,1,&local_78,false);
  **(long **)(this + 0x18) = lVar4;
  TrapIfEq64(this,4,param_1,0x8000000000000000,param_3);
  if (**(long **)(this + 0x18) == lVar4) {
    **(long **)(this + 0x18) = lVar7;
  }
  else {
    pGVar5 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],2);
    pNStack_70 = (Node *)**(undefined8 **)(this + 0x18);
    local_78 = pNVar3;
    uVar1 = Graph::NewNode(pGVar5,pOVar2,2,&local_78,false);
    **(undefined8 **)(this + 0x18) = uVar1;
  }
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Int64Div
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_68 = **(undefined8 **)(this + 0x18);
  local_78 = param_1;
  pNStack_70 = param_2;
  Graph::NewNode(pGVar5,pOVar2,3,&local_78,false);
  return;
}

