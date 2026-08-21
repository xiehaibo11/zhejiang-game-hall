
/* v8::internal::compiler::EscapeAnalysis::Reduce(v8::internal::compiler::Node*,
   v8::internal::compiler::EffectGraphReducer::Reduction*) */

void __thiscall
v8::internal::compiler::EscapeAnalysis::Reduce
          (EscapeAnalysis *this,Node *param_1,Reduction *param_2)

{
  ulong *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  short sVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  Node *pNVar18;
  ulong *puVar19;
  Node *pNVar20;
  long lVar21;
  Node *pNVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  ulong *puVar27;
  Node *pNVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  undefined8 *puVar33;
  long *plVar34;
  ulong uVar35;
  int iVar36;
  JSGraph *this_00;
  Operator *pOVar37;
  vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  *pvVar38;
  Graph *pGVar39;
  ulong uVar40;
  int *piVar41;
  long *plVar42;
  undefined2 uVar43;
  double dVar44;
  undefined8 uVar45;
  Node *local_d0 [3];
  PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
  aPStack_b8 [24];
  long *local_a0;
  EscapeAnalysis *pEStack_98;
  long local_90;
  Node *local_88;
  int *local_80;
  undefined1 local_78 [16];
  Node *local_68;
  
  plVar42 = *(long **)(this + 0xf8);
  pOVar37 = *(Operator **)param_1;
  VariableTracker::Scope::Scope
            ((Scope *)local_d0,(VariableTracker *)(plVar42 + 0xc),param_1,param_2);
  pNVar20 = local_d0[0];
  local_90 = 0;
  local_88 = (Node *)0x0;
  sVar5 = *(short *)(pOVar37 + 0x10);
  this_00 = *(JSGraph **)(this + 0x100);
  local_a0 = plVar42;
  pEStack_98 = this;
  switch(sVar5) {
  case 0xd6:
    lVar26 = CheckMapsParametersOf(pOVar37);
    uVar40 = *(ulong *)(lVar26 + 8);
    pNVar18 = (Node *)NodeProperties::GetValueInput(local_d0[0],0);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar29 = (ulong)*(uint *)(pNVar18 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar29) {
      uVar32 = (ulong)((int)uVar29 + 1);
      if (uVar30 < uVar32) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar32 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar32) {
        plVar42[9] = lVar26 + uVar32 * 8;
      }
    }
    pNVar20 = *(Node **)(lVar26 + uVar29 * 8);
    if (pNVar20 != (Node *)0x0) {
      pNVar18 = pNVar20;
    }
    lVar26 = EscapeAnalysisTracker::Scope::GetVirtualObject((Scope *)local_d0,pNVar18);
    auVar17._8_8_ = local_78._8_8_;
    auVar17._0_8_ = local_78._0_8_;
    auVar16._8_8_ = local_78._8_8_;
    auVar16._0_8_ = local_78._0_8_;
    if ((lVar26 != 0) && (local_78 = auVar16, *(char *)(lVar26 + 0x20) == '\0')) {
      lVar21 = *(long *)(lVar26 + 0x30) - (long)*(undefined4 **)(lVar26 + 0x28);
      local_78 = auVar17;
      if (0 < (int)((uint)lVar21 & 0xfffffffc)) {
        if (lVar21 == 0) goto LAB_016babf8;
        plVar42 = (long *)VariableTracker::State::Get
                                    ((State *)aPStack_b8,**(undefined4 **)(lVar26 + 0x28));
        if (plVar42 == (long *)0x0) goto switchD_016b93a0_caseD_29;
        if (((*(short *)(*plVar42 + 0x10) != 0x3d) &&
            (local_80 = (int *)plVar42[1], ((ulong)local_80 & 1) == 0)) && (*local_80 == 0)) {
          lVar26 = Type::AsHeapConstant((Type *)&local_80);
          local_78 = ObjectRef::AsMap((ObjectRef *)(lVar26 + 8));
          uVar30 = MapRef::object((MapRef *)local_78);
          if (uVar40 != 1) {
            if ((uVar40 & 3) == 0) {
              if (uVar40 == uVar30) goto LAB_016b9ff8;
            }
            else {
              puVar19 = *(ulong **)(uVar40 - 2);
              puVar27 = *(ulong **)(uVar40 + 6);
              if ((puVar19 != puVar27) && (*puVar19 != uVar30)) {
                do {
                  if (puVar27 + -1 == puVar19) goto LAB_016ba4b0;
                  puVar1 = puVar19 + 1;
                  puVar19 = puVar19 + 1;
                } while (*puVar1 != uVar30);
              }
              if (puVar19 != puVar27) {
LAB_016b9ff8:
                EscapeAnalysisTracker::Scope::MarkForDeletion((Scope *)local_d0);
                goto switchD_016b93a0_caseD_29;
              }
            }
          }
        }
      }
    }
    break;
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe8:
  case 0xe9:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
    goto switchD_016b931c_caseD_d7;
  case 0xde:
    pNVar18 = (Node *)NodeProperties::GetValueInput(local_d0[0],0);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(pNVar18 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar26 + uVar29 * 8;
      }
    }
    plVar42 = local_a0;
    pNVar20 = *(Node **)(lVar26 + uVar40 * 8);
    if (pNVar20 != (Node *)0x0) {
      pNVar18 = pNVar20;
    }
    sVar5 = *(short *)(*(long *)pNVar18 + 0x10);
    if (((sVar5 == 0x1e) || (sVar5 == 0xe7)) || (sVar5 == 0x28)) {
      local_88 = pNVar18;
      if (pNVar18 != (Node *)0x0) {
        uVar25 = *(uint *)(pNVar18 + 0x14);
        uVar30 = base::hash_value(uVar25 & 0xffffff);
        uVar40 = plVar42[2];
        if (uVar40 != 0) {
          uVar45 = CONCAT17(POPCOUNT((char)(uVar40 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar40 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar40 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar40 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar40 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar40 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar40 >> 8)),POPCOUNT((char)uVar40))))))));
          uVar43 = NEON_uaddlv(uVar45,1);
          uVar29 = CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar43) & 0xffffffff;
          if (uVar29 < 2) {
            uVar32 = uVar40 - 1 & uVar30;
          }
          else {
            uVar32 = uVar30;
            if (uVar40 <= uVar30) {
              uVar32 = 0;
              if (uVar40 != 0) {
                uVar32 = uVar30 / uVar40;
              }
              uVar32 = uVar30 - uVar32 * uVar40;
            }
          }
          plVar34 = *(long **)(plVar42[1] + uVar32 * 8);
          if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
            do {
              uVar35 = plVar34[1];
              if (uVar30 == uVar35) {
                if (*(uint *)(plVar34 + 2) == (uVar25 & 0xffffff)) goto LAB_016bab18;
              }
              else {
                if (uVar29 < 2) {
                  uVar35 = uVar35 & uVar40 - 1;
                }
                else if (uVar40 <= uVar35) {
                  uVar6 = 0;
                  if (uVar40 != 0) {
                    uVar6 = uVar35 / uVar40;
                  }
                  uVar35 = uVar35 - uVar6 * uVar40;
                }
                if (uVar35 != uVar32) break;
              }
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
        }
        goto LAB_016bab1c;
      }
LAB_016ba8c0:
      local_90 = 0;
      goto switchD_016b93a0_caseD_29;
    }
    break;
  case 0xe3:
    pNVar18 = (Node *)NodeProperties::GetValueInput(local_d0[0],0);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(pNVar18 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar26 + uVar29 * 8;
      }
    }
    pNVar20 = *(Node **)(lVar26 + uVar40 * 8);
    if (pNVar20 != (Node *)0x0) {
      pNVar18 = pNVar20;
    }
    lVar26 = EscapeAnalysisTracker::Scope::GetVirtualObject((Scope *)local_d0,pNVar18);
    auVar13._8_8_ = local_78._8_8_;
    auVar13._0_8_ = local_78._0_8_;
    auVar12._8_8_ = local_78._8_8_;
    auVar12._0_8_ = local_78._0_8_;
    if ((lVar26 != 0) && (local_78 = auVar12, *(char *)(lVar26 + 0x20) == '\0')) {
      lVar21 = *(long *)(lVar26 + 0x30) - (long)*(undefined4 **)(lVar26 + 0x28);
      local_78 = auVar13;
      if (0 < (int)((uint)lVar21 & 0xfffffffc)) {
        if (lVar21 == 0) goto LAB_016babf8;
        pNVar20 = (Node *)VariableTracker::State::Get
                                    ((State *)aPStack_b8,**(undefined4 **)(lVar26 + 0x28));
        if (pNVar20 == (Node *)0x0) goto switchD_016b93a0_caseD_29;
        if (*(short *)(*(long *)pNVar20 + 0x10) == 0x3d) break;
        puVar19 = (ulong *)CompareMapsParametersOf(pOVar37);
        lVar26 = JSGraph::TrueConstant(this_00);
        pNVar28 = (Node *)JSGraph::FalseConstant(this_00);
        uVar30 = *puVar19;
        pNVar18 = pNVar28;
        if ((uVar30 & 3) == 0) {
          lVar21 = 1;
LAB_016ba77c:
          lVar31 = 0;
          while( true ) {
            lVar21 = lVar21 + -1;
            if ((uVar30 & 3) != 0) {
              if ((ulong)(*(long *)(uVar30 + 6) - *(long *)(uVar30 - 2) >> 3) <=
                  (ulong)(lVar31 >> 0x20)) goto LAB_016babf8;
              uVar30 = *(ulong *)(*(long *)(uVar30 - 2) + (lVar31 >> 0x20) * 8);
            }
            lVar23 = JSGraph::HeapConstant(this_00,uVar30);
            *(undefined8 *)(lVar23 + 8) = 0x3800001;
            pGVar39 = *(Graph **)this_00;
            pOVar37 = (Operator *)
                      SimplifiedOperatorBuilder::ReferenceEqual
                                (*(SimplifiedOperatorBuilder **)(this_00 + 0x178));
            local_78._0_8_ = pNVar20;
            local_78._8_8_ = lVar23;
            pNVar22 = (Node *)Graph::NewNode(pGVar39,pOVar37,2,(Node **)local_78,false);
            *(undefined8 *)(pNVar22 + 8) = 0x201;
            if (pNVar18 != pNVar28) {
              pGVar39 = *(Graph **)this_00;
              pOVar37 = (Operator *)
                        CommonOperatorBuilder::Select(*(CommonOperatorBuilder **)(this_00 + 8),7,0);
              local_78._0_8_ = pNVar22;
              local_78._8_8_ = lVar26;
              local_68 = pNVar18;
              pNVar22 = (Node *)Graph::NewNode(pGVar39,pOVar37,3,(Node **)local_78,false);
              *(undefined8 *)(pNVar22 + 8) = 0x201;
            }
            pNVar18 = pNVar22;
            if (lVar21 == 0) break;
            uVar30 = *puVar19;
            lVar31 = lVar31 + 0x100000000;
          }
        }
        else if (((uVar30 & 3) != 1) &&
                (lVar21 = *(long *)(uVar30 + 6) - *(long *)(uVar30 - 2), lVar21 != 0)) {
          lVar21 = lVar21 >> 3;
          goto LAB_016ba77c;
        }
        plVar42 = local_a0;
        local_88 = pNVar18;
        if (pNVar18 != (Node *)0x0) {
          uVar25 = *(uint *)(pNVar18 + 0x14);
          uVar30 = base::hash_value(uVar25 & 0xffffff);
          uVar40 = plVar42[2];
          if (uVar40 != 0) {
            uVar45 = CONCAT17(POPCOUNT((char)(uVar40 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uVar40 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uVar40 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uVar40 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uVar40 >> 0x18)),
                                                                  CONCAT12(POPCOUNT((char)(uVar40 >>
                                                                                          0x10)),
                                                                           CONCAT11(POPCOUNT((char)(
                                                  uVar40 >> 8)),POPCOUNT((char)uVar40))))))));
            uVar43 = NEON_uaddlv(uVar45,1);
            uVar29 = CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar43) & 0xffffffff;
            if (uVar29 < 2) {
              uVar32 = uVar40 - 1 & uVar30;
            }
            else {
              uVar32 = uVar30;
              if (uVar40 <= uVar30) {
                uVar32 = 0;
                if (uVar40 != 0) {
                  uVar32 = uVar30 / uVar40;
                }
                uVar32 = uVar30 - uVar32 * uVar40;
              }
            }
            puVar33 = *(undefined8 **)(plVar42[1] + uVar32 * 8);
            if ((puVar33 != (undefined8 *)0x0) &&
               (plVar34 = (long *)*puVar33, plVar34 != (long *)0x0)) {
              do {
                uVar35 = plVar34[1];
                if (uVar30 == uVar35) {
                  if (*(uint *)(plVar34 + 2) == (uVar25 & 0xffffff)) goto LAB_016bab18;
                }
                else {
                  if (uVar29 < 2) {
                    uVar35 = uVar35 & uVar40 - 1;
                  }
                  else if (uVar40 <= uVar35) {
                    uVar6 = 0;
                    if (uVar40 != 0) {
                      uVar6 = uVar35 / uVar40;
                    }
                    uVar35 = uVar35 - uVar6 * uVar40;
                  }
                  if (uVar35 != uVar32) break;
                }
                plVar34 = (long *)*plVar34;
              } while (plVar34 != (long *)0x0);
            }
          }
          goto LAB_016bab1c;
        }
        goto LAB_016ba8c0;
      }
    }
    break;
  case 0xe7:
    plVar34 = (long *)NodeProperties::GetValueInput(local_d0[0],0);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)((long)plVar34 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar26 + uVar29 * 8;
      }
    }
    auVar7._8_8_ = local_78._8_8_;
    auVar7._0_8_ = local_78._0_8_;
    plVar42 = *(long **)(lVar26 + uVar40 * 8);
    if (plVar42 != (long *)0x0) {
      plVar34 = plVar42;
    }
    if ((*(short *)(*plVar34 + 0x10) == 0x1c) &&
       (dVar44 = *(double *)(*plVar34 + 0x30), iVar24 = (int)dVar44, local_78 = auVar7,
       dVar44 == (double)iVar24)) {
      lVar26 = EscapeAnalysisTracker::Scope::InitVirtualObject((Scope *)local_d0,iVar24);
      auVar8._8_8_ = local_78._8_8_;
      auVar8._0_8_ = local_78._0_8_;
      if (lVar26 != 0) {
        piVar41 = *(int **)(lVar26 + 0x28);
        piVar3 = *(int **)(lVar26 + 0x30);
        local_78 = auVar8;
        if (piVar41 != piVar3) {
          do {
            lVar26 = *(long *)(this_00 + 0x160);
            iVar24 = *piVar41;
            if (lVar26 == 0) {
              pGVar39 = *(Graph **)this_00;
              pOVar37 = (Operator *)
                        CommonOperatorBuilder::Dead(*(CommonOperatorBuilder **)(this_00 + 8));
              local_78._0_8_ = (Node *)0x0;
              lVar26 = Graph::NewNode(pGVar39,pOVar37,0,(Node **)local_78,false);
              *(long *)(this_00 + 0x160) = lVar26;
            }
            if (iVar24 == -1) goto LAB_016babe4;
            PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
            ::Set(aPStack_b8,iVar24,lVar26);
            piVar41 = piVar41 + 1;
          } while (piVar3 != piVar41);
        }
      }
    }
    goto switchD_016b93a0_caseD_29;
  case 0xea:
    pNVar18 = (Node *)NodeProperties::GetValueInput(local_d0[0],0);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(pNVar18 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar26 + uVar29 * 8;
      }
    }
    pNVar20 = *(Node **)(lVar26 + uVar40 * 8);
    if (pNVar20 != (Node *)0x0) {
      pNVar18 = pNVar20;
    }
    lVar26 = EscapeAnalysisTracker::Scope::GetVirtualObject((Scope *)local_d0,pNVar18);
    auVar15._8_8_ = local_78._8_8_;
    auVar15._0_8_ = local_78._0_8_;
    if ((lVar26 != 0) && (local_78 = auVar15, *(char *)(lVar26 + 0x20) == '\0')) {
      lVar21 = FieldAccessOf(pOVar37);
      uVar25 = *(uint *)(lVar21 + 4);
      if ((uVar25 & 3) != 0) goto LAB_016babfc;
      if (*(char *)(lVar26 + 0x20) != '\0') goto LAB_016bac10;
      lVar21 = *(long *)(lVar26 + 0x30) - *(long *)(lVar26 + 0x28);
      if ((int)uVar25 < (int)((uint)lVar21 & 0xfffffffc)) {
        uVar2 = uVar25 + 3;
        if (-1 < (int)uVar25) {
          uVar2 = uVar25;
        }
        uVar30 = (long)((ulong)uVar2 << 0x20) >> 0x22;
        if ((ulong)(lVar21 >> 2) <= uVar30) goto LAB_016babf8;
        pNVar20 = (Node *)VariableTracker::State::Get
                                    ((State *)aPStack_b8,
                                     *(undefined4 *)(*(long *)(lVar26 + 0x28) + uVar30 * 4));
        plVar42 = local_a0;
        if (pNVar20 == (Node *)0x0) {
LAB_016ba4c4:
          local_90 = 0;
          local_88 = (Node *)0x0;
          goto switchD_016b93a0_caseD_29;
        }
        if (*(short *)(*(long *)pNVar20 + 0x10) != 0x3d) {
          uVar25 = *(uint *)(pNVar20 + 0x14);
          local_88 = pNVar20;
          uVar30 = base::hash_value(uVar25 & 0xffffff);
          uVar40 = plVar42[2];
          if (uVar40 != 0) {
            uVar45 = CONCAT17(POPCOUNT((char)(uVar40 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uVar40 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uVar40 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uVar40 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uVar40 >> 0x18)),
                                                                  CONCAT12(POPCOUNT((char)(uVar40 >>
                                                                                          0x10)),
                                                                           CONCAT11(POPCOUNT((char)(
                                                  uVar40 >> 8)),POPCOUNT((char)uVar40))))))));
            uVar43 = NEON_uaddlv(uVar45,1);
            uVar29 = CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar43) & 0xffffffff;
            if (uVar29 < 2) {
              uVar32 = uVar40 - 1 & uVar30;
            }
            else {
              uVar32 = uVar30;
              if (uVar40 <= uVar30) {
                uVar32 = 0;
                if (uVar40 != 0) {
                  uVar32 = uVar30 / uVar40;
                }
                uVar32 = uVar30 - uVar32 * uVar40;
              }
            }
            puVar33 = *(undefined8 **)(plVar42[1] + uVar32 * 8);
            if ((puVar33 != (undefined8 *)0x0) &&
               (plVar34 = (long *)*puVar33, plVar34 != (long *)0x0)) {
              do {
                uVar35 = plVar34[1];
                if (uVar30 == uVar35) {
                  if (*(uint *)(plVar34 + 2) == (uVar25 & 0xffffff)) goto LAB_016bab18;
                }
                else {
                  if (uVar29 < 2) {
                    uVar35 = uVar35 & uVar40 - 1;
                  }
                  else if (uVar40 <= uVar35) {
                    uVar6 = 0;
                    if (uVar40 != 0) {
                      uVar6 = uVar35 / uVar40;
                    }
                    uVar35 = uVar35 - uVar6 * uVar40;
                  }
                  if (uVar35 != uVar32) break;
                }
                plVar34 = (long *)*plVar34;
              } while (plVar34 != (long *)0x0);
            }
          }
          goto LAB_016bab1c;
        }
      }
    }
    break;
  case 0xeb:
    pNVar18 = (Node *)NodeProperties::GetValueInput(local_d0[0],0);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(pNVar18 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar26 + uVar29 * 8;
        pNVar20 = local_d0[0];
        plVar42 = local_a0;
      }
    }
    pNVar28 = *(Node **)(lVar26 + uVar40 * 8);
    if (pNVar28 != (Node *)0x0) {
      pNVar18 = pNVar28;
    }
    pNVar20 = (Node *)NodeProperties::GetValueInput(pNVar20,1);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(pNVar20 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar26 + uVar29 * 8;
      }
    }
    pNVar28 = *(Node **)(lVar26 + uVar40 * 8);
    if (pNVar28 != (Node *)0x0) {
      pNVar20 = pNVar28;
    }
    lVar26 = EscapeAnalysisTracker::Scope::GetVirtualObject((Scope *)local_d0,pNVar18);
    auVar9._8_8_ = local_78._8_8_;
    auVar9._0_8_ = local_78._0_8_;
    if ((lVar26 != 0) && (local_78 = auVar9, *(char *)(lVar26 + 0x20) == '\0')) {
      uVar30 = FUN_016bc8a0(pOVar37,pNVar20);
      if ((uVar30 & 0xff) != 0) {
        uVar25 = (uint)(uVar30 >> 0x20);
        if ((uVar30 >> 0x20 & 3) != 0) goto LAB_016babfc;
        if (*(char *)(lVar26 + 0x20) != '\0') goto LAB_016bac10;
        lVar21 = *(long *)(lVar26 + 0x30) - *(long *)(lVar26 + 0x28);
        if ((int)uVar25 < (int)((uint)lVar21 & 0xfffffffc)) {
          uVar2 = uVar25 + 3;
          if (-1 < (long)uVar30) {
            uVar2 = uVar25;
          }
          uVar30 = (long)((ulong)uVar2 << 0x20) >> 0x22;
          if ((ulong)(lVar21 >> 2) <= uVar30) goto LAB_016babf8;
          pNVar28 = (Node *)VariableTracker::State::Get
                                      ((State *)aPStack_b8,
                                       *(undefined4 *)(*(long *)(lVar26 + 0x28) + uVar30 * 4));
          plVar42 = local_a0;
          if (pNVar28 == (Node *)0x0) goto LAB_016ba4c4;
          if (*(short *)(*(long *)pNVar28 + 0x10) != 0x3d) {
            uVar25 = *(uint *)(pNVar28 + 0x14);
            local_88 = pNVar28;
            uVar30 = base::hash_value(uVar25 & 0xffffff);
            uVar40 = plVar42[2];
            if (uVar40 != 0) {
              uVar45 = CONCAT17(POPCOUNT((char)(uVar40 >> 0x38)),
                                CONCAT16(POPCOUNT((char)(uVar40 >> 0x30)),
                                         CONCAT15(POPCOUNT((char)(uVar40 >> 0x28)),
                                                  CONCAT14(POPCOUNT((char)(uVar40 >> 0x20)),
                                                           CONCAT13(POPCOUNT((char)(uVar40 >> 0x18))
                                                                    ,CONCAT12(POPCOUNT((char)(uVar40
                                                                                             >> 0x10
                                                  )),CONCAT11(POPCOUNT((char)(uVar40 >> 8)),
                                                              POPCOUNT((char)uVar40))))))));
              uVar43 = NEON_uaddlv(uVar45,1);
              uVar29 = CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar43) & 0xffffffff;
              if (uVar29 < 2) {
                uVar32 = uVar40 - 1 & uVar30;
              }
              else {
                uVar32 = uVar30;
                if (uVar40 <= uVar30) {
                  uVar32 = 0;
                  if (uVar40 != 0) {
                    uVar32 = uVar30 / uVar40;
                  }
                  uVar32 = uVar30 - uVar32 * uVar40;
                }
              }
              puVar33 = *(undefined8 **)(plVar42[1] + uVar32 * 8);
              if ((puVar33 != (undefined8 *)0x0) &&
                 (plVar34 = (long *)*puVar33, plVar34 != (long *)0x0)) {
                do {
                  uVar35 = plVar34[1];
                  if (uVar30 == uVar35) {
                    if (*(uint *)(plVar34 + 2) == (uVar25 & 0xffffff)) goto LAB_016bab18;
                  }
                  else {
                    if (uVar29 < 2) {
                      uVar35 = uVar35 & uVar40 - 1;
                    }
                    else if (uVar40 <= uVar35) {
                      uVar6 = 0;
                      if (uVar40 != 0) {
                        uVar6 = uVar35 / uVar40;
                      }
                      uVar35 = uVar35 - uVar6 * uVar40;
                    }
                    if (uVar35 != uVar32) break;
                  }
                  plVar34 = (long *)*plVar34;
                } while (plVar34 != (long *)0x0);
              }
            }
            goto LAB_016bab1c;
          }
        }
      }
      if (*(char *)(lVar26 + 0x20) == '\0') {
        lVar21 = ElementAccessOf(pOVar37);
        auVar11._8_8_ = local_78._8_8_;
        auVar11._0_8_ = local_78._0_8_;
        auVar10._8_8_ = local_78._8_8_;
        auVar10._0_8_ = local_78._0_8_;
        uVar25 = *(byte *)(lVar21 + 0x10) - 1;
        if (0xc < uVar25) goto LAB_016bac24;
        uVar4 = *(uint *)(lVar21 + 4);
        lVar31 = *(long *)(lVar26 + 0x30) - *(long *)(lVar26 + 0x28);
        uVar2 = (uint)lVar31 & 0xfffffffc;
        iVar24 = (int)(uVar2 - uVar4) >> (*(uint *)(&DAT_01a5c16c + (long)(char)uVar25 * 4) & 0x1f);
        if (iVar24 == 1) {
          if ((uVar4 & 3) != 0) goto LAB_016babfc;
          if (*(char *)(lVar26 + 0x20) != '\0') goto LAB_016bac10;
          local_78 = auVar10;
          if ((int)uVar2 <= (int)uVar4) break;
          uVar25 = uVar4 + 3;
          if (-1 < (int)uVar4) {
            uVar25 = uVar4;
          }
          uVar30 = (long)((ulong)uVar25 << 0x20) >> 0x22;
          if ((ulong)(lVar31 >> 2) <= uVar30) goto LAB_016babf8;
          pNVar20 = (Node *)VariableTracker::State::Get
                                      ((State *)aPStack_b8,
                                       *(undefined4 *)(*(long *)(lVar26 + 0x28) + uVar30 * 4));
          if (pNVar20 == (Node *)0x0) goto LAB_016ba4c4;
          if (*(short *)(*(long *)pNVar20 + 0x10) != 0x3d) {
            local_78._0_8_ = *(undefined8 *)(pNVar20 + 8);
            if ((Node *)local_78._0_8_ != *(Node **)(lVar21 + 8)) {
              uVar30 = Type::SlowIs((Type *)local_78);
              if ((uVar30 & 1) == 0) break;
            }
            plVar42 = local_a0;
            uVar25 = *(uint *)(pNVar20 + 0x14);
            local_88 = pNVar20;
            uVar30 = base::hash_value(uVar25 & 0xffffff);
            uVar40 = plVar42[2];
            if (uVar40 != 0) {
              uVar45 = CONCAT17(POPCOUNT((char)(uVar40 >> 0x38)),
                                CONCAT16(POPCOUNT((char)(uVar40 >> 0x30)),
                                         CONCAT15(POPCOUNT((char)(uVar40 >> 0x28)),
                                                  CONCAT14(POPCOUNT((char)(uVar40 >> 0x20)),
                                                           CONCAT13(POPCOUNT((char)(uVar40 >> 0x18))
                                                                    ,CONCAT12(POPCOUNT((char)(uVar40
                                                                                             >> 0x10
                                                  )),CONCAT11(POPCOUNT((char)(uVar40 >> 8)),
                                                              POPCOUNT((char)uVar40))))))));
              uVar43 = NEON_uaddlv(uVar45,1);
              uVar29 = CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar43) & 0xffffffff;
              if (uVar29 < 2) {
                uVar32 = uVar40 - 1 & uVar30;
              }
              else {
                uVar32 = uVar30;
                if (uVar40 <= uVar30) {
                  uVar32 = 0;
                  if (uVar40 != 0) {
                    uVar32 = uVar30 / uVar40;
                  }
                  uVar32 = uVar30 - uVar32 * uVar40;
                }
              }
              puVar33 = *(undefined8 **)(plVar42[1] + uVar32 * 8);
              if ((puVar33 != (undefined8 *)0x0) &&
                 (plVar34 = (long *)*puVar33, plVar34 != (long *)0x0)) {
                do {
                  uVar35 = plVar34[1];
                  if (uVar30 == uVar35) {
                    if (*(uint *)(plVar34 + 2) == (uVar25 & 0xffffff)) goto LAB_016bab18;
                  }
                  else {
                    if (uVar29 < 2) {
                      uVar35 = uVar35 & uVar40 - 1;
                    }
                    else if (uVar40 <= uVar35) {
                      uVar6 = 0;
                      if (uVar40 != 0) {
                        uVar6 = uVar35 / uVar40;
                      }
                      uVar35 = uVar35 - uVar6 * uVar40;
                    }
                    if (uVar35 != uVar32) break;
                  }
                  plVar34 = (long *)*plVar34;
                } while (plVar34 != (long *)0x0);
              }
            }
            goto LAB_016bab1c;
          }
        }
        else {
          if (iVar24 != 2) break;
          if ((uVar4 & 3) != 0) goto LAB_016babfc;
          if (*(char *)(lVar26 + 0x20) != '\0') goto LAB_016bac10;
          lVar31 = *(long *)(lVar26 + 0x30) - *(long *)(lVar26 + 0x28);
          local_78 = auVar11;
          if ((int)((uint)lVar31 & 0xfffffffc) <= (int)uVar4) break;
          uVar25 = uVar4 + 3;
          if (-1 < (int)uVar4) {
            uVar25 = uVar4;
          }
          uVar30 = (long)((ulong)uVar25 << 0x20) >> 0x22;
          if ((ulong)(lVar31 >> 2) <= uVar30) goto LAB_016babf8;
          pNVar28 = (Node *)VariableTracker::State::Get
                                      ((State *)aPStack_b8,
                                       *(undefined4 *)(*(long *)(lVar26 + 0x28) + uVar30 * 4));
          if (pNVar28 != (Node *)0x0) {
            if (*(short *)(*(long *)pNVar28 + 0x10) == 0x3d) break;
            local_78._0_8_ = *(undefined8 *)(pNVar28 + 8);
            if ((Node *)local_78._0_8_ != *(Node **)(lVar21 + 8)) {
              uVar30 = Type::SlowIs((Type *)local_78);
              if ((uVar30 & 1) == 0) break;
            }
          }
          uVar25 = *(byte *)(lVar21 + 0x10) - 1;
          if (0xc < uVar25) {
LAB_016bac24:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar25 = (1 << (ulong)(*(uint *)(&DAT_01a5c16c + (long)(char)uVar25 * 4) & 0x1f)) +
                   *(int *)(lVar21 + 4);
          if ((uVar25 & 3) != 0) {
LAB_016babfc:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsAligned(offset, kTaggedSize)");
          }
          if (*(char *)(lVar26 + 0x20) != '\0') {
LAB_016bac10:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","!HasEscaped()");
          }
          lVar31 = *(long *)(lVar26 + 0x30) - *(long *)(lVar26 + 0x28);
          if ((int)((uint)lVar31 & 0xfffffffc) <= (int)uVar25) break;
          uVar2 = uVar25 + 3;
          if (-1 < (int)uVar25) {
            uVar2 = uVar25;
          }
          uVar30 = (long)((ulong)uVar2 << 0x20) >> 0x22;
          if ((ulong)(lVar31 >> 2) <= uVar30) {
LAB_016babf8:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pNVar22 = (Node *)VariableTracker::State::Get
                                      ((State *)aPStack_b8,
                                       *(undefined4 *)(*(long *)(lVar26 + 0x28) + uVar30 * 4));
          if (pNVar22 == (Node *)0x0) goto switchD_016b93a0_caseD_29;
          if (*(short *)(*(long *)pNVar22 + 0x10) != 0x3d) {
            local_80 = *(int **)(pNVar22 + 8);
            if (local_80 != *(int **)(lVar21 + 8)) {
              uVar30 = Type::SlowIs((Type *)&local_80);
              if ((uVar30 & 1) == 0) break;
            }
            if (pNVar28 == (Node *)0x0) goto switchD_016b93a0_caseD_29;
            pGVar39 = *(Graph **)this_00;
            pOVar37 = (Operator *)
                      SimplifiedOperatorBuilder::NumberEqual
                                (*(SimplifiedOperatorBuilder **)(this_00 + 0x178));
            local_78._8_8_ = JSGraph::ZeroConstant(this_00);
            local_78._0_8_ = pNVar20;
            pNVar20 = (Node *)Graph::NewNode(pGVar39,pOVar37,2,(Node **)local_78,false);
            *(undefined8 *)(pNVar20 + 8) = 0x201;
            pGVar39 = *(Graph **)this_00;
            pOVar37 = (Operator *)
                      CommonOperatorBuilder::Select
                                (*(CommonOperatorBuilder **)(this_00 + 8),
                                 *(undefined1 *)(lVar21 + 0x10),0);
            local_78._0_8_ = pNVar20;
            local_78._8_8_ = pNVar28;
            local_68 = pNVar22;
            local_88 = (Node *)Graph::NewNode(pGVar39,pOVar37,3,(Node **)local_78,false);
            plVar42 = local_a0;
            *(undefined8 *)(local_88 + 8) = *(undefined8 *)(lVar21 + 8);
            if (local_88 == (Node *)0x0) {
              local_90 = 0;
            }
            else {
              uVar25 = *(uint *)(local_88 + 0x14);
              uVar30 = base::hash_value(uVar25 & 0xffffff);
              uVar40 = plVar42[2];
              if (uVar40 != 0) {
                uVar45 = CONCAT17(POPCOUNT((char)(uVar40 >> 0x38)),
                                  CONCAT16(POPCOUNT((char)(uVar40 >> 0x30)),
                                           CONCAT15(POPCOUNT((char)(uVar40 >> 0x28)),
                                                    CONCAT14(POPCOUNT((char)(uVar40 >> 0x20)),
                                                             CONCAT13(POPCOUNT((char)(uVar40 >> 0x18
                                                                                     )),
                                                                      CONCAT12(POPCOUNT((char)(
                                                  uVar40 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)(uVar40 >> 8)),
                                                           POPCOUNT((char)uVar40))))))));
                uVar43 = NEON_uaddlv(uVar45,1);
                uVar29 = CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar43) & 0xffffffff;
                if (uVar29 < 2) {
                  uVar32 = uVar40 - 1 & uVar30;
                }
                else {
                  uVar32 = uVar30;
                  if (uVar40 <= uVar30) {
                    uVar32 = 0;
                    if (uVar40 != 0) {
                      uVar32 = uVar30 / uVar40;
                    }
                    uVar32 = uVar30 - uVar32 * uVar40;
                  }
                }
                plVar34 = *(long **)(plVar42[1] + uVar32 * 8);
                if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)
                   ) {
                  do {
                    uVar35 = plVar34[1];
                    if (uVar30 == uVar35) {
                      if (*(uint *)(plVar34 + 2) == (uVar25 & 0xffffff)) {
                        plVar42 = plVar34 + 3;
                        break;
                      }
                    }
                    else {
                      if (uVar29 < 2) {
                        uVar35 = uVar35 & uVar40 - 1;
                      }
                      else if (uVar40 <= uVar35) {
                        uVar6 = 0;
                        if (uVar40 != 0) {
                          uVar6 = uVar35 / uVar40;
                        }
                        uVar35 = uVar35 - uVar6 * uVar40;
                      }
                      if (uVar35 != uVar32) break;
                    }
                    plVar34 = (long *)*plVar34;
                  } while (plVar34 != (long *)0x0);
                }
              }
              local_90 = *plVar42;
            }
            EscapeAnalysisTracker::Scope::SetEscaped((Scope *)local_d0,pNVar28);
            pNVar18 = pNVar22;
          }
        }
      }
    }
    break;
  case 0xf1:
    pNVar18 = (Node *)NodeProperties::GetValueInput(local_d0[0],0);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(pNVar18 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar26 + uVar29 * 8;
        pNVar20 = local_d0[0];
        plVar42 = local_a0;
      }
    }
    pNVar28 = *(Node **)(lVar26 + uVar40 * 8);
    if (pNVar28 != (Node *)0x0) {
      pNVar18 = pNVar28;
    }
    pNVar20 = (Node *)NodeProperties::GetValueInput(pNVar20,1);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(pNVar20 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar26 + uVar29 * 8;
      }
    }
    pNVar28 = *(Node **)(lVar26 + uVar40 * 8);
    if (pNVar28 != (Node *)0x0) {
      pNVar20 = pNVar28;
    }
    lVar21 = EscapeAnalysisTracker::Scope::GetVirtualObject((Scope *)local_d0,pNVar18);
    pNVar28 = local_88;
    if ((lVar21 != 0) && (*(char *)(lVar21 + 0x20) == '\0')) {
      lVar26 = FieldAccessOf(pOVar37);
      uVar25 = *(uint *)(lVar26 + 4);
      if ((uVar25 & 3) != 0) goto LAB_016babfc;
      if (*(char *)(lVar21 + 0x20) != '\0') goto LAB_016bac10;
      lVar26 = *(long *)(lVar21 + 0x28);
      lVar21 = *(long *)(lVar21 + 0x30) - lVar26;
      pNVar28 = local_88;
      if ((int)uVar25 < (int)((uint)lVar21 & 0xfffffffc)) {
        uVar2 = uVar25 + 3;
        if (-1 < (int)uVar25) {
          uVar2 = uVar25;
        }
LAB_016b9d1c:
        uVar30 = (long)((ulong)uVar2 << 0x20) >> 0x22;
        if ((ulong)(lVar21 >> 2) <= uVar30) goto LAB_016babf8;
        iVar24 = *(int *)(lVar26 + uVar30 * 4);
        if (iVar24 == -1) {
LAB_016babe4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","var != Variable::Invalid()");
        }
        PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
        ::Set(aPStack_b8,iVar24,pNVar20);
        goto LAB_016b9ff8;
      }
    }
LAB_016ba414:
    local_88 = pNVar28;
    EscapeAnalysisTracker::Scope::SetEscaped((Scope *)local_d0,pNVar18);
    pNVar18 = pNVar20;
    break;
  case 0xf2:
    pNVar18 = (Node *)NodeProperties::GetValueInput(local_d0[0],0);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(pNVar18 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar26 + uVar29 * 8;
        pNVar20 = local_d0[0];
        plVar42 = local_a0;
      }
    }
    pNVar28 = *(Node **)(lVar26 + uVar40 * 8);
    if (pNVar28 != (Node *)0x0) {
      pNVar18 = pNVar28;
    }
    lVar26 = NodeProperties::GetValueInput(pNVar20,1);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar21 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(lVar26 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar21 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar21 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar21 + uVar29 * 8;
        pNVar20 = local_d0[0];
        plVar42 = local_a0;
      }
    }
    lVar21 = *(long *)(lVar21 + uVar40 * 8);
    if (lVar21 != 0) {
      lVar26 = lVar21;
    }
    pNVar20 = (Node *)NodeProperties::GetValueInput(pNVar20,2);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar21 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(pNVar20 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar21 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar21 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar21 + uVar29 * 8;
      }
    }
    pNVar28 = *(Node **)(lVar21 + uVar40 * 8);
    if (pNVar28 != (Node *)0x0) {
      pNVar20 = pNVar28;
    }
    lVar21 = EscapeAnalysisTracker::Scope::GetVirtualObject((Scope *)local_d0,pNVar18);
    if (((lVar21 != 0) && (*(char *)(lVar21 + 0x20) == '\0')) &&
       (uVar30 = FUN_016bc8a0(pOVar37,lVar26), (uVar30 & 0xff) != 0)) {
      uVar25 = (uint)(uVar30 >> 0x20);
      if ((uVar30 >> 0x20 & 3) != 0) goto LAB_016babfc;
      if (*(char *)(lVar21 + 0x20) != '\0') goto LAB_016bac10;
      lVar26 = *(long *)(lVar21 + 0x28);
      lVar21 = *(long *)(lVar21 + 0x30) - lVar26;
      if ((int)uVar25 < (int)((uint)lVar21 & 0xfffffffc)) {
        uVar2 = uVar25 + 3;
        if (-1 < (long)uVar30) {
          uVar2 = uVar25;
        }
        goto LAB_016b9d1c;
      }
    }
    EscapeAnalysisTracker::Scope::SetEscaped((Scope *)local_d0,pNVar20);
    break;
  default:
    switch(sVar5) {
    case 0x28:
      lVar26 = NodeProperties::GetValueInput(local_d0[0],0);
      pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                 *)(plVar42 + 8);
      lVar21 = *(long *)pvVar38;
      uVar40 = (ulong)*(uint *)(lVar26 + 0x14) & 0xffffff;
      uVar30 = plVar42[9] - lVar21 >> 3;
      if (uVar30 <= uVar40) {
        uVar29 = (ulong)((int)uVar40 + 1);
        if (uVar30 < uVar29) {
          std::__ndk1::
          vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
          ::__append(pvVar38,uVar29 - uVar30);
          lVar21 = *(long *)pvVar38;
        }
        else if (uVar30 != uVar29) {
          plVar42[9] = lVar21 + uVar29 * 8;
          plVar42 = local_a0;
        }
      }
      lVar21 = *(long *)(lVar21 + uVar40 * 8);
      if (lVar21 != 0) {
        lVar26 = lVar21;
      }
      uVar25 = *(uint *)(lVar26 + 0x14) & 0xffffff;
      uVar30 = base::hash_value(uVar25);
      uVar40 = plVar42[2];
      if (uVar40 != 0) {
        uVar45 = CONCAT17(POPCOUNT((char)(uVar40 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar40 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar40 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar40 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar40 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar40 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar40 >> 8)),POPCOUNT((char)uVar40))))))));
        uVar43 = NEON_uaddlv(uVar45,1);
        uVar29 = CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar43) & 0xffffffff;
        if (uVar29 < 2) {
          uVar32 = uVar40 - 1 & uVar30;
        }
        else {
          uVar32 = uVar30;
          if (uVar40 <= uVar30) {
            uVar32 = 0;
            if (uVar40 != 0) {
              uVar32 = uVar30 / uVar40;
            }
            uVar32 = uVar30 - uVar32 * uVar40;
          }
        }
        plVar34 = *(long **)(plVar42[1] + uVar32 * 8);
        if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
          do {
            uVar35 = plVar34[1];
            if (uVar30 == uVar35) {
              if (*(uint *)(plVar34 + 2) == uVar25) goto LAB_016ba4b8;
            }
            else {
              if (uVar29 < 2) {
                uVar35 = uVar35 & uVar40 - 1;
              }
              else if (uVar40 <= uVar35) {
                uVar6 = 0;
                if (uVar40 != 0) {
                  uVar6 = uVar35 / uVar40;
                }
                uVar35 = uVar35 - uVar6 * uVar40;
              }
              if (uVar35 != uVar32) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
      goto LAB_016ba4bc;
    case 0x29:
    case 0x2a:
      goto switchD_016b93a0_caseD_29;
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      goto switchD_016b931c_caseD_d7;
    case 0x39:
      pNVar20 = (Node *)NodeProperties::GetValueInput(local_d0[0],0);
      pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                 *)(plVar42 + 8);
      lVar26 = *(long *)pvVar38;
      uVar40 = (ulong)*(uint *)(pNVar20 + 0x14) & 0xffffff;
      uVar30 = plVar42[9] - lVar26 >> 3;
      if (uVar30 <= uVar40) {
        uVar29 = (ulong)((int)uVar40 + 1);
        if (uVar30 < uVar29) {
          std::__ndk1::
          vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
          ::__append(pvVar38,uVar29 - uVar30);
          lVar26 = *(long *)pvVar38;
        }
        else if (uVar30 != uVar29) {
          plVar42[9] = lVar26 + uVar29 * 8;
        }
      }
      pNVar18 = *(Node **)(lVar26 + uVar40 * 8);
      if (pNVar18 != (Node *)0x0) {
        pNVar20 = pNVar18;
      }
      lVar26 = EscapeAnalysisTracker::Scope::GetVirtualObject((Scope *)local_d0,pNVar20);
      if ((lVar26 == 0) || (*(char *)(lVar26 + 0x20) != '\0')) goto switchD_016b93a0_caseD_29;
      goto LAB_016b9ff8;
    case 0x3a:
      lVar26 = NodeProperties::GetValueInput(local_d0[0],0);
      pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                 *)(plVar42 + 8);
      lVar21 = *(long *)pvVar38;
      uVar40 = (ulong)*(uint *)(lVar26 + 0x14) & 0xffffff;
      uVar30 = plVar42[9] - lVar21 >> 3;
      if (uVar30 <= uVar40) {
        uVar29 = (ulong)((int)uVar40 + 1);
        if (uVar30 < uVar29) {
          std::__ndk1::
          vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
          ::__append(pvVar38,uVar29 - uVar30);
          lVar21 = *(long *)pvVar38;
        }
        else if (uVar30 != uVar29) {
          plVar42[9] = lVar21 + uVar29 * 8;
          plVar42 = local_a0;
        }
      }
      lVar21 = *(long *)(lVar21 + uVar40 * 8);
      if (lVar21 != 0) {
        lVar26 = lVar21;
      }
      uVar25 = *(uint *)(lVar26 + 0x14) & 0xffffff;
      uVar30 = base::hash_value(uVar25);
      uVar40 = plVar42[2];
      if (uVar40 != 0) {
        uVar45 = CONCAT17(POPCOUNT((char)(uVar40 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar40 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar40 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar40 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar40 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar40 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar40 >> 8)),POPCOUNT((char)uVar40))))))));
        uVar43 = NEON_uaddlv(uVar45,1);
        uVar29 = CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar43) & 0xffffffff;
        if (uVar29 < 2) {
          uVar32 = uVar40 - 1 & uVar30;
        }
        else {
          uVar32 = uVar30;
          if (uVar40 <= uVar30) {
            uVar32 = 0;
            if (uVar40 != 0) {
              uVar32 = uVar30 / uVar40;
            }
            uVar32 = uVar30 - uVar32 * uVar40;
          }
        }
        puVar33 = *(undefined8 **)(plVar42[1] + uVar32 * 8);
        if ((puVar33 != (undefined8 *)0x0) && (plVar34 = (long *)*puVar33, plVar34 != (long *)0x0))
        {
          do {
            uVar35 = plVar34[1];
            if (uVar30 == uVar35) {
              if (*(uint *)(plVar34 + 2) == uVar25) goto LAB_016ba4b8;
            }
            else {
              if (uVar29 < 2) {
                uVar35 = uVar35 & uVar40 - 1;
              }
              else if (uVar40 <= uVar35) {
                uVar6 = 0;
                if (uVar40 != 0) {
                  uVar6 = uVar35 / uVar40;
                }
                uVar35 = uVar35 - uVar6 * uVar40;
              }
              if (uVar35 != uVar32) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
LAB_016ba4bc:
      local_90 = *plVar42;
      goto switchD_016b93a0_caseD_29;
    }
    if (sVar5 == 0x75) {
      pNVar18 = (Node *)NodeProperties::GetValueInput(local_d0[0],0);
      pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                 *)(plVar42 + 8);
      lVar26 = *(long *)pvVar38;
      uVar40 = (ulong)*(uint *)(pNVar18 + 0x14) & 0xffffff;
      uVar30 = plVar42[9] - lVar26 >> 3;
      if (uVar30 <= uVar40) {
        uVar29 = (ulong)((int)uVar40 + 1);
        if (uVar30 < uVar29) {
          std::__ndk1::
          vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
          ::__append(pvVar38,uVar29 - uVar30);
          lVar26 = *(long *)pvVar38;
        }
        else if (uVar30 != uVar29) {
          plVar42[9] = lVar26 + uVar29 * 8;
          pNVar20 = local_d0[0];
          plVar42 = local_a0;
        }
      }
      pNVar28 = *(Node **)(lVar26 + uVar40 * 8);
      if (pNVar28 != (Node *)0x0) {
        pNVar18 = pNVar28;
      }
      pNVar20 = (Node *)NodeProperties::GetValueInput(pNVar20,1);
      pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                 *)(plVar42 + 8);
      lVar26 = *(long *)pvVar38;
      uVar40 = (ulong)*(uint *)(pNVar20 + 0x14) & 0xffffff;
      uVar30 = plVar42[9] - lVar26 >> 3;
      if (uVar30 <= uVar40) {
        uVar29 = (ulong)((int)uVar40 + 1);
        if (uVar30 < uVar29) {
          std::__ndk1::
          vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
          ::__append(pvVar38,uVar29 - uVar30);
          lVar26 = *(long *)pvVar38;
        }
        else if (uVar30 != uVar29) {
          plVar42[9] = lVar26 + uVar29 * 8;
        }
      }
      pNVar28 = *(Node **)(lVar26 + uVar40 * 8);
      if (pNVar28 != (Node *)0x0) {
        pNVar20 = pNVar28;
      }
      lVar26 = EscapeAnalysisTracker::Scope::GetVirtualObject((Scope *)local_d0,pNVar18);
      lVar21 = EscapeAnalysisTracker::Scope::GetVirtualObject((Scope *)local_d0,pNVar20);
      if ((lVar26 == 0) || (*(char *)(lVar26 + 0x20) != '\0')) {
        pNVar28 = local_88;
        if ((lVar21 == 0) || (*(char *)(lVar21 + 0x20) != '\0')) goto LAB_016ba414;
LAB_016ba3e8:
        pNVar22 = (Node *)JSGraph::FalseConstant(this_00);
        plVar42 = local_a0;
        pNVar28 = local_88;
      }
      else {
        if (((lVar21 == 0) || (*(char *)(lVar21 + 0x20) != '\0')) ||
           (*(int *)(lVar26 + 0x24) != *(int *)(lVar21 + 0x24))) goto LAB_016ba3e8;
        pNVar22 = (Node *)JSGraph::TrueConstant(this_00);
        plVar42 = local_a0;
        pNVar28 = local_88;
      }
      local_88 = pNVar22;
      local_a0 = plVar42;
      if (((local_88 != (Node *)0x0) && (*(long *)(pNVar18 + 8) != 1)) &&
         (*(long *)(pNVar20 + 8) != 1)) {
        uVar25 = *(uint *)(local_88 + 0x14);
        uVar30 = base::hash_value(uVar25 & 0xffffff);
        uVar40 = plVar42[2];
        if (uVar40 != 0) {
          uVar45 = CONCAT17(POPCOUNT((char)(uVar40 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar40 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar40 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar40 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar40 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar40 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar40 >> 8)),POPCOUNT((char)uVar40))))))));
          uVar43 = NEON_uaddlv(uVar45,1);
          uVar29 = CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar43) & 0xffffffff;
          if (uVar29 < 2) {
            uVar32 = uVar40 - 1 & uVar30;
          }
          else {
            uVar32 = uVar30;
            if (uVar40 <= uVar30) {
              uVar32 = 0;
              if (uVar40 != 0) {
                uVar32 = uVar30 / uVar40;
              }
              uVar32 = uVar30 - uVar32 * uVar40;
            }
          }
          puVar33 = *(undefined8 **)(plVar42[1] + uVar32 * 8);
          if ((puVar33 != (undefined8 *)0x0) && (plVar34 = (long *)*puVar33, plVar34 != (long *)0x0)
             ) {
            do {
              uVar35 = plVar34[1];
              if (uVar30 == uVar35) {
                if (*(uint *)(plVar34 + 2) == (uVar25 & 0xffffff)) goto LAB_016bab18;
              }
              else {
                if (uVar29 < 2) {
                  uVar35 = uVar35 & uVar40 - 1;
                }
                else if (uVar40 <= uVar35) {
                  uVar6 = 0;
                  if (uVar40 != 0) {
                    uVar6 = uVar35 / uVar40;
                  }
                  uVar35 = uVar35 - uVar6 * uVar40;
                }
                if (uVar35 != uVar32) break;
              }
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
        }
        goto LAB_016bab1c;
      }
      goto LAB_016ba414;
    }
switchD_016b931c_caseD_d7:
    iVar24 = *(int *)(pOVar37 + 0x14);
    if (0 < iVar24) {
      iVar36 = 0;
      while( true ) {
        plVar42 = local_a0;
        pNVar20 = (Node *)NodeProperties::GetValueInput(local_d0[0],iVar36);
        pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                   *)(plVar42 + 8);
        lVar26 = *(long *)pvVar38;
        uVar40 = (ulong)*(uint *)(pNVar20 + 0x14) & 0xffffff;
        uVar30 = plVar42[9] - lVar26 >> 3;
        if (uVar30 <= uVar40) {
          uVar29 = (ulong)((int)uVar40 + 1);
          if (uVar30 < uVar29) {
            std::__ndk1::
            vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
            ::__append(pvVar38,uVar29 - uVar30);
            lVar26 = *(long *)pvVar38;
          }
          else if (uVar30 != uVar29) {
            plVar42[9] = lVar26 + uVar29 * 8;
          }
        }
        pNVar18 = *(Node **)(lVar26 + uVar40 * 8);
        if (pNVar18 != (Node *)0x0) {
          pNVar20 = pNVar18;
        }
        EscapeAnalysisTracker::Scope::SetEscaped((Scope *)local_d0,pNVar20);
        if (iVar24 + -1 == iVar36) break;
        iVar36 = iVar36 + 1;
      }
    }
    uVar30 = OperatorProperties::HasContextInput(pOVar37);
    plVar42 = local_a0;
    if ((uVar30 & 1) == 0) goto switchD_016b93a0_caseD_29;
    pNVar18 = (Node *)NodeProperties::GetContextInput(local_d0[0]);
    pvVar38 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               *)(plVar42 + 8);
    lVar26 = *(long *)pvVar38;
    uVar40 = (ulong)*(uint *)(pNVar18 + 0x14) & 0xffffff;
    uVar30 = plVar42[9] - lVar26 >> 3;
    if (uVar30 <= uVar40) {
      uVar29 = (ulong)((int)uVar40 + 1);
      if (uVar30 < uVar29) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::__append(pvVar38,uVar29 - uVar30);
        lVar26 = *(long *)pvVar38;
      }
      else if (uVar30 != uVar29) {
        plVar42[9] = lVar26 + uVar29 * 8;
      }
    }
    auVar14._8_8_ = local_78._8_8_;
    auVar14._0_8_ = local_78._0_8_;
    pNVar20 = *(Node **)(lVar26 + uVar40 * 8);
    if (pNVar20 != (Node *)0x0) {
      pNVar18 = pNVar20;
      local_78 = auVar14;
    }
  }
LAB_016ba4b0:
  EscapeAnalysisTracker::Scope::SetEscaped((Scope *)local_d0,pNVar18);
switchD_016b93a0_caseD_29:
  EscapeAnalysisTracker::Scope::~Scope((Scope *)local_d0);
  return;
LAB_016ba4b8:
  plVar42 = plVar34 + 3;
  goto LAB_016ba4bc;
LAB_016bab18:
  plVar42 = plVar34 + 3;
LAB_016bab1c:
  local_90 = *plVar42;
  goto switchD_016b93a0_caseD_29;
}

