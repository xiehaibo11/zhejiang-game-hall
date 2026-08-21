
/* cocos2d::GLProgramState::setUniformFloat(int, float) */

void __thiscall
cocos2d::GLProgramState::setUniformFloat(GLProgramState *this,int param_1,float param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
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
                    /* catch() { ... } // from try @ 00fd8950 with catch @ 00fd898c */
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar9 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7);
    uVar3 = (ulong)param_1;
    if ((uVar9 & 0xffffffff) < 2) {
      uVar4 = uVar2 - 1 & uVar3;
    }
    else {
                    /* catch() { ... } // from try @ 00fd89d4 with catch @ 00fd89a8 */
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
                    /* try { // try from 00fd89cc to 010d89d3 has its CatchHandler @ 00fd8a08 */
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
                    /* try { // try from 00fd89d4 to 010d8a23 has its CatchHandler @ 00fd89a8 */
      do {
        uVar6 = plVar5[1];
        if (uVar6 == uVar3) {
          if ((int)plVar5[2] == param_1) {
            *(float *)(plVar5 + 6) = param_2;
            *(undefined4 *)(plVar5 + 5) = 0;
            return;
          }
        }
        else {
          if ((uVar9 & 0xffffffff) < 2) {
            uVar6 = uVar6 & uVar2 - 1;
          }
          else {
                    /* catch() { ... } // from try @ 00fd89cc with catch @ 00fd8a08 */
            if (uVar2 <= uVar6) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar6 / uVar2;
              }
              uVar6 = uVar6 - uVar1 * uVar2;
            }
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

