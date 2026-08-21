
/* v8::internal::compiler::EscapeAnalysisTracker::Scope::GetVirtualObject(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EscapeAnalysisTracker::Scope::GetVirtualObject(Scope *this,Node *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  Zone *this_00;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined2 uVar16;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  puVar15 = *(undefined8 **)(this + 0x30);
  uVar4 = base::hash_value(uVar2 & 0xffffff);
  uVar5 = puVar15[2];
  if (uVar5 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar16 = NEON_uaddlv(uVar13,1);
    uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar16) & 0xffffffff;
    if (uVar7 < 2) {
      uVar8 = uVar5 - 1 & uVar4;
    }
    else {
      uVar8 = uVar4;
      if (uVar5 <= uVar4) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar4 / uVar5;
        }
        uVar8 = uVar4 - uVar8 * uVar5;
      }
    }
    plVar10 = *(long **)(puVar15[1] + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar12 = plVar10[1];
        if (uVar4 == uVar12) {
          if (*(uint *)(plVar10 + 2) == (uVar2 & 0xffffff)) {
            plVar10 = (long *)plVar10[3];
            if (plVar10 == (long *)0x0) {
              return;
            }
            goto LAB_016bc4b0;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar12 = uVar12 & uVar5 - 1;
          }
          else if (uVar5 <= uVar12) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar3 * uVar5;
          }
          if (uVar12 != uVar8) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  plVar10 = (long *)*puVar15;
  if (plVar10 != (long *)0x0) {
LAB_016bc4b0:
    puVar15 = (undefined8 *)plVar10[1];
    uVar13 = *(undefined8 *)this;
    if (puVar15 == (undefined8 *)plVar10[2]) {
      lVar14 = (long)puVar15 - *plVar10 >> 3;
      uVar4 = lVar14 + 1;
      if (uVar4 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = plVar10[2] - *plVar10;
      uVar5 = lVar6 >> 2;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (0x7fffffe < (ulong)(lVar6 >> 3)) {
        uVar4 = 0xfffffff;
      }
      if (uVar4 == 0) {
        lVar6 = 0;
      }
      else {
        this_00 = (Zone *)plVar10[3];
        uVar5 = uVar4 * 8;
        lVar6 = *(long *)(this_00 + 0x10);
        if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
            uVar5 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
          *(ulong *)(this_00 + 0x10) = lVar6 + uVar5;
        }
        else {
          lVar6 = Zone::NewExpand(this_00,uVar5);
        }
      }
      puVar15 = (undefined8 *)(lVar6 + lVar14 * 8);
      puVar9 = puVar15 + 1;
      *puVar15 = uVar13;
      puVar1 = (undefined8 *)*plVar10;
      puVar11 = (undefined8 *)plVar10[1];
      while (puVar11 != puVar1) {
        puVar11 = puVar11 + -1;
        puVar15 = puVar15 + -1;
        *puVar15 = *puVar11;
      }
      *plVar10 = (long)puVar15;
      plVar10[1] = (long)puVar9;
      plVar10[2] = lVar6 + uVar4 * 8;
    }
    else {
      *puVar15 = uVar13;
      plVar10[1] = plVar10[1] + 8;
    }
  }
  return;
}

