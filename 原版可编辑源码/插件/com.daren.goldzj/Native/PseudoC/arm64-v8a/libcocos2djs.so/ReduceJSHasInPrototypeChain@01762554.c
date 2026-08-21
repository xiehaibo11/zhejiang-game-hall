
/* v8::internal::compiler::JSTypedLowering::ReduceJSHasInPrototypeChain(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSHasInPrototypeChain
          (JSTypedLowering *this,Node *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Node *pNVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Node *pNVar8;
  undefined8 uVar9;
  ulong uVar10;
  Operator *pOVar11;
  Node *pNVar12;
  Node *pNVar13;
  Node *this_00;
  Node *pNVar14;
  AccessBuilder *this_01;
  AccessBuilder *pAVar15;
  undefined8 uVar16;
  Node *this_02;
  undefined8 uVar17;
  Node *this_03;
  AccessBuilder *pAVar18;
  Node *this_04;
  Node *pNVar19;
  Node *this_05;
  Node *this_06;
  Node *pNVar20;
  Node *this_07;
  Use *pUVar21;
  Node *pNVar22;
  long *plVar23;
  long lVar24;
  JSTypedLowering *pJVar25;
  Graph *pGVar26;
  SimplifiedOperatorBuilder *pSVar27;
  long local_c8;
  Node *local_c0;
  Node *pNStack_b8;
  long local_b0;
  Node *local_a8;
  Node *local_a0;
  Node *local_98;
  Node *local_90;
  Node *local_88;
  Node *local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,0);
  lVar24 = *(long *)(pNVar4 + 8);
  local_c8 = lVar24;
  uVar5 = NodeProperties::GetValueInput(param_1,1);
  uVar6 = NodeProperties::GetContextInput(param_1);
  uVar7 = NodeProperties::GetFrameStateInput(param_1);
  pNVar8 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar9 = NodeProperties::GetControlInput(param_1,0);
  if ((lVar24 == 0x8007fff) ||
     (uVar10 = Type::SlowIs((Type *)&local_c8,0x8007fff), (uVar10 & 1) != 0)) {
    pNVar4 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar4,pNVar8,uVar9);
    param_1 = pNVar4;
  }
  else {
    pJVar25 = this + 0x10;
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::ObjectIsSmi
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar25)[0x2f]);
    local_a8 = pNVar4;
    pNVar12 = (Node *)Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Branch
                        ((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1],2,1);
    local_a8 = pNVar12;
    local_a0 = (Node *)uVar9;
    pNVar12 = (Node *)Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar12;
    pNVar13 = (Node *)Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    this_00 = (Node *)JSGraph::FalseConstant(*(JSGraph **)pJVar25);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar12;
    pNVar12 = (Node *)Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Loop((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1],2);
    local_a8 = pNVar12;
    local_a0 = pNVar12;
    lVar24 = Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::EffectPhi
                        ((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1],2);
    local_a8 = pNVar8;
    local_a0 = pNVar8;
    local_98 = (Node *)lVar24;
    pNVar12 = (Node *)Graph::NewNode(pGVar26,pOVar11,3,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Terminate
                        ((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar12;
    local_a0 = (Node *)lVar24;
    pNVar14 = (Node *)Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    NodeProperties::MergeControlToEnd
              ((Graph *)**(undefined8 **)pJVar25,
               (CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1],pNVar14);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Phi((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1],8,2);
    local_a8 = pNVar4;
    local_a0 = pNVar4;
    local_98 = (Node *)lVar24;
    this_01 = (AccessBuilder *)Graph::NewNode(pGVar26,pOVar11,3,&local_a8,false);
    *(undefined8 *)(this_01 + 8) = 0xc7f7fff;
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pSVar27 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar25)[0x2f];
    AccessBuilder::ForMap(this_01);
    pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar27,(FieldAccess *)&local_a8);
    local_c0 = (Node *)this_01;
    pNStack_b8 = pNVar12;
    local_b0 = lVar24;
    pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar26,pOVar11,3,&local_c0,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pSVar27 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar25)[0x2f];
    AccessBuilder::ForMapInstanceType(pAVar15);
    pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar27,(FieldAccess *)&local_a8);
    local_c0 = (Node *)pAVar15;
    pNStack_b8 = (Node *)pAVar15;
    local_b0 = lVar24;
    pNVar14 = (Node *)Graph::NewNode(pGVar26,pOVar11,3,&local_c0,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::NumberLessThanOrEqual
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar25)[0x2f]);
    local_a0 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar25,1040.0);
    local_a8 = pNVar14;
    pNVar4 = (Node *)Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Branch
                        ((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1],2,1);
    local_a8 = pNVar4;
    local_a0 = (Node *)lVar24;
    pNVar4 = (Node *)Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar4;
    uVar9 = Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar4;
    uVar16 = Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::NumberLessThan
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar25)[0x2f]);
    local_a0 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar25,169.0);
    local_a8 = pNVar14;
    pNVar4 = (Node *)Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Branch
                        ((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1],1,1);
    local_a8 = pNVar4;
    local_a0 = (Node *)uVar16;
    pNVar4 = (Node *)Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar4;
    uVar16 = Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    this_02 = (Node *)JSGraph::FalseConstant(*(JSGraph **)pJVar25);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar4;
    uVar17 = Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              JSOperatorBuilder::CallRuntime
                        ((JSOperatorBuilder *)(*(undefined8 **)pJVar25)[0x2e],0xe4);
    local_a8 = (Node *)this_01;
    local_a0 = (Node *)uVar5;
    local_98 = (Node *)uVar6;
    local_90 = (Node *)uVar7;
    local_88 = pNVar14;
    local_80 = (Node *)uVar17;
    this_03 = (Node *)Graph::NewNode(pGVar26,pOVar11,6,&local_a8,false);
    local_c0 = (Node *)0x0;
    pAVar18 = (AccessBuilder *)NodeProperties::IsExceptionalCall(param_1,&local_c0);
    pNVar4 = this_03;
    if (((ulong)pAVar18 & 1) != 0) {
      NodeProperties::ReplaceControlInput(local_c0,this_03,0);
      NodeProperties::ReplaceEffectInput(local_c0,this_03,0);
      pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar11 = (Operator *)
                CommonOperatorBuilder::IfSuccess
                          ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_a8 = this_03;
      pNVar4 = (Node *)Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
      pAVar18 = (AccessBuilder *)
                (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_c0);
    }
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pSVar27 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar25)[0x2f];
    AccessBuilder::ForMapPrototype(pAVar18);
    pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar27,(FieldAccess *)&local_a8);
    local_c0 = (Node *)pAVar15;
    pNStack_b8 = pNVar14;
    local_b0 = uVar9;
    this_04 = (Node *)Graph::NewNode(pGVar26,pOVar11,3,&local_c0,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::ReferenceEqual
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar25)[0x2f]);
    local_a0 = (Node *)JSGraph::NullConstant(*(JSGraph **)pJVar25);
    local_a8 = this_04;
    pNVar19 = (Node *)Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Branch
                        ((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1],0,1);
    local_a8 = pNVar19;
    local_a0 = (Node *)uVar9;
    pNVar19 = (Node *)Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar19;
    uVar6 = Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    this_05 = (Node *)JSGraph::FalseConstant(*(JSGraph **)pJVar25);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar19;
    uVar7 = Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::ReferenceEqual
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar25)[0x2f]);
    local_a8 = this_04;
    local_a0 = (Node *)uVar5;
    pNVar19 = (Node *)Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Branch
                        ((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1],0,1);
    local_a8 = pNVar19;
    local_a0 = (Node *)uVar7;
    pNVar19 = (Node *)Graph::NewNode(pGVar26,pOVar11,2,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar19;
    uVar5 = Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    this_06 = (Node *)JSGraph::TrueConstant(*(JSGraph **)pJVar25);
    pGVar26 = (Graph *)**(undefined8 **)pJVar25;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar25)[1]);
    local_a8 = pNVar19;
    pNVar19 = (Node *)Graph::NewNode(pGVar26,pOVar11,1,&local_a8,false);
    pAVar15 = this_01 + 0x20;
    pAVar18 = pAVar15;
    if ((*(uint *)(this_01 + 0x14) & 0xf000000) == 0xf000000) {
      pAVar18 = (AccessBuilder *)(*(long *)pAVar15 + 0x10);
    }
    pNVar20 = *(Node **)(pAVar18 + 8);
    if (pNVar20 != this_04) {
      if ((*(uint *)(this_01 + 0x14) & 0xf000000) == 0xf000000) {
        this_01 = *(AccessBuilder **)pAVar15;
      }
      if (pNVar20 != (Node *)0x0) {
        Node::RemoveUse(pNVar20,(Use *)(this_01 + -0x30));
      }
      *(Node **)(pAVar18 + 8) = this_04;
      if (this_04 != (Node *)0x0) {
        Node::AppendUse(this_04,(Use *)(this_01 + -0x30));
      }
    }
    pNVar20 = pNVar12 + 0x20;
    pNVar22 = pNVar20;
    if ((*(uint *)(pNVar12 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar22 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    this_07 = *(Node **)(pNVar22 + 8);
    if (this_07 != this_04) {
      if ((*(uint *)(pNVar12 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar12 = *(Node **)pNVar20;
      }
      if (this_07 != (Node *)0x0) {
        Node::RemoveUse(this_07,(Use *)(pNVar12 + -0x30));
      }
      *(Node **)(pNVar22 + 8) = this_04;
      if (this_04 != (Node *)0x0) {
        Node::AppendUse(this_04,(Use *)(pNVar12 + -0x30));
      }
    }
    plVar1 = (long *)(lVar24 + 0x20);
    uVar2 = *(uint *)(lVar24 + 0x14) & 0xf000000;
    plVar23 = plVar1;
    if (uVar2 == 0xf000000) {
      plVar23 = (long *)(*plVar1 + 0x10);
    }
    pNVar12 = (Node *)plVar23[1];
    if (pNVar12 != pNVar19) {
      if (uVar2 == 0xf000000) {
        lVar24 = *plVar1;
      }
      if (pNVar12 != (Node *)0x0) {
        Node::RemoveUse(pNVar12,(Use *)(lVar24 + -0x30));
      }
      plVar23[1] = (long)pNVar19;
      if (pNVar19 != (Node *)0x0) {
        Node::AppendUse(pNVar19,(Use *)(lVar24 + -0x30));
      }
    }
    pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Merge
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],5);
    local_a8 = pNVar13;
    local_a0 = (Node *)uVar16;
    local_98 = (Node *)uVar6;
    local_90 = (Node *)uVar5;
    local_88 = pNVar4;
    pNVar12 = (Node *)Graph::NewNode(pGVar26,pOVar11,5,&local_a8,false);
    pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::EffectPhi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],5);
    local_a8 = pNVar8;
    local_a0 = pNVar14;
    local_98 = this_04;
    local_90 = this_04;
    local_88 = this_03;
    local_80 = pNVar12;
    uVar5 = Graph::NewNode(pGVar26,pOVar11,6,&local_a8,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,uVar5,pNVar12);
    pNVar4 = param_1 + 0x20;
    pNVar8 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar13 = *(Node **)pNVar8;
    if (pNVar13 != this_00) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar21 = (Use *)(*(long *)pNVar4 + -0x18);
      }
      else {
        pUVar21 = (Use *)(param_1 + -0x18);
      }
      if (pNVar13 != (Node *)0x0) {
        Node::RemoveUse(pNVar13,pUVar21);
      }
      *(Node **)pNVar8 = this_00;
      if (this_00 != (Node *)0x0) {
        Node::AppendUse(this_00,pUVar21);
      }
    }
    pNVar8 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar13 = *(Node **)(pNVar8 + 8);
    if (pNVar13 != this_02) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar21 = (Use *)(*(long *)pNVar4 + -0x30);
      }
      else {
        pUVar21 = (Use *)(param_1 + -0x30);
      }
      if (pNVar13 != (Node *)0x0) {
        Node::RemoveUse(pNVar13,pUVar21);
      }
      *(Node **)(pNVar8 + 8) = this_02;
      if (this_02 != (Node *)0x0) {
        Node::AppendUse(this_02,pUVar21);
      }
    }
    pNVar8 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar13 = *(Node **)(pNVar8 + 0x10);
    if (pNVar13 != this_05) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar21 = (Use *)(*(long *)pNVar4 + -0x48);
      }
      else {
        pUVar21 = (Use *)(param_1 + -0x48);
      }
      if (pNVar13 != (Node *)0x0) {
        Node::RemoveUse(pNVar13,pUVar21);
      }
      *(Node **)(pNVar8 + 0x10) = this_05;
      if (this_05 != (Node *)0x0) {
        Node::AppendUse(this_05,pUVar21);
      }
    }
    pNVar8 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar13 = *(Node **)(pNVar8 + 0x18);
    if (pNVar13 != this_06) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar21 = (Use *)(*(long *)pNVar4 + -0x60);
      }
      else {
        pUVar21 = (Use *)(param_1 + -0x60);
      }
      if (pNVar13 != (Node *)0x0) {
        Node::RemoveUse(pNVar13,pUVar21);
      }
      *(Node **)(pNVar8 + 0x18) = this_06;
      if (this_06 != (Node *)0x0) {
        Node::AppendUse(this_06,pUVar21);
      }
    }
    pNVar8 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar13 = *(Node **)(pNVar8 + 0x20);
    if (pNVar13 != this_03) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar21 = (Use *)(*(long *)pNVar4 + -0x78);
      }
      else {
        pUVar21 = (Use *)(param_1 + -0x78);
      }
      if (pNVar13 != (Node *)0x0) {
        Node::RemoveUse(pNVar13,pUVar21);
      }
      *(Node **)(pNVar8 + 0x20) = this_03;
      if (this_03 != (Node *)0x0) {
        Node::AppendUse(this_03,pUVar21);
      }
    }
    pNVar8 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar13 = *(Node **)(pNVar8 + 0x28);
    if (pNVar13 != pNVar12) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar21 = (Use *)(*(long *)pNVar4 + -0x90);
      }
      else {
        pUVar21 = (Use *)(param_1 + -0x90);
      }
      if (pNVar13 != (Node *)0x0) {
        Node::RemoveUse(pNVar13,pUVar21);
      }
      *(Node **)(pNVar8 + 0x28) = pNVar12;
      if (pNVar12 != (Node *)0x0) {
        Node::AppendUse(pNVar12,pUVar21);
      }
    }
    Node::TrimInputCount(param_1,6);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(*(long *)pJVar25 + 8),8,5);
    NodeProperties::ChangeOp(param_1,pOVar11);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

