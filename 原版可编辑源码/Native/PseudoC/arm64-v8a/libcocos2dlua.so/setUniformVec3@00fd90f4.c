
/* cocos2d::GLProgramState::setUniformVec3(int, cocos2d::Vec3 const&) */

void __thiscall
cocos2d::GLProgramState::setUniformVec3(GLProgramState *this,int param_1,Vec3 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  updateUniformsAndAttributes(this);
  uVar3 = *(ulong *)(this + 0x58);
  if (uVar3 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar4 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar6 = (ulong)param_1;
    if (uVar4 < 2) {
      uVar7 = uVar3 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar3 <= uVar6) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar6 / uVar3;
        }
        uVar7 = uVar6 - uVar7 * uVar3;
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x50) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          if ((int)plVar8[2] == param_1) {
            uVar1 = *(undefined4 *)(param_2 + 8);
            lVar5 = *(long *)param_2;
            *(undefined4 *)(plVar8 + 5) = 0;
            *(undefined4 *)(plVar8 + 7) = uVar1;
            plVar8[6] = lVar5;
            return;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar9 = uVar9 & uVar3 - 1;
          }
          else if (uVar3 <= uVar9) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar9 / uVar3;
            }
            uVar9 = uVar9 - uVar2 * uVar3;
          }
          if (uVar9 != uVar7) {
            return;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return;
}

