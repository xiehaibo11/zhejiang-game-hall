
/* cocos2d::GLProgramState::setUniformCallback(int, std::__ndk1::function<void (cocos2d::GLProgram*,
   cocos2d::Uniform*)> const&) */

void __thiscall
cocos2d::GLProgramState::setUniformCallback(GLProgramState *this,int param_1,function *param_2)

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
  
                    /* catch() { ... } // from try @ 00fd87b4 with catch @ 00fd87f0 */
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
                    /* catch() { ... } // from try @ 00fd8838 with catch @ 00fd880c */
    uVar3 = (ulong)param_1;
    if ((uVar9 & 0xffffffff) < 2) {
                    /* try { // try from 00fd8830 to 010d8837 has its CatchHandler @ 00fd886c */
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
                    /* try { // try from 00fd8838 to 010d8887 has its CatchHandler @ 00fd880c */
    plVar5 = *(long **)(*(long *)(this + 0x50) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar6 = plVar5[1];
                    /* catch() { ... } // from try @ 00fd8830 with catch @ 00fd886c */
        if (uVar6 == uVar3) {
          if ((int)plVar5[2] == param_1) {
                    /* try { // try from 00fd88ac to 010d88b3 has its CatchHandler @ 00fd88f0 */
                    /* try { // try from 00fd88b4 to 010d890b has its CatchHandler @ 00fd8888 */
            UniformValue::setCallback((UniformValue *)(plVar5 + 3),param_2);
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
                    /* catch() { ... } // from try @ 00fd88b4 with catch @ 00fd8888 */
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

