
/* v8::internal::compiler::EscapeAnalysisTracker::Scope::MarkForDeletion() */

void __thiscall v8::internal::compiler::EscapeAnalysisTracker::Scope::MarkForDeletion(Scope *this)

{
  uint uVar1;
  Graph *this_00;
  ulong uVar2;
  long lVar3;
  Operator *pOVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  Node *local_38;
  ulong uVar14;
  
  plVar10 = *(long **)(this + 0x30);
  puVar11 = (undefined8 *)plVar10[0x20];
  lVar3 = puVar11[0x2c];
  if (lVar3 == 0) {
    this_00 = (Graph *)*puVar11;
    pOVar4 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar11[1]);
    local_38 = (Node *)0x0;
    lVar3 = Graph::NewNode(this_00,pOVar4,0,&local_38,false);
    puVar11[0x2c] = lVar3;
    *(long *)(this + 0x48) = lVar3;
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_016bc6d4;
    }
    plVar10 = *(long **)(this + 0x30);
  }
  else {
    *(long *)(this + 0x48) = lVar3;
  }
  uVar1 = *(uint *)(lVar3 + 0x14) & 0xffffff;
  uVar5 = base::hash_value(uVar1);
  uVar6 = plVar10[2];
  if (uVar6 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar6 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar6))))
                                                ))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar14 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12);
    if ((uVar14 & 0xffffffff) < 2) {
      uVar7 = uVar6 - 1 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar6 <= uVar5) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar5 / uVar6;
        }
        uVar7 = uVar5 - uVar7 * uVar6;
      }
    }
    plVar8 = *(long **)(plVar10[1] + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar5 == uVar9) {
          if (*(uint *)(plVar8 + 2) == uVar1) {
            plVar10 = plVar8 + 3;
            break;
          }
        }
        else {
          if ((uVar14 & 0xffffffff) < 2) {
            uVar9 = uVar9 & uVar6 - 1;
          }
          else if (uVar6 <= uVar9) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar9 / uVar6;
            }
            uVar9 = uVar9 - uVar2 * uVar6;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  lVar3 = *plVar10;
LAB_016bc6d4:
  *(long *)(this + 0x40) = lVar3;
  return;
}

