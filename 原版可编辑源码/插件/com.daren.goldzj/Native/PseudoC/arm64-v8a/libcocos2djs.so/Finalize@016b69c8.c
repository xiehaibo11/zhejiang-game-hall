
/* v8::internal::compiler::EscapeAnalysisReducer::Finalize() */

void __thiscall v8::internal::compiler::EscapeAnalysisReducer::Finalize(EscapeAnalysisReducer *this)

{
  Use *pUVar1;
  long *plVar2;
  undefined1 uVar3;
  uint uVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  Node *pNVar8;
  Node *pNVar9;
  ulong uVar10;
  Operator *pOVar11;
  Node *pNVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  Zone *this_00;
  long *plVar16;
  EscapeAnalysisReducer *pEVar17;
  Use *pUVar18;
  ulong uVar19;
  Node *pNVar20;
  EscapeAnalysisReducer *pEVar21;
  Use *pUVar22;
  long *plVar23;
  Graph *pGVar24;
  Use *pUVar25;
  long *plVar26;
  long *plVar27;
  Node *pNVar28;
  long *plVar29;
  long *plVar30;
  Node *local_70;
  undefined8 uStack_68;
  
  pEVar21 = *(EscapeAnalysisReducer **)(this + 0xa0);
  do {
    if (pEVar21 == this + 0xa8) {
      return;
    }
    pNVar20 = *(Node **)(pEVar21 + 0x20);
    iVar7 = NewArgumentsElementsMappedCountOf(*(Operator **)pNVar20);
    pNVar8 = (Node *)NodeProperties::GetValueInput(pNVar20,0);
    if (*(short *)(*(long *)pNVar8 + 0x10) == 0x113) {
      pNVar9 = (Node *)NodeProperties::GetValueInput(pNVar20,1);
      if (*(short *)(*(Operator **)pNVar9 + 0x10) == 0x114) {
        uVar10 = IsRestLengthOf(*(Operator **)pNVar9);
        uVar3 = 2;
        if ((uVar10 & 1) == 0) {
          uVar3 = iVar7 == 0;
        }
        if (*(Use **)(pNVar9 + 0x18) != (Use *)0x0) {
          pNVar28 = (Node *)0x0;
          pUVar25 = *(Use **)(pNVar9 + 0x18);
          do {
            uVar4 = *(uint *)(pUVar25 + 0x10);
            pUVar22 = *(Use **)pUVar25;
            uVar10 = (ulong)(uVar4 >> 1);
            pUVar1 = pUVar25 + uVar10 * 0x18 + 0x18;
            lVar14 = 0x10;
            if ((uVar4 & 1) != 0) {
              lVar14 = 0x20;
            }
            pUVar18 = pUVar1;
            if ((uVar4 & 1) == 0) {
              pUVar18 = *(Use **)pUVar1;
            }
            if ((*(ushort *)(*(long *)pUVar18 + 0x10) < 0x31) &&
               ((1L << ((ulong)*(ushort *)(*(long *)pUVar18 + 0x10) & 0x3f) & 0x14c0000000000U) != 0
               )) {
              if (pNVar28 == (Node *)0x0) {
                pGVar24 = (Graph *)**(undefined8 **)(this + 0x10);
                pOVar11 = (Operator *)
                          CommonOperatorBuilder::ArgumentsLengthState
                                    ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                                     uVar3);
                local_70 = (Node *)0x0;
                pNVar28 = (Node *)Graph::NewNode(pGVar24,pOVar11,0,&local_70,false);
                *(undefined8 *)(pNVar28 + 8) = 0x1000001;
              }
              pNVar12 = *(Node **)(pUVar1 + uVar10 * 8 + lVar14);
              if (pNVar12 != pNVar28) {
                if (pNVar12 != (Node *)0x0) {
                  Node::RemoveUse(pNVar12,pUVar25);
                }
                *(Node **)(pUVar1 + uVar10 * 8 + lVar14) = pNVar28;
                if (pNVar28 != (Node *)0x0) {
                  Node::AppendUse(pNVar28,pUVar25);
                }
              }
            }
            pUVar25 = pUVar22;
          } while (pUVar22 != (Use *)0x0);
        }
        if (*(long **)(pNVar20 + 0x18) == (long *)0x0) {
          plVar29 = (long *)0x0;
          plVar30 = (long *)0x0;
        }
        else {
          this_00 = *(Zone **)(this + 0xc0);
          plVar30 = (long *)0x0;
          plVar29 = (long *)0x0;
          plVar23 = (long *)0x0;
          plVar26 = *(long **)(pNVar20 + 0x18);
          do {
            while( true ) {
              uVar4 = *(uint *)(plVar26 + 2);
              plVar27 = (long *)*plVar26;
              pNVar28 = (Node *)(plVar26 + (ulong)(uVar4 >> 1) * 3 + 3);
              lVar14 = 0x10;
              if ((uVar4 & 1) != 0) {
                lVar14 = 0x20;
              }
              pNVar12 = pNVar28 + (ulong)(uVar4 >> 1) * 8 + lVar14;
              if ((uVar4 & 1) == 0) {
                pNVar28 = *(Node **)pNVar28;
              }
              uVar10 = NodeProperties::IsValueEdge(plVar26,pNVar12);
              plVar26 = plVar27;
              if (((uVar10 & 1) != 0) &&
                 (local_70 = pNVar28, uVar10 = Node::UseEdges::empty((UseEdges *)&local_70),
                 (uVar10 & 1) == 0)) break;
LAB_016b6c08:
              if (plVar27 == (long *)0x0) goto LAB_016b6dac;
            }
            uVar5 = *(ushort *)(*(Operator **)pNVar28 + 0x10);
            if ((uVar5 < 0x31) && ((1L << ((ulong)uVar5 & 0x3f) & 0x14c0000000000U) != 0))
            goto LAB_016b6c08;
            if (uVar5 == 0xea) {
              lVar14 = FieldAccessOf(*(Operator **)pNVar28);
              if (*(int *)(lVar14 + 4) != 4) goto LAB_016b6e0c;
              if (plVar29 != plVar23) goto LAB_016b6ca8;
              lVar14 = (long)plVar29 - (long)plVar30 >> 3;
              uVar10 = lVar14 + 1;
              if (uVar10 >> 0x1c != 0) goto LAB_016b6f68;
              uVar19 = (long)plVar23 - (long)plVar30 >> 2;
              if (uVar10 <= uVar19) {
                uVar10 = uVar19;
              }
              if (0x7fffffe < (ulong)((long)plVar23 - (long)plVar30 >> 3)) {
                uVar10 = 0xfffffff;
              }
              if (uVar10 == 0) {
                lVar13 = 0;
              }
              else {
                uVar19 = uVar10 * 8;
                lVar13 = *(long *)(this_00 + 0x10);
                if (uVar19 < (ulong)(*(long *)(this_00 + 0x18) - lVar13) ||
                    uVar19 - (*(long *)(this_00 + 0x18) - lVar13) == 0) {
                  *(ulong *)(this_00 + 0x10) = lVar13 + uVar19;
                }
                else {
                  lVar13 = Zone::NewExpand(this_00,uVar19);
                }
              }
              plVar2 = (long *)(lVar13 + lVar14 * 8);
              plVar23 = (long *)(lVar13 + uVar10 * 8);
              *plVar2 = (long)pNVar28;
              plVar16 = plVar2;
              while (plVar29 != plVar30) {
                plVar29 = plVar29 + -1;
                plVar16 = plVar16 + -1;
                *plVar16 = *plVar29;
              }
            }
            else {
              if ((uVar5 != 0xeb) || (iVar7 != 0)) goto LAB_016b6e0c;
              if (plVar29 == plVar23) {
                lVar14 = (long)plVar29 - (long)plVar30 >> 3;
                uVar10 = lVar14 + 1;
                if (uVar10 >> 0x1c != 0) {
LAB_016b6f68:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar19 = (long)plVar23 - (long)plVar30 >> 2;
                if (uVar10 <= uVar19) {
                  uVar10 = uVar19;
                }
                if (0x7fffffe < (ulong)((long)plVar23 - (long)plVar30 >> 3)) {
                  uVar10 = 0xfffffff;
                }
                if (uVar10 == 0) {
                  lVar13 = 0;
                }
                else {
                  uVar19 = uVar10 * 8;
                  lVar13 = *(long *)(this_00 + 0x10);
                  if (uVar19 < (ulong)(*(long *)(this_00 + 0x18) - lVar13) ||
                      uVar19 - (*(long *)(this_00 + 0x18) - lVar13) == 0) {
                    *(ulong *)(this_00 + 0x10) = lVar13 + uVar19;
                  }
                  else {
                    lVar13 = Zone::NewExpand(this_00,uVar19);
                  }
                }
                plVar2 = (long *)(lVar13 + lVar14 * 8);
                plVar23 = (long *)(lVar13 + uVar10 * 8);
                *plVar2 = (long)pNVar28;
                plVar16 = plVar2;
                while (plVar29 != plVar30) {
                  plVar29 = plVar29 + -1;
                  plVar16 = plVar16 + -1;
                  *plVar16 = *plVar29;
                }
              }
              else {
LAB_016b6ca8:
                *plVar29 = (long)pNVar28;
                plVar16 = plVar30;
                plVar2 = plVar29;
              }
            }
            plVar30 = plVar16;
            plVar29 = plVar2 + 1;
          } while (plVar27 != (long *)0x0);
        }
LAB_016b6dac:
        pGVar24 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar11 = (Operator *)
                  CommonOperatorBuilder::ArgumentsElementsState
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],uVar3);
        local_70 = (Node *)0x0;
        lVar14 = Graph::NewNode(pGVar24,pOVar11,0,&local_70,false);
        *(undefined8 *)(lVar14 + 8) = 0x1000001;
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),pNVar20,lVar14,0,0);
        for (; plVar30 != plVar29; plVar30 = plVar30 + 1) {
          pNVar28 = (Node *)*plVar30;
          if (*(short *)(*(long *)pNVar28 + 0x10) == 0xea) {
            uVar15 = NodeProperties::GetValueInput(pNVar20,1);
            (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),pNVar28,uVar15,0,0);
          }
          else {
            if (*(short *)(*(long *)pNVar28 + 0x10) != 0xeb) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            uVar15 = NodeProperties::GetValueInput(pNVar28,1);
            pGVar24 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar11 = (Operator *)
                      SimplifiedOperatorBuilder::NumberSubtract
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f])
            ;
            local_70 = pNVar9;
            uStack_68 = uVar15;
            pNVar12 = (Node *)Graph::NewNode(pGVar24,pOVar11,2,&local_70,false);
            lVar14 = TypeCache::Get();
            *(undefined8 *)(pNVar12 + 8) = *(undefined8 *)(lVar14 + 0x238);
            NodeProperties::ReplaceValueInput(pNVar28,pNVar8,0);
            NodeProperties::ReplaceValueInput(pNVar28,pNVar12,1);
            pOVar11 = (Operator *)
                      SimplifiedOperatorBuilder::LoadStackArgument
                                (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
            NodeProperties::ChangeOp(pNVar28,pOVar11);
          }
        }
      }
    }
LAB_016b6e0c:
    pEVar17 = *(EscapeAnalysisReducer **)(pEVar21 + 8);
    if (*(EscapeAnalysisReducer **)(pEVar21 + 8) == (EscapeAnalysisReducer *)0x0) {
      pEVar17 = pEVar21 + 0x10;
      bVar6 = *(EscapeAnalysisReducer **)*(EscapeAnalysisReducer **)pEVar17 != pEVar21;
      pEVar21 = *(EscapeAnalysisReducer **)pEVar17;
      if (bVar6) {
        do {
          lVar14 = *(long *)pEVar17;
          pEVar17 = (EscapeAnalysisReducer *)(lVar14 + 0x10);
          pEVar21 = *(EscapeAnalysisReducer **)pEVar17;
        } while (*(long *)pEVar21 != lVar14);
      }
    }
    else {
      do {
        pEVar21 = pEVar17;
        pEVar17 = *(EscapeAnalysisReducer **)pEVar21;
      } while (*(EscapeAnalysisReducer **)pEVar21 != (EscapeAnalysisReducer *)0x0);
    }
  } while( true );
}

