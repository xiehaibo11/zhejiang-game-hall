
/* cocos2d::GLProgramState::setUniformMat4(int, cocos2d::Mat4 const&) */

void __thiscall
cocos2d::GLProgramState::setUniformMat4(GLProgramState *this,int param_1,Mat4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar9;
  
  updateUniformsAndAttributes(this);
  uVar2 = *(ulong *)(this + 0x58);
  if (uVar2 != 0) {
    uVar8 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar2 >> 
                                                  8)),POPCOUNT((char)uVar2))))))));
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar9 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7);
    uVar3 = (ulong)param_1;
    if ((uVar9 & 0xffffffff) < 2) {
      uVar4 = uVar2 - 1 & uVar3;
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*(long *)(this + 0x50) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar6 = plVar5[1];
        if (uVar6 == uVar3) {
          if ((int)plVar5[2] == param_1) {
            lVar11 = *(long *)(param_2 + 0x28);
            lVar10 = *(long *)(param_2 + 0x20);
            lVar13 = *(long *)(param_2 + 0x38);
            lVar12 = *(long *)(param_2 + 0x30);
            lVar15 = *(long *)(param_2 + 8);
            lVar14 = *(long *)param_2;
            lVar17 = *(long *)(param_2 + 0x18);
            lVar16 = *(long *)(param_2 + 0x10);
            *(undefined4 *)(plVar5 + 5) = 0;
            plVar5[0xb] = lVar11;
            plVar5[10] = lVar10;
            plVar5[0xd] = lVar13;
            plVar5[0xc] = lVar12;
            plVar5[7] = lVar15;
            plVar5[6] = lVar14;
            plVar5[9] = lVar17;
            plVar5[8] = lVar16;
            return;
          }
        }
        else {
          if ((uVar9 & 0xffffffff) < 2) {
            uVar6 = uVar6 & uVar2 - 1;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return;
}

