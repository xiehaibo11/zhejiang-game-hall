
/* void 
   v8::internal::compiler::GraphAssembler::MergeState<>(v8::internal::compiler::GraphAssemblerLabel<0>*)
    */

void __thiscall
v8::internal::compiler::GraphAssembler::MergeState<>
          (GraphAssembler *this,GraphAssemblerLabel *param_1)

{
  long *plVar1;
  uint uVar2;
  Graph *pGVar3;
  Node *pNVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  long lVar7;
  Node *pNVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  Use *pUVar12;
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  uVar11 = *(ulong *)(param_1 + 0x10);
  iVar10 = (int)uVar11;
  if (*(int *)(param_1 + 4) == 2) {
    if (iVar10 == 0) {
      pGVar3 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar5 = (Operator *)
               CommonOperatorBuilder::Loop
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],2);
      local_68 = *(Node **)(this + 0x28);
      pNStack_60 = local_68;
      uVar6 = Graph::NewNode(pGVar3,pOVar5,2,&local_68,false);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      pGVar3 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar5 = (Operator *)
               CommonOperatorBuilder::EffectPhi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],2);
      local_68 = *(Node **)(this + 0x20);
      local_58 = *(undefined8 *)(param_1 + 0x20);
      pNStack_60 = local_68;
      uVar6 = Graph::NewNode(pGVar3,pOVar5,3,&local_68,false);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      pGVar3 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar5 = (Operator *)
               CommonOperatorBuilder::Terminate
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
      local_68 = *(Node **)(param_1 + 0x18);
      pNStack_60 = *(Node **)(param_1 + 0x20);
      pNVar8 = (Node *)Graph::NewNode(pGVar3,pOVar5,2,&local_68,false);
      NodeProperties::MergeControlToEnd
                ((Graph *)**(undefined8 **)(this + 0x18),
                 (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],pNVar8);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x20);
      pNVar8 = *(Node **)(this + 0x28);
      plVar1 = (long *)(lVar7 + 0x20);
      uVar2 = *(uint *)(lVar7 + 0x14) & 0xf000000;
      plVar9 = plVar1;
      if (uVar2 == 0xf000000) {
        plVar9 = (long *)(*plVar1 + 0x10);
      }
      pNVar4 = (Node *)plVar9[1];
      if (pNVar4 != pNVar8) {
        if (uVar2 == 0xf000000) {
          lVar7 = *plVar1;
        }
        if (pNVar4 != (Node *)0x0) {
          Node::RemoveUse(pNVar4,(Use *)(lVar7 + -0x30));
        }
        plVar9[1] = (long)pNVar8;
        if (pNVar8 != (Node *)0x0) {
          Node::AppendUse(pNVar8,(Use *)(lVar7 + -0x30));
        }
      }
      lVar7 = *(long *)(param_1 + 0x18);
      pNVar8 = *(Node **)(this + 0x20);
      plVar1 = (long *)(lVar7 + 0x20);
      uVar2 = *(uint *)(lVar7 + 0x14) & 0xf000000;
      plVar9 = plVar1;
      if (uVar2 == 0xf000000) {
        plVar9 = (long *)(*plVar1 + 0x10);
      }
      pNVar4 = (Node *)plVar9[1];
      if (pNVar4 != pNVar8) {
        if (uVar2 == 0xf000000) {
          lVar7 = *plVar1;
        }
        if (pNVar4 != (Node *)0x0) {
          Node::RemoveUse(pNVar4,(Use *)(lVar7 + -0x30));
        }
        plVar9[1] = (long)pNVar8;
        if (pNVar8 != (Node *)0x0) {
          Node::AppendUse(pNVar8,(Use *)(lVar7 + -0x30));
        }
      }
    }
  }
  else if (iVar10 == 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x20);
  }
  else if (iVar10 == 1) {
    pGVar3 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],2);
    pNStack_60 = *(Node **)(this + 0x28);
    local_68 = *(Node **)(param_1 + 0x20);
    uVar6 = Graph::NewNode(pGVar3,pOVar5,2,&local_68,false);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    pGVar3 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],2);
    local_68 = *(Node **)(param_1 + 0x18);
    local_58 = *(undefined8 *)(param_1 + 0x20);
    pNStack_60 = *(Node **)(this + 0x20);
    uVar6 = Graph::NewNode(pGVar3,pOVar5,3,&local_68,false);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
  }
  else {
    Node::AppendInput(*(Node **)(param_1 + 0x20),*(Zone **)**(undefined8 **)(this + 0x18),
                      *(Node **)(this + 0x28));
    pNVar8 = *(Node **)(param_1 + 0x20);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Merge
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x18) + 8),iVar10 + 1);
    NodeProperties::ChangeOp(pNVar8,pOVar5);
    lVar7 = *(long *)(param_1 + 0x18);
    pNVar8 = *(Node **)(this + 0x20);
    plVar1 = (long *)(lVar7 + 0x20);
    uVar2 = *(uint *)(lVar7 + 0x14) & 0xf000000;
    plVar9 = plVar1;
    if (uVar2 == 0xf000000) {
      plVar9 = (long *)(*plVar1 + 0x10);
    }
    pNVar4 = *(Node **)((long)plVar9 +
                       (-(uVar11 >> 0x1f & 1) & 0xfffffff800000000 | (uVar11 & 0xffffffff) << 3));
    if (pNVar4 != pNVar8) {
      if (uVar2 == 0xf000000) {
        lVar7 = *plVar1;
      }
      pUVar12 = (Use *)(lVar7 + ~(long)iVar10 * 0x18);
      if (pNVar4 != (Node *)0x0) {
        Node::RemoveUse(pNVar4,pUVar12);
      }
      plVar9[iVar10] = (long)pNVar8;
      if (pNVar8 != (Node *)0x0) {
        Node::AppendUse(pNVar8,pUVar12);
      }
    }
    Node::AppendInput(*(Node **)(param_1 + 0x18),*(Zone **)**(undefined8 **)(this + 0x18),
                      *(Node **)(param_1 + 0x20));
    pNVar8 = *(Node **)(param_1 + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x18) + 8),iVar10 + 1);
    NodeProperties::ChangeOp(pNVar8,pOVar5);
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  return;
}

