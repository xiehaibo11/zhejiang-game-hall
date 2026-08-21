
/* v8::internal::compiler::WasmGraphBuilder::BuildI32RemS(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI32RemS
          (WasmGraphBuilder *this,Node *param_1,Node *param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  MachineOperatorBuilder *this_00;
  Graph *pGVar10;
  Node *pNVar11;
  long *plVar12;
  Node *local_98;
  CommonOperatorBuilder *pCStack_90;
  long local_88;
  undefined8 local_78;
  undefined8 local_70;
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  puVar8 = *(undefined8 **)(this + 8);
  this_00 = (MachineOperatorBuilder *)puVar8[2];
  if ((*(short *)(*(long *)param_2 + 0x10) != 0x17) || (*(int *)(*(long *)param_2 + 0x2c) == 0)) {
    uVar7 = 0xc;
    if ((*(long *)(this + 0x10) != 0) &&
       (uVar7 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
      uVar7 = 5;
    }
    pGVar10 = (Graph *)*puVar8;
    pOVar3 = (Operator *)CommonOperatorBuilder::TrapUnless((CommonOperatorBuilder *)puVar8[1],uVar7)
    ;
    local_88 = **(long **)(this + 0x18);
    pCStack_90 = (CommonOperatorBuilder *)**(undefined8 **)(this + 0x20);
    local_98 = param_2;
    uVar4 = Graph::NewNode(pGVar10,pOVar3,3,&local_98,false);
    **(undefined8 **)(this + 0x18) = uVar4;
    if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
      SourcePositionTable::SetSourcePosition
                (*(SourcePositionTable **)(this + 0x78),uVar4,
                 (-(ulong)(param_3 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_3 + 1U) << 1)
                 & 0xffff80007fffffff);
    }
  }
  pGVar10 = (Graph *)**(undefined8 **)(this + 8);
  uVar4 = (*(undefined8 **)(this + 8))[1];
  pOVar3 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
  pCStack_90 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),-1)
  ;
  local_98 = param_2;
  uVar5 = Graph::NewNode(pGVar10,pOVar3,2,&local_98,false);
  Diamond::Diamond((Diamond *)&local_98,pGVar10,uVar4,uVar5,2);
  pNVar11 = (Node *)**(undefined8 **)(this + 0x18);
  plVar1 = (long *)(local_88 + 0x20);
  uVar2 = *(uint *)(local_88 + 0x14) & 0xf000000;
  plVar12 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar12 = (long *)(*plVar1 + 0x10);
  }
  pNVar6 = (Node *)plVar12[1];
  if (pNVar6 != pNVar11) {
    lVar9 = local_88;
    if (uVar2 == 0xf000000) {
      lVar9 = *plVar1;
    }
    if (pNVar6 != (Node *)0x0) {
      Node::RemoveUse(pNVar6,(Use *)(lVar9 + -0x30));
    }
    plVar12[1] = (long)pNVar11;
    if (pNVar11 != (Node *)0x0) {
      Node::AppendUse(pNVar11,(Use *)(lVar9 + -0x30));
    }
  }
  pNVar6 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  pGVar10 = (Graph *)**(undefined8 **)(this + 8);
  pOVar3 = (Operator *)MachineOperatorBuilder::Int32Mod(this_00);
  local_58 = local_78;
  local_68 = param_1;
  pNStack_60 = param_2;
  uVar4 = Graph::NewNode(pGVar10,pOVar3,3,&local_68,false);
  pNVar11 = local_98;
  pOVar3 = (Operator *)CommonOperatorBuilder::Phi(pCStack_90,4,2);
  local_58 = local_70;
  local_68 = pNVar6;
  pNStack_60 = (Node *)uVar4;
  Graph::NewNode((Graph *)pNVar11,pOVar3,3,&local_68,false);
  return;
}

