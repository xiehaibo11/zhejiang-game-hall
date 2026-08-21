
/* v8::internal::compiler::EscapeAnalysisResult::GetVirtualObjectField(v8::internal::compiler::VirtualObject
   const*, int, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EscapeAnalysisResult::GetVirtualObjectField
          (EscapeAnalysisResult *this,VirtualObject *param_1,int param_2,Node *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  State *pSVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  
  if ((param_2 & 3U) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAligned(offset, kTaggedSize)");
  }
  if (param_1[0x20] != (VirtualObject)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!HasEscaped()");
  }
  lVar12 = *(long *)this;
  lVar6 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28);
  if (param_2 < (int)((uint)lVar6 & 0xfffffffc)) {
    uVar1 = param_2 + 3;
    if (-1 < param_2) {
      uVar1 = param_2;
    }
    uVar3 = (long)((ulong)uVar1 << 0x20) >> 0x22;
    if ((ulong)(lVar6 >> 2) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar11 = *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar3 * 4);
  }
  else {
    v8::V8::FromJustIsNothing();
    uVar11 = 0xffffffff;
  }
  uVar1 = *(uint *)(param_3 + 0x14);
  uVar3 = base::hash_value(uVar1 & 0xffffff);
  uVar5 = *(ulong *)(lVar12 + 0x90);
  if (uVar5 != 0) {
    uVar14 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar7 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar7 < 2) {
      uVar8 = uVar5 - 1 & uVar3;
    }
    else {
      uVar8 = uVar3;
      if (uVar5 <= uVar3) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar3 / uVar5;
        }
        uVar8 = uVar3 - uVar8 * uVar5;
      }
    }
    plVar9 = *(long **)(*(long *)(lVar12 + 0x88) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar3 == uVar10) {
          if (*(uint *)(plVar9 + 2) == (uVar1 & 0xffffff)) {
            pSVar4 = (State *)(plVar9 + 3);
            goto LAB_016bb184;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar2 * uVar5;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  pSVar4 = (State *)(lVar12 + 0x70);
LAB_016bb184:
  VariableTracker::State::Get(pSVar4,uVar11);
  return;
}

