
/* cocos2d::GLProgramState::setUniformVec2(int, cocos2d::Vec2 const&) */

void __thiscall
cocos2d::GLProgramState::setUniformVec2(GLProgramState *this,int param_1,Vec2 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  updateUniformsAndAttributes(this);
  uVar2 = *(ulong *)(this + 0x58);
  if (uVar2 != 0) {
    uVar9 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar2 >> 
                                                  8)),POPCOUNT((char)uVar2))))))));
                    /* catch() { ... } // from try @ 00fd8dcc with catch @ 00fd8e0c */
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    uVar4 = (ulong)param_1;
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = uVar2 - 1 & uVar4;
    }
    else {
                    /* catch() { ... } // from try @ 00fd8e58 with catch @ 00fd8e28 */
      uVar5 = uVar4;
      if (uVar2 <= uVar4) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar4 / uVar2;
        }
        uVar5 = uVar4 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 0x50) + uVar5 * 8);
                    /* try { // try from 00fd8e50 to 010d8e57 has its CatchHandler @ 00fd8e90 */
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
                    /* try { // try from 00fd8e58 to 010d8eab has its CatchHandler @ 00fd8e28 */
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((int)plVar6[2] == param_1) {
            lVar3 = *(long *)param_2;
                    /* catch() { ... } // from try @ 00fd8edc with catch @ 00fd8eac */
            *(undefined4 *)(plVar6 + 5) = 0;
            plVar6[6] = lVar3;
            return;
          }
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar2 - 1;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
                    /* catch() { ... } // from try @ 00fd8e50 with catch @ 00fd8e90 */
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return;
}

