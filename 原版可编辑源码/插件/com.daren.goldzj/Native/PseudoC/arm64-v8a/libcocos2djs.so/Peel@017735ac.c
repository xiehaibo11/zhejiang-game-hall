
/* v8::internal::compiler::LoopPeeler::Peel(v8::internal::compiler::LoopTree::Loop*) */

long * __thiscall v8::internal::compiler::LoopPeeler::Peel(LoopPeeler *this,Loop *param_1)

{
  Graph *pGVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  Zone *pZVar7;
  Operator *pOVar8;
  undefined8 uVar9;
  Node *pNVar10;
  Node *this_00;
  long *plVar11;
  Node *pNVar12;
  long lVar13;
  long lVar14;
  Node **ppNVar15;
  Node **ppNVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  Node *pNVar27;
  Node **ppNVar28;
  Use *pUVar29;
  Node **ppNVar30;
  Node *pNVar31;
  Node **ppNVar32;
  uint local_78 [2];
  long *local_70;
  Node *local_68;
  
  uVar6 = CanPeel(this,param_1);
  if ((uVar6 & 1) == 0) {
    return (long *)0x0;
  }
  pZVar7 = *(Zone **)(this + 0x18);
  plVar11 = *(long **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)plVar11) < 0x20) {
    plVar11 = (long *)Zone::NewExpand(pZVar7,0x20);
  }
  else {
    *(long **)(pZVar7 + 0x10) = plVar11 + 4;
  }
  lVar13 = *(long *)(this + 0x18);
  *plVar11 = 0;
  plVar11[1] = 0;
  plVar11[2] = 0;
  plVar11[3] = lVar13;
  NodeMarkerBase::NodeMarkerBase
            ((NodeMarkerBase *)local_78,*(Graph **)this,
             (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x30)) * 2 + 5);
  pGVar1 = *(Graph **)this;
  local_70 = plVar11;
  pOVar8 = (Operator *)CommonOperatorBuilder::Dead(*(CommonOperatorBuilder **)(this + 8));
  local_68 = (Node *)0x0;
  uVar9 = Graph::NewNode(pGVar1,pOVar8,0,&local_68,false);
  lVar13 = (long)*(int *)(param_1 + 0x30);
  lVar14 = *(long *)(*(long *)(this + 0x10) + 0x68);
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x34)) {
    puVar24 = (undefined8 *)(lVar14 + lVar13 * 8);
    lVar13 = (long)*(int *)(param_1 + 0x34) * 8 + lVar13 * -8;
    do {
      pNVar12 = (Node *)*puVar24;
      pNVar10 = pNVar12 + 0x20;
      if ((~*(uint *)(pNVar12 + 0x14) & 0xf000000) == 0) {
        pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
      }
      Peeling::Insert((Peeling *)local_78,pNVar12,*(Node **)pNVar10);
      lVar13 = lVar13 + -8;
      puVar24 = puVar24 + 1;
    } while (lVar13 != 0);
    lVar13 = (long)*(int *)(param_1 + 0x34);
    lVar14 = *(long *)(*(long *)(this + 0x10) + 0x68);
  }
  Peeling::CopyNodes(local_78,*(undefined8 *)this,*(undefined8 *)(this + 0x18),uVar9,
                     lVar14 + lVar13 * 8,lVar14 + (long)*(int *)(param_1 + 0x38) * 8,
                     *(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  lVar13 = (long)*(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x34)) {
    plVar26 = (long *)(*(long *)(*(long *)(this + 0x10) + 0x68) + lVar13 * 8);
    lVar19 = (long)*(int *)(param_1 + 0x34) * 8;
    lVar14 = lVar19 + lVar13 * -8;
    plVar17 = plVar26;
    do {
      plVar25 = (long *)*plVar17;
      if (*(short *)(*plVar25 + 0x10) == 1) {
        uVar18 = *(uint *)((long)plVar25 + 0x14);
        if ((~uVar18 & 0xf000000) == 0) {
          uVar22 = *(uint *)(plVar25[4] + 8);
        }
        else {
          uVar22 = uVar18 >> 0x18 & 0xf;
        }
        uVar5 = uVar22 - 1;
        if (1 < (int)uVar5) {
          pZVar7 = *(Zone **)(this + 0x18);
          ppNVar28 = (Node **)0x0;
          ppNVar32 = (Node **)0x0;
          plVar26 = plVar25 + 4;
          lVar13 = 1;
          ppNVar30 = (Node **)0x0;
          goto LAB_017737c4;
        }
        lVar19 = lVar19 + lVar13 * -8;
        goto LAB_017738f8;
      }
      lVar14 = lVar14 + -8;
      plVar17 = plVar17 + 1;
    } while (lVar14 != 0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
LAB_017737c4:
  if ((uVar18 & 0xf000000) == 0xf000000) {
    uVar3 = *(uint *)(*plVar26 + 8);
  }
  else {
    uVar3 = uVar18 >> 0x18 & 0xf;
  }
  if ((int)uVar3 <= lVar13) {
    pGVar1 = *(Graph **)this;
    pOVar8 = (Operator *)CommonOperatorBuilder::Merge(*(CommonOperatorBuilder **)(this + 8),uVar5);
    pNVar10 = (Node *)Graph::NewNode(pGVar1,pOVar8,uVar5,ppNVar30,false);
    iVar2 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x30) == iVar2) goto LAB_01773da0;
    lVar13 = *(long *)(*(long *)(this + 0x10) + 0x68);
    puVar24 = (undefined8 *)(lVar13 + (long)*(int *)(param_1 + 0x30) * 8);
    goto LAB_01773a90;
  }
  plVar17 = plVar26;
  if ((uVar18 & 0xf000000) == 0xf000000) {
    plVar17 = (long *)(*plVar26 + 0x10);
  }
  pNVar10 = (Node *)plVar17[lVar13];
  uVar3 = *(uint *)(pNVar10 + 0x10);
  uVar18 = 0;
  if (local_78[0] <= uVar3) {
    uVar18 = uVar3 - local_78[0];
  }
  if (local_78[0] <= uVar3 && uVar3 - local_78[0] != 0) {
    if ((ulong)(local_70[1] - *local_70 >> 3) <= (ulong)uVar18) goto LAB_0177404c;
    pNVar10 = *(Node **)(*local_70 + (ulong)uVar18 * 8);
  }
  if (ppNVar32 < ppNVar28) {
    *ppNVar32 = pNVar10;
    ppNVar15 = ppNVar32;
    ppNVar16 = ppNVar30;
  }
  else {
    lVar14 = (long)ppNVar32 - (long)ppNVar30 >> 3;
    uVar6 = lVar14 + 1;
    if (uVar6 >> 0x1c != 0) goto LAB_0177404c;
    uVar21 = (long)ppNVar28 - (long)ppNVar30 >> 2;
    if (uVar6 <= uVar21) {
      uVar6 = uVar21;
    }
    if (0x7fffffe < (ulong)((long)ppNVar28 - (long)ppNVar30 >> 3)) {
      uVar6 = 0xfffffff;
    }
    if (uVar6 == 0) {
      lVar19 = 0;
    }
    else {
      lVar19 = *(long *)(pZVar7 + 0x10);
      uVar21 = uVar6 * 8;
      if (uVar21 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar19) ||
          uVar21 - (*(long *)(pZVar7 + 0x18) - lVar19) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar19 + uVar21;
      }
      else {
        lVar19 = Zone::NewExpand(pZVar7,uVar21);
      }
    }
    ppNVar15 = (Node **)(lVar19 + lVar14 * 8);
    ppNVar28 = (Node **)(lVar19 + uVar6 * 8);
    *ppNVar15 = pNVar10;
    ppNVar16 = ppNVar15;
    while (ppNVar32 != ppNVar30) {
      ppNVar32 = ppNVar32 + -1;
      ppNVar16 = ppNVar16 + -1;
      *ppNVar16 = *ppNVar32;
    }
  }
  uVar18 = *(uint *)((long)plVar25 + 0x14);
  ppNVar32 = ppNVar15 + 1;
  lVar13 = lVar13 + 1;
  ppNVar30 = ppNVar16;
  goto LAB_017737c4;
LAB_01773a90:
  do {
    plVar26 = (long *)*puVar24;
    ppNVar32 = ppNVar30;
    if (*(short *)(*plVar26 + 0x10) != 1) {
      ppNVar15 = ppNVar30;
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          uVar6 = uVar6 + 1;
          plVar17 = plVar26 + 4;
          if ((~*(uint *)((long)plVar26 + 0x14) & 0xf000000) == 0) {
            plVar17 = (long *)(plVar26[4] + 0x10);
          }
          pNVar12 = (Node *)plVar17[uVar6];
          uVar3 = *(uint *)(pNVar12 + 0x10);
          uVar18 = 0;
          if (local_78[0] <= uVar3) {
            uVar18 = uVar3 - local_78[0];
          }
          if (local_78[0] <= uVar3 && uVar3 - local_78[0] != 0) {
            if ((ulong)(local_70[1] - *local_70 >> 3) <= (ulong)uVar18) goto LAB_0177404c;
            pNVar12 = *(Node **)(*local_70 + (ulong)uVar18 * 8);
          }
          if (ppNVar30 < ppNVar28) {
            *ppNVar30 = pNVar12;
            ppNVar16 = ppNVar30;
            ppNVar15 = ppNVar32;
          }
          else {
            lVar14 = (long)ppNVar30 - (long)ppNVar32 >> 3;
            uVar21 = lVar14 + 1;
            if (uVar21 >> 0x1c != 0) goto LAB_0177404c;
            uVar20 = (long)ppNVar28 - (long)ppNVar32 >> 2;
            if (uVar21 <= uVar20) {
              uVar21 = uVar20;
            }
            if (0x7fffffe < (ulong)((long)ppNVar28 - (long)ppNVar32 >> 3)) {
              uVar21 = 0xfffffff;
            }
            if (uVar21 == 0) {
              lVar19 = 0;
            }
            else {
              lVar19 = *(long *)(pZVar7 + 0x10);
              uVar20 = uVar21 * 8;
              if (uVar20 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar19) ||
                  uVar20 - (*(long *)(pZVar7 + 0x18) - lVar19) == 0) {
                *(ulong *)(pZVar7 + 0x10) = lVar19 + uVar20;
              }
              else {
                lVar19 = Zone::NewExpand(pZVar7,uVar20);
              }
            }
            ppNVar16 = (Node **)(lVar19 + lVar14 * 8);
            ppNVar28 = (Node **)(lVar19 + uVar21 * 8);
            *ppNVar16 = pNVar12;
            ppNVar15 = ppNVar16;
            while (ppNVar30 != ppNVar32) {
              ppNVar30 = ppNVar30 + -1;
              ppNVar15 = ppNVar15 + -1;
              *ppNVar15 = *ppNVar30;
            }
          }
          ppNVar30 = ppNVar16 + 1;
          ppNVar32 = ppNVar15;
        } while (uVar6 != uVar5);
      }
      ppNVar32 = ppNVar15;
      if (ppNVar15 != ppNVar30) {
        ppNVar16 = ppNVar15;
        do {
          ppNVar16 = ppNVar16 + 1;
          if (ppNVar30 == ppNVar16) goto LAB_01773a84;
        } while (*ppNVar16 == *ppNVar15);
        if (ppNVar30 == ppNVar28) {
          lVar14 = (long)ppNVar30 - (long)ppNVar15 >> 3;
          uVar6 = lVar14 + 1;
          if (uVar6 >> 0x1c != 0) goto LAB_0177404c;
          uVar21 = (long)ppNVar28 - (long)ppNVar15 >> 2;
          if (uVar6 <= uVar21) {
            uVar6 = uVar21;
          }
          if (0x7fffffe < (ulong)((long)ppNVar28 - (long)ppNVar15 >> 3)) {
            uVar6 = 0xfffffff;
          }
          if (uVar6 == 0) {
            lVar19 = 0;
          }
          else {
            lVar19 = *(long *)(pZVar7 + 0x10);
            uVar21 = uVar6 * 8;
            if (uVar21 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar19) ||
                uVar21 - (*(long *)(pZVar7 + 0x18) - lVar19) == 0) {
              *(ulong *)(pZVar7 + 0x10) = lVar19 + uVar21;
            }
            else {
              lVar19 = Zone::NewExpand(pZVar7,uVar21);
            }
          }
          ppNVar32 = (Node **)(lVar19 + lVar14 * 8);
          ppNVar28 = (Node **)(lVar19 + uVar6 * 8);
          *ppNVar32 = pNVar10;
          do {
            ppNVar30 = ppNVar30 + -1;
            ppNVar32 = ppNVar32 + -1;
            *ppNVar32 = *ppNVar30;
          } while (ppNVar15 != ppNVar30);
        }
        else {
          *ppNVar30 = pNVar10;
        }
        pOVar8 = (Operator *)
                 CommonOperatorBuilder::ResizeMergeOrPhi
                           (*(CommonOperatorBuilder **)(this + 8),(Operator *)*plVar26,uVar5);
        pNVar12 = (Node *)Graph::NewNode(*(Graph **)this,pOVar8,uVar22,ppNVar32,false);
        uVar18 = *(uint *)((long)plVar26 + 0x14) & 0xf000000;
        plVar17 = plVar26 + 4;
        plVar23 = plVar17;
        if (uVar18 == 0xf000000) {
          plVar23 = (long *)(*plVar17 + 0x10);
        }
        pNVar27 = (Node *)*plVar23;
        if (pNVar27 != pNVar12) {
          if (uVar18 == 0xf000000) {
            plVar26 = (long *)*plVar17;
          }
          if (pNVar27 != (Node *)0x0) {
            Node::RemoveUse(pNVar27,(Use *)(plVar26 + -3));
          }
          *plVar23 = (long)pNVar12;
          if (pNVar12 != (Node *)0x0) {
            Node::AppendUse(pNVar12,(Use *)(plVar26 + -3));
          }
        }
      }
    }
LAB_01773a84:
    puVar24 = puVar24 + 1;
    ppNVar30 = ppNVar32;
  } while (puVar24 != (undefined8 *)(lVar13 + (long)iVar2 * 8));
  goto LAB_01773da0;
  while( true ) {
    plVar23 = plVar17;
    if (uVar18 == 0xf000000) {
      plVar23 = (long *)(*plVar17 + 0x10);
    }
    pNVar12 = (Node *)*plVar23;
    if (pNVar12 != pNVar10) {
      if (uVar18 == 0xf000000) {
        lVar13 = *plVar17;
      }
      if (pNVar12 != (Node *)0x0) {
        Node::RemoveUse(pNVar12,(Use *)(lVar13 + -0x18));
      }
      *plVar23 = (long)pNVar10;
      if (pNVar10 != (Node *)0x0) {
        Node::AppendUse(pNVar10,(Use *)(lVar13 + -0x18));
      }
    }
    lVar19 = lVar19 + -8;
    plVar26 = plVar26 + 1;
    if (lVar19 == 0) break;
LAB_017738f8:
    lVar13 = *plVar26;
    uVar18 = *(uint *)(lVar13 + 0x14) & 0xf000000;
    plVar17 = (long *)(lVar13 + 0x20);
    plVar23 = plVar17;
    if (uVar18 == 0xf000000) {
      plVar23 = (long *)(*plVar17 + 0x10);
    }
    pNVar10 = (Node *)plVar23[1];
    uVar5 = *(uint *)(pNVar10 + 0x10);
    uVar22 = 0;
    if (local_78[0] <= uVar5) {
      uVar22 = uVar5 - local_78[0];
    }
    if (local_78[0] <= uVar5 && uVar5 - local_78[0] != 0) {
      if ((ulong)(local_70[1] - *local_70 >> 3) <= (ulong)uVar22) goto LAB_0177404c;
      pNVar10 = *(Node **)(*local_70 + (ulong)uVar22 * 8);
    }
  }
  plVar26 = plVar25 + 4;
  if ((~*(uint *)((long)plVar25 + 0x14) & 0xf000000) == 0) {
    plVar26 = (long *)(*plVar26 + 0x10);
  }
  pNVar10 = (Node *)plVar26[1];
  uVar22 = *(uint *)(pNVar10 + 0x10);
  uVar18 = 0;
  if (local_78[0] <= uVar22) {
    uVar18 = uVar22 - local_78[0];
  }
  if (local_78[0] <= uVar22 && uVar22 - local_78[0] != 0) {
    if ((ulong)(local_70[1] - *local_70 >> 3) <= (ulong)uVar18) {
LAB_0177404c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pNVar10 = *(Node **)(*local_70 + (ulong)uVar18 * 8);
  }
LAB_01773da0:
  plVar17 = plVar25 + 4;
  uVar18 = *(uint *)((long)plVar25 + 0x14) & 0xf000000;
  plVar26 = plVar17;
  if (uVar18 == 0xf000000) {
    plVar26 = (long *)(*plVar17 + 0x10);
  }
  pNVar12 = (Node *)*plVar26;
  if (pNVar12 != pNVar10) {
    if (uVar18 == 0xf000000) {
      plVar25 = (long *)*plVar17;
    }
    if (pNVar12 != (Node *)0x0) {
      Node::RemoveUse(pNVar12,(Use *)(plVar25 + -3));
    }
    *plVar26 = (long)pNVar10;
    if (pNVar10 != (Node *)0x0) {
      Node::AppendUse(pNVar10,(Use *)(plVar25 + -3));
    }
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != *(int *)(param_1 + 0x3c)) {
    lVar13 = (long)*(int *)(param_1 + 0x3c) * 8 + (long)iVar2 * -8;
    puVar24 = (undefined8 *)(*(long *)(*(long *)(this + 0x10) + 0x68) + (long)iVar2 * 8);
    do {
      pNVar10 = (Node *)*puVar24;
      sVar4 = *(short *)(*(long *)pNVar10 + 0x10);
      if (sVar4 == 0x36) {
        pNVar12 = pNVar10 + 0x20;
        if ((~*(uint *)(pNVar10 + 0x14) & 0xf000000) == 0) {
          pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
        }
        pNVar12 = *(Node **)pNVar12;
        uVar22 = *(uint *)(pNVar12 + 0x10);
        uVar18 = 0;
        if (local_78[0] <= uVar22) {
          uVar18 = uVar22 - local_78[0];
        }
        if (local_78[0] <= uVar22 && uVar22 - local_78[0] != 0) {
          if ((ulong)(local_70[1] - *local_70 >> 3) <= (ulong)uVar18) goto LAB_0177404c;
          pNVar12 = *(Node **)(*local_70 + (ulong)uVar18 * 8);
        }
        Node::InsertInput(pNVar10,(Zone *)**(undefined8 **)this,1,pNVar12);
        pOVar8 = (Operator *)
                 CommonOperatorBuilder::EffectPhi(*(CommonOperatorBuilder **)(this + 8),2);
LAB_01773e58:
        NodeProperties::ChangeOp(pNVar10,pOVar8);
      }
      else {
        if (sVar4 == 0x35) {
          pNVar12 = pNVar10 + 0x20;
          if ((~*(uint *)(pNVar10 + 0x14) & 0xf000000) == 0) {
            pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
          }
          pNVar12 = *(Node **)pNVar12;
          uVar22 = *(uint *)(pNVar12 + 0x10);
          uVar18 = 0;
          if (local_78[0] <= uVar22) {
            uVar18 = uVar22 - local_78[0];
          }
          if (local_78[0] <= uVar22 && uVar22 - local_78[0] != 0) {
            if ((ulong)(local_70[1] - *local_70 >> 3) <= (ulong)uVar18) goto LAB_0177404c;
            pNVar12 = *(Node **)(*local_70 + (ulong)uVar18 * 8);
          }
          Node::InsertInput(pNVar10,(Zone *)**(undefined8 **)this,1,pNVar12);
          pOVar8 = (Operator *)CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(this + 8),8,2)
          ;
          goto LAB_01773e58;
        }
        if (sVar4 == 0x34) {
          uVar18 = *(uint *)(pNVar10 + 0x14) & 0xf000000;
          pNVar12 = pNVar10 + 0x20;
          pNVar27 = pNVar12;
          if (uVar18 == 0xf000000) {
            pNVar27 = (Node *)(*(long *)pNVar12 + 0x10);
          }
          pNVar27 = *(Node **)pNVar27;
          uVar5 = *(uint *)(pNVar27 + 0x10);
          uVar22 = 0;
          if (local_78[0] <= uVar5) {
            uVar22 = uVar5 - local_78[0];
          }
          if (local_78[0] <= uVar5 && uVar5 - local_78[0] != 0) {
            if ((ulong)(local_70[1] - *local_70 >> 3) <= (ulong)uVar22) goto LAB_0177404c;
            pNVar27 = *(Node **)(*local_70 + (ulong)uVar22 * 8);
          }
          pNVar31 = pNVar12;
          if (uVar18 == 0xf000000) {
            pNVar31 = (Node *)(*(long *)pNVar12 + 0x10);
          }
          this_00 = *(Node **)(pNVar31 + 8);
          if (this_00 != pNVar27) {
            if (uVar18 == 0xf000000) {
              pUVar29 = (Use *)(*(long *)pNVar12 + -0x30);
            }
            else {
              pUVar29 = (Use *)(pNVar10 + -0x30);
            }
            if (this_00 != (Node *)0x0) {
              Node::RemoveUse(this_00,pUVar29);
            }
            *(Node **)(pNVar31 + 8) = pNVar27;
            if (pNVar27 != (Node *)0x0) {
              Node::AppendUse(pNVar27,pUVar29);
            }
          }
          pOVar8 = (Operator *)CommonOperatorBuilder::Merge(*(CommonOperatorBuilder **)(this + 8),2)
          ;
          goto LAB_01773e58;
        }
      }
      lVar13 = lVar13 + -8;
      puVar24 = puVar24 + 1;
    } while (lVar13 != 0);
  }
  return plVar11;
}

