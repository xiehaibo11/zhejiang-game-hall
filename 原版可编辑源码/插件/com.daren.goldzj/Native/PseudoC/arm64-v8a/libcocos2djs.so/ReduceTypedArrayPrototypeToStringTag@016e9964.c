
/* WARNING: Removing unreachable block (ram,0x016e9dcc) */
/* WARNING: Removing unreachable block (ram,0x016ea064) */
/* WARNING: Removing unreachable block (ram,0x016e9e50) */
/* WARNING: Removing unreachable block (ram,0x016e9e04) */
/* WARNING: Removing unreachable block (ram,0x016e9f08) */
/* WARNING: Removing unreachable block (ram,0x016ea0bc) */
/* WARNING: Removing unreachable block (ram,0x016ea25c) */
/* WARNING: Removing unreachable block (ram,0x016e9e88) */
/* WARNING: Removing unreachable block (ram,0x016e9f44) */
/* WARNING: Removing unreachable block (ram,0x016ea338) */
/* WARNING: Removing unreachable block (ram,0x016ea370) */
/* WARNING: Removing unreachable block (ram,0x016ea294) */
/* WARNING: Removing unreachable block (ram,0x016ea29c) */
/* WARNING: Removing unreachable block (ram,0x016ea378) */
/* WARNING: Removing unreachable block (ram,0x016ea104) */
/* WARNING: Removing unreachable block (ram,0x016ea16c) */
/* v8::internal::compiler::JSCallReducer::ReduceTypedArrayPrototypeToStringTag(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceTypedArrayPrototypeToStringTag
          (JSCallReducer *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  Node *pNVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Operator *pOVar7;
  Node *pNVar8;
  AccessBuilder *this_00;
  AccessBuilder *this_01;
  Operator *pOVar9;
  Node *pNVar10;
  undefined8 *puVar11;
  Node *pNVar12;
  Node **ppNVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  Node **ppNVar17;
  Node **ppNVar18;
  undefined8 *puVar19;
  ulong uVar20;
  JSGraph *pJVar21;
  Zone *this_02;
  Zone *pZVar22;
  undefined8 *puVar23;
  Factory *pFVar24;
  Node **ppNVar25;
  long lVar26;
  Graph *pGVar27;
  undefined8 *puVar28;
  ulong uVar29;
  Node **ppNVar30;
  Node **ppNVar31;
  undefined8 *puVar32;
  Node **ppNVar33;
  Node **ppNVar34;
  JSCallReducer *pJVar35;
  Graph *this_03;
  Zone *pZVar36;
  SimplifiedOperatorBuilder *pSVar37;
  Node **ppNVar38;
  Node **local_108;
  Node **local_f8;
  Node **local_e8;
  Node **local_e0;
  Node *local_c0;
  AccessBuilder *pAStack_b8;
  AccessBuilder *local_b0;
  undefined1 local_a8 [56];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,1);
  uVar5 = NodeProperties::GetEffectInput(param_1,0);
  uVar6 = NodeProperties::GetControlInput(param_1,0);
  pJVar35 = this + 0x10;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  this_02 = *(Zone **)pGVar27;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::ObjectIsSmi
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._0_8_ = pNVar4;
  pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],2,1);
  local_a8._0_8_ = pNVar8;
  local_a8._8_8_ = uVar6;
  pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  uVar6 = JSGraph::UndefinedConstant(*(JSGraph **)pJVar35);
  pZVar36 = this_02 + 0x10;
  puVar28 = *(undefined8 **)pZVar36;
  pZVar22 = this_02 + 0x18;
  if ((ulong)(*(long *)pZVar22 - (long)puVar28) < 8) {
    puVar28 = (undefined8 *)Zone::NewExpand(this_02,8);
  }
  else {
    *(undefined8 **)pZVar36 = puVar28 + 1;
  }
  *puVar28 = uVar6;
  puVar23 = *(undefined8 **)pZVar36;
  if ((ulong)(*(long *)pZVar22 - (long)puVar23) < 8) {
    puVar23 = (undefined8 *)Zone::NewExpand(this_02,8);
  }
  else {
    *(undefined8 **)pZVar36 = puVar23 + 1;
  }
  *puVar23 = uVar5;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar8;
  uVar6 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  puVar19 = *(undefined8 **)pZVar36;
  if ((ulong)(*(long *)pZVar22 - (long)puVar19) < 8) {
    puVar19 = (undefined8 *)Zone::NewExpand(this_02,8);
  }
  else {
    *(undefined8 **)pZVar36 = puVar19 + 1;
  }
  *puVar19 = uVar6;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar8;
  this_00 = (AccessBuilder *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pSVar37 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f];
  AccessBuilder::ForMap(this_00);
  pOVar7 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar37,(FieldAccess *)local_a8);
  local_c0 = pNVar4;
  pAStack_b8 = (AccessBuilder *)uVar5;
  local_b0 = this_00;
  this_01 = (AccessBuilder *)Graph::NewNode(pGVar27,pOVar7,3,&local_c0,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pSVar37 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f];
  AccessBuilder::ForMapBitField2(this_01);
  pOVar7 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar37,(FieldAccess *)local_a8);
  local_c0 = (Node *)this_01;
  pAStack_b8 = this_01;
  local_b0 = this_00;
  pNVar4 = (Node *)Graph::NewNode(pGVar27,pOVar7,3,&local_c0,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberShiftRightLogical
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  this_03 = (Graph *)**(undefined8 **)pJVar35;
  pOVar9 = (Operator *)
           SimplifiedOperatorBuilder::NumberBitwiseAnd
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,248.0);
  local_a8._0_8_ = pNVar4;
  pNVar8 = (Node *)Graph::NewNode(this_03,pOVar9,2,(Node **)local_a8,false);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,3.0);
  local_a8._0_8_ = pNVar8;
  pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberSubtract
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,17.0);
  local_a8._0_8_ = pNVar8;
  pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,0.0);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar10;
  local_a8._8_8_ = this_00;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("Uint8Array",0xb);
    local_a8._0_8_ = "Uint8Array";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    uVar5 = JSGraph::HeapConstant(pJVar21,uVar5);
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x11);
    uVar5 = JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
  }
  puVar11 = *(undefined8 **)pZVar36;
  if ((ulong)(*(long *)pZVar22 - (long)puVar11) < 0x10) {
    puVar11 = (undefined8 *)Zone::NewExpand(this_02,0x10);
  }
  else {
    *(undefined8 **)pZVar36 = puVar11 + 2;
  }
  puVar32 = puVar11 + 1;
  *puVar32 = uVar5;
  *puVar11 = *puVar28;
  puVar28 = *(undefined8 **)pZVar36;
  if ((ulong)(*(long *)pZVar22 - (long)puVar28) < 0x10) {
    puVar28 = (undefined8 *)Zone::NewExpand(this_02,0x10);
  }
  else {
    *(undefined8 **)pZVar36 = puVar28 + 2;
  }
  puVar28[1] = pNVar4;
  *puVar28 = *puVar23;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  puVar23 = *(undefined8 **)pZVar36;
  if ((ulong)(*(long *)pZVar22 - (long)puVar23) < 0x10) {
    puVar23 = (undefined8 *)Zone::NewExpand(this_02,0x10);
  }
  else {
    *(undefined8 **)pZVar36 = puVar23 + 2;
  }
  puVar23[1] = uVar5;
  *puVar23 = *puVar19;
  puVar19 = puVar11 + 2;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,1.0);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar10;
  local_a8._8_8_ = uVar5;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("Int8Array",10);
    local_a8._0_8_ = "Int8Array";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    pNVar12 = (Node *)JSGraph::HeapConstant(pJVar21,uVar5);
    lVar26 = (long)puVar19 - (long)puVar11 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    if (uVar29 < 5) {
      uVar29 = 4;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar20 = uVar29 * 8;
      uVar15 = *(ulong *)pZVar36;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    auVar3._8_8_ = local_a8._8_8_;
    auVar3._0_8_ = local_a8._0_8_;
    ppNVar31 = (Node **)(uVar15 + lVar26 * 8);
    ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
    ppNVar30 = ppNVar31 + 1;
    *ppNVar31 = pNVar12;
    if (puVar19 != puVar11) {
      do {
        puVar19 = puVar32 + -1;
        ppNVar31 = ppNVar31 + -1;
        *ppNVar31 = (Node *)*puVar32;
        puVar32 = puVar19;
        local_a8._0_16_ = auVar3;
      } while (puVar11 + -1 != puVar19);
    }
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x12);
    pNVar12 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
    lVar26 = (long)puVar19 - (long)puVar11 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    if (uVar29 < 5) {
      uVar29 = 4;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar20 = uVar29 * 8;
      uVar15 = *(ulong *)pZVar36;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar30 = (Node **)(uVar15 + lVar26 * 8);
    ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar30 = pNVar12;
    ppNVar31 = ppNVar30;
    if (puVar19 != puVar11) {
      do {
        puVar19 = puVar32 + -1;
        ppNVar31 = ppNVar31 + -1;
        *ppNVar31 = (Node *)*puVar32;
        puVar32 = puVar19;
      } while (puVar11 + -1 != puVar19);
    }
    ppNVar30 = ppNVar30 + 1;
  }
  uVar29 = *(ulong *)pZVar36;
  if (*(long *)pZVar22 - uVar29 < 0x20) {
    uVar29 = Zone::NewExpand(this_02,0x20);
  }
  else {
    *(ulong *)pZVar36 = uVar29 + 0x20;
  }
  local_f8 = (Node **)(uVar29 + 0x20);
  ppNVar38 = (Node **)(uVar29 + 0x10);
  *ppNVar38 = pNVar4;
  lVar26 = -0x10;
  puVar28 = puVar28 + 2;
  ppNVar25 = ppNVar38;
  do {
    ppNVar34 = ppNVar25;
    puVar28 = puVar28 + -1;
    lVar26 = lVar26 + 8;
    ppNVar25 = ppNVar34 + -1;
    *ppNVar25 = (Node *)*puVar28;
  } while (lVar26 != 0);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  ppNVar13 = *(Node ***)pZVar36;
  if ((ulong)(*(long *)pZVar22 - (long)ppNVar13) < 0x20) {
    ppNVar13 = (Node **)Zone::NewExpand(this_02,0x20);
  }
  else {
    *(Node ***)pZVar36 = ppNVar13 + 4;
  }
  ppNVar13[2] = pNVar12;
  local_e8 = ppNVar13 + 4;
  lVar26 = 0;
  do {
    lVar16 = lVar26 + -8;
    *(undefined8 *)((long)ppNVar13 + lVar26 + 8) = *(undefined8 *)((long)(puVar23 + 1) + lVar26);
    lVar26 = lVar16;
  } while (lVar16 != -0x10);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,2.0);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar10;
  local_a8._8_8_ = uVar5;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  ppNVar17 = ppNVar31;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("Uint16Array",0xc);
    local_a8._0_8_ = "Uint16Array";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    pNVar12 = (Node *)JSGraph::HeapConstant(pJVar21,uVar5);
    if (ppNVar30 < ppNVar18) {
      ppNVar33 = ppNVar30 + 1;
      *ppNVar30 = pNVar12;
    }
    else {
      lVar26 = (long)ppNVar30 - (long)ppNVar31 >> 3;
      uVar15 = lVar26 + 1;
      if (uVar15 >> 0x1c != 0) goto LAB_016ed374;
      uVar20 = (long)ppNVar18 - (long)ppNVar31 >> 2;
      if (uVar15 <= uVar20) {
        uVar15 = uVar20;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar31 >> 3)) {
        uVar15 = 0xfffffff;
      }
      if (uVar15 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(ulong *)pZVar36;
        uVar14 = uVar15 * 8;
        if (uVar14 < *(long *)pZVar22 - uVar20 || uVar14 - (*(long *)pZVar22 - uVar20) == 0) {
          *(ulong *)pZVar36 = uVar20 + uVar14;
        }
        else {
          uVar20 = Zone::NewExpand(this_02,uVar14);
        }
      }
      ppNVar17 = (Node **)(uVar20 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar20 + uVar15 * 8);
      ppNVar33 = ppNVar17 + 1;
      *ppNVar17 = pNVar12;
      while (ppNVar30 != ppNVar31) {
        ppNVar30 = ppNVar30 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar30;
      }
    }
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x13);
    pNVar12 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
    if (ppNVar30 < ppNVar18) {
      *ppNVar30 = pNVar12;
      ppNVar33 = ppNVar30 + 1;
    }
    else {
      lVar26 = (long)ppNVar30 - (long)ppNVar31 >> 3;
      uVar15 = lVar26 + 1;
      if (uVar15 >> 0x1c != 0) goto LAB_016ed374;
      uVar20 = (long)ppNVar18 - (long)ppNVar31 >> 2;
      if (uVar15 <= uVar20) {
        uVar15 = uVar20;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar31 >> 3)) {
        uVar15 = 0xfffffff;
      }
      if (uVar15 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(ulong *)pZVar36;
        uVar14 = uVar15 * 8;
        if (uVar14 < *(long *)pZVar22 - uVar20 || uVar14 - (*(long *)pZVar22 - uVar20) == 0) {
          *(ulong *)pZVar36 = uVar20 + uVar14;
        }
        else {
          uVar20 = Zone::NewExpand(this_02,uVar14);
        }
      }
      ppNVar33 = (Node **)(uVar20 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar20 + uVar15 * 8);
      *ppNVar33 = pNVar12;
      ppNVar17 = ppNVar33;
      while (ppNVar30 != ppNVar31) {
        ppNVar30 = ppNVar30 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar30;
      }
      ppNVar33 = ppNVar33 + 1;
    }
  }
  ppNVar30 = (Node **)(uVar29 + 0x18);
  if (ppNVar30 == local_f8) {
    lVar26 = (long)ppNVar30 - (long)ppNVar25 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_f8 - (long)ppNVar25 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)ppNVar25 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    local_e0 = (Node **)(uVar15 + lVar26 * 8);
    local_f8 = (Node **)(uVar15 + uVar29 * 8);
    ppNVar31 = local_e0 + 1;
    *local_e0 = pNVar4;
    if (ppNVar30 != ppNVar25) {
      do {
        ppNVar30 = ppNVar38 + -1;
        local_e0 = local_e0 + -1;
        *local_e0 = *ppNVar38;
        ppNVar38 = ppNVar30;
      } while (ppNVar34 + -2 != ppNVar30);
    }
  }
  else {
    ppNVar31 = (Node **)(uVar29 + 0x20);
    *(Node **)(uVar29 + 0x18) = pNVar4;
    local_e0 = ppNVar25;
  }
  ppNVar30 = ppNVar13 + 3;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  if (ppNVar30 < local_e8) {
    *ppNVar30 = pNVar12;
    ppNVar25 = ppNVar30;
    local_108 = ppNVar13;
  }
  else {
    lVar26 = (long)ppNVar30 - (long)ppNVar13 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_e8 - (long)ppNVar13 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_e8 - (long)ppNVar13 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar25 = (Node **)(uVar15 + lVar26 * 8);
    local_e8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar25 = pNVar12;
    local_108 = ppNVar25;
    if (ppNVar30 != ppNVar13) {
      ppNVar30 = ppNVar13 + 2;
      do {
        ppNVar38 = ppNVar30 + -1;
        local_108 = local_108 + -1;
        *local_108 = *ppNVar30;
        ppNVar30 = ppNVar38;
      } while (ppNVar13 + -1 != ppNVar38);
    }
  }
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,3.0);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar10;
  local_a8._8_8_ = uVar5;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  ppNVar30 = ppNVar17;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("Int16Array",0xb);
    local_a8._0_8_ = "Int16Array";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    pNVar12 = (Node *)JSGraph::HeapConstant(pJVar21,uVar5);
    if (ppNVar33 < ppNVar18) {
      ppNVar38 = ppNVar33 + 1;
      *ppNVar33 = pNVar12;
    }
    else {
      lVar26 = (long)ppNVar33 - (long)ppNVar17 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar17 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar17 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)pZVar36;
        uVar20 = uVar29 * 8;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar30 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      ppNVar38 = ppNVar30 + 1;
      *ppNVar30 = pNVar12;
      while (ppNVar33 != ppNVar17) {
        ppNVar33 = ppNVar33 + -1;
        ppNVar30 = ppNVar30 + -1;
        *ppNVar30 = *ppNVar33;
      }
    }
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x14);
    pNVar12 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
    if (ppNVar33 < ppNVar18) {
      *ppNVar33 = pNVar12;
      ppNVar38 = ppNVar33 + 1;
    }
    else {
      lVar26 = (long)ppNVar33 - (long)ppNVar17 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar17 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar17 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)pZVar36;
        uVar20 = uVar29 * 8;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar38 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      *ppNVar38 = pNVar12;
      ppNVar30 = ppNVar38;
      while (ppNVar33 != ppNVar17) {
        ppNVar33 = ppNVar33 + -1;
        ppNVar30 = ppNVar30 + -1;
        *ppNVar30 = *ppNVar33;
      }
      ppNVar38 = ppNVar38 + 1;
    }
  }
  if (ppNVar31 == local_f8) {
    lVar26 = (long)ppNVar31 - (long)local_e0 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_f8 - (long)local_e0 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)local_e0 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar20 = uVar29 * 8;
      uVar15 = *(ulong *)pZVar36;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar34 = (Node **)(uVar15 + lVar26 * 8);
    local_f8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar34 = pNVar4;
    ppNVar13 = ppNVar34;
    while (ppNVar31 != local_e0) {
      ppNVar31 = ppNVar31 + -1;
      ppNVar13 = ppNVar13 + -1;
      *ppNVar13 = *ppNVar31;
    }
  }
  else {
    *ppNVar31 = pNVar4;
    ppNVar34 = ppNVar31;
    ppNVar13 = local_e0;
  }
  local_e0 = ppNVar13;
  ppNVar31 = ppNVar25 + 1;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  if (ppNVar31 < local_e8) {
    *ppNVar31 = pNVar12;
    ppNVar13 = ppNVar31;
    ppNVar17 = local_108;
  }
  else {
    lVar26 = (long)ppNVar31 - (long)local_108 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_e8 - (long)local_108 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_e8 - (long)local_108 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar20 = uVar29 * 8;
      uVar15 = *(ulong *)pZVar36;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar13 = (Node **)(uVar15 + lVar26 * 8);
    local_e8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar13 = pNVar12;
    ppNVar17 = ppNVar13;
    if (ppNVar31 != local_108) {
      do {
        ppNVar31 = ppNVar25 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar25;
        ppNVar25 = ppNVar31;
      } while (local_108 + -1 != ppNVar31);
    }
  }
  local_108 = ppNVar17;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,4.0);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar10;
  local_a8._8_8_ = uVar5;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  ppNVar31 = ppNVar30;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("Uint32Array",0xc);
    local_a8._0_8_ = "Uint32Array";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    pNVar12 = (Node *)JSGraph::HeapConstant(pJVar21,uVar5);
    if (ppNVar38 < ppNVar18) {
      ppNVar25 = ppNVar38 + 1;
      *ppNVar38 = pNVar12;
    }
    else {
      lVar26 = (long)ppNVar38 - (long)ppNVar30 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar30 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar30 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar20 = uVar29 * 8;
        uVar15 = *(ulong *)pZVar36;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar31 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      ppNVar25 = ppNVar31 + 1;
      *ppNVar31 = pNVar12;
      while (ppNVar38 != ppNVar30) {
        ppNVar38 = ppNVar38 + -1;
        ppNVar31 = ppNVar31 + -1;
        *ppNVar31 = *ppNVar38;
      }
    }
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x15);
    pNVar12 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
    if (ppNVar38 < ppNVar18) {
      *ppNVar38 = pNVar12;
      ppNVar25 = ppNVar38 + 1;
    }
    else {
      lVar26 = (long)ppNVar38 - (long)ppNVar30 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar30 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar30 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar20 = uVar29 * 8;
        uVar15 = *(ulong *)pZVar36;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar25 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      *ppNVar25 = pNVar12;
      ppNVar31 = ppNVar25;
      while (ppNVar38 != ppNVar30) {
        ppNVar38 = ppNVar38 + -1;
        ppNVar31 = ppNVar31 + -1;
        *ppNVar31 = *ppNVar38;
      }
      ppNVar25 = ppNVar25 + 1;
    }
  }
  ppNVar30 = ppNVar34 + 1;
  if (ppNVar30 == local_f8) {
    lVar26 = (long)ppNVar30 - (long)local_e0 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_f8 - (long)local_e0 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)local_e0 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar17 = (Node **)(uVar15 + lVar26 * 8);
    local_f8 = (Node **)(uVar15 + uVar29 * 8);
    ppNVar38 = ppNVar17 + 1;
    *ppNVar17 = pNVar4;
    if (ppNVar30 != local_e0) {
      do {
        ppNVar30 = ppNVar34 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar34;
        ppNVar34 = ppNVar30;
      } while (local_e0 + -1 != ppNVar30);
    }
  }
  else {
    ppNVar38 = ppNVar34 + 2;
    ppNVar34[1] = pNVar4;
    ppNVar17 = local_e0;
  }
  local_e0 = ppNVar17;
  ppNVar30 = ppNVar13 + 1;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  if (ppNVar30 < local_e8) {
    *ppNVar30 = pNVar12;
    ppNVar34 = ppNVar30;
    ppNVar17 = local_108;
  }
  else {
    lVar26 = (long)ppNVar30 - (long)local_108 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_e8 - (long)local_108 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_e8 - (long)local_108 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar34 = (Node **)(uVar15 + lVar26 * 8);
    local_e8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar34 = pNVar12;
    ppNVar17 = ppNVar34;
    if (ppNVar30 != local_108) {
      do {
        ppNVar30 = ppNVar13 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar13;
        ppNVar13 = ppNVar30;
      } while (local_108 + -1 != ppNVar30);
    }
  }
  local_108 = ppNVar17;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,5.0);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar10;
  local_a8._8_8_ = uVar5;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  ppNVar30 = ppNVar31;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("Int32Array",0xb);
    local_a8._0_8_ = "Int32Array";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    pNVar12 = (Node *)JSGraph::HeapConstant(pJVar21,uVar5);
    if (ppNVar25 < ppNVar18) {
      ppNVar13 = ppNVar25 + 1;
      *ppNVar25 = pNVar12;
    }
    else {
      lVar26 = (long)ppNVar25 - (long)ppNVar31 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar31 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar31 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar20 = uVar29 * 8;
        uVar15 = *(ulong *)pZVar36;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar30 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      ppNVar13 = ppNVar30 + 1;
      *ppNVar30 = pNVar12;
      while (ppNVar25 != ppNVar31) {
        ppNVar25 = ppNVar25 + -1;
        ppNVar30 = ppNVar30 + -1;
        *ppNVar30 = *ppNVar25;
      }
    }
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x16);
    pNVar12 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
    if (ppNVar25 < ppNVar18) {
      *ppNVar25 = pNVar12;
      ppNVar13 = ppNVar25 + 1;
    }
    else {
      lVar26 = (long)ppNVar25 - (long)ppNVar31 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar31 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar31 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar20 = uVar29 * 8;
        uVar15 = *(ulong *)pZVar36;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar13 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      *ppNVar13 = pNVar12;
      ppNVar30 = ppNVar13;
      while (ppNVar25 != ppNVar31) {
        ppNVar25 = ppNVar25 + -1;
        ppNVar30 = ppNVar30 + -1;
        *ppNVar30 = *ppNVar25;
      }
      ppNVar13 = ppNVar13 + 1;
    }
  }
  if (ppNVar38 == local_f8) {
    lVar26 = (long)ppNVar38 - (long)local_e0 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_f8 - (long)local_e0 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)local_e0 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar31 = (Node **)(uVar15 + lVar26 * 8);
    local_f8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar31 = pNVar4;
    ppNVar25 = ppNVar31;
    while (ppNVar38 != local_e0) {
      ppNVar38 = ppNVar38 + -1;
      ppNVar25 = ppNVar25 + -1;
      *ppNVar25 = *ppNVar38;
    }
  }
  else {
    *ppNVar38 = pNVar4;
    ppNVar31 = ppNVar38;
    ppNVar25 = local_e0;
  }
  local_e0 = ppNVar25;
  ppNVar25 = ppNVar34 + 1;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  if (ppNVar25 < local_e8) {
    *ppNVar25 = pNVar12;
    ppNVar38 = ppNVar25;
    ppNVar17 = local_108;
  }
  else {
    lVar26 = (long)ppNVar25 - (long)local_108 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_e8 - (long)local_108 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_e8 - (long)local_108 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar20 = uVar29 * 8;
      uVar15 = *(ulong *)pZVar36;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar38 = (Node **)(uVar15 + lVar26 * 8);
    local_e8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar38 = pNVar12;
    ppNVar17 = ppNVar38;
    if (ppNVar25 != local_108) {
      do {
        ppNVar25 = ppNVar34 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar34;
        ppNVar34 = ppNVar25;
      } while (local_108 + -1 != ppNVar25);
    }
  }
  local_108 = ppNVar17;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,6.0);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar10;
  local_a8._8_8_ = uVar5;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  ppNVar25 = ppNVar30;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("Float32Array",0xd);
    local_a8._0_8_ = "Float32Array";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    pNVar12 = (Node *)JSGraph::HeapConstant(pJVar21,uVar5);
    if (ppNVar13 < ppNVar18) {
      ppNVar34 = ppNVar13 + 1;
      *ppNVar13 = pNVar12;
    }
    else {
      lVar26 = (long)ppNVar13 - (long)ppNVar30 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar30 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar30 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar20 = uVar29 * 8;
        uVar15 = *(ulong *)pZVar36;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar25 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      ppNVar34 = ppNVar25 + 1;
      *ppNVar25 = pNVar12;
      while (ppNVar13 != ppNVar30) {
        ppNVar13 = ppNVar13 + -1;
        ppNVar25 = ppNVar25 + -1;
        *ppNVar25 = *ppNVar13;
      }
    }
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x17);
    pNVar12 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
    if (ppNVar13 < ppNVar18) {
      *ppNVar13 = pNVar12;
      ppNVar34 = ppNVar13 + 1;
    }
    else {
      lVar26 = (long)ppNVar13 - (long)ppNVar30 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar30 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar30 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar20 = uVar29 * 8;
        uVar15 = *(ulong *)pZVar36;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar34 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      *ppNVar34 = pNVar12;
      ppNVar25 = ppNVar34;
      while (ppNVar13 != ppNVar30) {
        ppNVar13 = ppNVar13 + -1;
        ppNVar25 = ppNVar25 + -1;
        *ppNVar25 = *ppNVar13;
      }
      ppNVar34 = ppNVar34 + 1;
    }
  }
  ppNVar30 = ppNVar31 + 1;
  if (ppNVar30 == local_f8) {
    lVar26 = (long)ppNVar30 - (long)local_e0 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_f8 - (long)local_e0 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)local_e0 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar20 = uVar29 * 8;
      uVar15 = *(ulong *)pZVar36;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar17 = (Node **)(uVar15 + lVar26 * 8);
    local_f8 = (Node **)(uVar15 + uVar29 * 8);
    ppNVar13 = ppNVar17 + 1;
    *ppNVar17 = pNVar4;
    if (ppNVar30 != local_e0) {
      do {
        ppNVar30 = ppNVar31 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar31;
        ppNVar31 = ppNVar30;
      } while (local_e0 + -1 != ppNVar30);
    }
  }
  else {
    ppNVar13 = ppNVar31 + 2;
    ppNVar31[1] = pNVar4;
    ppNVar17 = local_e0;
  }
  local_e0 = ppNVar17;
  ppNVar30 = ppNVar38 + 1;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  if (ppNVar30 < local_e8) {
    *ppNVar30 = pNVar12;
    ppNVar31 = ppNVar30;
    ppNVar17 = local_108;
  }
  else {
    lVar26 = (long)ppNVar30 - (long)local_108 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_e8 - (long)local_108 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_e8 - (long)local_108 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar31 = (Node **)(uVar15 + lVar26 * 8);
    local_e8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar31 = pNVar12;
    ppNVar17 = ppNVar31;
    if (ppNVar30 != local_108) {
      do {
        ppNVar30 = ppNVar38 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar38;
        ppNVar38 = ppNVar30;
      } while (local_108 + -1 != ppNVar30);
    }
  }
  local_108 = ppNVar17;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,7.0);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar10;
  local_a8._8_8_ = uVar5;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  ppNVar30 = ppNVar25;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("Float64Array",0xd);
    local_a8._0_8_ = "Float64Array";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    pNVar12 = (Node *)JSGraph::HeapConstant(pJVar21,uVar5);
    if (ppNVar34 < ppNVar18) {
      ppNVar38 = ppNVar34 + 1;
      *ppNVar34 = pNVar12;
    }
    else {
      lVar26 = (long)ppNVar34 - (long)ppNVar25 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar25 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar25 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)pZVar36;
        uVar20 = uVar29 * 8;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar30 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      ppNVar38 = ppNVar30 + 1;
      *ppNVar30 = pNVar12;
      while (ppNVar34 != ppNVar25) {
        ppNVar34 = ppNVar34 + -1;
        ppNVar30 = ppNVar30 + -1;
        *ppNVar30 = *ppNVar34;
      }
    }
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x18);
    pNVar12 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
    if (ppNVar34 < ppNVar18) {
      *ppNVar34 = pNVar12;
      ppNVar38 = ppNVar34 + 1;
    }
    else {
      lVar26 = (long)ppNVar34 - (long)ppNVar25 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar25 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar25 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)pZVar36;
        uVar20 = uVar29 * 8;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar38 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      *ppNVar38 = pNVar12;
      ppNVar30 = ppNVar38;
      while (ppNVar34 != ppNVar25) {
        ppNVar34 = ppNVar34 + -1;
        ppNVar30 = ppNVar30 + -1;
        *ppNVar30 = *ppNVar34;
      }
      ppNVar38 = ppNVar38 + 1;
    }
  }
  if (ppNVar13 == local_f8) {
    lVar26 = (long)ppNVar13 - (long)local_e0 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_f8 - (long)local_e0 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)local_e0 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar25 = (Node **)(uVar15 + lVar26 * 8);
    local_f8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar25 = pNVar4;
    ppNVar34 = ppNVar25;
    while (ppNVar13 != local_e0) {
      ppNVar13 = ppNVar13 + -1;
      ppNVar34 = ppNVar34 + -1;
      *ppNVar34 = *ppNVar13;
    }
  }
  else {
    *ppNVar13 = pNVar4;
    ppNVar25 = ppNVar13;
    ppNVar34 = local_e0;
  }
  local_e0 = ppNVar34;
  ppNVar34 = ppNVar31 + 1;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  if (ppNVar34 < local_e8) {
    *ppNVar34 = pNVar12;
    ppNVar13 = ppNVar34;
    ppNVar17 = local_108;
  }
  else {
    lVar26 = (long)ppNVar34 - (long)local_108 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_e8 - (long)local_108 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_e8 - (long)local_108 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar20 = uVar29 * 8;
      uVar15 = *(ulong *)pZVar36;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar13 = (Node **)(uVar15 + lVar26 * 8);
    local_e8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar13 = pNVar12;
    ppNVar17 = ppNVar13;
    if (ppNVar34 != local_108) {
      do {
        ppNVar34 = ppNVar31 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar31;
        ppNVar31 = ppNVar34;
      } while (local_108 + -1 != ppNVar34);
    }
  }
  local_108 = ppNVar17;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,8.0);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar10;
  local_a8._8_8_ = uVar5;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  ppNVar31 = ppNVar30;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("Uint8ClampedArray",0x12);
    local_a8._0_8_ = "Uint8ClampedArray";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    pNVar12 = (Node *)JSGraph::HeapConstant(pJVar21,uVar5);
    if (ppNVar38 < ppNVar18) {
      ppNVar34 = ppNVar38 + 1;
      *ppNVar38 = pNVar12;
    }
    else {
      lVar26 = (long)ppNVar38 - (long)ppNVar30 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar30 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar30 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar20 = uVar29 * 8;
        uVar15 = *(ulong *)pZVar36;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar31 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      ppNVar34 = ppNVar31 + 1;
      *ppNVar31 = pNVar12;
      while (ppNVar38 != ppNVar30) {
        ppNVar38 = ppNVar38 + -1;
        ppNVar31 = ppNVar31 + -1;
        *ppNVar31 = *ppNVar38;
      }
    }
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x19);
    pNVar12 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
    if (ppNVar38 < ppNVar18) {
      *ppNVar38 = pNVar12;
      ppNVar34 = ppNVar38 + 1;
    }
    else {
      lVar26 = (long)ppNVar38 - (long)ppNVar30 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar30 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar30 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar20 = uVar29 * 8;
        uVar15 = *(ulong *)pZVar36;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar34 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      *ppNVar34 = pNVar12;
      ppNVar31 = ppNVar34;
      while (ppNVar38 != ppNVar30) {
        ppNVar38 = ppNVar38 + -1;
        ppNVar31 = ppNVar31 + -1;
        *ppNVar31 = *ppNVar38;
      }
      ppNVar34 = ppNVar34 + 1;
    }
  }
  ppNVar30 = ppNVar25 + 1;
  if (ppNVar30 == local_f8) {
    lVar26 = (long)ppNVar30 - (long)local_e0 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_f8 - (long)local_e0 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)local_e0 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar20 = uVar29 * 8;
      uVar15 = *(ulong *)pZVar36;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar17 = (Node **)(uVar15 + lVar26 * 8);
    local_f8 = (Node **)(uVar15 + uVar29 * 8);
    ppNVar38 = ppNVar17 + 1;
    *ppNVar17 = pNVar4;
    if (ppNVar30 != local_e0) {
      do {
        ppNVar30 = ppNVar25 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar25;
        ppNVar25 = ppNVar30;
      } while (local_e0 + -1 != ppNVar30);
    }
  }
  else {
    ppNVar38 = ppNVar25 + 2;
    ppNVar25[1] = pNVar4;
    ppNVar17 = local_e0;
  }
  local_e0 = ppNVar17;
  ppNVar30 = ppNVar13 + 1;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  if (ppNVar30 < local_e8) {
    *ppNVar30 = pNVar12;
    ppNVar25 = ppNVar30;
    ppNVar17 = local_108;
  }
  else {
    lVar26 = (long)ppNVar30 - (long)local_108 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_e8 - (long)local_108 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_e8 - (long)local_108 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar25 = (Node **)(uVar15 + lVar26 * 8);
    local_e8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar25 = pNVar12;
    ppNVar17 = ppNVar25;
    if (ppNVar30 != local_108) {
      do {
        ppNVar30 = ppNVar13 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar13;
        ppNVar13 = ppNVar30;
      } while (local_108 + -1 != ppNVar30);
    }
  }
  local_108 = ppNVar17;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,9.0);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar10;
  local_a8._8_8_ = uVar5;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  ppNVar30 = ppNVar31;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("BigUint64Array",0xf);
    local_a8._0_8_ = "BigUint64Array";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    pNVar12 = (Node *)JSGraph::HeapConstant(pJVar21,uVar5);
    if (ppNVar34 < ppNVar18) {
      ppNVar13 = ppNVar34 + 1;
      *ppNVar34 = pNVar12;
    }
    else {
      lVar26 = (long)ppNVar34 - (long)ppNVar31 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar31 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar31 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)pZVar36;
        uVar20 = uVar29 * 8;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar30 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      ppNVar13 = ppNVar30 + 1;
      *ppNVar30 = pNVar12;
      while (ppNVar34 != ppNVar31) {
        ppNVar34 = ppNVar34 + -1;
        ppNVar30 = ppNVar30 + -1;
        *ppNVar30 = *ppNVar34;
      }
    }
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x1a);
    pNVar12 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
    if (ppNVar34 < ppNVar18) {
      *ppNVar34 = pNVar12;
      ppNVar13 = ppNVar34 + 1;
    }
    else {
      lVar26 = (long)ppNVar34 - (long)ppNVar31 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar31 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar31 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)pZVar36;
        uVar20 = uVar29 * 8;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar13 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      *ppNVar13 = pNVar12;
      ppNVar30 = ppNVar13;
      while (ppNVar34 != ppNVar31) {
        ppNVar34 = ppNVar34 + -1;
        ppNVar30 = ppNVar30 + -1;
        *ppNVar30 = *ppNVar34;
      }
      ppNVar13 = ppNVar13 + 1;
    }
  }
  if (ppNVar38 == local_f8) {
    lVar26 = (long)ppNVar38 - (long)local_e0 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_f8 - (long)local_e0 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)local_e0 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar31 = (Node **)(uVar15 + lVar26 * 8);
    local_f8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar31 = pNVar4;
    ppNVar34 = ppNVar31;
    while (ppNVar38 != local_e0) {
      ppNVar38 = ppNVar38 + -1;
      ppNVar34 = ppNVar34 + -1;
      *ppNVar34 = *ppNVar38;
    }
  }
  else {
    *ppNVar38 = pNVar4;
    ppNVar31 = ppNVar38;
    ppNVar34 = local_e0;
  }
  local_e0 = ppNVar34;
  ppNVar38 = ppNVar25 + 1;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  if (ppNVar38 < local_e8) {
    *ppNVar38 = pNVar12;
    ppNVar34 = ppNVar38;
    ppNVar17 = local_108;
  }
  else {
    lVar26 = (long)ppNVar38 - (long)local_108 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_e8 - (long)local_108 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_e8 - (long)local_108 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar34 = (Node **)(uVar15 + lVar26 * 8);
    local_e8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar34 = pNVar12;
    ppNVar17 = ppNVar34;
    if (ppNVar38 != local_108) {
      do {
        ppNVar38 = ppNVar25 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar25;
        ppNVar25 = ppNVar38;
      } while (local_108 + -1 != ppNVar38);
    }
  }
  local_108 = ppNVar17;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar10;
  uVar5 = Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar35)[0x2f]);
  local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pJVar35,10.0);
  local_a8._0_8_ = pNVar8;
  pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],0,1);
  local_a8._0_8_ = pNVar8;
  local_a8._8_8_ = uVar5;
  pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar7,2,(Node **)local_a8,false);
  pJVar21 = *(JSGraph **)pJVar35;
  ppNVar25 = ppNVar30;
  if (FLAG_concurrent_inlining == '\0') {
    pFVar24 = *(Factory **)(pJVar21 + 0x168);
    local_a8._8_8_ = __strlen_chk("BigInt64Array",0xe);
    local_a8._0_8_ = "BigInt64Array";
    uVar5 = Factory::InternalizeUtf8String(pFVar24,local_a8);
    pNVar10 = (Node *)JSGraph::HeapConstant(pJVar21,uVar5);
    if (ppNVar13 < ppNVar18) {
      ppNVar38 = ppNVar13 + 1;
      *ppNVar13 = pNVar10;
    }
    else {
      lVar26 = (long)ppNVar13 - (long)ppNVar30 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar30 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar30 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar20 = uVar29 * 8;
        uVar15 = *(ulong *)pZVar36;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar25 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      ppNVar38 = ppNVar25 + 1;
      *ppNVar25 = pNVar10;
      while (ppNVar13 != ppNVar30) {
        ppNVar13 = ppNVar13 + -1;
        ppNVar25 = ppNVar25 + -1;
        *ppNVar25 = *ppNVar13;
      }
    }
  }
  else {
    local_a8._0_16_ = JSHeapBroker::GetTypedArrayStringTag(*(JSHeapBroker **)(this + 0x18),0x1b);
    pNVar10 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_a8);
    if (ppNVar13 < ppNVar18) {
      *ppNVar13 = pNVar10;
      ppNVar38 = ppNVar13 + 1;
    }
    else {
      lVar26 = (long)ppNVar13 - (long)ppNVar30 >> 3;
      uVar29 = lVar26 + 1;
      if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
      uVar15 = (long)ppNVar18 - (long)ppNVar30 >> 2;
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar30 >> 3)) {
        uVar29 = 0xfffffff;
      }
      if (uVar29 == 0) {
        uVar15 = 0;
      }
      else {
        uVar20 = uVar29 * 8;
        uVar15 = *(ulong *)pZVar36;
        if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
          *(ulong *)pZVar36 = uVar15 + uVar20;
        }
        else {
          uVar15 = Zone::NewExpand(this_02,uVar20);
        }
      }
      ppNVar38 = (Node **)(uVar15 + lVar26 * 8);
      ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
      *ppNVar38 = pNVar10;
      ppNVar25 = ppNVar38;
      while (ppNVar13 != ppNVar30) {
        ppNVar13 = ppNVar13 + -1;
        ppNVar25 = ppNVar25 + -1;
        *ppNVar25 = *ppNVar13;
      }
      ppNVar38 = ppNVar38 + 1;
    }
  }
  ppNVar30 = ppNVar31 + 1;
  if (ppNVar30 == local_f8) {
    lVar26 = (long)ppNVar30 - (long)local_e0 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_f8 - (long)local_e0 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)local_e0 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar20 = uVar29 * 8;
      uVar15 = *(ulong *)pZVar36;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar17 = (Node **)(uVar15 + lVar26 * 8);
    local_f8 = (Node **)(uVar15 + uVar29 * 8);
    ppNVar13 = ppNVar17 + 1;
    *ppNVar17 = pNVar4;
    if (ppNVar30 != local_e0) {
      do {
        ppNVar30 = ppNVar31 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar31;
        ppNVar31 = ppNVar30;
      } while (local_e0 + -1 != ppNVar30);
    }
  }
  else {
    ppNVar13 = ppNVar31 + 2;
    ppNVar31[1] = pNVar4;
    ppNVar17 = local_e0;
  }
  local_e0 = ppNVar17;
  ppNVar30 = ppNVar34 + 1;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar8;
  pNVar10 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  if (ppNVar30 < local_e8) {
    *ppNVar30 = pNVar10;
    ppNVar31 = ppNVar30;
    ppNVar17 = local_108;
  }
  else {
    lVar26 = (long)ppNVar30 - (long)local_108 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_e8 - (long)local_108 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_e8 - (long)local_108 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar20 = uVar29 * 8;
      uVar15 = *(ulong *)pZVar36;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar31 = (Node **)(uVar15 + lVar26 * 8);
    local_e8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar31 = pNVar10;
    ppNVar17 = ppNVar31;
    if (ppNVar30 != local_108) {
      do {
        ppNVar30 = ppNVar34 + -1;
        ppNVar17 = ppNVar17 + -1;
        *ppNVar17 = *ppNVar34;
        ppNVar34 = ppNVar30;
      } while (local_108 + -1 != ppNVar30);
    }
  }
  local_108 = ppNVar17;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1]);
  local_a8._0_8_ = pNVar8;
  pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar7,1,(Node **)local_a8,false);
  pNVar10 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)pJVar35);
  if (ppNVar38 < ppNVar18) {
    *ppNVar38 = pNVar10;
    ppNVar30 = ppNVar38;
    ppNVar34 = ppNVar25;
    if (ppNVar13 == local_f8) goto LAB_016ecc7c;
LAB_016ecbc4:
    *ppNVar13 = pNVar4;
    ppNVar38 = local_e0;
    ppNVar25 = ppNVar13;
  }
  else {
    lVar26 = (long)ppNVar38 - (long)ppNVar25 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)ppNVar18 - (long)ppNVar25 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar25 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar30 = (Node **)(uVar15 + lVar26 * 8);
    ppNVar18 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar30 = pNVar10;
    ppNVar34 = ppNVar30;
    while (ppNVar38 != ppNVar25) {
      ppNVar38 = ppNVar38 + -1;
      ppNVar34 = ppNVar34 + -1;
      *ppNVar34 = *ppNVar38;
    }
    if (ppNVar13 != local_f8) goto LAB_016ecbc4;
LAB_016ecc7c:
    lVar26 = (long)ppNVar13 - (long)local_e0 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_f8 - (long)local_e0 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)local_e0 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar20 = uVar29 * 8;
      if (uVar20 < *(long *)pZVar22 - uVar15 || uVar20 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar20;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar20);
      }
    }
    ppNVar25 = (Node **)(uVar15 + lVar26 * 8);
    local_f8 = (Node **)(uVar15 + uVar29 * 8);
    *ppNVar25 = pNVar4;
    ppNVar38 = ppNVar25;
    while (ppNVar13 != local_e0) {
      ppNVar13 = ppNVar13 + -1;
      ppNVar38 = ppNVar38 + -1;
      *ppNVar38 = *ppNVar13;
    }
  }
  ppNVar13 = ppNVar31 + 1;
  if (ppNVar13 == local_e8) {
    lVar26 = (long)ppNVar13 - (long)local_108 >> 3;
    uVar29 = lVar26 + 1;
    if (uVar29 >> 0x1c != 0) goto LAB_016ed374;
    uVar15 = (long)local_e8 - (long)local_108 >> 2;
    if (uVar29 <= uVar15) {
      uVar29 = uVar15;
    }
    if (0x7fffffe < (ulong)((long)local_e8 - (long)local_108 >> 3)) {
      uVar29 = 0xfffffff;
    }
    if (uVar29 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)pZVar36;
      uVar29 = uVar29 * 8;
      if (uVar29 < *(long *)pZVar22 - uVar15 || uVar29 - (*(long *)pZVar22 - uVar15) == 0) {
        *(ulong *)pZVar36 = uVar15 + uVar29;
      }
      else {
        uVar15 = Zone::NewExpand(this_02,uVar29);
      }
    }
    ppNVar33 = (Node **)(uVar15 + lVar26 * 8);
    ppNVar17 = ppNVar33 + 1;
    *ppNVar33 = pNVar8;
    if (ppNVar13 != local_108) {
      do {
        ppNVar13 = ppNVar31 + -1;
        ppNVar33 = ppNVar33 + -1;
        *ppNVar33 = *ppNVar31;
        ppNVar31 = ppNVar13;
      } while (local_108 + -1 != ppNVar13);
    }
  }
  else {
    ppNVar31[1] = pNVar8;
    ppNVar17 = ppNVar31 + 2;
    ppNVar33 = local_108;
  }
  uVar29 = (ulong)((long)ppNVar17 - (long)ppNVar33) >> 3;
  iVar2 = (int)uVar29;
  ppNVar31 = ppNVar25 + 1;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Merge((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],iVar2)
  ;
  pNVar4 = (Node *)Graph::NewNode(pGVar27,pOVar7,iVar2,ppNVar33,false);
  if (ppNVar31 == local_f8) {
    lVar26 = (long)ppNVar31 - (long)ppNVar38 >> 3;
    uVar15 = lVar26 + 1;
    if (uVar15 >> 0x1c != 0) goto LAB_016ed374;
    uVar20 = (long)local_f8 - (long)ppNVar38 >> 2;
    if (uVar15 <= uVar20) {
      uVar15 = uVar20;
    }
    if (0x7fffffe < (ulong)((long)local_f8 - (long)ppNVar38 >> 3)) {
      uVar15 = 0xfffffff;
    }
    if (uVar15 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(ulong *)pZVar36;
      uVar15 = uVar15 * 8;
      if (uVar15 < *(long *)pZVar22 - uVar20 || uVar15 - (*(long *)pZVar22 - uVar20) == 0) {
        *(ulong *)pZVar36 = uVar20 + uVar15;
      }
      else {
        uVar20 = Zone::NewExpand(this_02,uVar15);
      }
    }
    ppNVar13 = (Node **)(uVar20 + lVar26 * 8);
    *ppNVar13 = pNVar4;
    if (ppNVar31 != ppNVar38) {
      do {
        ppNVar31 = ppNVar25 + -1;
        ppNVar13 = ppNVar13 + -1;
        *ppNVar13 = *ppNVar25;
        ppNVar25 = ppNVar31;
      } while (ppNVar38 + -1 != ppNVar31);
    }
  }
  else {
    *ppNVar31 = pNVar4;
    ppNVar13 = ppNVar38;
  }
  ppNVar31 = ppNVar30 + 1;
  pGVar27 = (Graph *)**(undefined8 **)pJVar35;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     ((CommonOperatorBuilder *)(*(undefined8 **)pJVar35)[1],iVar2);
  uVar5 = Graph::NewNode(pGVar27,pOVar7,iVar2 + 1,ppNVar13,false);
  if (ppNVar31 == ppNVar18) {
    lVar26 = (long)ppNVar31 - (long)ppNVar34 >> 3;
    uVar15 = lVar26 + 1;
    if (uVar15 >> 0x1c != 0) {
LAB_016ed374:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar20 = (long)ppNVar18 - (long)ppNVar34 >> 2;
    if (uVar15 <= uVar20) {
      uVar15 = uVar20;
    }
    if (0x7fffffe < (ulong)((long)ppNVar18 - (long)ppNVar34 >> 3)) {
      uVar15 = 0xfffffff;
    }
    if (uVar15 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(ulong *)pZVar36;
      uVar15 = uVar15 * 8;
      if (uVar15 < *(long *)pZVar22 - uVar20 || uVar15 - (*(long *)pZVar22 - uVar20) == 0) {
        *(ulong *)pZVar36 = uVar20 + uVar15;
      }
      else {
        uVar20 = Zone::NewExpand(this_02,uVar15);
      }
    }
    ppNVar18 = (Node **)(uVar20 + lVar26 * 8);
    *ppNVar18 = pNVar4;
    if (ppNVar31 != ppNVar34) {
      do {
        ppNVar31 = ppNVar30 + -1;
        ppNVar18 = ppNVar18 + -1;
        *ppNVar18 = *ppNVar30;
        ppNVar30 = ppNVar31;
      } while (ppNVar34 + -1 != ppNVar31);
    }
  }
  else {
    *ppNVar31 = pNVar4;
    ppNVar18 = ppNVar34;
  }
  pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Phi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,
                      uVar29 & 0xffffffff);
  uVar6 = Graph::NewNode(pGVar27,pOVar7,iVar2 + 1,ppNVar18,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar6,uVar5,pNVar4);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

