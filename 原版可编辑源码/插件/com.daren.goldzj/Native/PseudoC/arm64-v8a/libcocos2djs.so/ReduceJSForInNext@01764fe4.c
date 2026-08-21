
/* v8::internal::compiler::JSTypedLowering::ReduceJSForInNext(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSForInNext(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  byte bVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Node *pNVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  AccessBuilder *pAVar10;
  Operator *pOVar11;
  AccessBuilder *this_00;
  Node *pNVar12;
  Node *pNVar13;
  CallDescriptor *pCVar14;
  ulong uVar15;
  Node *pNVar16;
  SimplifiedOperatorBuilder *pSVar17;
  Use *pUVar18;
  Graph *pGVar19;
  Node *local_c0;
  Node *local_b8;
  undefined8 local_b0;
  AccessBuilder *local_a8;
  AccessBuilder *local_a0;
  AccessBuilder *pAStack_98;
  AccessBuilder *local_90;
  AccessBuilder *local_88;
  undefined8 local_80;
  Node *pNStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  bVar2 = ForInModeOf(*(Operator **)param_1);
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,1);
  uVar5 = NodeProperties::GetValueInput(param_1,2);
  pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,3);
  uVar7 = NodeProperties::GetContextInput(param_1);
  uVar8 = NodeProperties::GetFrameStateInput(param_1);
  uVar9 = NodeProperties::GetEffectInput(param_1,0);
  pAVar10 = (AccessBuilder *)NodeProperties::GetControlInput(param_1,0);
  pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForMap(pAVar10);
  pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar17,(FieldAccess *)&local_a0);
  local_b8 = pNVar3;
  local_b0 = uVar9;
  local_a8 = pAVar10;
  this_00 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar11,3,&local_b8,false);
  if (bVar2 < 2) {
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::ReferenceEqual
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_a0 = this_00;
    pAStack_98 = (AccessBuilder *)uVar5;
    pNVar3 = (Node *)Graph::NewNode(pGVar19,pOVar11,2,(Node **)&local_a0,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    local_b8 = (Node *)0x0;
    local_b0 = CONCAT44(local_b0._4_4_,0xffffffff);
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::CheckIf
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],0x26,
                         &local_b8);
    local_a0 = (AccessBuilder *)pNVar3;
    pAStack_98 = this_00;
    local_90 = pAVar10;
    pNVar12 = (Node *)Graph::NewNode(pGVar19,pOVar11,3,(Node **)&local_a0,false);
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),param_1,param_1,param_1,pAVar10);
    pNVar3 = param_1 + 0x20;
    pNVar16 = pNVar3;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar16 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    pNVar13 = *(Node **)pNVar16;
    if (pNVar13 != pNVar4) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar18 = (Use *)(*(long *)pNVar3 + -0x18);
      }
      else {
        pUVar18 = (Use *)(param_1 + -0x18);
      }
      if (pNVar13 != (Node *)0x0) {
        Node::RemoveUse(pNVar13,pUVar18);
      }
      *(Node **)pNVar16 = pNVar4;
      if (pNVar4 != (Node *)0x0) {
        Node::AppendUse(pNVar4,pUVar18);
      }
    }
    pNVar4 = pNVar3;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    pNVar16 = *(Node **)(pNVar4 + 8);
    if (pNVar16 != pNVar6) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar18 = (Use *)(*(long *)pNVar3 + -0x30);
      }
      else {
        pUVar18 = (Use *)(param_1 + -0x30);
      }
      if (pNVar16 != (Node *)0x0) {
        Node::RemoveUse(pNVar16,pUVar18);
      }
      *(Node **)(pNVar4 + 8) = pNVar6;
      if (pNVar6 != (Node *)0x0) {
        Node::AppendUse(pNVar6,pUVar18);
      }
    }
    pNVar4 = pNVar3;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    pNVar6 = *(Node **)(pNVar4 + 0x10);
    if (pNVar6 != pNVar12) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar18 = (Use *)(*(long *)pNVar3 + -0x48);
      }
      else {
        pUVar18 = (Use *)(param_1 + -0x48);
      }
      if (pNVar6 != (Node *)0x0) {
        Node::RemoveUse(pNVar6,pUVar18);
      }
      *(Node **)(pNVar4 + 0x10) = pNVar12;
      if (pNVar12 != (Node *)0x0) {
        Node::AppendUse(pNVar12,pUVar18);
      }
    }
    pNVar4 = pNVar3;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    pNVar6 = *(Node **)(pNVar4 + 0x18);
    if (pNVar6 != (Node *)pAVar10) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar18 = (Use *)(*(long *)pNVar3 + -0x60);
      }
      else {
        pUVar18 = (Use *)(param_1 + -0x60);
      }
      if (pNVar6 != (Node *)0x0) {
        Node::RemoveUse(pNVar6,pUVar18);
      }
      *(AccessBuilder **)(pNVar4 + 0x18) = pAVar10;
      if (pAVar10 != (AccessBuilder *)0x0) {
        Node::AppendUse((Node *)pAVar10,pUVar18);
      }
    }
    pAVar10 = (AccessBuilder *)Node::TrimInputCount(param_1,4);
    pSVar17 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178);
    AccessBuilder::ForFixedArrayElement(pAVar10);
    pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadElement(pSVar17,(ElementAccess *)&local_a0)
    ;
    NodeProperties::ChangeOp(param_1,pOVar11);
    *(undefined8 *)(param_1 + 8) = 0x4001;
  }
  else if (bVar2 == 2) {
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForFixedArrayElement(this_00);
    pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadElement(pSVar17,(ElementAccess *)&local_b8)
    ;
    local_a0 = (AccessBuilder *)pNVar4;
    pAStack_98 = (AccessBuilder *)pNVar6;
    local_90 = this_00;
    local_88 = pAVar10;
    pNVar4 = (Node *)Graph::NewNode(pGVar19,pOVar11,4,(Node **)&local_a0,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::ReferenceEqual
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_a0 = this_00;
    pAStack_98 = (AccessBuilder *)uVar5;
    pNVar6 = (Node *)Graph::NewNode(pGVar19,pOVar11,2,(Node **)&local_a0,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Branch
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
    local_a0 = (AccessBuilder *)pNVar6;
    pAStack_98 = pAVar10;
    pNVar6 = (Node *)Graph::NewNode(pGVar19,pOVar11,2,(Node **)&local_a0,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfTrue
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_a0 = (AccessBuilder *)pNVar6;
    pNVar16 = (Node *)Graph::NewNode(pGVar19,pOVar11,1,(Node **)&local_a0,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfFalse
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_a0 = (AccessBuilder *)pNVar6;
    uVar5 = Graph::NewNode(pGVar19,pOVar11,1,(Node **)&local_a0,false);
    Builtins::CallableFor
              ((Builtins *)&local_b8,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x1cb);
    local_a0 = (AccessBuilder *)&PTR__CallInterfaceDescriptor_01ca0fc8;
    pAStack_98 = local_a8;
    pCVar14 = (CallDescriptor *)
              Linkage::GetStubCallDescriptor
                        (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_a0,
                         *(int *)(local_a8 + 8) - *(int *)local_a8,1,0,0);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Call
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pCVar14);
    local_a0 = (AccessBuilder *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_b8);
    pAStack_98 = (AccessBuilder *)pNVar4;
    local_90 = (AccessBuilder *)pNVar3;
    local_88 = (AccessBuilder *)uVar7;
    local_80 = uVar8;
    pNStack_78 = pNVar4;
    local_70 = uVar5;
    pNVar6 = (Node *)Graph::NewNode(pGVar19,pOVar11,7,(Node **)&local_a0,false);
    local_c0 = (Node *)0x0;
    uVar15 = NodeProperties::IsExceptionalCall(param_1,&local_c0);
    pNVar3 = pNVar6;
    if ((uVar15 & 1) != 0) {
      pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar11 = (Operator *)
                CommonOperatorBuilder::IfSuccess
                          ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_a0 = (AccessBuilder *)pNVar6;
      pNVar3 = (Node *)Graph::NewNode(pGVar19,pOVar11,1,(Node **)&local_a0,false);
      NodeProperties::ReplaceControlInput(local_c0,pNVar6,0);
      NodeProperties::ReplaceEffectInput(local_c0,pNVar6,0);
      (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_c0);
    }
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Merge
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_a0 = (AccessBuilder *)pNVar16;
    pAStack_98 = (AccessBuilder *)pNVar3;
    pNVar12 = (Node *)Graph::NewNode(pGVar19,pOVar11,2,(Node **)&local_a0,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::EffectPhi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_a0 = (AccessBuilder *)pNVar4;
    pAStack_98 = (AccessBuilder *)pNVar6;
    local_90 = (AccessBuilder *)pNVar12;
    uVar5 = Graph::NewNode(pGVar19,pOVar11,3,(Node **)&local_a0,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,uVar5,pNVar12);
    pNVar3 = param_1 + 0x20;
    pNVar16 = pNVar3;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar16 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    pNVar13 = *(Node **)pNVar16;
    if (pNVar13 != pNVar4) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar18 = (Use *)(*(long *)pNVar3 + -0x18);
      }
      else {
        pUVar18 = (Use *)(param_1 + -0x18);
      }
      if (pNVar13 != (Node *)0x0) {
        Node::RemoveUse(pNVar13,pUVar18);
      }
      *(Node **)pNVar16 = pNVar4;
      if (pNVar4 != (Node *)0x0) {
        Node::AppendUse(pNVar4,pUVar18);
      }
    }
    pNVar4 = pNVar3;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    pNVar16 = *(Node **)(pNVar4 + 8);
    if (pNVar16 != pNVar6) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar18 = (Use *)(*(long *)pNVar3 + -0x30);
      }
      else {
        pUVar18 = (Use *)(param_1 + -0x30);
      }
      if (pNVar16 != (Node *)0x0) {
        Node::RemoveUse(pNVar16,pUVar18);
      }
      *(Node **)(pNVar4 + 8) = pNVar6;
      if (pNVar6 != (Node *)0x0) {
        Node::AppendUse(pNVar6,pUVar18);
      }
    }
    pNVar4 = pNVar3;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    pNVar6 = *(Node **)(pNVar4 + 0x10);
    if (pNVar6 != pNVar12) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar18 = (Use *)(*(long *)pNVar3 + -0x48);
      }
      else {
        pUVar18 = (Use *)(param_1 + -0x48);
      }
      if (pNVar6 != (Node *)0x0) {
        Node::RemoveUse(pNVar6,pUVar18);
      }
      *(Node **)(pNVar4 + 0x10) = pNVar12;
      if (pNVar12 != (Node *)0x0) {
        Node::AppendUse(pNVar12,pUVar18);
      }
    }
    Node::TrimInputCount(param_1,3);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Phi
                        (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),8,2);
    NodeProperties::ChangeOp(param_1,pOVar11);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

