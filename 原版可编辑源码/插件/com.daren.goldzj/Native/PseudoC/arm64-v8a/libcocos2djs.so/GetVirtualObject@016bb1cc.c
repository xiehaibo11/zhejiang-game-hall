
/* v8::internal::compiler::EscapeAnalysisResult::GetVirtualObject(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::EscapeAnalysisResult::GetVirtualObject
          (EscapeAnalysisResult *this,Node *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  plVar8 = *(long **)this;
  uVar3 = base::hash_value(uVar1 & 0xffffff);
  uVar4 = plVar8[2];
  if (uVar4 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
    if ((uVar11 & 0xffffffff) < 2) {
      uVar5 = uVar4 - 1 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar4 <= uVar3) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar3 / uVar4;
        }
        uVar5 = uVar3 - uVar5 * uVar4;
      }
    }
    plVar6 = *(long **)(plVar8[1] + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar3 == uVar7) {
          if (*(uint *)(plVar6 + 2) == (uVar1 & 0xffffff)) {
            plVar8 = plVar6 + 3;
            break;
          }
        }
        else {
          if ((uVar11 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar4 - 1;
          }
          else if (uVar4 <= uVar7) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar7 / uVar4;
            }
            uVar7 = uVar7 - uVar2 * uVar4;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return *plVar8;
}

