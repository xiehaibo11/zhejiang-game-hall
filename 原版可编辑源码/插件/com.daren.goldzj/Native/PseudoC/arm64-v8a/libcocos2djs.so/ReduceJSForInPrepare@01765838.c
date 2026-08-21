
/* v8::internal::compiler::JSTypedLowering::ReduceJSForInPrepare(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSForInPrepare(JSTypedLowering *this,Node *param_1)

{
  Use *pUVar1;
  uint uVar2;
  long lVar3;
  Use *pUVar4;
  byte bVar5;
  AccessBuilder *pAVar6;
  Node *pNVar7;
  Node *pNVar8;
  Operator *pOVar9;
  AccessBuilder *pAVar10;
  AccessBuilder *this_00;
  AccessBuilder *pAVar11;
  AccessBuilder *this_01;
  undefined8 uVar12;
  ulong uVar13;
  Node *pNVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  undefined8 *puVar18;
  Graph *pGVar19;
  SimplifiedOperatorBuilder *pSVar20;
  Use *pUVar21;
  Use *pUVar22;
  AccessBuilder *local_d0;
  AccessBuilder *local_c8;
  AccessBuilder *local_b8;
  Node *pNStack_b0;
  Node *local_a8;
  Node *local_80;
  AccessBuilder *local_78;
  Node *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  bVar5 = ForInModeOf(*(Operator **)param_1);
  pAVar6 = (AccessBuilder *)NodeProperties::GetValueInput(param_1,0);
  pNVar7 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  pNVar8 = (Node *)NodeProperties::GetControlInput(param_1,0);
  if (bVar5 < 2) {
    puVar18 = *(undefined8 **)(this + 0x10);
    pGVar19 = (Graph *)*puVar18;
    local_80 = (Node *)0x0;
    local_78 = (AccessBuilder *)CONCAT44(local_78._4_4_,0xffffffff);
    pOVar9 = (Operator *)
             SimplifiedOperatorBuilder::CheckMaps
                       ((SimplifiedOperatorBuilder *)puVar18[0x2f],0,puVar18[0x2d] + 0xd0,&local_80)
    ;
    local_b8 = pAVar6;
    pNStack_b0 = pNVar7;
    local_a8 = pNVar8;
    pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,3,(Node **)&local_b8,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForMapDescriptors(pAVar10);
    pOVar9 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_b8);
    local_80 = (Node *)pAVar6;
    local_78 = pAVar10;
    local_70 = pNVar8;
    pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,3,&local_80,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForDescriptorArrayEnumCache(pAVar10);
    pOVar9 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_b8);
    local_80 = (Node *)pAVar10;
    local_78 = pAVar10;
    local_70 = pNVar8;
    pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,3,&local_80,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForEnumCacheKeys(pAVar10);
    pOVar9 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_b8);
    local_80 = (Node *)pAVar10;
    local_78 = pAVar10;
    local_70 = pNVar8;
    local_c8 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,3,&local_80,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForMapBitField3(local_c8);
    pOVar9 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_b8);
    local_80 = (Node *)pAVar6;
    local_78 = local_c8;
    local_70 = pNVar8;
    pNVar7 = (Node *)Graph::NewNode(pGVar19,pOVar9,3,&local_80,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar9 = (Operator *)
             SimplifiedOperatorBuilder::NumberBitwiseAnd
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    pNStack_b0 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),1023.0);
    iVar17 = 2;
    local_b8 = (AccessBuilder *)pNVar7;
  }
  else {
    if (bVar5 != 2) {
      local_d0 = (AccessBuilder *)0x0;
      local_c8 = (AccessBuilder *)0x0;
      goto LAB_01765de0;
    }
    puVar18 = *(undefined8 **)(this + 0x10);
    pGVar19 = (Graph *)*puVar18;
    pOVar9 = (Operator *)
             SimplifiedOperatorBuilder::CompareMaps
                       ((SimplifiedOperatorBuilder *)puVar18[0x2f],puVar18[0x2d] + 0xd0);
    local_b8 = pAVar6;
    pNStack_b0 = pNVar7;
    local_a8 = pNVar8;
    pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,3,(Node **)&local_b8,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar9 = (Operator *)
             CommonOperatorBuilder::Branch
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
    local_b8 = pAVar10;
    pNStack_b0 = pNVar8;
    pNVar8 = (Node *)Graph::NewNode(pGVar19,pOVar9,2,(Node **)&local_b8,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar9 = (Operator *)
             CommonOperatorBuilder::IfTrue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_b8 = (AccessBuilder *)pNVar8;
    this_00 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,1,(Node **)&local_b8,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForMapDescriptors(this_00);
    pOVar9 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_b8);
    local_80 = (Node *)pAVar6;
    local_78 = pAVar10;
    local_70 = (Node *)this_00;
    pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,3,&local_80,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForDescriptorArrayEnumCache(pAVar11);
    pOVar9 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_b8);
    local_80 = (Node *)pAVar11;
    local_78 = pAVar11;
    local_70 = (Node *)this_00;
    pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,3,&local_80,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForEnumCacheKeys(pAVar11);
    pOVar9 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_b8);
    local_80 = (Node *)pAVar11;
    local_78 = pAVar11;
    local_70 = (Node *)this_00;
    pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,3,&local_80,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForMapBitField3(pAVar11);
    pOVar9 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_b8);
    local_80 = (Node *)pAVar6;
    local_78 = pAVar11;
    local_70 = (Node *)this_00;
    pNVar7 = (Node *)Graph::NewNode(pGVar19,pOVar9,3,&local_80,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar9 = (Operator *)
             SimplifiedOperatorBuilder::NumberBitwiseAnd
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    pNStack_b0 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),1023.0);
    local_b8 = (AccessBuilder *)pNVar7;
    pNVar14 = (Node *)Graph::NewNode(pGVar19,pOVar9,2,(Node **)&local_b8,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar9 = (Operator *)
             CommonOperatorBuilder::IfFalse
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_b8 = (AccessBuilder *)pNVar8;
    this_01 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,1,(Node **)&local_b8,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForFixedArrayLength(this_01);
    pOVar9 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_b8);
    local_80 = (Node *)pAVar6;
    local_78 = pAVar10;
    local_70 = (Node *)this_01;
    uVar12 = Graph::NewNode(pGVar19,pOVar9,3,&local_80,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar9 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_b8 = this_00;
    pNStack_b0 = (Node *)this_01;
    pNVar8 = (Node *)Graph::NewNode(pGVar19,pOVar9,2,(Node **)&local_b8,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar9 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_b8 = (AccessBuilder *)pNVar7;
    pNStack_b0 = (Node *)uVar12;
    local_a8 = pNVar8;
    pNVar7 = (Node *)Graph::NewNode(pGVar19,pOVar9,3,(Node **)&local_b8,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar9 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_b8 = pAVar11;
    pNStack_b0 = (Node *)pAVar6;
    local_a8 = pNVar8;
    local_c8 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,3,(Node **)&local_b8,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar9 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    iVar17 = 3;
    local_b8 = (AccessBuilder *)pNVar14;
    pNStack_b0 = (Node *)uVar12;
    local_a8 = pNVar8;
  }
  local_d0 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar9,iVar17,(Node **)&local_b8,false);
LAB_01765de0:
  pUVar4 = *(Use **)(param_1 + 0x18);
  do {
    while( true ) {
      if (pUVar4 == (Use *)0x0) {
        Node::Kill(param_1);
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return pNVar7;
      }
      uVar2 = *(uint *)(pUVar4 + 0x10);
      pUVar21 = *(Use **)pUVar4;
      pUVar22 = pUVar4 + (ulong)(uVar2 >> 1) * 0x18 + 0x18;
      lVar15 = 0x10;
      if ((uVar2 & 1) != 0) {
        lVar15 = 0x20;
      }
      pUVar1 = pUVar22 + (ulong)(uVar2 >> 1) * 8 + lVar15;
      if ((uVar2 & 1) == 0) {
        pUVar22 = *(Use **)pUVar22;
      }
      uVar13 = NodeProperties::IsEffectEdge(pUVar4,pUVar1);
      if ((uVar13 & 1) == 0) break;
      pNVar14 = *(Node **)pUVar1;
      if (pNVar14 != pNVar7) {
        if (pNVar14 != (Node *)0x0) {
          Node::RemoveUse(pNVar14,pUVar4);
        }
        *(Node **)pUVar1 = pNVar7;
        pNVar14 = pNVar7;
joined_r0x01765eb4:
        if (pNVar14 != (Node *)0x0) {
          Node::AppendUse(pNVar14,pUVar4);
        }
      }
LAB_01765e08:
      (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),pUVar22);
      pUVar4 = pUVar21;
    }
    uVar13 = NodeProperties::IsControlEdge(pUVar4,pUVar1);
    if ((uVar13 & 1) != 0) {
      pNVar14 = *(Node **)pUVar1;
      if (pNVar14 != pNVar8) {
        if (pNVar14 != (Node *)0x0) {
          Node::RemoveUse(pNVar14,pUVar4);
        }
        *(Node **)pUVar1 = pNVar8;
        pNVar14 = pNVar8;
        goto joined_r0x01765eb4;
      }
      goto LAB_01765e08;
    }
    lVar15 = ProjectionIndexOf(*(Operator **)pUVar22);
    if (lVar15 == 2) {
      plVar16 = *(long **)(this + 8);
      pAVar10 = local_d0;
    }
    else if (lVar15 == 1) {
      plVar16 = *(long **)(this + 8);
      pAVar10 = local_c8;
    }
    else {
      if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      plVar16 = *(long **)(this + 8);
      pAVar10 = pAVar6;
    }
    (**(code **)(*plVar16 + 0x10))(plVar16,pUVar22,pAVar10);
    pUVar4 = pUVar21;
  } while( true );
}

