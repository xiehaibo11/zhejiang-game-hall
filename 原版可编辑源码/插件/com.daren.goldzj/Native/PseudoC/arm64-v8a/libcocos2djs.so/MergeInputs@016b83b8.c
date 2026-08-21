
/* WARNING: Removing unreachable block (ram,0x016b8900) */
/* v8::internal::compiler::VariableTracker::MergeInputs(v8::internal::compiler::Node*) */

void v8::internal::compiler::VariableTracker::MergeInputs(Node *param_1)

{
  ulong uVar1;
  Node *pNVar2;
  uint uVar3;
  undefined8 *puVar4;
  Graph *pGVar5;
  short sVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  long *plVar10;
  State *pSVar11;
  Node *pNVar12;
  Operator *pOVar13;
  Node *in_x1;
  ulong uVar14;
  Node *pNVar15;
  PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
  *in_x8;
  Zone *pZVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long *plVar29;
  int *piVar30;
  undefined8 *puVar31;
  int *piVar32;
  long *plVar33;
  ulong uVar34;
  int iVar35;
  int iVar36;
  Node *pNVar37;
  uint uVar38;
  undefined2 uVar39;
  undefined8 uVar40;
  uint local_190 [2];
  long local_188;
  int *local_180;
  undefined8 local_178 [32];
  long local_78;
  Node *local_70 [2];
  
  uVar7 = *(uint *)(*(long *)in_x1 + 0x18);
  plVar10 = (long *)NodeProperties::GetControlInput(in_x1,0);
  lVar22 = *(long *)(param_1 + 0x60);
  uVar1 = (long)(int)uVar7 + 1;
  sVar6 = *(short *)(*plVar10 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x70) - lVar22 >> 3) < uVar1) {
    pZVar16 = *(Zone **)(param_1 + 0x78);
    lVar26 = *(long *)(param_1 + 0x68);
    uVar14 = uVar1 * 8;
    lVar20 = *(long *)(pZVar16 + 0x10);
    if (uVar14 < (ulong)(*(long *)(pZVar16 + 0x18) - lVar20) ||
        uVar14 - (*(long *)(pZVar16 + 0x18) - lVar20) == 0) {
      *(ulong *)(pZVar16 + 0x10) = lVar20 + uVar14;
    }
    else {
      lVar20 = Zone::NewExpand(pZVar16,uVar14);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    puVar31 = *(undefined8 **)(param_1 + 0x68);
    puVar19 = (undefined8 *)(lVar20 + (lVar26 - lVar22 >> 3) * 8);
    puVar27 = puVar19;
    while (puVar31 != puVar4) {
      puVar31 = puVar31 + -1;
      puVar27 = puVar27 + -1;
      *puVar27 = *puVar31;
    }
    *(undefined8 **)(param_1 + 0x60) = puVar27;
    *(undefined8 **)(param_1 + 0x68) = puVar19;
    *(ulong *)(param_1 + 0x70) = lVar20 + uVar1 * 8;
  }
  pNVar2 = param_1 + 0x10;
  lVar22 = NodeProperties::GetEffectInput(in_x1,0);
  uVar38 = *(uint *)(lVar22 + 0x14) & 0xffffff;
  uVar14 = base::hash_value(uVar38);
  uVar17 = *(ulong *)(param_1 + 0x30);
  pNVar37 = pNVar2;
  if (uVar17 != 0) {
    uVar40 = CONCAT17(POPCOUNT((char)(uVar17 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar17 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar17 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar17 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar17 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar17 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar17 
                                                  >> 8)),POPCOUNT((char)uVar17))))))));
    uVar39 = NEON_uaddlv(uVar40,1);
    uVar23 = CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) & 0xffffffff;
    if (uVar23 < 2) {
      uVar28 = uVar17 - 1 & uVar14;
    }
    else {
      uVar28 = uVar14;
      if (uVar17 <= uVar14) {
        uVar28 = 0;
        if (uVar17 != 0) {
          uVar28 = uVar14 / uVar17;
        }
        uVar28 = uVar14 - uVar28 * uVar17;
      }
    }
    plVar29 = *(long **)(*(long *)(param_1 + 0x28) + uVar28 * 8);
    if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
      do {
        uVar34 = plVar29[1];
        if (uVar14 == uVar34) {
          if (*(uint *)(plVar29 + 2) == uVar38) {
            pNVar37 = (Node *)(plVar29 + 3);
            break;
          }
        }
        else {
          if (uVar23 < 2) {
            uVar34 = uVar34 & uVar17 - 1;
          }
          else if (uVar17 <= uVar34) {
            uVar8 = 0;
            if (uVar17 != 0) {
              uVar8 = uVar34 / uVar17;
            }
            uVar34 = uVar34 - uVar8 * uVar17;
          }
          if (uVar34 != uVar28) break;
        }
        plVar29 = (long *)*plVar29;
      } while (plVar29 != (long *)0x0);
    }
  }
  local_180 = *(int **)pNVar37;
  uVar40 = *(undefined8 *)(pNVar37 + 0x10);
  lVar22 = *(long *)(pNVar37 + 8);
  *(int **)in_x8 = local_180;
  *(undefined8 *)(in_x8 + 0x10) = uVar40;
  *(long *)(in_x8 + 8) = lVar22;
  if (local_180 != (int *)0x0) {
    local_190[0] = 0;
    local_188 = 0;
    local_78 = lVar22;
    if ('\0' < (char)local_180[4]) {
      do {
        piVar30 = *(int **)(local_180 + (long)(int)local_190[0] * 2 + 8);
        piVar18 = local_180;
        piVar32 = piVar30;
        if ((local_180[5] << (ulong)(local_190[0] & 0x1f) < 0) &&
           (piVar18 = piVar30, piVar32 = local_180, piVar30 == (int *)0x0)) {
          local_178[(int)local_190[0]] = 0;
        }
        else {
          local_178[(int)local_190[0]] = piVar32;
          local_180 = piVar18;
        }
        local_190[0] = local_190[0] + 1;
      } while ((int)local_190[0] < (int)(char)local_180[4]);
    }
    plVar29 = *(long **)(local_180 + 6);
    if (plVar29 != (long *)0x0) {
      local_188 = *plVar29;
    }
    if (local_180 != (int *)0x0) {
      plVar24 = (long *)(local_180 + 2);
      if (plVar29 != (long *)0x0) {
        plVar24 = (long *)(local_188 + 0x28);
      }
      while (*plVar24 == lVar22) {
        PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
        ::iterator::operator++((iterator *)local_190);
        if (local_180 == (int *)0x0) {
          return;
        }
        plVar24 = (long *)(local_180 + 2);
        if (*(long *)(local_180 + 6) != 0) {
          plVar24 = (long *)(local_188 + 0x28);
        }
      }
      if (*(long *)(local_180 + 6) != 0) goto LAB_016b86a8;
LAB_016b86b8:
      piVar18 = local_180 + 2;
      iVar35 = *local_180;
      do {
        pNVar37 = *(Node **)piVar18;
        TickCounter::DoTick(*(TickCounter **)(param_1 + 0x90));
        if (pNVar37 != (Node *)0x0) {
          puVar19 = *(undefined8 **)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x68) = puVar19;
          if (*(undefined8 **)(param_1 + 0x70) == puVar19) {
            pZVar16 = *(Zone **)(param_1 + 0x78);
            puVar19 = *(undefined8 **)(pZVar16 + 0x10);
            if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)puVar19) < 8) {
              puVar19 = (undefined8 *)Zone::NewExpand(pZVar16,8);
            }
            else {
              *(undefined8 **)(pZVar16 + 0x10) = puVar19 + 1;
            }
            puVar21 = puVar19 + 1;
            *puVar19 = pNVar37;
            puVar31 = *(undefined8 **)(param_1 + 0x60);
            puVar27 = *(undefined8 **)(param_1 + 0x68);
            puVar4 = puVar19 + 1;
            while (puVar27 != puVar31) {
              puVar27 = puVar27 + -1;
              puVar19 = puVar19 + -1;
              *puVar19 = *puVar27;
            }
            *(undefined8 **)(param_1 + 0x60) = puVar19;
            *(undefined8 **)(param_1 + 0x68) = puVar21;
            *(undefined8 **)(param_1 + 0x70) = puVar4;
            if ((int)uVar7 < 2) goto LAB_016b8960;
LAB_016b8700:
            bVar9 = true;
            iVar36 = 1;
            uVar38 = 1;
            do {
              lVar22 = NodeProperties::GetEffectInput(in_x1,uVar38);
              uVar3 = *(uint *)(lVar22 + 0x14) & 0xffffff;
              uVar14 = base::hash_value(uVar3);
              uVar17 = *(ulong *)(param_1 + 0x30);
              pSVar11 = (State *)pNVar2;
              if (uVar17 != 0) {
                uVar40 = CONCAT17(POPCOUNT((char)(uVar17 >> 0x38)),
                                  CONCAT16(POPCOUNT((char)(uVar17 >> 0x30)),
                                           CONCAT15(POPCOUNT((char)(uVar17 >> 0x28)),
                                                    CONCAT14(POPCOUNT((char)(uVar17 >> 0x20)),
                                                             CONCAT13(POPCOUNT((char)(uVar17 >> 0x18
                                                                                     )),
                                                                      CONCAT12(POPCOUNT((char)(
                                                  uVar17 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)(uVar17 >> 8)),
                                                           POPCOUNT((char)uVar17))))))));
                uVar39 = NEON_uaddlv(uVar40,1);
                uVar23 = CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) & 0xffffffff;
                if (uVar23 < 2) {
                  uVar28 = uVar17 - 1 & uVar14;
                }
                else {
                  uVar28 = uVar14;
                  if (uVar17 <= uVar14) {
                    uVar28 = 0;
                    if (uVar17 != 0) {
                      uVar28 = uVar14 / uVar17;
                    }
                    uVar28 = uVar14 - uVar28 * uVar17;
                  }
                }
                plVar29 = *(long **)(*(long *)(param_1 + 0x28) + uVar28 * 8);
                if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)
                   ) {
                  do {
                    uVar34 = plVar29[1];
                    if (uVar14 == uVar34) {
                      if (*(uint *)(plVar29 + 2) == uVar3) {
                        pSVar11 = (State *)(plVar29 + 3);
                        break;
                      }
                    }
                    else {
                      if (uVar23 < 2) {
                        uVar34 = uVar34 & uVar17 - 1;
                      }
                      else if (uVar17 <= uVar34) {
                        uVar8 = 0;
                        if (uVar17 != 0) {
                          uVar8 = uVar34 / uVar17;
                        }
                        uVar34 = uVar34 - uVar8 * uVar17;
                      }
                      if (uVar34 != uVar28) break;
                    }
                    plVar29 = (long *)*plVar29;
                  } while (plVar29 != (long *)0x0);
                }
              }
              pNVar12 = (Node *)State::Get(pSVar11,iVar35);
              plVar29 = *(long **)(param_1 + 0x68);
              if (pNVar12 != (Node *)0x0) {
                iVar36 = iVar36 + 1;
              }
              if (plVar29 == *(long **)(param_1 + 0x70)) {
                lVar22 = (long)plVar29 - *(long *)(param_1 + 0x60) >> 3;
                uVar14 = lVar22 + 1;
                if (uVar14 >> 0x1c != 0) goto LAB_016b8d88;
                lVar20 = (long)*(long **)(param_1 + 0x70) - *(long *)(param_1 + 0x60);
                uVar17 = lVar20 >> 2;
                if (uVar14 <= uVar17) {
                  uVar14 = uVar17;
                }
                if (0x7fffffe < (ulong)(lVar20 >> 3)) {
                  uVar14 = 0xfffffff;
                }
                if (uVar14 == 0) {
                  lVar20 = 0;
                }
                else {
                  pZVar16 = *(Zone **)(param_1 + 0x78);
                  uVar17 = uVar14 * 8;
                  lVar20 = *(long *)(pZVar16 + 0x10);
                  if (uVar17 < (ulong)(*(long *)(pZVar16 + 0x18) - lVar20) ||
                      uVar17 - (*(long *)(pZVar16 + 0x18) - lVar20) == 0) {
                    *(ulong *)(pZVar16 + 0x10) = lVar20 + uVar17;
                  }
                  else {
                    lVar20 = Zone::NewExpand(pZVar16,uVar17);
                  }
                }
                plVar29 = (long *)(lVar20 + lVar22 * 8);
                plVar25 = plVar29 + 1;
                *plVar29 = (long)pNVar12;
                plVar24 = *(long **)(param_1 + 0x60);
                plVar33 = *(long **)(param_1 + 0x68);
                while (plVar33 != plVar24) {
                  plVar33 = plVar33 + -1;
                  plVar29 = plVar29 + -1;
                  *plVar29 = *plVar33;
                }
                *(long **)(param_1 + 0x60) = plVar29;
                *(long **)(param_1 + 0x68) = plVar25;
                *(ulong *)(param_1 + 0x70) = lVar20 + uVar14 * 8;
              }
              else {
                *plVar29 = (long)pNVar12;
                *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 8;
              }
              uVar38 = uVar38 + 1;
              bVar9 = (bool)(bVar9 & pNVar12 == pNVar37);
            } while (uVar38 != uVar7);
          }
          else {
            *puVar19 = pNVar37;
            *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 8;
            if (1 < (int)uVar7) goto LAB_016b8700;
LAB_016b8960:
            iVar36 = 1;
            bVar9 = true;
          }
          uVar38 = *(uint *)(in_x1 + 0x14);
          uVar14 = base::hash_value(uVar38 & 0xffffff);
          uVar17 = *(ulong *)(param_1 + 0x30);
          pSVar11 = (State *)pNVar2;
          if (uVar17 != 0) {
            uVar40 = CONCAT17(POPCOUNT((char)(uVar17 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uVar17 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uVar17 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uVar17 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uVar17 >> 0x18)),
                                                                  CONCAT12(POPCOUNT((char)(uVar17 >>
                                                                                          0x10)),
                                                                           CONCAT11(POPCOUNT((char)(
                                                  uVar17 >> 8)),POPCOUNT((char)uVar17))))))));
            uVar39 = NEON_uaddlv(uVar40,1);
            uVar23 = CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) & 0xffffffff;
            if (uVar23 < 2) {
              uVar28 = uVar17 - 1 & uVar14;
            }
            else {
              uVar28 = uVar14;
              if (uVar17 <= uVar14) {
                uVar28 = 0;
                if (uVar17 != 0) {
                  uVar28 = uVar14 / uVar17;
                }
                uVar28 = uVar14 - uVar28 * uVar17;
              }
            }
            plVar29 = *(long **)(*(long *)(param_1 + 0x28) + uVar28 * 8);
            if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
              do {
                uVar34 = plVar29[1];
                if (uVar14 == uVar34) {
                  if (*(uint *)(plVar29 + 2) == (uVar38 & 0xffffff)) {
                    pSVar11 = (State *)(plVar29 + 3);
                    break;
                  }
                }
                else {
                  if (uVar23 < 2) {
                    uVar34 = uVar34 & uVar17 - 1;
                  }
                  else if (uVar17 <= uVar34) {
                    uVar8 = 0;
                    if (uVar17 != 0) {
                      uVar8 = uVar34 / uVar17;
                    }
                    uVar34 = uVar34 - uVar8 * uVar17;
                  }
                  if (uVar34 != uVar28) break;
                }
                plVar29 = (long *)*plVar29;
              } while (plVar29 != (long *)0x0);
            }
          }
          pNVar12 = (Node *)State::Get(pSVar11,iVar35);
          if (((pNVar12 == (Node *)0x0) || (*(short *)(*(long *)pNVar12 + 0x10) != 0x23)) ||
             (plVar29 = (long *)NodeProperties::GetControlInput(pNVar12,0), plVar29 != plVar10)) {
            pNVar12 = pNVar37;
            if ((sVar6 == 1) && (iVar36 == 1)) goto joined_r0x016b8d34;
            if ((int)uVar7 <= iVar36) {
              if (!bVar9) {
                plVar29 = *(long **)(param_1 + 0x68);
                if (plVar29 == *(long **)(param_1 + 0x70)) {
                  lVar22 = (long)plVar29 - *(long *)(param_1 + 0x60) >> 3;
                  uVar14 = lVar22 + 1;
                  if (uVar14 >> 0x1c != 0) {
LAB_016b8d88:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  lVar20 = (long)*(long **)(param_1 + 0x70) - *(long *)(param_1 + 0x60);
                  uVar17 = lVar20 >> 2;
                  if (uVar14 <= uVar17) {
                    uVar14 = uVar17;
                  }
                  if (0x7fffffe < (ulong)(lVar20 >> 3)) {
                    uVar14 = 0xfffffff;
                  }
                  if (uVar14 == 0) {
                    lVar20 = 0;
                  }
                  else {
                    pZVar16 = *(Zone **)(param_1 + 0x78);
                    uVar17 = uVar14 * 8;
                    lVar20 = *(long *)(pZVar16 + 0x10);
                    if (uVar17 < (ulong)(*(long *)(pZVar16 + 0x18) - lVar20) ||
                        uVar17 - (*(long *)(pZVar16 + 0x18) - lVar20) == 0) {
                      *(ulong *)(pZVar16 + 0x10) = lVar20 + uVar17;
                    }
                    else {
                      lVar20 = Zone::NewExpand(pZVar16,uVar17);
                    }
                  }
                  plVar29 = (long *)(lVar20 + lVar22 * 8);
                  plVar25 = plVar29 + 1;
                  *plVar29 = (long)plVar10;
                  plVar24 = *(long **)(param_1 + 0x60);
                  plVar33 = *(long **)(param_1 + 0x68);
                  while (plVar33 != plVar24) {
                    plVar33 = plVar33 + -1;
                    plVar29 = plVar29 + -1;
                    *plVar29 = *plVar33;
                  }
                  *(long **)(param_1 + 0x60) = plVar29;
                  *(long **)(param_1 + 0x68) = plVar25;
                  *(ulong *)(param_1 + 0x70) = lVar20 + uVar14 * 8;
                }
                else {
                  *plVar29 = (long)plVar10;
                  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 8;
                }
                pGVar5 = (Graph *)**(undefined8 **)(param_1 + 8);
                pOVar13 = (Operator *)
                          CommonOperatorBuilder::Phi
                                    ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],8,
                                     (ulong)uVar7);
                pNVar12 = (Node *)Graph::NewNode(pGVar5,pOVar13,(int)uVar1,
                                                 *(Node ***)(param_1 + 0x60),false);
                *(undefined8 *)(pNVar12 + 8) = 0xffffffff;
                lVar26 = *(long *)(param_1 + 0x80);
                *(int *)(pNVar12 + 0x10) = *(int *)(lVar26 + 0x10) + 1;
                lVar22 = *(long *)(lVar26 + 0x20);
                lVar20 = *(long *)(lVar26 + 0x28) - lVar22;
                uVar14 = 0;
                if (lVar20 != 0) {
                  uVar14 = lVar20 * 0x40 - 1;
                }
                uVar17 = *(long *)(lVar26 + 0x50) + *(long *)(lVar26 + 0x48);
                if (uVar14 == uVar17) {
                  std::__ndk1::
                  deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  ::__add_back_capacity
                            ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                              *)(lVar26 + 0x18));
                  lVar22 = *(long *)(lVar26 + 0x20);
                  uVar17 = *(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x50);
                }
                *(Node **)(*(long *)(lVar22 + (uVar17 >> 6 & 0x3fffffffffffff8)) +
                          (uVar17 & 0x1ff) * 8) = pNVar12;
                *(long *)(lVar26 + 0x50) = *(long *)(lVar26 + 0x50) + 1;
              }
              goto joined_r0x016b8d34;
            }
            if (iVar35 == -1) goto LAB_016b8d8c;
            pNVar12 = (Node *)0x0;
          }
          else {
            if (0 < (int)uVar7) {
              uVar14 = 0;
              do {
                pNVar37 = (Node *)NodeProperties::GetValueInput(pNVar12,(int)uVar14);
                pNVar15 = *(Node **)(*(long *)(param_1 + 0x60) + uVar14 * 8);
                if (pNVar15 == (Node *)0x0) {
                  puVar19 = *(undefined8 **)(param_1 + 8);
                  pNVar15 = (Node *)puVar19[0x2c];
                  if (pNVar15 == (Node *)0x0) {
                    pGVar5 = (Graph *)*puVar19;
                    pOVar13 = (Operator *)
                              CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar19[1]);
                    local_70[0] = (Node *)0x0;
                    pNVar15 = (Node *)Graph::NewNode(pGVar5,pOVar13,0,local_70,false);
                    puVar19[0x2c] = pNVar15;
                  }
                }
                if (pNVar37 != pNVar15) {
                  NodeProperties::ReplaceValueInput(pNVar12,pNVar15,(int)uVar14);
                  lVar22 = *(long *)(param_1 + 0x80);
                  uVar3 = *(uint *)(lVar22 + 0x10);
                  uVar38 = 0;
                  if (uVar3 <= *(uint *)(pNVar12 + 0x10)) {
                    uVar38 = *(uint *)(pNVar12 + 0x10) - uVar3;
                  }
                  if ((uVar38 & 0xff) == 3) {
                    *(uint *)(pNVar12 + 0x10) = uVar3 + 1;
                    lVar20 = *(long *)(lVar22 + 0x20);
                    lVar26 = *(long *)(lVar22 + 0x28) - lVar20;
                    uVar17 = 0;
                    if (lVar26 != 0) {
                      uVar17 = lVar26 * 0x40 - 1;
                    }
                    uVar23 = *(long *)(lVar22 + 0x50) + *(long *)(lVar22 + 0x48);
                    if (uVar17 == uVar23) {
                      std::__ndk1::
                      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                      ::__add_back_capacity
                                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                                  *)(lVar22 + 0x18));
                      lVar20 = *(long *)(lVar22 + 0x20);
                      uVar23 = *(long *)(lVar22 + 0x48) + *(long *)(lVar22 + 0x50);
                    }
                    *(Node **)(*(long *)(lVar20 + (uVar23 >> 6 & 0x3fffffffffffff8)) +
                              (uVar23 & 0x1ff) * 8) = pNVar12;
                    *(long *)(lVar22 + 0x50) = *(long *)(lVar22 + 0x50) + 1;
                  }
                }
                uVar14 = uVar14 + 1;
              } while (uVar7 != uVar14);
            }
joined_r0x016b8d34:
            if (iVar35 == -1) {
LAB_016b8d8c:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","var != Variable::Invalid()");
            }
          }
          PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
          ::Set(in_x8,iVar35,pNVar12);
        }
        PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
        ::iterator::operator++((iterator *)local_190);
        if (local_180 == (int *)0x0) {
          return;
        }
        if (*(long *)(local_180 + 6) == 0) goto LAB_016b86b8;
LAB_016b86a8:
        iVar35 = *(int *)(local_188 + 0x20);
        piVar18 = (int *)(local_188 + 0x28);
      } while( true );
    }
  }
  return;
}

