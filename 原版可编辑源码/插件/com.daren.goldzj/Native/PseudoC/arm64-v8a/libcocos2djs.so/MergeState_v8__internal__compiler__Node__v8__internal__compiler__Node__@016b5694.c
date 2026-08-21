
/* void v8::internal::compiler::GraphAssembler::MergeState<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>(v8::internal::compiler::GraphAssemblerLabel<2>*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::GraphAssembler::
MergeState<v8::internal::compiler::Node*,v8::internal::compiler::Node*>
          (GraphAssembler *this,GraphAssemblerLabel *param_1,Node *param_2,Node *param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  Node *pNVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  long lVar7;
  Graph *pGVar8;
  Node *pNVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  Use *pUVar13;
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  uVar12 = *(ulong *)(param_1 + 0x10);
  iVar11 = (int)uVar12;
  if (*(int *)(param_1 + 4) == 2) {
    if (iVar11 != 0) {
      lVar7 = *(long *)(param_1 + 0x20);
      pNVar9 = *(Node **)(this + 0x28);
      plVar2 = (long *)(lVar7 + 0x20);
      uVar3 = *(uint *)(lVar7 + 0x14) & 0xf000000;
      plVar10 = plVar2;
      if (uVar3 == 0xf000000) {
        plVar10 = (long *)(*plVar2 + 0x10);
      }
      pNVar4 = (Node *)plVar10[1];
      if (pNVar4 != pNVar9) {
        if (uVar3 == 0xf000000) {
          lVar7 = *plVar2;
        }
        if (pNVar4 != (Node *)0x0) {
          Node::RemoveUse(pNVar4,(Use *)(lVar7 + -0x30));
        }
        plVar10[1] = (long)pNVar9;
        if (pNVar9 != (Node *)0x0) {
          Node::AppendUse(pNVar9,(Use *)(lVar7 + -0x30));
        }
      }
      lVar7 = *(long *)(param_1 + 0x18);
      pNVar9 = *(Node **)(this + 0x20);
      plVar2 = (long *)(lVar7 + 0x20);
      uVar3 = *(uint *)(lVar7 + 0x14) & 0xf000000;
      plVar10 = plVar2;
      if (uVar3 == 0xf000000) {
        plVar10 = (long *)(*plVar2 + 0x10);
      }
      pNVar4 = (Node *)plVar10[1];
      if (pNVar4 != pNVar9) {
        if (uVar3 == 0xf000000) {
          lVar7 = *plVar2;
        }
        if (pNVar4 != (Node *)0x0) {
          Node::RemoveUse(pNVar4,(Use *)(lVar7 + -0x30));
        }
        plVar10[1] = (long)pNVar9;
        if (pNVar9 != (Node *)0x0) {
          Node::AppendUse(pNVar9,(Use *)(lVar7 + -0x30));
        }
      }
      lVar7 = *(long *)(param_1 + 0x28);
      plVar2 = (long *)(lVar7 + 0x20);
      uVar3 = *(uint *)(lVar7 + 0x14) & 0xf000000;
      plVar10 = plVar2;
      if (uVar3 == 0xf000000) {
        plVar10 = (long *)(*plVar2 + 0x10);
      }
      pNVar9 = (Node *)plVar10[1];
      if (pNVar9 != param_2) {
        if (uVar3 == 0xf000000) {
          lVar7 = *plVar2;
        }
        if (pNVar9 != (Node *)0x0) {
          Node::RemoveUse(pNVar9,(Use *)(lVar7 + -0x30));
        }
        plVar10[1] = (long)param_2;
        if (param_2 != (Node *)0x0) {
          Node::AppendUse(param_2,(Use *)(lVar7 + -0x30));
        }
      }
      lVar7 = *(long *)(param_1 + 0x30);
      plVar2 = (long *)(lVar7 + 0x20);
      uVar3 = *(uint *)(lVar7 + 0x14) & 0xf000000;
      plVar10 = plVar2;
      if (uVar3 == 0xf000000) {
        plVar10 = (long *)(*plVar2 + 0x10);
      }
      pNVar9 = (Node *)plVar10[1];
      if (pNVar9 != param_3) {
        if (uVar3 == 0xf000000) {
          lVar7 = *plVar2;
        }
        if (pNVar9 != (Node *)0x0) {
          Node::RemoveUse(pNVar9,(Use *)(lVar7 + -0x30));
        }
        plVar10[1] = (long)param_3;
        if (param_3 != (Node *)0x0) {
          Node::AppendUse(param_3,(Use *)(lVar7 + -0x30));
        }
      }
      goto LAB_016b5d0c;
    }
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Loop
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],2);
    local_68 = *(Node **)(this + 0x28);
    pNStack_60 = local_68;
    uVar6 = Graph::NewNode(pGVar8,pOVar5,2,&local_68,false);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],2);
    local_68 = *(Node **)(this + 0x20);
    local_58 = *(undefined8 *)(param_1 + 0x20);
    pNStack_60 = local_68;
    uVar6 = Graph::NewNode(pGVar8,pOVar5,3,&local_68,false);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Terminate
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
    local_68 = *(Node **)(param_1 + 0x18);
    pNStack_60 = *(Node **)(param_1 + 0x20);
    pNVar9 = (Node *)Graph::NewNode(pGVar8,pOVar5,2,&local_68,false);
    NodeProperties::MergeControlToEnd
              ((Graph *)**(undefined8 **)(this + 0x18),
               (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],pNVar9);
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],param_1[0x40],2)
    ;
    local_58 = *(undefined8 *)(param_1 + 0x20);
    local_68 = param_2;
    pNStack_60 = param_2;
    uVar6 = Graph::NewNode(pGVar8,pOVar5,3,&local_68,false);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],param_1[0x41],2)
    ;
    local_58 = *(undefined8 *)(param_1 + 0x20);
    local_68 = param_3;
  }
  else {
    if (iVar11 == 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 0x28);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x20);
      *(Node **)(param_1 + 0x30) = param_3;
      *(Node **)(param_1 + 0x28) = param_2;
      goto LAB_016b5d0c;
    }
    if (iVar11 != 1) {
      Node::AppendInput(*(Node **)(param_1 + 0x20),*(Zone **)**(undefined8 **)(this + 0x18),
                        *(Node **)(this + 0x28));
      pNVar9 = *(Node **)(param_1 + 0x20);
      iVar1 = iVar11 + 1;
      pOVar5 = (Operator *)
               CommonOperatorBuilder::Merge
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x18) + 8),iVar1);
      NodeProperties::ChangeOp(pNVar9,pOVar5);
      lVar7 = *(long *)(param_1 + 0x18);
      pNVar9 = *(Node **)(this + 0x20);
      plVar2 = (long *)(lVar7 + 0x20);
      uVar3 = *(uint *)(lVar7 + 0x14) & 0xf000000;
      plVar10 = plVar2;
      if (uVar3 == 0xf000000) {
        plVar10 = (long *)(*plVar2 + 0x10);
      }
      pNVar4 = *(Node **)((long)plVar10 +
                         (-(uVar12 >> 0x1f & 1) & 0xfffffff800000000 | (uVar12 & 0xffffffff) << 3));
      uVar12 = (ulong)iVar11;
      if (pNVar4 != pNVar9) {
        if (uVar3 == 0xf000000) {
          lVar7 = *plVar2;
        }
        pUVar13 = (Use *)(lVar7 + ~uVar12 * 0x18);
        if (pNVar4 != (Node *)0x0) {
          Node::RemoveUse(pNVar4,pUVar13);
        }
        plVar10[uVar12] = (long)pNVar9;
        if (pNVar9 != (Node *)0x0) {
          Node::AppendUse(pNVar9,pUVar13);
        }
      }
      Node::AppendInput(*(Node **)(param_1 + 0x18),*(Zone **)**(undefined8 **)(this + 0x18),
                        *(Node **)(param_1 + 0x20));
      pNVar9 = *(Node **)(param_1 + 0x18);
      pOVar5 = (Operator *)
               CommonOperatorBuilder::EffectPhi
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x18) + 8),iVar1);
      NodeProperties::ChangeOp(pNVar9,pOVar5);
      lVar7 = *(long *)(param_1 + 0x28);
      plVar2 = (long *)(lVar7 + 0x20);
      uVar3 = *(uint *)(lVar7 + 0x14) & 0xf000000;
      plVar10 = plVar2;
      if (uVar3 == 0xf000000) {
        plVar10 = (long *)(*plVar2 + 0x10);
      }
      pNVar9 = (Node *)plVar10[uVar12];
      if (pNVar9 != param_2) {
        if (uVar3 == 0xf000000) {
          lVar7 = *plVar2;
        }
        pUVar13 = (Use *)(lVar7 + ~uVar12 * 0x18);
        if (pNVar9 != (Node *)0x0) {
          Node::RemoveUse(pNVar9,pUVar13);
        }
        plVar10[uVar12] = (long)param_2;
        if (param_2 != (Node *)0x0) {
          Node::AppendUse(param_2,pUVar13);
        }
      }
      Node::AppendInput(*(Node **)(param_1 + 0x28),*(Zone **)**(undefined8 **)(this + 0x18),
                        *(Node **)(param_1 + 0x20));
      pNVar9 = *(Node **)(param_1 + 0x28);
      pOVar5 = (Operator *)
               CommonOperatorBuilder::Phi
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x18) + 8),param_1[0x40],
                          iVar1);
      NodeProperties::ChangeOp(pNVar9,pOVar5);
      lVar7 = *(long *)(param_1 + 0x30);
      plVar2 = (long *)(lVar7 + 0x20);
      uVar3 = *(uint *)(lVar7 + 0x14) & 0xf000000;
      plVar10 = plVar2;
      if (uVar3 == 0xf000000) {
        plVar10 = (long *)(*plVar2 + 0x10);
      }
      pNVar9 = (Node *)plVar10[uVar12];
      if (pNVar9 != param_3) {
        if (uVar3 == 0xf000000) {
          lVar7 = *plVar2;
        }
        pUVar13 = (Use *)(lVar7 + ~uVar12 * 0x18);
        if (pNVar9 != (Node *)0x0) {
          Node::RemoveUse(pNVar9,pUVar13);
        }
        plVar10[uVar12] = (long)param_3;
        if (param_3 != (Node *)0x0) {
          Node::AppendUse(param_3,pUVar13);
        }
      }
      Node::AppendInput(*(Node **)(param_1 + 0x30),*(Zone **)**(undefined8 **)(this + 0x18),
                        *(Node **)(param_1 + 0x20));
      pNVar9 = *(Node **)(param_1 + 0x30);
      pOVar5 = (Operator *)
               CommonOperatorBuilder::Phi
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x18) + 8),param_1[0x41],
                          iVar1);
      NodeProperties::ChangeOp(pNVar9,pOVar5);
      goto LAB_016b5d0c;
    }
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],2);
    pNStack_60 = *(Node **)(this + 0x28);
    local_68 = *(Node **)(param_1 + 0x20);
    uVar6 = Graph::NewNode(pGVar8,pOVar5,2,&local_68,false);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],2);
    local_68 = *(Node **)(param_1 + 0x18);
    local_58 = *(undefined8 *)(param_1 + 0x20);
    pNStack_60 = *(Node **)(this + 0x20);
    uVar6 = Graph::NewNode(pGVar8,pOVar5,3,&local_68,false);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],param_1[0x40],2)
    ;
    local_58 = *(undefined8 *)(param_1 + 0x20);
    local_68 = *(Node **)(param_1 + 0x28);
    pNStack_60 = param_2;
    uVar6 = Graph::NewNode(pGVar8,pOVar5,3,&local_68,false);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],param_1[0x41],2)
    ;
    local_68 = *(Node **)(param_1 + 0x30);
    local_58 = *(undefined8 *)(param_1 + 0x20);
  }
  pNStack_60 = param_3;
  uVar6 = Graph::NewNode(pGVar8,pOVar5,3,&local_68,false);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
LAB_016b5d0c:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  return;
}

