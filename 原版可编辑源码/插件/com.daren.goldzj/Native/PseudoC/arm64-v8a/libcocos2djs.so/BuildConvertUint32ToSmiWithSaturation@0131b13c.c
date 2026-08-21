
/* v8::internal::compiler::WasmGraphBuilder::BuildConvertUint32ToSmiWithSaturation(v8::internal::compiler::Node*,
   unsigned int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildConvertUint32ToSmiWithSaturation
          (WasmGraphBuilder *this,Node *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  undefined8 uVar6;
  Node *this_00;
  Node *pNVar7;
  Graph *pGVar8;
  long *plVar9;
  Node *local_88;
  CommonOperatorBuilder *pCStack_80;
  long local_78;
  undefined8 local_60;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar3 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_2);
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  pOVar4 = (Operator *)
           MachineOperatorBuilder::Uint32LessThanOrEqual
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_88 = param_1;
  pCStack_80 = (CommonOperatorBuilder *)uVar3;
  uVar3 = Graph::NewNode(pGVar8,pOVar4,2,&local_88,false);
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  pOVar4 = (Operator *)
           MachineOperatorBuilder::Word32Shl
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  pCStack_80 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),1);
  local_88 = param_1;
  pNVar5 = (Node *)Graph::NewNode(pGVar8,pOVar4,2,&local_88,false);
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::NumberConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],(double)param_2);
  local_88 = (Node *)0x0;
  uVar6 = Graph::NewNode(pGVar8,pOVar4,0,&local_88,false);
  Diamond::Diamond((Diamond *)&local_88,**(undefined8 **)(this + 8),(*(undefined8 **)(this + 8))[1],
                   uVar3,1);
  pNVar7 = (Node *)**(undefined8 **)(this + 0x18);
  plVar1 = (long *)(local_78 + 0x20);
  uVar2 = *(uint *)(local_78 + 0x14) & 0xf000000;
  plVar9 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar9 = (long *)(*plVar1 + 0x10);
  }
  this_00 = (Node *)plVar9[1];
  if (this_00 != pNVar7) {
    if (uVar2 == 0xf000000) {
      local_78 = *plVar1;
    }
    if (this_00 != (Node *)0x0) {
      Node::RemoveUse(this_00,(Use *)(local_78 + -0x30));
    }
    plVar9[1] = (long)pNVar7;
    if (pNVar7 != (Node *)0x0) {
      Node::AppendUse(pNVar7,(Use *)(local_78 + -0x30));
    }
  }
  pNVar7 = local_88;
  pOVar4 = (Operator *)CommonOperatorBuilder::Phi(pCStack_80,8,2);
  local_48 = local_60;
  local_58 = pNVar5;
  uStack_50 = uVar6;
  Graph::NewNode((Graph *)pNVar7,pOVar4,3,&local_58,false);
  return;
}

