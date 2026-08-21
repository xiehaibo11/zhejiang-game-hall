
/* cocos2d::experimental::AudioEngineImpl::setCurrentTime(int, float) */

undefined8 cocos2d::experimental::AudioEngineImpl::setCurrentTime(int param_1,float param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w1;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  ulong uVar9;
  
  uVar3 = *(ulong *)((ulong)(uint)param_1 + 0x48);
  if (uVar3 != 0) {
    uVar2 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar8 = NEON_uaddlv(uVar2,1);
    uVar9 = CONCAT62((int6)((ulong)uVar2 >> 0x10),uVar8);
    uVar4 = (ulong)in_w1;
    if ((uVar9 & 0xffffffff) < 2) {
      uVar5 = uVar3 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)((ulong)(uint)param_1 + 0x40) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((int)plVar6[2] == in_w1) {
                    /* WARNING: Could not recover jumptable at 0x00e66118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar2 = (**(code **)(*(long *)plVar6[3] + 0x90))();
            return uVar2;
          }
        }
        else {
          if ((uVar9 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar1 * uVar3;
          }
          if (uVar7 != uVar5) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return 0;
}

