
/* v8::internal::compiler::DeadCodeElimination::ReduceLoopOrMerge(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::DeadCodeElimination::ReduceLoopOrMerge
          (DeadCodeElimination *this,Node *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  Node *pNVar4;
  long *plVar5;
  long lVar6;
  Operator *pOVar7;
  long *plVar8;
  Node *pNVar9;
  long *plVar10;
  code *pcVar11;
  long *plVar12;
  Node *pNVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  Zone *this_00;
  Node *pNVar19;
  Node *pNVar20;
  Node *pNVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  
  pNVar13 = param_1 + 0x20;
  uVar15 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
  pNVar21 = pNVar13;
  if (uVar15 == 0xf) {
    uVar15 = *(uint *)(*(long *)pNVar13 + 8);
    pNVar21 = (Node *)(*(long *)pNVar13 + 0x10);
  }
  if (*(short *)(*(long *)param_1 + 0x10) == 1) {
    pNVar19 = pNVar13;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar19 = (Node *)(*(long *)pNVar13 + 0x10);
    }
    if (*(short *)(**(long **)pNVar19 + 0x10) == 0x3d) goto LAB_0169dc2c;
  }
  if (0 < (int)uVar15) {
    uVar24 = 0;
    uVar18 = 0;
    do {
      pNVar19 = *(Node **)(pNVar21 + uVar24 * 8);
      if (*(short *)(*(long *)pNVar19 + 0x10) != 0x3d) {
        if (uVar24 != uVar18) {
          pNVar20 = pNVar13;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar20 = (Node *)(*(long *)pNVar13 + 0x10);
          }
          pNVar4 = *(Node **)(pNVar20 + (long)(int)uVar18 * 8);
          lVar17 = (long)(int)uVar18;
          if (pNVar4 != pNVar19) {
            pNVar9 = param_1;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar9 = *(Node **)pNVar13;
            }
            if (pNVar4 != (Node *)0x0) {
              Node::RemoveUse(pNVar4,(Use *)(pNVar9 + (long)(int)~uVar18 * 0x18));
            }
            *(Node **)(pNVar20 + lVar17 * 8) = pNVar19;
            if (pNVar19 != (Node *)0x0) {
              Node::AppendUse(pNVar19,(Use *)(pNVar9 + (long)(int)~uVar18 * 0x18));
            }
          }
          plVar16 = *(long **)(param_1 + 0x18);
          if (plVar16 != (long *)0x0) {
            do {
              plVar10 = plVar16 + (ulong)(*(uint *)(plVar16 + 2) >> 1) * 3 + 3;
              if ((*(uint *)(plVar16 + 2) & 1) == 0) {
                plVar10 = (long *)*plVar10;
              }
              if (*(ushort *)(*plVar10 + 0x10) - 0x23 < 2) {
                uVar1 = *(uint *)((long)plVar10 + 0x14) & 0xf000000;
                plVar22 = plVar10 + 4;
                plVar25 = plVar22;
                if (uVar1 == 0xf000000) {
                  plVar25 = (long *)(*plVar22 + 0x10);
                }
                pNVar20 = (Node *)plVar25[uVar24];
                pNVar19 = (Node *)plVar25[lVar17];
                if (pNVar19 != pNVar20) {
                  if (uVar1 == 0xf000000) {
                    plVar10 = (long *)*plVar22;
                  }
                  if (pNVar19 != (Node *)0x0) {
                    Node::RemoveUse(pNVar19,(Use *)(plVar10 + (long)(int)~uVar18 * 3));
                  }
                  plVar25[lVar17] = (long)pNVar20;
                  if (pNVar20 != (Node *)0x0) {
                    Node::AppendUse(pNVar20,(Use *)(plVar10 + (long)(int)~uVar18 * 3));
                  }
                }
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
        uVar18 = uVar18 + 1;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar15);
    if (uVar18 == 1) {
      plVar16 = *(long **)(param_1 + 0x18);
      if (plVar16 == (long *)0x0) {
        plVar22 = (long *)0x0;
        plVar10 = (long *)0x0;
      }
      else {
        plVar25 = (long *)0x0;
        this_00 = *(Zone **)(this + 0x28);
        plVar5 = (long *)0x0;
        plVar23 = (long *)0x0;
        do {
          plVar8 = plVar16 + (ulong)(*(uint *)(plVar16 + 2) >> 1) * 3 + 3;
          if ((*(uint *)(plVar16 + 2) & 1) == 0) {
            plVar8 = (long *)*plVar8;
          }
          uVar2 = *(ushort *)(*plVar8 + 0x10);
          plVar22 = plVar5;
          plVar10 = plVar23;
          if (uVar2 - 0x23 < 2) {
            plVar5 = plVar8 + 4;
            if ((~*(uint *)((long)plVar8 + 0x14) & 0xf000000) == 0) {
              plVar5 = (long *)(*plVar5 + 0x10);
            }
            lVar17 = *plVar5;
            plVar5 = *(long **)(this + 8);
            pcVar11 = *(code **)(*plVar5 + 0x10);
LAB_0169dc98:
            (*pcVar11)(plVar5,plVar8,lVar17);
          }
          else {
            if (uVar2 == 0x12) {
              plVar5 = *(long **)(this + 8);
              lVar17 = *(long *)(this + 0x20);
              pcVar11 = *(code **)(*plVar5 + 0x10);
              goto LAB_0169dc98;
            }
            if (uVar2 == 0x34) {
              plVar12 = plVar8 + 4;
              if ((~*(uint *)((long)plVar8 + 0x14) & 0xf000000) == 0) {
                plVar12 = (long *)(*plVar12 + 0x10);
              }
              if ((Node *)plVar12[1] == param_1) {
                if (plVar5 == plVar25) {
                  lVar17 = (long)plVar5 - (long)plVar23 >> 3;
                  uVar24 = lVar17 + 1;
                  if (uVar24 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  uVar14 = (long)plVar25 - (long)plVar23 >> 2;
                  if (uVar24 <= uVar14) {
                    uVar24 = uVar14;
                  }
                  if (0x7fffffe < (ulong)((long)plVar25 - (long)plVar23 >> 3)) {
                    uVar24 = 0xfffffff;
                  }
                  if (uVar24 == 0) {
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = *(long *)(this_00 + 0x10);
                    uVar14 = uVar24 * 8;
                    if (uVar14 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
                        uVar14 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
                      *(ulong *)(this_00 + 0x10) = lVar6 + uVar14;
                    }
                    else {
                      lVar6 = Zone::NewExpand(this_00,uVar14);
                    }
                  }
                  plVar10 = (long *)(lVar6 + lVar17 * 8);
                  plVar25 = (long *)(lVar6 + uVar24 * 8);
                  plVar22 = plVar10 + 1;
                  *plVar10 = (long)plVar8;
                  while (plVar5 != plVar23) {
                    plVar5 = plVar5 + -1;
                    plVar10 = plVar10 + -1;
                    *plVar10 = *plVar5;
                  }
                }
                else {
                  plVar22 = plVar5 + 1;
                  *plVar5 = (long)plVar8;
                }
              }
            }
          }
          plVar16 = (long *)*plVar16;
          plVar5 = plVar22;
          plVar23 = plVar10;
        } while (plVar16 != (long *)0x0);
      }
      for (; plVar10 != plVar22; plVar10 = plVar10 + 1) {
        lVar17 = *plVar10;
        pNVar21 = *(Node **)(this + 0x20);
        uVar15 = *(uint *)(lVar17 + 0x14) & 0xf000000;
        plVar16 = (long *)(lVar17 + 0x20);
        plVar25 = plVar16;
        if (uVar15 == 0xf000000) {
          plVar25 = (long *)(*plVar16 + 0x10);
        }
        pNVar19 = (Node *)plVar25[1];
        if (pNVar19 != pNVar21) {
          lVar6 = lVar17;
          if (uVar15 == 0xf000000) {
            lVar6 = *plVar16;
          }
          if (pNVar19 != (Node *)0x0) {
            Node::RemoveUse(pNVar19,(Use *)(lVar6 + -0x30));
          }
          plVar25[1] = (long)pNVar21;
          if (pNVar21 != (Node *)0x0) {
            Node::AppendUse(pNVar21,(Use *)(lVar6 + -0x30));
          }
        }
        (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),lVar17);
      }
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        return *(Node **)(*(long *)pNVar13 + 0x10);
      }
      return *(Node **)pNVar13;
    }
    if (uVar18 != 0) {
      if ((int)uVar18 < (int)uVar15) {
        plVar16 = *(long **)(param_1 + 0x18);
        if (plVar16 != (long *)0x0) {
          do {
            pNVar13 = (Node *)(plVar16 + (ulong)(*(uint *)(plVar16 + 2) >> 1) * 3 + 3);
            if ((*(uint *)(plVar16 + 2) & 1) == 0) {
              pNVar13 = *(Node **)pNVar13;
            }
            if (*(ushort *)(*(long *)pNVar13 + 0x10) - 0x23 < 2) {
              pNVar21 = pNVar13 + 0x20;
              pNVar19 = pNVar21;
              if ((*(uint *)(pNVar13 + 0x14) & 0xf000000) == 0xf000000) {
                pNVar19 = (Node *)(*(long *)pNVar21 + 0x10);
              }
              pNVar20 = *(Node **)(pNVar19 + (long)(int)uVar18 * 8);
              if (pNVar20 != param_1) {
                pNVar4 = pNVar13;
                if ((*(uint *)(pNVar13 + 0x14) & 0xf000000) == 0xf000000) {
                  pNVar4 = *(Node **)pNVar21;
                }
                if (pNVar20 != (Node *)0x0) {
                  Node::RemoveUse(pNVar20,(Use *)(pNVar4 + (long)(int)~uVar18 * 0x18));
                }
                *(Node **)(pNVar19 + (long)(int)uVar18 * 8) = param_1;
                Node::AppendUse(param_1,(Use *)(pNVar4 + (long)(int)~uVar18 * 0x18));
              }
              pOVar7 = (Operator *)
                       CommonOperatorBuilder::ResizeMergeOrPhi
                                 (*(CommonOperatorBuilder **)(this + 0x18),*(Operator **)pNVar13,
                                  uVar18);
              iVar3 = OperatorProperties::GetTotalInputCount(pOVar7);
              Node::TrimInputCount(pNVar13,iVar3);
              NodeProperties::ChangeOp(pNVar13,pOVar7);
              (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),pNVar13);
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        pOVar7 = (Operator *)
                 CommonOperatorBuilder::ResizeMergeOrPhi
                           (*(CommonOperatorBuilder **)(this + 0x18),*(Operator **)param_1,uVar18);
        iVar3 = OperatorProperties::GetTotalInputCount(pOVar7);
        Node::TrimInputCount(param_1,iVar3);
        NodeProperties::ChangeOp(param_1,pOVar7);
        return param_1;
      }
      return (Node *)0x0;
    }
  }
LAB_0169dc2c:
  return *(Node **)(this + 0x20);
}

