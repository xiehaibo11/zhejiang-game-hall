
/* v8::internal::compiler::EffectControlLinearizer::Run() */

void __thiscall v8::internal::compiler::EffectControlLinearizer::Run(EffectControlLinearizer *this)

{
  GraphAssembler *this_00;
  Node *this_01;
  Graph *pGVar1;
  SourcePositionTable *this_02;
  undefined8 *puVar2;
  CommonOperatorBuilder *this_03;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  Use *pUVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  Node *pNVar12;
  Node *pNVar13;
  long lVar14;
  undefined8 uVar15;
  Operator *pOVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  Node *pNVar19;
  Node *pNVar20;
  Node *pNVar21;
  Node **ppNVar22;
  undefined8 *puVar23;
  Node *pNVar24;
  Node **ppNVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  Use *pUVar29;
  Use *pUVar30;
  Node *this_04;
  long *plVar31;
  long *plVar32;
  Zone *this_05;
  Node *pNVar33;
  ulong uVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  long *plVar37;
  ulong uVar38;
  Node **ppNVar39;
  Node *pNVar40;
  Node *pNVar41;
  Use *pUVar42;
  undefined8 uVar43;
  BasicBlock *pBVar44;
  undefined8 *puVar45;
  long lVar46;
  long *plVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  Zone *pZVar50;
  undefined8 *local_160;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined8 *local_128;
  long *local_120;
  Node *local_d8;
  Node **local_d0;
  Node **local_c8;
  Node **local_c0;
  Zone *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  Zone *local_a0;
  undefined8 uStack_98;
  Node *local_90;
  Node *local_88;
  Node *local_80;
  Node *local_78;
  undefined8 uStack_70;
  
  this_05 = *(Zone **)(this + 0x10);
  local_b0 = &local_a8;
  local_d0 = (Node **)0x0;
  local_c8 = (Node **)0x0;
  local_a8 = 0;
  uStack_98 = 0;
  local_c0 = (Node **)0x0;
  puVar23 = *(undefined8 **)(*(long *)(this + 8) + 0x48);
  puVar2 = *(undefined8 **)(*(long *)(this + 8) + 0x50);
  local_b8 = this_05;
  local_a0 = this_05;
  if (puVar23 == puVar2) {
    puVar48 = (undefined8 *)0x0;
    puVar45 = (undefined8 *)0x0;
  }
  else {
    puVar45 = (undefined8 *)0x0;
    puVar48 = (undefined8 *)0x0;
    this_00 = (GraphAssembler *)(this + 0x38);
    local_128 = (undefined8 *)0x0;
    local_120 = (long *)0x0;
    plVar37 = (long *)0x0;
    plVar27 = (long *)0x0;
    do {
      pBVar44 = (BasicBlock *)*puVar23;
      GraphAssembler::Reset(this_00,pBVar44);
      puVar36 = *(undefined8 **)(pBVar44 + 0x40);
      puVar35 = *(undefined8 **)(pBVar44 + 0x48);
      pNVar40 = (Node *)*puVar36;
      GraphAssembler::AddNode(this_00,pNVar40);
      sVar5 = *(short *)(*(long *)pNVar40 + 0x10);
      plVar31 = plVar37;
      if (sVar5 == 1) {
        if (plVar27 == local_120) {
          lVar11 = (long)plVar27 - (long)plVar37 >> 3;
          uVar38 = lVar11 + 1;
          if (uVar38 >> 0x1c != 0) goto LAB_016a0ebc;
          uVar34 = (long)local_120 - (long)plVar37 >> 2;
          if (uVar38 <= uVar34) {
            uVar38 = uVar34;
          }
          if (0x7fffffe < (ulong)((long)local_120 - (long)plVar37 >> 3)) {
            uVar38 = 0xfffffff;
          }
          if (uVar38 == 0) {
            lVar26 = 0;
          }
          else {
            uVar34 = uVar38 * 8;
            lVar26 = *(long *)(this_05 + 0x10);
            if (uVar34 < (ulong)(*(long *)(this_05 + 0x18) - lVar26) ||
                uVar34 - (*(long *)(this_05 + 0x18) - lVar26) == 0) {
              *(ulong *)(this_05 + 0x10) = lVar26 + uVar34;
            }
            else {
              lVar26 = Zone::NewExpand(this_05,uVar34);
            }
          }
          plVar31 = (long *)(lVar26 + lVar11 * 8);
          local_120 = (long *)(lVar26 + uVar38 * 8);
          plVar32 = plVar31 + 1;
          *plVar31 = (long)pBVar44;
          while (plVar27 != plVar37) {
            plVar27 = plVar27 + -1;
            plVar31 = plVar31 + -1;
            *plVar31 = *plVar27;
          }
        }
        else {
          *plVar27 = (long)pBVar44;
          plVar32 = plVar27 + 1;
        }
      }
      else {
        pNVar41 = (Node *)**(undefined8 **)(pBVar44 + 0x40);
        plVar32 = plVar27;
        if (((*(short *)(*(long *)pNVar41 + 0x10) != 0x16) &&
            (iVar10 = *(int *)(*(long *)pNVar41 + 0x1c), 0 < iVar10)) &&
           (*(long *)(pBVar44 + 0x88) - *(long *)(pBVar44 + 0x80) >> 3 == (long)iVar10)) {
          lVar11 = 0;
          do {
            pNVar33 = (Node *)NodeProperties::GetControlInput(pNVar41,(int)lVar11);
            lVar26 = FUN_016a0ec0(&local_b0,*(undefined8 *)(*(long *)(pBVar44 + 0x80) + lVar11 * 8),
                                  pBVar44);
            if (pNVar33 != *(Node **)(lVar26 + 8)) {
              NodeProperties::ReplaceControlInput(pNVar41,*(Node **)(lVar26 + 8),(int)lVar11);
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(*(long *)pNVar41 + 0x1c));
        }
      }
      puVar36 = puVar36 + 1;
      puVar17 = puVar45;
      puVar18 = puVar48;
      if (puVar36 == puVar35) {
        pNVar41 = (Node *)0x0;
        puVar49 = puVar35;
LAB_0169fc90:
        if (*(BasicBlock **)(*(long *)(this + 8) + 0x68) == pBVar44) {
          pNVar13 = *(Node **)(**(long **)this + 8);
        }
        else if (*(short *)(*(long *)pNVar40 + 0x10) == 0x16) {
          pNVar13 = (Node *)0x0;
        }
        else {
          lVar11 = *(long *)(pBVar44 + 0x80);
          if (*(long *)(pBVar44 + 0x88) != lVar11) {
            uVar38 = 0;
            pNVar33 = (Node *)0x0;
            do {
              puVar36 = (undefined8 *)
                        FUN_016a0ec0(&local_b0,*(undefined8 *)(lVar11 + uVar38 * 8),pBVar44);
              pNVar13 = (Node *)*puVar36;
              if (pNVar33 != (Node *)0x0) {
                pNVar13 = pNVar33;
              }
              if ((Node *)*puVar36 != pNVar13) goto LAB_0169febc;
              lVar11 = *(long *)(pBVar44 + 0x80);
              uVar38 = uVar38 + 1;
              pNVar33 = pNVar13;
            } while (uVar38 < (ulong)(*(long *)(pBVar44 + 0x88) - lVar11 >> 3));
            if (pNVar13 != (Node *)0x0) {
              if (*(short *)(*(long *)pNVar40 + 0x10) == 7) {
                NodeProperties::ReplaceEffectInput(pNVar40,pNVar13,0);
                pNVar13 = pNVar40;
              }
              goto joined_r0x0169fc88;
            }
          }
LAB_0169febc:
          local_c8 = local_d0;
          puVar36 = *(undefined8 **)this;
          pNVar33 = (Node *)puVar36[0x2c];
          uVar38 = *(long *)(pBVar44 + 0x88) - *(long *)(pBVar44 + 0x80) >> 3;
          if (pNVar33 == (Node *)0x0) {
            pGVar1 = (Graph *)*puVar36;
            pOVar16 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar36[1]);
            local_90 = (Node *)0x0;
            pNVar33 = (Node *)Graph::NewNode(pGVar1,pOVar16,0,&local_90,false);
            puVar36[0x2c] = pNVar33;
          }
          uVar34 = (long)local_c8 - (long)local_d0 >> 3;
          local_90 = pNVar33;
          if (uVar38 < uVar34 || uVar38 - uVar34 == 0) {
            if (uVar38 < uVar34) {
              local_c8 = local_d0 + uVar38;
            }
          }
          else {
            std::__ndk1::
            vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
            ::__append((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                        *)&local_d0,uVar38 - uVar34,&local_90);
          }
          if (local_c8 == local_c0) {
            lVar11 = (long)local_c8 - (long)local_d0 >> 3;
            uVar38 = lVar11 + 1;
            if (uVar38 >> 0x1c != 0) goto LAB_016a0ebc;
            uVar34 = (long)local_c0 - (long)local_d0 >> 2;
            if (uVar38 <= uVar34) {
              uVar38 = uVar34;
            }
            if (0x7fffffe < (ulong)((long)local_c0 - (long)local_d0 >> 3)) {
              uVar38 = 0xfffffff;
            }
            if (uVar38 == 0) {
              lVar26 = 0;
            }
            else {
              uVar34 = uVar38 * 8;
              lVar26 = *(long *)(local_b8 + 0x10);
              if (uVar34 < (ulong)(*(long *)(local_b8 + 0x18) - lVar26) ||
                  uVar34 - (*(long *)(local_b8 + 0x18) - lVar26) == 0) {
                *(ulong *)(local_b8 + 0x10) = lVar26 + uVar34;
              }
              else {
                lVar26 = Zone::NewExpand(local_b8,uVar34);
              }
            }
            ppNVar22 = (Node **)(lVar26 + lVar11 * 8);
            *ppNVar22 = pNVar40;
            local_c0 = (Node **)(lVar26 + uVar38 * 8);
            ppNVar25 = ppNVar22;
            while (local_c8 != local_d0) {
              local_c8 = local_c8 + -1;
              ppNVar25 = ppNVar25 + -1;
              *ppNVar25 = *local_c8;
            }
          }
          else {
            *local_c8 = pNVar40;
            ppNVar25 = local_d0;
            ppNVar22 = local_c8;
          }
          local_d0 = ppNVar25;
          local_c8 = ppNVar22 + 1;
          pGVar1 = (Graph *)**(undefined8 **)this;
          pOVar16 = (Operator *)
                    CommonOperatorBuilder::EffectPhi
                              ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],
                               (int)((ulong)(*(long *)(pBVar44 + 0x88) - *(long *)(pBVar44 + 0x80))
                                    >> 3));
          pNVar13 = (Node *)Graph::NewNode(pGVar1,pOVar16,
                                           (int)((ulong)((long)local_c8 - (long)local_d0) >> 3),
                                           local_d0,false);
          GraphAssembler::AddNode(this_00,pNVar13);
          if (*(short *)(*(long *)pNVar40 + 0x10) == 1) {
            if (puVar48 < local_128) {
              *puVar48 = pNVar13;
              puVar48[1] = pBVar44;
              puVar18 = puVar48 + 2;
            }
            else {
              lVar11 = (long)puVar48 - (long)puVar45 >> 4;
              uVar38 = lVar11 + 1;
              if (uVar38 >> 0x1b != 0) {
LAB_016a0ebc:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar34 = (long)local_128 - (long)puVar45 >> 3;
              if (uVar38 <= uVar34) {
                uVar38 = uVar34;
              }
              if (0x3fffffe < (ulong)((long)local_128 - (long)puVar45 >> 4)) {
                uVar38 = 0x7ffffff;
              }
              if (uVar38 == 0) {
                lVar26 = 0;
              }
              else {
                uVar34 = uVar38 * 0x10;
                lVar26 = *(long *)(this_05 + 0x10);
                if (uVar34 < (ulong)(*(long *)(this_05 + 0x18) - lVar26) ||
                    uVar34 - (*(long *)(this_05 + 0x18) - lVar26) == 0) {
                  *(ulong *)(this_05 + 0x10) = lVar26 + uVar34;
                }
                else {
                  lVar26 = Zone::NewExpand(this_05,uVar34);
                }
              }
              puVar36 = (undefined8 *)(lVar26 + lVar11 * 0x10);
              local_128 = (undefined8 *)(lVar26 + uVar38 * 0x10);
              *puVar36 = pNVar13;
              puVar36[1] = pBVar44;
              puVar17 = puVar36;
              for (; puVar18 = puVar36 + 2, puVar48 != puVar45; puVar48 = puVar48 + -2) {
                uVar43 = puVar48[-2];
                puVar17[-1] = puVar48[-1];
                puVar17[-2] = uVar43;
                puVar17 = puVar17 + -2;
              }
            }
          }
          else if (0 < *(int *)(*(long *)pNVar13 + 0x18)) {
            lVar11 = 0;
            pNVar33 = pNVar13 + 0x20;
            lVar26 = -0x18;
            do {
              pNVar12 = pNVar33;
              if ((~*(uint *)(pNVar13 + 0x14) & 0xf000000) == 0) {
                pNVar12 = (Node *)(*(long *)pNVar33 + 0x10);
              }
              pNVar12 = *(Node **)(pNVar12 + lVar11 * 8);
              puVar45 = (undefined8 *)
                        FUN_016a0ec0(&local_b0,
                                     *(undefined8 *)(*(long *)(pBVar44 + 0x80) + lVar11 * 8),pBVar44
                                    );
              pNVar24 = (Node *)*puVar45;
              if (pNVar12 != pNVar24) {
                pNVar12 = pNVar33;
                if ((*(uint *)(pNVar13 + 0x14) & 0xf000000) == 0xf000000) {
                  pNVar12 = (Node *)(*(long *)pNVar33 + 0x10);
                }
                pNVar19 = *(Node **)(pNVar12 + lVar11 * 8);
                if (pNVar19 != pNVar24) {
                  pNVar20 = pNVar13;
                  if ((*(uint *)(pNVar13 + 0x14) & 0xf000000) == 0xf000000) {
                    pNVar20 = *(Node **)pNVar33;
                  }
                  if (pNVar19 != (Node *)0x0) {
                    Node::RemoveUse(pNVar19,(Use *)(pNVar20 + lVar26));
                  }
                  *(Node **)(pNVar12 + lVar11 * 8) = pNVar24;
                  if (pNVar24 != (Node *)0x0) {
                    Node::AppendUse(pNVar24,(Use *)(pNVar20 + lVar26));
                  }
                }
              }
              lVar11 = lVar11 + 1;
              lVar26 = lVar26 + -0x18;
            } while (lVar11 < *(int *)(*(long *)pNVar13 + 0x18));
          }
        }
      }
      else {
        pNVar33 = (Node *)0x0;
        pNVar12 = (Node *)0x0;
        do {
          pNVar24 = (Node *)*puVar36;
          sVar6 = *(short *)(*(long *)pNVar24 + 0x10);
          pNVar41 = pNVar24;
          pNVar13 = pNVar12;
          if (((sVar6 != 0x12) && (pNVar41 = pNVar33, pNVar13 = pNVar24, sVar6 != 0x24)) &&
             (pNVar13 = pNVar12, puVar49 = puVar36, sVar6 != 0x23)) break;
          GraphAssembler::AddNode(this_00,pNVar24);
          puVar36 = puVar36 + 1;
          pNVar33 = pNVar41;
          pNVar12 = pNVar13;
          puVar49 = puVar35;
        } while (puVar35 != puVar36);
        if (pNVar13 == (Node *)0x0) goto LAB_0169fc90;
        if (sVar5 == 1) {
          if (puVar48 < local_128) {
            *puVar48 = pNVar13;
            puVar48[1] = pBVar44;
            puVar18 = puVar48 + 2;
          }
          else {
            lVar11 = (long)puVar48 - (long)puVar45 >> 4;
            uVar38 = lVar11 + 1;
            if (uVar38 >> 0x1b != 0) goto LAB_016a0ebc;
            uVar34 = (long)local_128 - (long)puVar45 >> 3;
            if (uVar38 <= uVar34) {
              uVar38 = uVar34;
            }
            if (0x3fffffe < (ulong)((long)local_128 - (long)puVar45 >> 4)) {
              uVar38 = 0x7ffffff;
            }
            if (uVar38 == 0) {
              lVar26 = 0;
            }
            else {
              uVar34 = uVar38 * 0x10;
              lVar26 = *(long *)(this_05 + 0x10);
              if (uVar34 < (ulong)(*(long *)(this_05 + 0x18) - lVar26) ||
                  uVar34 - (*(long *)(this_05 + 0x18) - lVar26) == 0) {
                *(ulong *)(this_05 + 0x10) = lVar26 + uVar34;
              }
              else {
                lVar26 = Zone::NewExpand(this_05,uVar34);
              }
            }
            puVar36 = (undefined8 *)(lVar26 + lVar11 * 0x10);
            local_128 = (undefined8 *)(lVar26 + uVar38 * 0x10);
            *puVar36 = pNVar13;
            puVar36[1] = pBVar44;
            puVar17 = puVar36;
            for (; puVar48 != puVar45; puVar48 = puVar48 + -2) {
              uVar43 = puVar48[-2];
              puVar17[-1] = puVar48[-1];
              puVar17[-2] = uVar43;
              puVar17 = puVar17 + -2;
            }
            puVar18 = puVar36 + 2;
          }
        }
        else if (0 < *(int *)(*(long *)pNVar13 + 0x18)) {
          lVar11 = 0;
          pNVar33 = pNVar13 + 0x20;
          lVar26 = -0x18;
          do {
            pNVar12 = pNVar33;
            if ((~*(uint *)(pNVar13 + 0x14) & 0xf000000) == 0) {
              pNVar12 = (Node *)(*(long *)pNVar33 + 0x10);
            }
            pNVar24 = *(Node **)(pNVar12 + lVar11 * 8);
            puVar45 = (undefined8 *)
                      FUN_016a0ec0(&local_b0,*(undefined8 *)(*(long *)(pBVar44 + 0x80) + lVar11 * 8)
                                   ,pBVar44);
            pNVar12 = (Node *)*puVar45;
            if (pNVar24 != pNVar12) {
              pNVar24 = pNVar33;
              if ((*(uint *)(pNVar13 + 0x14) & 0xf000000) == 0xf000000) {
                pNVar24 = (Node *)(*(long *)pNVar33 + 0x10);
              }
              pNVar19 = *(Node **)(pNVar24 + lVar11 * 8);
              if (pNVar19 != pNVar12) {
                pNVar20 = pNVar13;
                if ((*(uint *)(pNVar13 + 0x14) & 0xf000000) == 0xf000000) {
                  pNVar20 = *(Node **)pNVar33;
                }
                if (pNVar19 != (Node *)0x0) {
                  Node::RemoveUse(pNVar19,(Use *)(pNVar20 + lVar26));
                }
                *(Node **)(pNVar24 + lVar11 * 8) = pNVar12;
                if (pNVar12 != (Node *)0x0) {
                  Node::AppendUse(pNVar12,(Use *)(pNVar20 + lVar26));
                }
              }
            }
            lVar11 = lVar11 + 1;
            lVar26 = lVar26 + -0x18;
          } while (lVar11 < *(int *)(*(long *)pNVar13 + 0x18));
        }
      }
joined_r0x0169fc88:
      puVar45 = puVar17;
      puVar48 = puVar18;
      if (pNVar41 != (Node *)0x0) {
        NodeProperties::ReplaceEffectInput(pNVar41,pNVar13,0);
      }
      local_d8 = (Node *)0x0;
      if (*(BasicBlock **)(*(long *)(this + 8) + 0x68) != pBVar44) {
        lVar11 = FUN_016a0ec0(&local_b0,**(undefined8 **)(pBVar44 + 0x80),pBVar44);
        pNVar41 = *(Node **)(lVar11 + 0x10);
        lVar11 = *(long *)(pBVar44 + 0x80);
        local_d8 = pNVar41;
        if (1 < (ulong)(*(long *)(pBVar44 + 0x88) - lVar11 >> 3)) {
          uVar38 = 1;
          do {
            lVar11 = FUN_016a0ec0(&local_b0,*(undefined8 *)(lVar11 + uVar38 * 8),pBVar44);
            if (*(Node **)(lVar11 + 0x10) != pNVar41) {
              local_d8 = (Node *)0x0;
              *(undefined8 *)(this + 0x70) = *(undefined8 *)(**(long **)this + 0x10);
              break;
            }
            lVar11 = *(long *)(pBVar44 + 0x80);
            uVar38 = uVar38 + 1;
          } while (uVar38 < (ulong)(*(long *)(pBVar44 + 0x88) - lVar11 >> 3));
        }
      }
      GraphAssembler::InitializeEffectControl(this_00,pNVar13,pNVar40);
      for (; puVar49 != puVar35; puVar49 = puVar49 + 1) {
        ProcessNode(this,(Node *)*puVar49,&local_d8);
      }
      lVar11 = GraphAssembler::FinalizeCurrentBlock(this_00,pBVar44);
      if (*(int *)(lVar11 + 0x34) - 2U < 7) {
        pNVar40 = *(Node **)(lVar11 + 0x38);
        lVar26 = *(long *)pNVar40;
        if (0 < *(int *)(lVar26 + 0x18)) {
          NodeProperties::ReplaceEffectInput(pNVar40,*(Node **)(this + 0x58),0);
          lVar26 = *(long *)pNVar40;
        }
        if (0 < *(int *)(lVar26 + 0x1c)) {
          iVar10 = 0;
          do {
            NodeProperties::ReplaceControlInput(pNVar40,*(Node **)(this + 0x60),iVar10);
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(*(long *)pNVar40 + 0x1c));
        }
        plVar27 = *(long **)(lVar11 + 0x38);
        lVar26 = *plVar27;
        if (*(char *)(lVar26 + 0x24) != '\0') {
          *(long **)(this + 0x58) = plVar27;
          lVar26 = *plVar27;
        }
        if (0 < *(int *)(lVar26 + 0x28)) {
          *(long **)(this + 0x60) = plVar27;
        }
      }
      if ((*(int *)(this + 0x1c) != 0) && (*(int *)(lVar11 + 0x34) == 3)) {
        pNVar40 = *(Node **)(lVar11 + 0x38);
        pZVar50 = *(Zone **)(this + 0x10);
        pGVar1 = (Graph *)**(undefined8 **)this;
        this_03 = (CommonOperatorBuilder *)(*(undefined8 **)this)[1];
        this_02 = *(SourcePositionTable **)(this + 0x28);
        lVar26 = *(long *)(this + 0x30);
        uVar38 = SourcePositionTable::GetSourcePosition(this_02,pNVar40);
        uVar43 = *(undefined8 *)(this_02 + 0x10);
        if ((uVar38 & 0x7fffffffffff) != 0) {
          *(ulong *)(this_02 + 0x10) = uVar38;
        }
        if (lVar26 == 0) {
          local_148 = 0x8000000000000000;
          puStack_138 = &DAT_0189703a;
          local_140 = &DAT_0189703a;
        }
        else {
          puStack_138 = *(undefined1 **)(lVar26 + 0x18);
          local_140 = *(undefined1 **)(lVar26 + 0x10);
          local_150 = *(undefined8 *)(lVar26 + 0x20);
          local_148 = *(undefined8 *)(lVar26 + 0x28);
          uVar3 = *(uint *)(pNVar40 + 0x14);
          *(undefined8 *)(lVar26 + 0x10) = *(undefined8 *)(lVar26 + 0x30);
          *(char **)(lVar26 + 0x18) = "clone branch";
          *(undefined4 *)(lVar26 + 0x20) = 1;
          *(ulong *)(lVar26 + 0x28) = (ulong)uVar3 & 0xffffff;
        }
        pNVar41 = (Node *)NodeProperties::GetValueInput(pNVar40,0);
        plVar27 = *(long **)(pNVar41 + 0x18);
        if (plVar27 != (long *)0x0) {
          pNVar33 = (Node *)(plVar27 + (ulong)(*(uint *)(plVar27 + 2) >> 1) * 3 + 3);
          if ((*(uint *)(plVar27 + 2) & 1) == 0) {
            pNVar33 = *(Node **)pNVar33;
          }
          if ((((pNVar33 == pNVar40) && (*plVar27 == 0)) &&
              (*(short *)(*(long *)pNVar41 + 0x10) == 0x23)) &&
             ((pNVar33 = (Node *)NodeProperties::GetControlInput(pNVar40,0),
              *(short *)(*(long *)pNVar33 + 0x10) == 10 &&
              (pNVar12 = (Node *)NodeProperties::GetControlInput(pNVar41,0), pNVar12 == pNVar33))))
          {
            BranchMatcher::BranchMatcher((BranchMatcher *)&local_90,pNVar40);
            plVar27 = *(long **)(pNVar33 + 0x18);
            if (plVar27 == (long *)0x0) {
              puVar35 = (undefined8 *)0x0;
              puVar36 = (undefined8 *)0x0;
            }
            else {
              local_160 = (undefined8 *)0x0;
              puVar17 = (undefined8 *)0x0;
              puVar18 = (undefined8 *)0x0;
              do {
                while( true ) {
                  pNVar12 = (Node *)(plVar27 + (ulong)(*(uint *)(plVar27 + 2) >> 1) * 3 + 3);
                  if ((*(uint *)(plVar27 + 2) & 1) == 0) {
                    pNVar12 = *(Node **)pNVar12;
                  }
                  puVar35 = puVar17;
                  if ((pNVar12 != pNVar40) && (pNVar12 != pNVar41)) break;
LAB_016a05b8:
                  plVar27 = (long *)*plVar27;
                  puVar17 = puVar35;
                  puVar36 = puVar18;
                  if (plVar27 == (long *)0x0) goto LAB_016a0784;
                }
                if (1 < *(ushort *)(*(long *)pNVar12 + 0x10) - 0x23) goto LAB_016a0bfc;
                plVar37 = (long *)*(long *)(pNVar12 + 0x18);
                while (plVar37 != (long *)0x0) {
                  uVar3 = *(uint *)(plVar37 + 2);
                  plVar47 = (long *)*plVar37;
                  pNVar24 = (Node *)(plVar37 + (ulong)(uVar3 >> 1) * 3 + 3);
                  pNVar13 = pNVar24;
                  if ((uVar3 & 1) == 0) {
                    pNVar13 = *(Node **)pNVar24;
                  }
                  if (*(int *)(*(long *)pNVar13 + 0x1c) != 1) goto LAB_016a0bfc;
                  if ((uVar3 & 1) == 0) {
                    pNVar24 = *(Node **)pNVar24;
                  }
                  pNVar13 = (Node *)NodeProperties::GetControlInput(pNVar24,0);
                  uVar3 = *(uint *)(plVar37 + 2) >> 1;
                  plVar28 = plVar37 + (ulong)uVar3 * 3 + 3;
                  if ((*(uint *)(plVar37 + 2) & 1) == 0) {
                    plVar28 = (long *)*plVar28;
                  }
                  if (*(ushort *)(*plVar28 + 0x10) - 0x23 < 2) {
                    pNVar13 = (Node *)NodeProperties::GetControlInput(pNVar13,uVar3);
                  }
                  plVar37 = plVar47;
                  if ((pNVar13 != local_88) && (pNVar13 != local_80)) goto LAB_016a0bfc;
                }
                if (puVar17 != local_160) {
                  puVar35 = puVar17 + 1;
                  *puVar17 = pNVar12;
                  goto LAB_016a05b8;
                }
                lVar46 = (long)puVar17 - (long)puVar18 >> 3;
                uVar38 = lVar46 + 1;
                if (uVar38 >> 0x1c != 0) goto LAB_016a0ebc;
                uVar34 = (long)local_160 - (long)puVar18 >> 2;
                if (uVar38 <= uVar34) {
                  uVar38 = uVar34;
                }
                if (0x7fffffe < (ulong)((long)local_160 - (long)puVar18 >> 3)) {
                  uVar38 = 0xfffffff;
                }
                if (uVar38 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = *(long *)(pZVar50 + 0x10);
                  uVar34 = uVar38 * 8;
                  if (uVar34 < (ulong)(*(long *)(pZVar50 + 0x18) - lVar14) ||
                      uVar34 - (*(long *)(pZVar50 + 0x18) - lVar14) == 0) {
                    *(ulong *)(pZVar50 + 0x10) = lVar14 + uVar34;
                  }
                  else {
                    lVar14 = Zone::NewExpand(pZVar50,uVar34);
                  }
                }
                puVar36 = (undefined8 *)(lVar14 + lVar46 * 8);
                local_160 = (undefined8 *)(lVar14 + uVar38 * 8);
                puVar35 = puVar36 + 1;
                *puVar36 = pNVar12;
                while (puVar17 != puVar18) {
                  puVar17 = puVar17 + -1;
                  puVar36 = puVar36 + -1;
                  *puVar36 = *puVar17;
                }
                plVar27 = (long *)*plVar27;
                puVar17 = puVar35;
                puVar18 = puVar36;
              } while (plVar27 != (long *)0x0);
            }
LAB_016a0784:
            uVar9 = BranchHintOf(*(Operator **)pNVar40);
            pZVar50 = *(Zone **)pGVar1;
            uVar3 = *(uint *)(*(long *)pNVar33 + 0x1c);
            lVar46 = (long)(int)uVar3;
            ppNVar22 = *(Node ***)(pZVar50 + 0x10);
            uVar38 = lVar46 * 0x10;
            if (uVar38 < (ulong)(*(long *)(pZVar50 + 0x18) - (long)ppNVar22) ||
                uVar38 - (*(long *)(pZVar50 + 0x18) - (long)ppNVar22) == 0) {
              *(Node ***)(pZVar50 + 0x10) = ppNVar22 + lVar46 * 2;
            }
            else {
              ppNVar22 = (Node **)Zone::NewExpand(pZVar50,uVar38);
            }
            ppNVar25 = ppNVar22 + lVar46;
            if (0 < (int)uVar3) {
              uVar38 = 0;
              do {
                pNVar12 = (Node *)NodeProperties::GetValueInput(pNVar41,(int)uVar38);
                uVar15 = NodeProperties::GetControlInput(pNVar33,(int)uVar38);
                pOVar16 = (Operator *)CommonOperatorBuilder::Branch(this_03,uVar9,1);
                local_78 = pNVar12;
                uStack_70 = uVar15;
                pNVar12 = (Node *)Graph::NewNode(pGVar1,pOVar16,2,&local_78,false);
                pOVar16 = (Operator *)CommonOperatorBuilder::IfTrue(this_03);
                local_78 = pNVar12;
                pNVar13 = (Node *)Graph::NewNode(pGVar1,pOVar16,1,&local_78,false);
                ppNVar22[uVar38] = pNVar13;
                pOVar16 = (Operator *)CommonOperatorBuilder::IfFalse(this_03);
                local_78 = pNVar12;
                pNVar12 = (Node *)Graph::NewNode(pGVar1,pOVar16,1,&local_78,false);
                uVar34 = uVar38 + 1;
                ppNVar25[uVar38] = pNVar12;
                uVar38 = uVar34;
              } while (uVar3 != uVar34);
            }
            pNVar13 = local_80;
            pNVar12 = local_88;
            Node::TrimInputCount(local_88,0);
            Node::TrimInputCount(pNVar13,0);
            ppNVar39 = ppNVar22;
            uVar38 = (ulong)uVar3;
            if (0 < (int)uVar3) {
              do {
                Node::AppendInput(pNVar12,*(Zone **)pGVar1,*ppNVar39);
                Node::AppendInput(pNVar13,*(Zone **)pGVar1,ppNVar39[lVar46]);
                uVar38 = uVar38 - 1;
                ppNVar39 = ppNVar39 + 1;
              } while (uVar38 != 0);
            }
            pNVar24 = local_88;
            pOVar16 = (Operator *)CommonOperatorBuilder::Merge(this_03,uVar3);
            NodeProperties::ChangeOp(pNVar24,pOVar16);
            pNVar24 = local_80;
            pOVar16 = (Operator *)CommonOperatorBuilder::Merge(this_03,uVar3);
            NodeProperties::ChangeOp(pNVar24,pOVar16);
            bVar8 = (Node *)**(undefined8 **)(**(long **)(lVar11 + 0x60) + 0x40) == local_88;
            puVar17 = (undefined8 *)
                      FUN_016a0ec0(&local_b0,lVar11,(*(long **)(lVar11 + 0x60))[!bVar8]);
            puVar18 = (undefined8 *)
                      FUN_016a0ec0(&local_b0,lVar11,
                                   *(undefined8 *)(*(long *)(lVar11 + 0x60) + (ulong)bVar8 * 8));
            if (puVar36 != puVar35) {
              do {
                pNVar24 = (Node *)*puVar36;
                if (0 < (int)uVar3) {
                  lVar46 = 0;
                  do {
                    pNVar19 = pNVar24 + 0x20;
                    if ((~*(uint *)(pNVar24 + 0x14) & 0xf000000) == 0) {
                      pNVar19 = (Node *)(*(long *)(pNVar24 + 0x20) + 0x10);
                    }
                    *(undefined8 *)((long)ppNVar22 + lVar46) = *(undefined8 *)(pNVar19 + lVar46);
                    lVar46 = lVar46 + 8;
                  } while ((ulong)uVar3 << 3 != lVar46);
                }
                *ppNVar25 = pNVar12;
                pNVar19 = (Node *)Graph::NewNode(pGVar1,*(Operator **)pNVar24,uVar3 + 1,ppNVar22,
                                                 false);
                *ppNVar25 = pNVar13;
                pNVar20 = (Node *)Graph::NewNode(pGVar1,*(Operator **)pNVar24,uVar3 + 1,ppNVar22,
                                                 false);
                iVar10 = Node::UseCount(pNVar24);
                if (iVar10 != 0) {
                  pUVar42 = *(Use **)(pNVar24 + 0x18);
                  while (pUVar7 = pUVar42, pUVar7 != (Use *)0x0) {
                    uVar4 = *(uint *)(pUVar7 + 0x10);
                    pUVar42 = *(Use **)pUVar7;
                    uVar38 = (ulong)(uVar4 >> 1);
                    pUVar29 = pUVar7 + uVar38 * 0x18 + 0x18;
                    lVar46 = 0x10;
                    if ((uVar4 & 1) != 0) {
                      lVar46 = 0x20;
                    }
                    pNVar21 = (Node *)pUVar29;
                    if ((uVar4 & 1) == 0) {
                      pNVar21 = *(Node **)pUVar29;
                    }
                    pNVar21 = (Node *)NodeProperties::GetControlInput(pNVar21,0);
                    uVar4 = *(uint *)(pUVar7 + 0x10) >> 1;
                    pUVar30 = pUVar7 + (ulong)uVar4 * 0x18 + 0x18;
                    if ((*(uint *)(pUVar7 + 0x10) & 1) == 0) {
                      pUVar30 = *(Use **)pUVar30;
                    }
                    if (*(ushort *)(*(long *)pUVar30 + 0x10) - 0x23 < 2) {
                      pNVar21 = (Node *)NodeProperties::GetControlInput(pNVar21,uVar4);
                    }
                    this_04 = *(Node **)(pUVar29 + uVar38 * 8 + lVar46);
                    this_01 = pNVar19;
                    if (pNVar21 != local_88) {
                      this_01 = pNVar20;
                    }
                    if (this_04 != this_01) {
                      if (this_04 != (Node *)0x0) {
                        Node::RemoveUse(this_04,pUVar7);
                      }
                      *(Node **)(pUVar29 + uVar38 * 8 + lVar46) = this_01;
                      if (this_01 != (Node *)0x0) {
                        Node::AppendUse(this_01,pUVar7);
                      }
                    }
                  }
                }
                if (*(short *)(*(long *)pNVar24 + 0x10) == 0x24) {
                  *puVar17 = pNVar19;
                  *puVar18 = pNVar20;
                }
                Node::Kill(pNVar24);
                puVar36 = puVar36 + 1;
              } while (puVar36 != puVar35);
            }
            if (*(Node **)(lVar11 + 0x38) == pNVar40) {
              puVar17[1] = pNVar12;
              puVar18[1] = pNVar13;
            }
            Node::Kill(pNVar40);
            Node::Kill(pNVar41);
            Node::Kill(pNVar33);
          }
        }
LAB_016a0bfc:
        if (lVar26 != 0) {
          *(undefined8 *)(lVar26 + 0x20) = local_150;
          *(undefined1 **)(lVar26 + 0x18) = puStack_138;
          *(undefined1 **)(lVar26 + 0x10) = local_140;
          *(undefined8 *)(lVar26 + 0x28) = local_148;
        }
        *(undefined8 *)(this_02 + 0x10) = uVar43;
      }
      pNVar40 = local_d8;
      puVar35 = *(undefined8 **)(lVar11 + 0x68);
      for (puVar36 = *(undefined8 **)(lVar11 + 0x60); puVar36 != puVar35; puVar36 = puVar36 + 1) {
        plVar27 = (long *)FUN_016a0ec0(&local_b0,lVar11,*puVar36);
        if (*plVar27 == 0) {
          *plVar27 = *(long *)(this + 0x58);
          lVar26 = plVar27[1];
        }
        else {
          lVar26 = plVar27[1];
        }
        if (lVar26 == 0) {
          plVar27[1] = *(long *)(this + 0x60);
        }
        plVar27[2] = (long)pNVar40;
      }
      puVar23 = puVar23 + 1;
      plVar37 = plVar31;
      plVar27 = plVar32;
    } while (puVar23 != puVar2);
    for (; plVar31 != plVar32; plVar31 = plVar31 + 1) {
      lVar11 = *plVar31;
      pNVar40 = (Node *)**(undefined8 **)(lVar11 + 0x40);
      if ((*(short *)(*(long *)pNVar40 + 0x10) != 0x16) &&
         (iVar10 = *(int *)(*(long *)pNVar40 + 0x1c),
         0 < iVar10 && *(long *)(lVar11 + 0x88) - *(long *)(lVar11 + 0x80) >> 3 == (long)iVar10)) {
        lVar26 = 0;
        do {
          pNVar41 = (Node *)NodeProperties::GetControlInput(pNVar40,(int)lVar26);
          lVar46 = FUN_016a0ec0(&local_b0,*(undefined8 *)(*(long *)(lVar11 + 0x80) + lVar26 * 8),
                                lVar11);
          if (pNVar41 != *(Node **)(lVar46 + 8)) {
            NodeProperties::ReplaceControlInput(pNVar40,*(Node **)(lVar46 + 8),(int)lVar26);
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 < *(int *)(*(long *)pNVar40 + 0x1c));
      }
    }
  }
  for (; puVar45 != puVar48; puVar45 = puVar45 + 2) {
    plVar27 = (long *)*puVar45;
    if (0 < *(int *)(*plVar27 + 0x18)) {
      lVar11 = 0;
      plVar37 = plVar27 + 4;
      lVar46 = -0x18;
      lVar26 = puVar45[1];
      do {
        plVar31 = plVar37;
        if ((~*(uint *)((long)plVar27 + 0x14) & 0xf000000) == 0) {
          plVar31 = (long *)(*plVar37 + 0x10);
        }
        pNVar40 = (Node *)plVar31[lVar11];
        puVar23 = (undefined8 *)
                  FUN_016a0ec0(&local_b0,*(undefined8 *)(*(long *)(lVar26 + 0x80) + lVar11 * 8),
                               lVar26);
        pNVar41 = (Node *)*puVar23;
        if (pNVar40 != pNVar41) {
          uVar3 = *(uint *)((long)plVar27 + 0x14) & 0xf000000;
          plVar31 = plVar37;
          if (uVar3 == 0xf000000) {
            plVar31 = (long *)(*plVar37 + 0x10);
          }
          pNVar40 = (Node *)plVar31[lVar11];
          if (pNVar40 != pNVar41) {
            plVar32 = plVar27;
            if (uVar3 == 0xf000000) {
              plVar32 = (long *)*plVar37;
            }
            if (pNVar40 != (Node *)0x0) {
              Node::RemoveUse(pNVar40,(Use *)((long)plVar32 + lVar46));
            }
            plVar31[lVar11] = (long)pNVar41;
            if (pNVar41 != (Node *)0x0) {
              Node::AppendUse(pNVar41,(Use *)((long)plVar32 + lVar46));
            }
          }
        }
        lVar11 = lVar11 + 1;
        lVar46 = lVar46 + -0x18;
      } while (lVar11 < *(int *)(*plVar27 + 0x18));
    }
  }
  *(undefined8 *)(*(long *)(this + 8) + 0x50) = *(undefined8 *)(*(long *)(this + 8) + 0x48);
  return;
}

