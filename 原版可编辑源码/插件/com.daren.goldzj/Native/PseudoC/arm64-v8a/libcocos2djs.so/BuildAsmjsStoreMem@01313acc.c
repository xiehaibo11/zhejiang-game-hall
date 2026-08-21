
/* v8::internal::compiler::WasmGraphBuilder::BuildAsmjsStoreMem(v8::internal::MachineType,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildAsmjsStoreMem
          (WasmGraphBuilder *this,undefined1 param_2,Graph *param_3,undefined8 param_4)

{
  long *plVar1;
  uint uVar2;
  CommonOperatorBuilder *pCVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  Node *this_00;
  MachineGraph *this_01;
  Node *pNVar6;
  undefined8 *puVar7;
  Node *this_02;
  Graph *pGVar8;
  undefined8 uVar9;
  long *plVar10;
  Graph *local_a8;
  CommonOperatorBuilder *pCStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_80;
  Graph *local_78;
  Graph *pGStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar7 = *(undefined8 **)(this + 8);
  pNVar6 = (Node *)**(undefined8 **)(this + 0x28);
  pCVar3 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x28))[1];
  pGVar8 = (Graph *)*puVar7;
  uVar9 = puVar7[1];
  pOVar4 = (Operator *)MachineOperatorBuilder::Uint32LessThan((MachineOperatorBuilder *)puVar7[2]);
  local_a8 = param_3;
  pCStack_a0 = pCVar3;
  uVar5 = Graph::NewNode(pGVar8,pOVar4,2,(Node **)&local_a8,false);
  Diamond::Diamond((Diamond *)&local_a8,pGVar8,uVar9,uVar5,1);
  this_02 = (Node *)**(undefined8 **)(this + 0x18);
  plVar1 = (long *)(local_98 + 0x20);
  uVar2 = *(uint *)(local_98 + 0x14) & 0xf000000;
  plVar10 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar10 = (long *)(*plVar1 + 0x10);
  }
  this_00 = (Node *)plVar10[1];
  if (this_00 != this_02) {
    if (uVar2 == 0xf000000) {
      local_98 = *plVar1;
    }
    if (this_00 != (Node *)0x0) {
      Node::RemoveUse(this_00,(Use *)(local_98 + -0x30));
    }
    plVar10[1] = (long)this_02;
    if (this_02 != (Node *)0x0) {
      Node::AppendUse(this_02,(Use *)(local_98 + -0x30));
    }
  }
  if (this[0x62] != (WasmGraphBuilder)0x0) {
    uVar9 = *(undefined8 *)(*(long *)(this + 0x28) + 0x10);
    pGVar8 = (Graph *)**(undefined8 **)(this + 8);
    pOVar4 = (Operator *)
             MachineOperatorBuilder::Word32And
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_78 = param_3;
    pGStack_70 = (Graph *)uVar9;
    param_3 = (Graph *)Graph::NewNode(pGVar8,pOVar4,2,(Node **)&local_78,false);
  }
  this_01 = *(MachineGraph **)(this + 8);
  if ((*(MachineOperatorBuilder **)(this_01 + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)param_3 + 0x10) == 0x17) {
      param_3 = (Graph *)MachineGraph::IntPtrConstant
                                   (this_01,(ulong)*(uint *)(*(long *)param_3 + 0x2c));
    }
    else {
      pGVar8 = *(Graph **)this_01;
      pOVar4 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(this_01 + 0x10));
      local_78 = param_3;
      param_3 = (Graph *)Graph::NewNode(pGVar8,pOVar4,1,(Node **)&local_78,false);
    }
  }
  pOVar4 = (Operator *)
           MachineOperatorBuilder::Store
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10),param_2);
  uStack_60 = **(undefined8 **)(this + 0x20);
  local_58 = local_90;
  local_78 = (Graph *)pNVar6;
  pGStack_70 = param_3;
  local_68 = param_4;
  pNVar6 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar4,5,(Node **)&local_78,
                                  false);
  pGVar8 = local_a8;
  uVar9 = **(undefined8 **)(this + 0x20);
  pOVar4 = (Operator *)CommonOperatorBuilder::EffectPhi(pCStack_a0,2);
  local_68 = local_80;
  local_78 = (Graph *)pNVar6;
  pGStack_70 = (Graph *)uVar9;
  uVar9 = Graph::NewNode(pGVar8,pOVar4,3,(Node **)&local_78,false);
  **(undefined8 **)(this + 0x20) = uVar9;
  **(undefined8 **)(this + 0x18) = local_80;
  return param_4;
}

