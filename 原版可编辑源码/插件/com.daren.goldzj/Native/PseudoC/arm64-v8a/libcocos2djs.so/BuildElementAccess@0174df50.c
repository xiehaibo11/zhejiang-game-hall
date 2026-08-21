
/* v8::internal::compiler::JSNativeContextSpecialization::BuildElementAccess(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::ElementAccessInfo const&,
   v8::internal::compiler::KeyedAccessMode const&) */

void v8::internal::compiler::JSNativeContextSpecialization::BuildElementAccess
               (Node *param_1,Node *param_2,Node *param_3,Node *param_4,Node *param_5,
               ElementAccessInfo *param_6,KeyedAccessMode *param_7)

{
  undefined8 *puVar1;
  KeyedAccessMode KVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  AccessBuilder *pAVar10;
  ulong uVar11;
  long lVar12;
  AccessBuilder *pAVar13;
  AccessBuilder *pAVar14;
  AccessBuilder *pAVar15;
  Operator *pOVar16;
  undefined8 uVar17;
  Node *pNVar18;
  Operator *pOVar19;
  AccessBuilder *pAVar20;
  ElementAccessInfo *pEVar21;
  Node *pNVar22;
  KeyedAccessMode *in_x7;
  ulong *in_x8;
  undefined8 *puVar23;
  JSGraph *pJVar24;
  Graph *pGVar25;
  ZoneVector *pZVar26;
  MachineGraph *this;
  Node *pNVar27;
  SimplifiedOperatorBuilder *pSVar28;
  Graph *this_00;
  uint uVar29;
  AccessBuilder *local_120;
  AccessBuilder *local_118;
  AccessBuilder *local_108;
  AccessBuilder *local_f0;
  int local_e4;
  ElementAccess local_e0 [4];
  undefined4 local_dc;
  ulong local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined4 local_cc;
  Node *local_c8;
  Node *local_c0;
  ElementAccessInfo *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  AccessBuilder *local_98;
  AccessBuilder *local_90;
  AccessBuilder *local_88;
  AccessBuilder *local_80;
  ElementAccessInfo *pEStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pZVar26 = (ZoneVector *)(param_7 + 8);
  KVar2 = *param_7;
  uVar29 = (uint)(byte)KVar2;
  uVar9 = uVar29 - 0x11;
  if (10 < uVar9) {
    pNVar27 = param_1 + 0x10;
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pSVar28 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f];
    AccessBuilder::ForJSObjectElements((AccessBuilder *)param_1);
    pOVar19 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar28,(FieldAccess *)local_a8);
    local_c8 = param_2;
    local_c0 = param_5;
    local_b8 = param_6;
    pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,&local_c8,false);
    pAVar20 = (AccessBuilder *)KeyedAccessMode::access_mode(in_x7);
    pAVar13 = pAVar10;
    if ((((byte)KVar2 < 4) && ((int)pAVar20 == 1)) &&
       (pAVar20 = (AccessBuilder *)KeyedAccessMode::store_mode(in_x7), ((uint)pAVar20 | 2) != 3)) {
      puVar23 = *(undefined8 **)pNVar27;
      pGVar25 = (Graph *)*puVar23;
      local_c8 = (Node *)0x0;
      local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
      pOVar19 = (Operator *)
                SimplifiedOperatorBuilder::CheckMaps
                          ((SimplifiedOperatorBuilder *)puVar23[0x2f],0,puVar23[0x2d] + 0xe0,
                           &local_c8);
      local_a8._0_8_ = pAVar10;
      local_a8._8_8_ = pAVar10;
      local_98 = (AccessBuilder *)param_6;
      pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
      pAVar13 = pAVar20;
    }
    puVar23 = *(undefined8 **)(param_7 + 8);
    puVar1 = *(undefined8 **)(param_7 + 0x10);
    if (puVar23 != puVar1) {
      uVar17 = *(undefined8 *)(param_1 + 0x18);
      do {
        ObjectRef::ObjectRef((ObjectRef *)local_a8,uVar17,*puVar23,0);
        uVar11 = ObjectRef::IsMap((ObjectRef *)local_a8);
        if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        pAVar20 = (AccessBuilder *)MapRef::IsJSArrayMap((MapRef *)local_a8);
        if (((ulong)pAVar20 & 1) == 0) {
          bVar5 = false;
          goto LAB_0174e278;
        }
        puVar23 = puVar23 + 1;
      } while (puVar1 != puVar23);
    }
    bVar5 = true;
LAB_0174e278:
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pSVar28 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f];
    if (bVar5) {
      AccessBuilder::ForJSArrayLength((AccessBuilder *)local_a8,uVar29);
      pOVar19 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar28,(FieldAccess *)local_a8);
      local_c8 = param_2;
    }
    else {
      AccessBuilder::ForFixedArrayLength(pAVar20);
      pOVar19 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar28,(FieldAccess *)local_a8);
      local_c8 = (Node *)pAVar10;
    }
    local_c0 = (Node *)pAVar13;
    local_b8 = param_6;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,&local_c8,false);
    uVar11 = KeyedAccessMode::IsStore(in_x7);
    if (((uVar11 & 1) == 0) ||
       (iVar7 = KeyedAccessMode::store_mode(in_x7), pAVar20 = pAVar13,
       local_f0 = (AccessBuilder *)param_3, iVar7 != 1)) {
      uVar11 = KeyedAccessMode::IsLoad(in_x7);
      if (((uVar11 & 1) == 0) ||
         ((iVar7 = KeyedAccessMode::load_mode(in_x7), iVar7 != 1 ||
          (uVar11 = CanTreatHoleAsUndefined((JSNativeContextSpecialization *)param_1,pZVar26),
          (uVar11 & 1) == 0)))) {
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        local_c8 = (Node *)0x0;
        local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::CheckBounds
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],
                             (FeedbackSource *)&local_c8);
        local_a8._8_8_ = pAVar13;
      }
      else {
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        local_c8 = (Node *)0x0;
        local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::CheckBounds
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],
                             (FeedbackSource *)&local_c8);
        local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pNVar27,1073741823.0);
      }
      local_a8._0_8_ = param_3;
      local_98 = pAVar13;
      local_90 = (AccessBuilder *)param_6;
      local_f0 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,(Node **)local_a8,false);
      pAVar20 = local_f0;
    }
    uVar9 = uVar29 & 0xfe;
    if (uVar9 == 4) {
      local_d0 = 0x60c;
      uVar11 = 0x1c5f;
    }
    else if (uVar29 < 2) {
      uVar6 = BitsetType::SignedSmall();
      uVar11 = (ulong)(uVar6 | 1);
      local_d0 = 0x206;
    }
    else {
      local_d0 = 0x708;
      uVar11 = 0xc7f7fff;
    }
    local_e0[0] = (ElementAccess)0x1;
    local_dc = 8;
    local_ce = 5;
    local_cc = 0;
    local_d8 = uVar11;
    iVar7 = KeyedAccessMode::access_mode(in_x7);
    if (iVar7 == 0) {
      if ((uVar29 < 6) && (((byte)KVar2 & 1) != 0)) {
        local_d8 = Type::Union(uVar11,0x800001,*(undefined8 *)**(undefined8 **)pNVar27);
      }
      if ((uVar29 | 2) == 3) {
        local_d0 = 0x708;
      }
      iVar7 = KeyedAccessMode::load_mode(in_x7);
      if ((iVar7 == 1) &&
         (uVar11 = CanTreatHoleAsUndefined((JSNativeContextSpecialization *)param_1,pZVar26),
         (uVar11 & 1) != 0)) {
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::NumberLessThan
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
        local_a8._0_8_ = local_f0;
        local_a8._8_8_ = pAVar13;
        pNVar18 = (Node *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],1,0);
        local_a8._0_8_ = pNVar18;
        local_a8._8_8_ = param_6;
        pNVar18 = (Node *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1]);
        local_a8._0_8_ = pNVar18;
        pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::LoadElement
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],local_e0);
        local_a8._8_8_ = local_f0;
        local_a8._0_8_ = pAVar10;
        local_98 = pAVar20;
        local_90 = pAVar13;
        pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,(Node **)local_a8,false);
        if (uVar29 == 1) {
LAB_0174e7b4:
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pOVar19 = (Operator *)
                    SimplifiedOperatorBuilder::ConvertTaggedHoleToUndefined
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
          local_a8._0_8_ = pAVar10;
          pAVar14 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
        }
        else if (uVar29 == 5) {
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          local_c8 = (Node *)0x0;
          local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
          pOVar19 = (Operator *)
                    SimplifiedOperatorBuilder::CheckFloat64Hole
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],1,
                               &local_c8);
          local_a8._0_8_ = pAVar10;
          local_a8._8_8_ = pAVar10;
          local_98 = pAVar13;
          pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
          pAVar14 = pAVar10;
        }
        else {
          pAVar14 = pAVar10;
          if (uVar29 == 3) goto LAB_0174e7b4;
        }
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1]);
        local_a8._0_8_ = pNVar18;
        uVar17 = Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
        pAVar15 = (AccessBuilder *)JSGraph::UndefinedConstant(*(JSGraph **)pNVar27);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::Merge
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],2);
        local_a8._0_8_ = pAVar13;
        local_a8._8_8_ = uVar17;
        param_6 = (ElementAccessInfo *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::EffectPhi
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],2);
        local_a8._0_8_ = pAVar10;
        local_a8._8_8_ = pAVar20;
        local_98 = (AccessBuilder *)param_6;
        pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::Phi
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],8,2);
        local_a8._0_8_ = pAVar14;
        local_a8._8_8_ = pAVar15;
        local_98 = (AccessBuilder *)param_6;
        param_4 = (Node *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
        goto switchD_0174eba0_default;
      }
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                SimplifiedOperatorBuilder::LoadElement
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],local_e0);
      local_a8._8_8_ = local_f0;
      local_a8._0_8_ = pAVar10;
      local_98 = pAVar20;
      local_90 = (AccessBuilder *)param_6;
      pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,(Node **)local_a8,false);
      if (uVar29 == 1) {
LAB_0174e8a0:
        uVar11 = CanTreatHoleAsUndefined((JSNativeContextSpecialization *)param_1,pZVar26);
        pGVar25 = (Graph *)**(undefined8 **)(param_1 + 0x10);
        pSVar28 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f];
        if ((uVar11 & 1) != 0) {
          pOVar19 = (Operator *)SimplifiedOperatorBuilder::ConvertTaggedHoleToUndefined(pSVar28);
          local_a8._0_8_ = pAVar20;
          param_4 = (Node *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
          goto switchD_0174eba0_default;
        }
        pOVar19 = (Operator *)SimplifiedOperatorBuilder::CheckNotTaggedHole(pSVar28);
      }
      else {
        if (uVar29 != 5) {
          param_4 = (Node *)pAVar20;
          if (uVar29 != 3) goto switchD_0174eba0_default;
          goto LAB_0174e8a0;
        }
        uVar9 = CanTreatHoleAsUndefined((JSNativeContextSpecialization *)param_1,pZVar26);
        pGVar25 = (Graph *)**(undefined8 **)(param_1 + 0x10);
        local_c8 = (Node *)0x0;
        local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::CheckFloat64Hole
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                             uVar9 & 1,&local_c8);
      }
      local_a8._0_8_ = pAVar20;
      local_a8._8_8_ = pAVar20;
      local_98 = (AccessBuilder *)param_6;
      pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
      param_4 = (Node *)pAVar20;
      goto switchD_0174eba0_default;
    }
    iVar7 = KeyedAccessMode::access_mode(in_x7);
    if (iVar7 == 3) {
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                SimplifiedOperatorBuilder::SpeculativeNumberLessThan
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],0);
      local_a8._0_8_ = local_f0;
      local_a8._8_8_ = pAVar13;
      local_98 = pAVar20;
      local_90 = (AccessBuilder *)param_6;
      pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,(Node **)local_a8,false);
      param_4 = (Node *)pAVar20;
      if ((uVar29 < 6) && (((byte)KVar2 & 1) != 0)) {
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],0,1);
        local_a8._0_8_ = pAVar20;
        local_a8._8_8_ = param_6;
        pNVar18 = (Node *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1]);
        local_a8._0_8_ = pNVar18;
        uVar17 = Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
        pAVar14 = (AccessBuilder *)JSGraph::FalseConstant(*(JSGraph **)pNVar27);
        local_d8 = Type::Union(uVar11,0x800001,*(undefined8 *)**(undefined8 **)pNVar27);
        if ((uVar29 | 2) == 3) {
          local_d0 = 0x708;
        }
        pGVar25 = (Graph *)**(undefined8 **)(param_1 + 0x10);
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1]);
        local_a8._0_8_ = pNVar18;
        pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)(param_1 + 0x10);
        local_c8 = (Node *)0x0;
        local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::CheckBounds
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                             (FeedbackSource *)&local_c8);
        local_a8._0_8_ = local_f0;
        local_a8._8_8_ = pAVar13;
        local_98 = pAVar20;
        local_90 = pAVar15;
        pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)(param_1 + 0x10);
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::LoadElement
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                             local_e0);
        local_a8._0_8_ = pAVar10;
        local_a8._8_8_ = pAVar13;
        local_98 = pAVar13;
        local_90 = pAVar15;
        pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,(Node **)local_a8,false);
        uVar11 = CanTreatHoleAsUndefined((JSNativeContextSpecialization *)param_1,pZVar26);
        bVar5 = (uVar29 | 2) != 3;
        if ((uVar11 & 1) == 0) {
          if (bVar5) {
            pGVar25 = (Graph *)**(undefined8 **)pNVar27;
            local_c8 = (Node *)0x0;
            local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
            pOVar19 = (Operator *)
                      SimplifiedOperatorBuilder::CheckFloat64Hole
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],0,
                                 &local_c8);
          }
          else {
            pGVar25 = (Graph *)**(undefined8 **)pNVar27;
            pOVar19 = (Operator *)
                      SimplifiedOperatorBuilder::CheckNotTaggedHole
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
          }
          local_a8._0_8_ = pAVar10;
          local_a8._8_8_ = pAVar10;
          local_98 = pAVar15;
          pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
          pAVar13 = (AccessBuilder *)JSGraph::TrueConstant(*(JSGraph **)pNVar27);
        }
        else {
          if (bVar5) {
            pGVar25 = (Graph *)**(undefined8 **)pNVar27;
            pOVar19 = (Operator *)
                      SimplifiedOperatorBuilder::NumberIsFloat64Hole
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
            iVar7 = 1;
          }
          else {
            pGVar25 = (Graph *)**(undefined8 **)pNVar27;
            pOVar19 = (Operator *)
                      SimplifiedOperatorBuilder::ReferenceEqual
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
            local_a8._8_8_ = JSGraph::TheHoleConstant(*(JSGraph **)pNVar27);
            iVar7 = 2;
          }
          local_a8._0_8_ = pAVar10;
          pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,iVar7,(Node **)local_a8,false);
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pOVar19 = (Operator *)
                    SimplifiedOperatorBuilder::BooleanNot
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
          local_a8._0_8_ = pAVar13;
          pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
        }
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::Merge
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],2);
        local_a8._0_8_ = pAVar15;
        local_a8._8_8_ = uVar17;
        param_6 = (ElementAccessInfo *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::EffectPhi
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],2);
        local_a8._0_8_ = pAVar10;
        local_a8._8_8_ = pAVar20;
        local_98 = (AccessBuilder *)param_6;
        pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  CommonOperatorBuilder::Phi
                            ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],8,2);
        local_a8._0_8_ = pAVar13;
        local_a8._8_8_ = pAVar14;
        local_98 = (AccessBuilder *)param_6;
        param_4 = (Node *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
      }
      goto switchD_0174eba0_default;
    }
    if (uVar29 < 2) {
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      local_c8 = (Node *)0x0;
      local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
      pOVar19 = (Operator *)
                SimplifiedOperatorBuilder::CheckSmi
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],
                           (FeedbackSource *)&local_c8);
      local_a8._0_8_ = param_4;
      local_a8._8_8_ = pAVar20;
      local_98 = (AccessBuilder *)param_6;
      pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
      param_4 = (Node *)pAVar20;
LAB_0174f06c:
      iVar7 = KeyedAccessMode::store_mode(in_x7);
      if (iVar7 != 3) {
        bVar4 = true;
        goto LAB_0174f174;
      }
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                SimplifiedOperatorBuilder::EnsureWritableFastElements
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
      local_a8._0_8_ = param_2;
      local_a8._8_8_ = pAVar10;
      local_98 = pAVar20;
      local_90 = (AccessBuilder *)param_6;
      pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,(Node **)local_a8,false);
      pAVar20 = pAVar10;
    }
    else {
      if (uVar9 == 4) {
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        local_c8 = (Node *)0x0;
        local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::CheckNumber
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],
                             (FeedbackSource *)&local_c8);
        local_a8._0_8_ = param_4;
        local_a8._8_8_ = pAVar20;
        local_98 = (AccessBuilder *)param_6;
        pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::NumberSilenceNaN
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
        local_a8._0_8_ = pAVar20;
        param_4 = (Node *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
      }
      if (uVar29 < 4) goto LAB_0174f06c;
      bVar4 = false;
LAB_0174f174:
      pAVar14 = (AccessBuilder *)KeyedAccessMode::store_mode(in_x7);
      if ((int)pAVar14 == 1) {
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pSVar28 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f];
        AccessBuilder::ForFixedArrayLength(pAVar14);
        pOVar19 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar28,(FieldAccess *)local_a8);
        local_c8 = (Node *)pAVar10;
        local_c0 = (Node *)pAVar20;
        local_b8 = param_6;
        pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,&local_c8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::NumberAdd
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
        if ((uVar29 < 6) && (((byte)KVar2 & 1) != 0)) {
          local_a8._8_8_ = JSGraph::Constant(*(JSGraph **)pNVar27,1024.0);
          local_a8._0_8_ = pAVar20;
          uVar17 = Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
        }
        else {
          local_a8._8_8_ = JSGraph::OneConstant(*(JSGraph **)pNVar27);
          local_a8._0_8_ = pAVar13;
          uVar17 = Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
        }
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        local_c8 = (Node *)0x0;
        local_c0._0_4_ = 0xffffffff;
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::CheckBounds
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],
                             (FeedbackSource *)&local_c8);
        local_a8._0_8_ = local_f0;
        local_a8._8_8_ = uVar17;
        local_98 = pAVar20;
        local_90 = (AccessBuilder *)param_6;
        local_f0 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,(Node **)local_a8,false);
        pGVar25 = (Graph *)**(undefined8 **)pNVar27;
        local_c8 = (Node *)0x0;
        local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
        pOVar19 = (Operator *)
                  SimplifiedOperatorBuilder::MaybeGrowFastElements
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],uVar9 != 4
                             ,&local_c8);
        local_a8._0_8_ = param_2;
        local_a8._8_8_ = pAVar10;
        local_98 = local_f0;
        local_90 = pAVar20;
        local_88 = local_f0;
        local_80 = (AccessBuilder *)param_6;
        pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,6,(Node **)local_a8,false);
        if ((bVar4) && (iVar7 = KeyedAccessMode::store_mode(in_x7), iVar7 == 1)) {
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pOVar19 = (Operator *)
                    SimplifiedOperatorBuilder::EnsureWritableFastElements
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
          local_a8._0_8_ = param_2;
          local_a8._8_8_ = pAVar10;
          local_98 = pAVar10;
          local_90 = (AccessBuilder *)param_6;
          pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,(Node **)local_a8,false);
        }
        pAVar20 = pAVar10;
        if (bVar5) {
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pOVar19 = (Operator *)
                    SimplifiedOperatorBuilder::NumberLessThan
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
          local_a8._0_8_ = local_f0;
          local_a8._8_8_ = pAVar13;
          pNVar18 = (Node *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pOVar19 = (Operator *)
                    CommonOperatorBuilder::Branch
                              ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],0,1);
          local_a8._0_8_ = pNVar18;
          local_a8._8_8_ = param_6;
          pNVar18 = (Node *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pOVar19 = (Operator *)
                    CommonOperatorBuilder::IfTrue
                              ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1]);
          local_a8._0_8_ = pNVar18;
          pNVar22 = (Node *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pOVar19 = (Operator *)
                    CommonOperatorBuilder::IfFalse
                              ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1]);
          local_a8._0_8_ = pNVar18;
          uVar17 = Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pOVar19 = (Operator *)
                    SimplifiedOperatorBuilder::NumberAdd
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
          local_a8._8_8_ = JSGraph::OneConstant(*(JSGraph **)pNVar27);
          local_a8._0_8_ = local_f0;
          pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pSVar28 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f];
          AccessBuilder::ForJSArrayLength((AccessBuilder *)local_a8,uVar29);
          pOVar19 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField(pSVar28,(FieldAccess *)local_a8);
          local_c8 = param_2;
          local_c0 = (Node *)pAVar13;
          local_b8 = (ElementAccessInfo *)pAVar10;
          uStack_b0 = uVar17;
          pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,&local_c8,false);
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pOVar19 = (Operator *)
                    CommonOperatorBuilder::Merge
                              ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],2);
          local_a8._0_8_ = pNVar22;
          local_a8._8_8_ = uVar17;
          param_6 = (ElementAccessInfo *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
          pGVar25 = (Graph *)**(undefined8 **)pNVar27;
          pOVar19 = (Operator *)
                    CommonOperatorBuilder::EffectPhi
                              ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],2);
          local_a8._0_8_ = pAVar10;
          local_a8._8_8_ = pAVar13;
          local_98 = (AccessBuilder *)param_6;
          pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
        }
      }
    }
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pOVar19 = (Operator *)
              SimplifiedOperatorBuilder::StoreElement
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],local_e0);
    local_a8._8_8_ = local_f0;
    local_a8._0_8_ = pAVar10;
    local_98 = (AccessBuilder *)param_4;
    local_90 = pAVar20;
    local_88 = (AccessBuilder *)param_6;
    pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,5,(Node **)local_a8,false);
    goto switchD_0174eba0_default;
  }
  pAVar10 = (AccessBuilder *)FUN_0174dd70(local_e0,*(undefined8 *)(param_1 + 0x18),param_2);
  pNVar27 = param_1 + 0x10;
  pJVar24 = *(JSGraph **)pNVar27;
  if (local_e0[0] == (ElementAccess)0x0) {
    pGVar25 = *(Graph **)pJVar24;
    pSVar28 = *(SimplifiedOperatorBuilder **)(pJVar24 + 0x178);
    AccessBuilder::ForJSTypedArrayLength(pAVar10);
    pOVar19 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar28,(FieldAccess *)local_a8);
    local_c8 = param_2;
    local_c0 = param_5;
    local_b8 = param_6;
    local_108 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,&local_c8,false);
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pSVar28 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f];
    AccessBuilder::ForJSTypedArrayBasePointer(local_108);
    pOVar19 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar28,(FieldAccess *)local_a8);
    local_c8 = param_2;
    local_c0 = (Node *)local_108;
    local_b8 = param_6;
    local_120 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,&local_c8,false);
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pSVar28 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f];
    AccessBuilder::ForJSTypedArrayExternalPointer(local_120);
    pOVar19 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar28,(FieldAccess *)local_a8);
    local_c8 = param_2;
    local_c0 = (Node *)local_120;
    local_b8 = param_6;
    pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,&local_c8,false);
    param_5 = (Node *)pAVar10;
  }
  else {
    uVar11 = JSTypedArrayRef::length((JSTypedArrayRef *)&local_d8);
    local_108 = (AccessBuilder *)JSGraph::Constant(pJVar24,(double)uVar11);
    local_120 = (AccessBuilder *)JSGraph::ZeroConstant(*(JSGraph **)pNVar27);
    this = *(MachineGraph **)pNVar27;
    lVar12 = JSTypedArrayRef::data_ptr((JSTypedArrayRef *)&local_d8);
    pAVar10 = (AccessBuilder *)MachineGraph::PointerConstant(this,lVar12);
  }
  pAVar13 = (AccessBuilder *)
            CompilationDependencies::DependOnArrayBufferDetachingProtector
                      (*(CompilationDependencies **)(param_1 + 0x38));
  local_118 = (AccessBuilder *)param_2;
  if (((ulong)pAVar13 & 1) == 0) {
    pJVar24 = *(JSGraph **)pNVar27;
    if (local_e0[0] == (ElementAccess)0x0) {
      pGVar25 = *(Graph **)pJVar24;
      pSVar28 = *(SimplifiedOperatorBuilder **)(pJVar24 + 0x178);
      AccessBuilder::ForJSArrayBufferViewBuffer(pAVar13);
      pOVar19 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar28,(FieldAccess *)local_a8);
      local_c8 = param_2;
      local_c0 = param_5;
      local_b8 = param_6;
      local_118 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,&local_c8,false);
      param_5 = (Node *)local_118;
    }
    else {
      local_a8 = JSTypedArrayRef::buffer((JSTypedArrayRef *)&local_d8);
      local_118 = (AccessBuilder *)JSGraph::Constant(pJVar24,(ObjectRef *)local_a8);
    }
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pSVar28 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f];
    AccessBuilder::ForJSArrayBufferBitField(local_118);
    pOVar19 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar28,(FieldAccess *)local_a8);
    local_c8 = (Node *)local_118;
    local_c0 = param_5;
    local_b8 = param_6;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,&local_c8,false);
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pOVar19 = (Operator *)
              SimplifiedOperatorBuilder::NumberEqual
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
    this_00 = (Graph *)**(undefined8 **)pNVar27;
    pOVar16 = (Operator *)
              SimplifiedOperatorBuilder::NumberBitwiseAnd
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
    uVar17 = JSGraph::Constant(*(JSGraph **)pNVar27,4.0);
    local_a8._0_8_ = pAVar13;
    local_a8._8_8_ = uVar17;
    pNVar18 = (Node *)Graph::NewNode(this_00,pOVar16,2,(Node **)local_a8,false);
    local_a8._8_8_ = JSGraph::ZeroConstant(*(JSGraph **)pNVar27);
    local_a8._0_8_ = pNVar18;
    pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    local_c8 = (Node *)0x0;
    local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
    pOVar19 = (Operator *)
              SimplifiedOperatorBuilder::CheckIf
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],0,&local_c8);
    local_a8._0_8_ = pAVar20;
    local_a8._8_8_ = pAVar13;
    local_98 = (AccessBuilder *)param_6;
    param_5 = (Node *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
  }
  uVar11 = KeyedAccessMode::IsLoad(in_x7);
  if ((((uVar11 & 1) == 0) || (iVar7 = KeyedAccessMode::load_mode(in_x7), iVar7 != 1)) &&
     ((uVar11 = KeyedAccessMode::IsStore(in_x7), (uVar11 & 1) == 0 ||
      (iVar7 = KeyedAccessMode::store_mode(in_x7), iVar7 != 2)))) {
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    local_c8 = (Node *)0x0;
    local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
    pOVar19 = (Operator *)
              SimplifiedOperatorBuilder::CheckBounds
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],
                         (FeedbackSource *)&local_c8);
    local_a8._8_8_ = local_108;
    local_a8._0_8_ = param_3;
    local_98 = (AccessBuilder *)param_5;
    local_90 = (AccessBuilder *)param_6;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,4,(Node **)local_a8,false);
    pAVar20 = pAVar13;
  }
  else {
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    local_c8 = (Node *)0x0;
    local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
    pOVar19 = (Operator *)
              SimplifiedOperatorBuilder::CheckSmi
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],
                         (FeedbackSource *)&local_c8);
    local_a8._0_8_ = param_3;
    local_a8._8_8_ = param_5;
    local_98 = (AccessBuilder *)param_6;
    pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pOVar19 = (Operator *)
              SimplifiedOperatorBuilder::NumberToUint32
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
    local_a8._0_8_ = pAVar20;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
  }
  if (10 < uVar9) {
switchD_0174eba0_caseD_2:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_e4 = *(int *)(&DAT_01a5edf0 + (long)(char)uVar9 * 4);
  uVar8 = KeyedAccessMode::access_mode(in_x7);
  switch(uVar8) {
  case 0:
    iVar7 = KeyedAccessMode::load_mode(in_x7);
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pSVar28 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f];
    local_88 = pAVar20;
    if (iVar7 == 1) {
      pOVar19 = (Operator *)SimplifiedOperatorBuilder::NumberLessThan(pSVar28);
      local_a8._8_8_ = local_108;
      local_a8._0_8_ = pAVar13;
      pNVar18 = (Node *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::Branch
                          ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],1,0);
      local_a8._0_8_ = pNVar18;
      local_a8._8_8_ = param_6;
      pNVar18 = (Node *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1])
      ;
      local_a8._0_8_ = pNVar18;
      pAVar14 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                SimplifiedOperatorBuilder::LoadTypedElement
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],
                           (ExternalArrayType *)&local_e4);
      local_a8._8_8_ = local_120;
      local_a8._0_8_ = local_118;
      local_98 = pAVar10;
      local_90 = pAVar13;
      local_80 = pAVar14;
      pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,6,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::IfFalse
                          ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1]);
      local_a8._0_8_ = pNVar18;
      uVar17 = Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
      pAVar13 = (AccessBuilder *)JSGraph::UndefinedConstant(*(JSGraph **)pNVar27);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::Merge
                          ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],2);
      local_a8._0_8_ = pAVar14;
      local_a8._8_8_ = uVar17;
      param_6 = (ElementAccessInfo *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::EffectPhi
                          ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],2);
      local_a8._0_8_ = pAVar10;
      local_a8._8_8_ = pAVar20;
      local_98 = (AccessBuilder *)param_6;
      pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::Phi
                          ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],8,2);
      local_a8._0_8_ = pAVar10;
      local_a8._8_8_ = pAVar13;
      local_98 = (AccessBuilder *)param_6;
      param_4 = (Node *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
      goto switchD_0174eba0_default;
    }
    pOVar19 = (Operator *)
              SimplifiedOperatorBuilder::LoadTypedElement(pSVar28,(ExternalArrayType *)&local_e4);
    local_a8._8_8_ = local_120;
    iVar7 = 6;
    local_a8._0_8_ = local_118;
    local_98 = pAVar10;
    local_90 = pAVar13;
    local_80 = (AccessBuilder *)param_6;
    break;
  case 1:
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    local_c8 = (Node *)0x0;
    local_c0 = (Node *)CONCAT44(local_c0._4_4_,0xffffffff);
    pOVar19 = (Operator *)
              SimplifiedOperatorBuilder::SpeculativeToNumber
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],4,&local_c8);
    local_a8._0_8_ = param_4;
    local_a8._8_8_ = pAVar20;
    local_98 = (AccessBuilder *)param_6;
    pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,3,(Node **)local_a8,false);
    param_4 = (Node *)pAVar20;
    if (local_e4 == 9) {
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                SimplifiedOperatorBuilder::NumberToUint8Clamped
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f]);
      local_a8._0_8_ = pAVar20;
      param_4 = (Node *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
    }
    iVar7 = KeyedAccessMode::store_mode(in_x7);
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pSVar28 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f];
    local_88 = (AccessBuilder *)param_4;
    local_80 = pAVar20;
    if (iVar7 == 2) {
      pOVar19 = (Operator *)SimplifiedOperatorBuilder::NumberLessThan(pSVar28);
      local_a8._8_8_ = local_108;
      local_a8._0_8_ = pAVar13;
      pNVar18 = (Node *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::Branch
                          ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],1,1);
      local_a8._0_8_ = pNVar18;
      local_a8._8_8_ = param_6;
      pNVar18 = (Node *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1])
      ;
      local_a8._0_8_ = pNVar18;
      pEVar21 = (ElementAccessInfo *)Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                SimplifiedOperatorBuilder::StoreTypedElement
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],
                           (ExternalArrayType *)&local_e4);
      local_a8._0_8_ = local_118;
      local_a8._8_8_ = local_120;
      local_98 = pAVar10;
      local_90 = pAVar13;
      pEStack_78 = pEVar21;
      pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,7,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::IfFalse
                          ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1]);
      local_a8._0_8_ = pNVar18;
      uVar17 = Graph::NewNode(pGVar25,pOVar19,1,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::Merge
                          ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],2);
      local_a8._0_8_ = pEVar21;
      local_a8._8_8_ = uVar17;
      param_6 = (ElementAccessInfo *)Graph::NewNode(pGVar25,pOVar19,2,(Node **)local_a8,false);
      pGVar25 = (Graph *)**(undefined8 **)pNVar27;
      pOVar19 = (Operator *)
                CommonOperatorBuilder::EffectPhi
                          ((CommonOperatorBuilder *)(*(undefined8 **)pNVar27)[1],2);
      iVar7 = 3;
      local_a8._0_8_ = pAVar10;
      local_a8._8_8_ = pAVar20;
      local_98 = (AccessBuilder *)param_6;
    }
    else {
      pOVar19 = (Operator *)
                SimplifiedOperatorBuilder::StoreTypedElement(pSVar28,(ExternalArrayType *)&local_e4)
      ;
      iVar7 = 7;
      local_a8._0_8_ = local_118;
      local_a8._8_8_ = local_120;
      local_98 = pAVar10;
      local_90 = pAVar13;
      pEStack_78 = param_6;
    }
    pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,iVar7,(Node **)local_a8,false);
    goto switchD_0174eba0_default;
  case 2:
    goto switchD_0174eba0_caseD_2;
  case 3:
    pGVar25 = (Graph *)**(undefined8 **)pNVar27;
    pOVar19 = (Operator *)
              SimplifiedOperatorBuilder::SpeculativeNumberLessThan
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pNVar27)[0x2f],0);
    iVar7 = 4;
    local_a8._8_8_ = local_108;
    local_a8._0_8_ = pAVar13;
    local_98 = pAVar20;
    local_90 = (AccessBuilder *)param_6;
    break;
  default:
    goto switchD_0174eba0_default;
  }
  pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar19,iVar7,(Node **)local_a8,false);
  param_4 = (Node *)pAVar20;
switchD_0174eba0_default:
  *in_x8 = (ulong)param_4;
  in_x8[1] = (ulong)pAVar20;
  in_x8[2] = (ulong)param_6;
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

