
/* v8::internal::compiler::JSNativeContextSpecialization::BuildExtendPropertiesBackingStore(v8::internal::compiler::MapRef
   const&, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::BuildExtendPropertiesBackingStore
          (JSNativeContextSpecialization *this,MapRef *param_1,Node *param_2,Node *param_3,
          Node *param_4)

{
  CommonOperatorBuilder *pCVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  Operator *pOVar7;
  undefined8 uVar8;
  AccessBuilder *pAVar9;
  Node *pNVar10;
  Operator *pOVar11;
  Node *pNVar12;
  AccessBuilder *pAVar13;
  long lVar14;
  ulong uVar15;
  AccessBuilder *pAVar16;
  undefined8 *puVar17;
  JSGraph *pJVar18;
  Zone *this_00;
  AccessBuilder *pAVar19;
  double dVar20;
  ulong uVar21;
  ulong uVar22;
  AccessBuilder *pAVar23;
  Graph *this_01;
  Graph *pGVar24;
  long lVar25;
  AccessBuilder *pAVar26;
  SimplifiedOperatorBuilder *pSVar27;
  Node *local_c0;
  Node *pNStack_b8;
  Node *local_b0;
  Node *pNStack_a8;
  Node *local_a0;
  Node *pNStack_98;
  Node *local_90;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar4 = MapRef::NextFreePropertyIndex((MapRef *)param_1);
  iVar5 = MapRef::GetInObjectProperties((MapRef *)param_1);
  this_00 = *(Zone **)(this + 0x40);
  uVar2 = iVar4 - iVar5;
  iVar4 = uVar2 + 3;
  if (iVar4 == 0) {
    pAVar13 = (AccessBuilder *)0x0;
    pAVar23 = (AccessBuilder *)0x0;
    pAVar19 = (AccessBuilder *)0x0;
  }
  else {
    pAVar23 = *(AccessBuilder **)(this_00 + 0x10);
    uVar15 = (long)iVar4 * 8;
    if (uVar15 < (ulong)(*(long *)(this_00 + 0x18) - (long)pAVar23) ||
        uVar15 - (*(long *)(this_00 + 0x18) - (long)pAVar23) == 0) {
      *(AccessBuilder **)(this_00 + 0x10) = pAVar23 + uVar15;
    }
    else {
      pAVar23 = (AccessBuilder *)Zone::NewExpand(this_00,uVar15);
    }
    pAVar13 = pAVar23 + (long)iVar4 * 8;
    pAVar19 = pAVar23;
    if (0 < (int)uVar2) {
      uVar15 = 0;
      pAVar9 = pAVar23;
      do {
        pGVar24 = (Graph *)**(undefined8 **)(this + 0x10);
        pSVar27 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        AccessBuilder::ForFixedArraySlot((AccessBuilder *)&local_a0,uVar15,5);
        pOVar7 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar27,(FieldAccess *)&local_a0);
        local_c0 = param_2;
        pNStack_b8 = param_3;
        local_b0 = param_4;
        param_3 = (Node *)Graph::NewNode(pGVar24,pOVar7,3,&local_c0,false);
        if (pAVar23 == pAVar13) {
          lVar25 = (long)pAVar23 - (long)pAVar9 >> 3;
          uVar22 = lVar25 + 1;
          if (uVar22 >> 0x1c != 0) goto LAB_01751dd0;
          uVar21 = (long)pAVar13 - (long)pAVar9 >> 2;
          if (uVar22 <= uVar21) {
            uVar22 = uVar21;
          }
          if (0x7fffffe < (ulong)((long)pAVar13 - (long)pAVar9 >> 3)) {
            uVar22 = 0xfffffff;
          }
          if (uVar22 == 0) {
            lVar14 = 0;
          }
          else {
            uVar21 = uVar22 * 8;
            lVar14 = *(long *)(this_00 + 0x10);
            if (uVar21 < (ulong)(*(long *)(this_00 + 0x18) - lVar14) ||
                uVar21 - (*(long *)(this_00 + 0x18) - lVar14) == 0) {
              *(ulong *)(this_00 + 0x10) = lVar14 + uVar21;
            }
            else {
              lVar14 = Zone::NewExpand(this_00,uVar21);
            }
          }
          pAVar26 = (AccessBuilder *)(lVar14 + lVar25 * 8);
          pAVar13 = (AccessBuilder *)(lVar14 + uVar22 * 8);
          *(Node **)pAVar26 = param_3;
          pAVar19 = pAVar26;
          while (pAVar23 != pAVar9) {
            pAVar23 = pAVar23 + -8;
            pAVar19 = pAVar19 + -8;
            *(undefined8 *)pAVar19 = *(undefined8 *)pAVar23;
          }
        }
        else {
          *(Node **)pAVar23 = param_3;
          pAVar26 = pAVar23;
          pAVar19 = pAVar9;
        }
        uVar15 = uVar15 + 1;
        pAVar23 = pAVar26 + 8;
        pAVar9 = pAVar19;
      } while (uVar15 != uVar2);
    }
  }
  uVar8 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  if (pAVar23 < pAVar13) {
    *(undefined8 *)pAVar23 = uVar8;
    pAVar9 = pAVar23;
    pAVar26 = pAVar19;
  }
  else {
    lVar25 = (long)pAVar23 - (long)pAVar19 >> 3;
    uVar15 = lVar25 + 1;
    if (uVar15 >> 0x1c != 0) goto LAB_01751dd0;
    uVar22 = (long)pAVar13 - (long)pAVar19 >> 2;
    if (uVar15 <= uVar22) {
      uVar15 = uVar22;
    }
    if (0x7fffffe < (ulong)((long)pAVar13 - (long)pAVar19 >> 3)) {
      uVar15 = 0xfffffff;
    }
    if (uVar15 == 0) {
      lVar14 = 0;
    }
    else {
      uVar22 = uVar15 * 8;
      lVar14 = *(long *)(this_00 + 0x10);
      if (uVar22 < (ulong)(*(long *)(this_00 + 0x18) - lVar14) ||
          uVar22 - (*(long *)(this_00 + 0x18) - lVar14) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar14 + uVar22;
      }
      else {
        lVar14 = Zone::NewExpand(this_00,uVar22);
      }
    }
    pAVar9 = (AccessBuilder *)(lVar14 + lVar25 * 8);
    pAVar13 = (AccessBuilder *)(lVar14 + uVar15 * 8);
    *(undefined8 *)pAVar9 = uVar8;
    pAVar26 = pAVar9;
    while (pAVar23 != pAVar19) {
      pAVar23 = pAVar23 + -8;
      pAVar26 = pAVar26 + -8;
      *(undefined8 *)pAVar26 = *(undefined8 *)pAVar23;
    }
  }
  pAVar23 = pAVar9 + 8;
  uVar8 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  if (pAVar23 < pAVar13) {
    *(undefined8 *)pAVar23 = uVar8;
    pAVar19 = pAVar23;
    pAVar16 = pAVar26;
  }
  else {
    lVar25 = (long)pAVar23 - (long)pAVar26 >> 3;
    uVar15 = lVar25 + 1;
    if (uVar15 >> 0x1c != 0) goto LAB_01751dd0;
    uVar22 = (long)pAVar13 - (long)pAVar26 >> 2;
    if (uVar15 <= uVar22) {
      uVar15 = uVar22;
    }
    if (0x7fffffe < (ulong)((long)pAVar13 - (long)pAVar26 >> 3)) {
      uVar15 = 0xfffffff;
    }
    if (uVar15 == 0) {
      lVar14 = 0;
    }
    else {
      uVar22 = uVar15 * 8;
      lVar14 = *(long *)(this_00 + 0x10);
      if (uVar22 < (ulong)(*(long *)(this_00 + 0x18) - lVar14) ||
          uVar22 - (*(long *)(this_00 + 0x18) - lVar14) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar14 + uVar22;
      }
      else {
        lVar14 = Zone::NewExpand(this_00,uVar22);
      }
    }
    pAVar19 = (AccessBuilder *)(lVar14 + lVar25 * 8);
    pAVar13 = (AccessBuilder *)(lVar14 + uVar15 * 8);
    *(undefined8 *)pAVar19 = uVar8;
    pAVar16 = pAVar19;
    if (pAVar23 != pAVar26) {
      do {
        pAVar23 = pAVar9 + -8;
        pAVar16 = pAVar16 + -8;
        *(undefined8 *)pAVar16 = *(undefined8 *)pAVar9;
        pAVar9 = pAVar23;
      } while (pAVar26 + -8 != pAVar23);
    }
  }
  pAVar23 = pAVar19 + 8;
  pAVar9 = (AccessBuilder *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  if (pAVar23 < pAVar13) {
    *(AccessBuilder **)pAVar23 = pAVar9;
    pAVar13 = pAVar9;
    pAVar26 = pAVar16;
  }
  else {
    lVar25 = (long)pAVar23 - (long)pAVar16 >> 3;
    uVar15 = lVar25 + 1;
    if (uVar15 >> 0x1c != 0) {
LAB_01751dd0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar22 = (long)pAVar13 - (long)pAVar16 >> 2;
    if (uVar15 <= uVar22) {
      uVar15 = uVar22;
    }
    if (0x7fffffe < (ulong)((long)pAVar13 - (long)pAVar16 >> 3)) {
      uVar15 = 0xfffffff;
    }
    if (uVar15 == 0) {
      pAVar13 = (AccessBuilder *)0x0;
    }
    else {
      uVar15 = uVar15 * 8;
      pAVar13 = *(AccessBuilder **)(this_00 + 0x10);
      if (uVar15 < (ulong)(*(long *)(this_00 + 0x18) - (long)pAVar13) ||
          uVar15 - (*(long *)(this_00 + 0x18) - (long)pAVar13) == 0) {
        *(AccessBuilder **)(this_00 + 0x10) = pAVar13 + uVar15;
      }
      else {
        pAVar13 = (AccessBuilder *)Zone::NewExpand(this_00,uVar15);
      }
    }
    pAVar26 = pAVar13 + lVar25 * 8;
    *(AccessBuilder **)pAVar26 = pAVar9;
    if (pAVar23 != pAVar16) {
      do {
        pAVar23 = pAVar19 + -8;
        pAVar26 = pAVar26 + -8;
        *(undefined8 *)pAVar26 = *(undefined8 *)pAVar19;
        pAVar19 = pAVar23;
      } while (pAVar16 + -8 != pAVar23);
    }
  }
  puVar17 = *(undefined8 **)(this + 0x10);
  pGVar24 = (Graph *)*puVar17;
  if (uVar2 == 0) {
    pOVar7 = (Operator *)CommonOperatorBuilder::Select((CommonOperatorBuilder *)puVar17[1],6,0);
    this_01 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::ObjectIsSmi
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_a0 = param_2;
    pNVar10 = (Node *)Graph::NewNode(this_01,pOVar11,1,&local_a0,false);
    local_90 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),0.0);
    local_a0 = pNVar10;
    pNStack_98 = param_2;
    pNVar10 = (Node *)Graph::NewNode(pGVar24,pOVar7,3,&local_a0,false);
    pGVar24 = (Graph *)**(undefined8 **)(this + 0x10);
    pCVar1 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
    uVar6 = BitsetType::SignedSmall();
    pOVar7 = (Operator *)CommonOperatorBuilder::TypeGuard(pCVar1,uVar6 | 1);
    local_a0 = pNVar10;
    pNStack_98 = param_3;
    local_90 = param_4;
    pNVar10 = (Node *)Graph::NewNode(pGVar24,pOVar7,3,&local_a0,false);
    pGVar24 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::NumberShiftLeft
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    pJVar18 = *(JSGraph **)(this + 0x10);
    dVar20 = 10.0;
  }
  else {
    pSVar27 = (SimplifiedOperatorBuilder *)puVar17[0x2f];
    AccessBuilder::ForPropertyArrayLengthAndHash(pAVar13);
    pOVar7 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar27,(FieldAccess *)&local_a0);
    local_c0 = param_2;
    pNStack_b8 = param_3;
    local_b0 = param_4;
    pNVar10 = (Node *)Graph::NewNode(pGVar24,pOVar7,3,&local_c0,false);
    pGVar24 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::NumberBitwiseAnd
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    pJVar18 = *(JSGraph **)(this + 0x10);
    dVar20 = 1073740800.0;
  }
  pNStack_98 = (Node *)JSGraph::Constant(pJVar18,dVar20);
  local_a0 = pNVar10;
  uVar8 = Graph::NewNode(pGVar24,pOVar7,2,&local_a0,false);
  pGVar24 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::NumberBitwiseOr
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  local_a0 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)iVar4);
  pNStack_98 = (Node *)uVar8;
  pNVar12 = (Node *)Graph::NewNode(pGVar24,pOVar7,2,&local_a0,false);
  pGVar24 = (Graph *)**(undefined8 **)(this + 0x10);
  pCVar1 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
  uVar6 = BitsetType::SignedSmall();
  pOVar7 = (Operator *)CommonOperatorBuilder::TypeGuard(pCVar1,uVar6 | 1);
  local_a0 = pNVar12;
  pNStack_98 = pNVar10;
  local_90 = param_4;
  pNVar10 = (Node *)Graph::NewNode(pGVar24,pOVar7,3,&local_a0,false);
  pJVar18 = *(JSGraph **)(this + 0x10);
  pGVar24 = *(Graph **)pJVar18;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar18 + 8),1);
  local_a0 = pNVar10;
  uVar8 = Graph::NewNode(pGVar24,pOVar7,1,&local_a0,false);
  pGVar24 = *(Graph **)pJVar18;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::Allocate
                     (*(SimplifiedOperatorBuilder **)(pJVar18 + 0x178),0x1000001,0);
  local_a0 = (Node *)JSGraph::Constant(pJVar18,(double)(iVar4 * 4 + 8));
  pNStack_98 = (Node *)uVar8;
  local_90 = param_4;
  pAVar23 = (AccessBuilder *)Graph::NewNode(pGVar24,pOVar7,3,&local_a0,false);
  AccessBuilder::ForMap(pAVar23);
  uVar8 = JSGraph::PropertyArrayMapConstant(*(JSGraph **)(this + 0x10));
  pGVar24 = *(Graph **)pJVar18;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar18 + 0x178),(FieldAccess *)&local_a0);
  local_c0 = (Node *)pAVar23;
  pNStack_b8 = (Node *)uVar8;
  local_b0 = (Node *)pAVar23;
  pNStack_a8 = param_4;
  pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar24,pOVar7,4,&local_c0,false);
  AccessBuilder::ForPropertyArrayLengthAndHash(pAVar13);
  pGVar24 = *(Graph **)pJVar18;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar18 + 0x178),(FieldAccess *)&local_a0);
  local_c0 = (Node *)pAVar23;
  pNStack_b8 = pNVar10;
  local_b0 = (Node *)pAVar13;
  pNStack_a8 = param_4;
  pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar24,pOVar7,4,&local_c0,false);
  if (0 < iVar4) {
    uVar15 = 0;
    do {
      AccessBuilder::ForFixedArraySlot((AccessBuilder *)&local_a0,uVar15,5);
      pNVar10 = *(Node **)(pAVar26 + uVar15 * 8);
      pGVar24 = *(Graph **)pJVar18;
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(pJVar18 + 0x178),(FieldAccess *)&local_a0)
      ;
      local_c0 = (Node *)pAVar23;
      pNStack_b8 = pNVar10;
      local_b0 = (Node *)pAVar13;
      pNStack_a8 = param_4;
      pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar24,pOVar7,4,&local_c0,false);
      uVar15 = uVar15 + 1;
    } while (uVar2 + 3 != uVar15);
  }
  pGVar24 = *(Graph **)pJVar18;
  pOVar7 = (Operator *)CommonOperatorBuilder::FinishRegion(*(CommonOperatorBuilder **)(pJVar18 + 8))
  ;
  local_a0 = (Node *)pAVar23;
  pNStack_98 = (Node *)pAVar13;
  Graph::NewNode(pGVar24,pOVar7,2,&local_a0,false);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

