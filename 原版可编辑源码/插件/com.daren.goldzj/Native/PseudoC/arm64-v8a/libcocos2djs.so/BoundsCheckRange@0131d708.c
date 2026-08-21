
/* v8::internal::compiler::WasmGraphBuilder::BoundsCheckRange(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node*, int) */

undefined8 __thiscall
v8::internal::compiler::WasmGraphBuilder::BoundsCheckRange
          (WasmGraphBuilder *this,Node *param_1,Node **param_2,Node *param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Node *pNVar6;
  undefined4 uVar7;
  long lVar8;
  MachineOperatorBuilder *this_00;
  Graph *this_01;
  long *plVar9;
  Graph *pGVar10;
  Node *local_98;
  Node *pNStack_90;
  long local_88;
  undefined8 local_70;
  Graph *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pGVar10 = (Graph *)**(undefined8 **)(this + 8);
  pOVar3 = (Operator *)MachineOperatorBuilder::Uint32LessThan(this_00);
  local_98 = param_3;
  pNStack_90 = param_1;
  pNVar4 = (Node *)Graph::NewNode(pGVar10,pOVar3,2,&local_98,false);
  uVar7 = 0xc;
  if ((*(long *)(this + 0x10) != 0) && (uVar7 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0'))
  {
    uVar7 = 1;
  }
  pGVar10 = (Graph *)**(undefined8 **)(this + 8);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::TrapIf
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar7);
  local_88 = **(long **)(this + 0x18);
  pNStack_90 = (Node *)**(undefined8 **)(this + 0x20);
  local_98 = pNVar4;
  uVar5 = Graph::NewNode(pGVar10,pOVar3,3,&local_98,false);
  **(undefined8 **)(this + 0x18) = uVar5;
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar5,
               (-(ulong)(param_4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_4 + 1U) << 1) &
               0xffff80007fffffff);
  }
  pGVar10 = (Graph *)**(undefined8 **)(this + 8);
  pOVar3 = (Operator *)MachineOperatorBuilder::Int32Sub(this_00);
  local_98 = param_3;
  pNStack_90 = param_1;
  pGVar10 = (Graph *)Graph::NewNode(pGVar10,pOVar3,2,&local_98,false);
  this_01 = (Graph *)**(undefined8 **)(this + 8);
  pOVar3 = (Operator *)MachineOperatorBuilder::Uint32LessThan(this_00);
  pNStack_90 = *param_2;
  local_98 = (Node *)pGVar10;
  uVar5 = Graph::NewNode(this_01,pOVar3,2,&local_98,false);
  Diamond::Diamond((Diamond *)&local_98,**(undefined8 **)(this + 8),(*(undefined8 **)(this + 8))[1],
                   uVar5,2);
  pNVar4 = (Node *)**(undefined8 **)(this + 0x18);
  plVar1 = (long *)(local_88 + 0x20);
  uVar2 = *(uint *)(local_88 + 0x14) & 0xf000000;
  plVar9 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar9 = (long *)(*plVar1 + 0x10);
  }
  pNVar6 = (Node *)plVar9[1];
  if (pNVar6 != pNVar4) {
    lVar8 = local_88;
    if (uVar2 == 0xf000000) {
      lVar8 = *plVar1;
    }
    if (pNVar6 != (Node *)0x0) {
      Node::RemoveUse(pNVar6,(Use *)(lVar8 + -0x30));
    }
    plVar9[1] = (long)pNVar4;
    if (pNVar4 != (Node *)0x0) {
      Node::AppendUse(pNVar4,(Use *)(lVar8 + -0x30));
    }
  }
  pNVar4 = local_98;
  pNVar6 = *param_2;
  pOVar3 = (Operator *)CommonOperatorBuilder::Phi((CommonOperatorBuilder *)pNStack_90,4,2);
  local_58 = local_70;
  local_68 = pGVar10;
  pNStack_60 = pNVar6;
  pNVar4 = (Node *)Graph::NewNode((Graph *)pNVar4,pOVar3,3,(Node **)&local_68,false);
  *param_2 = pNVar4;
  return uVar5;
}

