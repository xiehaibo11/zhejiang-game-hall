
/* v8::internal::compiler::JSCreateLowering::AllocateFastLiteral(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::JSObjectRef, v8::internal::AllocationType)
    */

void v8::internal::compiler::JSCreateLowering::AllocateFastLiteral
               (long param_1,Node *param_2,AccessBuilder *param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6)

{
  uint uVar1;
  long lVar2;
  unkbyte9 Var3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar9;
  uint uVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  Node *pNVar14;
  long lVar15;
  Operator *pOVar16;
  AccessBuilder *pAVar17;
  AccessBuilder *pAVar18;
  ulong uVar19;
  FieldAccess *pFVar20;
  ulong uVar21;
  ulong uVar22;
  FieldAccess *pFVar23;
  FieldAccess *pFVar24;
  undefined2 uVar25;
  Zone *this;
  Graph *pGVar26;
  JSGraph *pJVar27;
  long lVar28;
  FieldAccess *pFVar29;
  FieldAccess *pFVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  Node *local_160;
  undefined2 local_140;
  FieldAccess local_13e;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  MapRef local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  AccessBuilder *local_e0;
  AccessBuilder *pAStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  AccessBuilder *local_a8;
  AccessBuilder *pAStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  pAVar18 = param_3;
  local_100 = param_4;
  uStack_f8 = param_5;
  local_110 = (MapRef  [16])HeapObjectRef::map((HeapObjectRef *)&local_100);
  this = *(Zone **)(param_1 + 0x28);
  iVar7 = MapRef::GetInObjectProperties(local_110);
  if (iVar7 == 0) {
    pFVar23 = (FieldAccess *)0x0;
    pFVar24 = (FieldAccess *)0x0;
  }
  else {
    pFVar24 = *(FieldAccess **)(this + 0x10);
    uVar19 = (long)iVar7 * 0x40;
    if (uVar19 < (ulong)(*(long *)(this + 0x18) - (long)pFVar24) ||
        uVar19 - (*(long *)(this + 0x18) - (long)pFVar24) == 0) {
      *(FieldAccess **)(this + 0x10) = pFVar24 + uVar19;
    }
    else {
      pFVar24 = (FieldAccess *)Zone::NewExpand(this,uVar19);
    }
    pFVar23 = pFVar24 + (long)iVar7 * 0x40;
  }
  iVar7 = MapRef::NumberOfOwnDescriptors(local_110);
  pFVar29 = pFVar24;
  local_160 = param_2;
  if (iVar7 != 0) {
    lVar28 = 0;
    pFVar30 = pFVar24;
    do {
      uVar8 = MapRef::GetPropertyDetails(local_110,lVar28);
      pFVar29 = pFVar30;
      if ((uVar8 >> 1 & 1) == 0) {
        auVar36 = MapRef::GetPropertyKey(local_110,lVar28);
        local_120 = auVar36;
        uVar10 = MapRef::GetFieldIndexFor(local_110,lVar28);
        uVar11 = MapRef::object(local_110);
        uVar12 = NameRef::object((NameRef *)local_120);
        uVar19 = MapRef::IsUnboxedDoubleField(local_110,lVar28);
        if ((uVar19 & 1) == 0) {
          auVar36 = JSObjectRef::RawFastPropertyAt((JSObjectRef *)&local_100,uVar10);
          local_130 = auVar36;
          uVar19 = ObjectRef::IsHeapObject((ObjectRef *)local_130);
          if ((uVar19 & 1) == 0) {
            bVar5 = false;
            uVar32 = uVar11;
          }
          else {
            local_f0 = ObjectRef::AsHeapObject((ObjectRef *)local_130);
            auVar36 = HeapObjectRef::map((HeapObjectRef *)local_f0);
            local_b8 = auVar36;
            cVar6 = MapRef::oddball_type((MapRef *)local_b8);
            bVar5 = cVar6 == '\x05';
            uVar32 = 0;
            if (!bVar5) {
              uVar32 = uVar11;
            }
          }
          uVar19 = ObjectRef::IsJSObject((ObjectRef *)local_130);
          if ((uVar19 & 1) == 0) {
            uVar8 = uVar8 >> 6 & 7;
            if (uVar8 == 2) {
              auVar36 = ObjectRef::AsHeapNumber((ObjectRef *)local_130);
              local_b8 = auVar36;
              dVar13 = (double)HeapNumberRef::value((HeapNumberRef *)local_b8);
              pJVar27 = *(JSGraph **)(param_1 + 0x18);
              pGVar26 = *(Graph **)pJVar27;
              pOVar16 = (Operator *)
                        CommonOperatorBuilder::BeginRegion
                                  (*(CommonOperatorBuilder **)(pJVar27 + 8),1);
              local_b8._0_8_ = local_160;
              uVar11 = Graph::NewNode(pGVar26,pOVar16,1,(Node **)local_b8,false);
              pGVar26 = *(Graph **)pJVar27;
              pOVar16 = (Operator *)
                        SimplifiedOperatorBuilder::Allocate
                                  (*(SimplifiedOperatorBuilder **)(pJVar27 + 0x178),0xffffffff,
                                   param_6);
              local_b8._0_8_ = JSGraph::Constant(pJVar27,12.0);
              local_b8._8_8_ = uVar11;
              local_a8 = param_3;
              pAVar17 = (AccessBuilder *)Graph::NewNode(pGVar26,pOVar16,3,(Node **)local_b8,false);
              AccessBuilder::ForMap(pAVar17);
              ObjectRef::ObjectRef
                        ((ObjectRef *)&local_140,*(undefined8 *)(param_1 + 0x20),
                         *(long *)(*(long *)(param_1 + 0x18) + 0x168) + 0x140,0);
              uVar19 = ObjectRef::IsMap((ObjectRef *)&local_140);
              if ((uVar19 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","IsMap()");
              }
              uVar11 = JSGraph::Constant(pJVar27,(ObjectRef *)&local_140);
              pGVar26 = *(Graph **)pJVar27;
              pOVar16 = (Operator *)
                        SimplifiedOperatorBuilder::StoreField
                                  (*(SimplifiedOperatorBuilder **)(pJVar27 + 0x178),
                                   (FieldAccess *)local_b8);
              local_f0._0_8_ = pAVar17;
              local_f0._8_8_ = uVar11;
              local_e0 = pAVar17;
              pAStack_d8 = param_3;
              pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar26,pOVar16,4,(Node **)local_f0,false);
              AccessBuilder::ForHeapNumberValue(pAVar18);
              uVar11 = JSGraph::Constant(*(JSGraph **)(param_1 + 0x18),dVar13);
              pGVar26 = *(Graph **)pJVar27;
              pOVar16 = (Operator *)
                        SimplifiedOperatorBuilder::StoreField
                                  (*(SimplifiedOperatorBuilder **)(pJVar27 + 0x178),
                                   (FieldAccess *)local_b8);
              local_f0._0_8_ = pAVar17;
              local_f0._8_8_ = uVar11;
              local_e0 = pAVar18;
              pAStack_d8 = param_3;
              uVar11 = Graph::NewNode(pGVar26,pOVar16,4,(Node **)local_f0,false);
              pGVar26 = *(Graph **)pJVar27;
              pOVar16 = (Operator *)
                        CommonOperatorBuilder::FinishRegion
                                  (*(CommonOperatorBuilder **)(pJVar27 + 8));
              pAVar18 = (AccessBuilder *)0x2;
              local_b8._0_8_ = pAVar17;
              local_b8._8_8_ = uVar11;
              pNVar14 = (Node *)Graph::NewNode(pGVar26,pOVar16,2,(Node **)local_b8,false);
              local_160 = pNVar14;
            }
            else {
              pJVar27 = *(JSGraph **)(param_1 + 0x18);
              if (uVar8 == 1) {
                if (bVar5) {
                  pNVar14 = (Node *)JSGraph::ZeroConstant(pJVar27);
                }
                else {
                  iVar9 = ObjectRef::AsSmi((ObjectRef *)local_130);
                  pNVar14 = (Node *)JSGraph::Constant(pJVar27,(double)iVar9);
                }
              }
              else {
                pNVar14 = (Node *)JSGraph::Constant(pJVar27,(ObjectRef *)local_130);
              }
            }
          }
          else {
            auVar36 = ObjectRef::AsJSObject((ObjectRef *)local_130);
            pAVar18 = param_3;
            pNVar14 = (Node *)AllocateFastLiteral(param_1,local_160,param_3,auVar36._0_8_,
                                                  auVar36._8_8_,param_6);
            local_160 = pNVar14;
          }
          Var3 = local_f0._7_9_;
          uVar25 = 0x708;
          uVar11 = 0xffffffff;
        }
        else {
          dVar13 = (double)JSObjectRef::RawFastDoublePropertyAsBitsAt
                                     ((JSObjectRef *)&local_100,uVar10);
          uVar32 = 0;
          if (dVar13 != -NAN) {
            uVar32 = uVar11;
          }
          pNVar14 = (Node *)JSGraph::Constant(*(JSGraph **)(param_1 + 0x18),dVar13);
          auVar36._8_8_ = local_f0._8_8_;
          auVar36._0_8_ = local_f0._0_8_;
          Var3 = auVar36._7_9_;
          uVar25 = 0x60c;
          uVar11 = 0x1c5f;
        }
        local_f0._8_8_ = (undefined8)((unkuint9)Var3 >> 8);
        local_140 = local_130._0_2_;
        local_13e = local_130[2];
        uVar8 = (uint)uVar10 & 0x1fff;
        local_f0[7] = (undefined1)Var3;
        local_f0._0_7_ = local_b8._0_7_;
        uVar10 = local_f0._0_8_;
        if (pFVar24 < pFVar23) {
          *pFVar24 = (FieldAccess)0x1;
          *(uint *)(pFVar24 + 4) = uVar8;
          *(undefined8 *)(pFVar24 + 8) = uVar12;
          *(undefined8 *)(pFVar24 + 0x10) = 0;
          *(undefined8 *)(pFVar24 + 0x18) = uVar11;
          *(undefined2 *)(pFVar24 + 0x20) = uVar25;
          pFVar24[0x22] = (FieldAccess)0x5;
          *(undefined4 *)(pFVar24 + 0x24) = 1;
          *(undefined8 *)(pFVar24 + 0x28) = uVar32;
          pFVar24[0x30] = (FieldAccess)0x0;
          pFVar24[3] = local_130[2];
          *(undefined2 *)(pFVar24 + 1) = local_130._0_2_;
          local_f0._0_4_ = local_b8._0_4_;
          *(Node **)(pFVar24 + 0x38) = pNVar14;
          *(undefined4 *)(pFVar24 + 0x34) = local_b8._3_4_;
          *(undefined4 *)(pFVar24 + 0x31) = local_f0._0_4_;
          pFVar20 = pFVar24;
          local_f0._0_8_ = uVar10;
        }
        else {
          lVar31 = (long)pFVar24 - (long)pFVar30 >> 6;
          uVar19 = lVar31 + 1;
          if (uVar19 >> 0x19 != 0) goto LAB_01702eb4;
          uVar21 = (long)pFVar23 - (long)pFVar30 >> 5;
          if (uVar19 <= uVar21) {
            uVar19 = uVar21;
          }
          if (0xfffffe < (ulong)((long)pFVar23 - (long)pFVar30 >> 6)) {
            uVar19 = 0x1ffffff;
          }
          if (uVar19 == 0) {
            lVar15 = 0;
          }
          else {
            uVar21 = uVar19 * 0x40;
            lVar15 = *(long *)(this + 0x10);
            if (uVar21 < (ulong)(*(long *)(this + 0x18) - lVar15) ||
                uVar21 - (*(long *)(this + 0x18) - lVar15) == 0) {
              *(ulong *)(this + 0x10) = lVar15 + uVar21;
            }
            else {
              lVar15 = Zone::NewExpand(this,uVar21);
            }
          }
          pFVar20 = (FieldAccess *)(lVar15 + lVar31 * 0x40);
          *pFVar20 = (FieldAccess)0x1;
          *(uint *)(pFVar20 + 4) = uVar8;
          *(undefined8 *)(pFVar20 + 8) = uVar12;
          *(undefined8 *)(pFVar20 + 0x10) = 0;
          *(undefined8 *)(pFVar20 + 0x18) = uVar11;
          *(undefined2 *)(pFVar20 + 0x20) = uVar25;
          pFVar20[0x22] = (FieldAccess)0x5;
          *(undefined4 *)(pFVar20 + 0x24) = 1;
          *(undefined8 *)(pFVar20 + 0x28) = uVar32;
          pFVar20[0x30] = (FieldAccess)0x0;
          pFVar20[3] = local_13e;
          *(undefined2 *)(pFVar20 + 1) = local_140;
          uVar4 = local_f0._3_4_;
          pFVar23 = (FieldAccess *)(lVar15 + uVar19 * 0x40);
          *(undefined4 *)(pFVar20 + 0x34) = uVar4;
          *(undefined4 *)(pFVar20 + 0x31) = local_f0._0_4_;
          *(Node **)(pFVar20 + 0x38) = pNVar14;
          pFVar29 = pFVar20;
          for (; pFVar24 != pFVar30; pFVar24 = pFVar24 + -0x40) {
            uVar11 = *(undefined8 *)(pFVar24 + -0x38);
            uVar10 = *(undefined8 *)(pFVar24 + -0x40);
            uVar32 = *(undefined8 *)(pFVar24 + -0x28);
            uVar12 = *(undefined8 *)(pFVar24 + -0x30);
            uVar33 = *(undefined8 *)(pFVar24 + -0x20);
            uVar35 = *(undefined8 *)(pFVar24 + -8);
            uVar34 = *(undefined8 *)(pFVar24 + -0x10);
            *(undefined8 *)(pFVar29 + -0x18) = *(undefined8 *)(pFVar24 + -0x18);
            *(undefined8 *)(pFVar29 + -0x20) = uVar33;
            *(undefined8 *)(pFVar29 + -8) = uVar35;
            *(undefined8 *)(pFVar29 + -0x10) = uVar34;
            *(undefined8 *)(pFVar29 + -0x38) = uVar11;
            *(undefined8 *)(pFVar29 + -0x40) = uVar10;
            *(undefined8 *)(pFVar29 + -0x28) = uVar32;
            *(undefined8 *)(pFVar29 + -0x30) = uVar12;
            pFVar29 = pFVar29 + -0x40;
          }
        }
        pFVar24 = pFVar20 + 0x40;
      }
      lVar28 = lVar28 + 1;
      pFVar30 = pFVar29;
    } while (lVar28 != iVar7);
  }
  uVar8 = MapRef::GetInObjectProperties(local_110);
  uVar19 = (ulong)((long)pFVar24 - (long)pFVar29) >> 6;
  pFVar30 = pFVar29;
  if ((int)uVar19 < (int)uVar8) {
    do {
      AccessBuilder::ForJSObjectInObjectProperty
                ((AccessBuilder *)local_110,(MapRef *)(uVar19 & 0xffffffff),(int)pAVar18);
      uVar10 = JSGraph::HeapConstant
                         (*(JSGraph **)(param_1 + 0x18),
                          *(long *)(*(JSGraph **)(param_1 + 0x18) + 0x168) + 0x88);
      uStack_c8 = uStack_90;
      local_d0 = local_98;
      pAStack_d8 = pAStack_a0;
      local_e0 = local_a8;
      local_c0 = local_88;
      local_f0 = local_b8;
      if (pFVar24 < pFVar23) {
        *(AccessBuilder **)(pFVar24 + 0x18) = pAStack_a0;
        *(AccessBuilder **)(pFVar24 + 0x10) = local_a8;
        *(undefined8 *)(pFVar24 + 0x28) = uStack_90;
        *(undefined8 *)(pFVar24 + 0x20) = local_98;
        *(undefined1 (*) [16])pFVar24 = local_b8;
        *(undefined8 *)(pFVar24 + 0x30) = local_88;
        *(undefined8 *)(pFVar24 + 0x38) = uVar10;
        pFVar20 = pFVar24;
        pFVar29 = pFVar30;
      }
      else {
        lVar28 = (long)pFVar24 - (long)pFVar30 >> 6;
        uVar21 = lVar28 + 1;
        if (uVar21 >> 0x19 != 0) {
LAB_01702eb4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar22 = (long)pFVar23 - (long)pFVar30 >> 5;
        if (uVar21 <= uVar22) {
          uVar21 = uVar22;
        }
        if (0xfffffe < (ulong)((long)pFVar23 - (long)pFVar30 >> 6)) {
          uVar21 = 0x1ffffff;
        }
        if (uVar21 == 0) {
          lVar31 = 0;
        }
        else {
          uVar22 = uVar21 * 0x40;
          lVar31 = *(long *)(this + 0x10);
          if (uVar22 < (ulong)(*(long *)(this + 0x18) - lVar31) ||
              uVar22 - (*(long *)(this + 0x18) - lVar31) == 0) {
            *(ulong *)(this + 0x10) = lVar31 + uVar22;
          }
          else {
            lVar31 = Zone::NewExpand(this,uVar22);
          }
        }
        pFVar20 = (FieldAccess *)(lVar31 + lVar28 * 0x40);
        pFVar23 = (FieldAccess *)(lVar31 + uVar21 * 0x40);
        *(AccessBuilder **)(pFVar20 + 0x18) = pAStack_d8;
        *(AccessBuilder **)(pFVar20 + 0x10) = local_e0;
        *(undefined8 *)(pFVar20 + 0x28) = uStack_c8;
        *(undefined8 *)(pFVar20 + 0x20) = local_d0;
        *(undefined1 (*) [16])pFVar20 = local_f0;
        *(undefined8 *)(pFVar20 + 0x30) = local_c0;
        *(undefined8 *)(pFVar20 + 0x38) = uVar10;
        pFVar29 = pFVar20;
        for (; pFVar24 != pFVar30; pFVar24 = pFVar24 + -0x40) {
          uVar11 = *(undefined8 *)(pFVar24 + -0x38);
          uVar10 = *(undefined8 *)(pFVar24 + -0x40);
          uVar32 = *(undefined8 *)(pFVar24 + -0x28);
          uVar12 = *(undefined8 *)(pFVar24 + -0x30);
          uVar33 = *(undefined8 *)(pFVar24 + -0x20);
          uVar35 = *(undefined8 *)(pFVar24 + -8);
          uVar34 = *(undefined8 *)(pFVar24 + -0x10);
          *(undefined8 *)(pFVar29 + -0x18) = *(undefined8 *)(pFVar24 + -0x18);
          *(undefined8 *)(pFVar29 + -0x20) = uVar33;
          *(undefined8 *)(pFVar29 + -8) = uVar35;
          *(undefined8 *)(pFVar29 + -0x10) = uVar34;
          *(undefined8 *)(pFVar29 + -0x38) = uVar11;
          *(undefined8 *)(pFVar29 + -0x40) = uVar10;
          *(undefined8 *)(pFVar29 + -0x28) = uVar32;
          *(undefined8 *)(pFVar29 + -0x30) = uVar12;
          pFVar29 = pFVar29 + -0x40;
        }
      }
      uVar1 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar1;
      pFVar24 = pFVar20 + 0x40;
      pFVar30 = pFVar29;
    } while (uVar1 != uVar8);
  }
  pNVar14 = (Node *)AllocateFastLiteralElements
                              (param_1,local_160,param_3,local_100,uStack_f8,param_6);
  pJVar27 = *(JSGraph **)(param_1 + 0x18);
  if (*(char *)(*(long *)pNVar14 + 0x24) != '\0') {
    local_160 = pNVar14;
  }
  iVar7 = MapRef::instance_size(local_110);
  uVar8 = BitsetType::Lub<v8::internal::compiler::MapRef>(local_110);
  uVar8 = BitsetType::ExpandInternals(uVar8);
  pGVar26 = *(Graph **)pJVar27;
  pOVar16 = (Operator *)
            CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar27 + 8),1);
  local_b8._0_8_ = local_160;
  uVar10 = Graph::NewNode(pGVar26,pOVar16,1,(Node **)local_b8,false);
  pGVar26 = *(Graph **)pJVar27;
  pOVar16 = (Operator *)
            SimplifiedOperatorBuilder::Allocate
                      (*(SimplifiedOperatorBuilder **)(pJVar27 + 0x178),uVar8 | 1,param_6);
  local_b8._0_8_ = JSGraph::Constant(pJVar27,(double)iVar7);
  local_b8._8_8_ = uVar10;
  local_a8 = param_3;
  pAVar17 = (AccessBuilder *)Graph::NewNode(pGVar26,pOVar16,3,(Node **)local_b8,false);
  AccessBuilder::ForMap(pAVar17);
  uVar10 = JSGraph::Constant(pJVar27,(ObjectRef *)local_110);
  pGVar26 = *(Graph **)pJVar27;
  pOVar16 = (Operator *)
            SimplifiedOperatorBuilder::StoreField
                      (*(SimplifiedOperatorBuilder **)(pJVar27 + 0x178),(FieldAccess *)local_b8);
  local_f0._0_8_ = pAVar17;
  local_f0._8_8_ = uVar10;
  local_e0 = pAVar17;
  pAStack_d8 = param_3;
  pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar26,pOVar16,4,(Node **)local_f0,false);
  AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar18);
  uVar10 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(param_1 + 0x18));
  pGVar26 = *(Graph **)pJVar27;
  pOVar16 = (Operator *)
            SimplifiedOperatorBuilder::StoreField
                      (*(SimplifiedOperatorBuilder **)(pJVar27 + 0x178),(FieldAccess *)local_b8);
  local_f0._0_8_ = pAVar17;
  local_f0._8_8_ = uVar10;
  local_e0 = pAVar18;
  pAStack_d8 = param_3;
  pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar26,pOVar16,4,(Node **)local_f0,false);
  AccessBuilder::ForJSObjectElements(pAVar18);
  pGVar26 = *(Graph **)pJVar27;
  pOVar16 = (Operator *)
            SimplifiedOperatorBuilder::StoreField
                      (*(SimplifiedOperatorBuilder **)(pJVar27 + 0x178),(FieldAccess *)local_b8);
  local_f0._0_8_ = pAVar17;
  local_f0._8_8_ = pNVar14;
  local_e0 = pAVar18;
  pAStack_d8 = param_3;
  pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar26,pOVar16,4,(Node **)local_f0,false);
  uVar19 = ObjectRef::IsJSArray((ObjectRef *)&local_100);
  if ((uVar19 & 1) != 0) {
    auVar36 = ObjectRef::AsJSArray((ObjectRef *)&local_100);
    local_120 = auVar36;
    JSObjectRef::GetElementsKind((JSObjectRef *)local_120);
    AccessBuilder::ForJSArrayLength((AccessBuilder *)local_b8);
    auVar36 = JSArrayRef::length((JSArrayRef *)local_120);
    local_130 = auVar36;
    pNVar14 = (Node *)JSGraph::Constant(pJVar27,(ObjectRef *)local_130);
    pGVar26 = *(Graph **)pJVar27;
    pOVar16 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar27 + 0x178),(FieldAccess *)local_b8);
    local_f0._0_8_ = pAVar17;
    local_f0._8_8_ = pNVar14;
    local_e0 = pAVar18;
    pAStack_d8 = param_3;
    pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar26,pOVar16,4,(Node **)local_f0,false);
  }
  for (; pFVar29 != pFVar24; pFVar29 = pFVar29 + 0x40) {
    uVar10 = *(undefined8 *)(pFVar29 + 0x38);
    pGVar26 = *(Graph **)pJVar27;
    pOVar16 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar27 + 0x178),pFVar29);
    local_b8._0_8_ = pAVar17;
    local_b8._8_8_ = uVar10;
    local_a8 = pAVar18;
    pAStack_a0 = param_3;
    pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar26,pOVar16,4,(Node **)local_b8,false);
  }
  pGVar26 = *(Graph **)pJVar27;
  pOVar16 = (Operator *)
            CommonOperatorBuilder::FinishRegion(*(CommonOperatorBuilder **)(pJVar27 + 8));
  local_b8._0_8_ = pAVar17;
  local_b8._8_8_ = pAVar18;
  Graph::NewNode(pGVar26,pOVar16,2,(Node **)local_b8,false);
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

