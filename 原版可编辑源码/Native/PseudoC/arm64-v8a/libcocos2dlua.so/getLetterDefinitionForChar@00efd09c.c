
/* cocos2d::FontAtlas::getLetterDefinitionForChar(char32_t, cocos2d::FontLetterDefinition&) */

bool __thiscall
cocos2d::FontAtlas::getLetterDefinitionForChar
          (FontAtlas *this,wchar32 param_1,FontLetterDefinition *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = *(ulong *)(this + 0x58);
  if (uVar3 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar5 = (ulong)(uint)param_1;
    if (uVar4 < 2) {
      uVar6 = (ulong)(uint)((int)uVar3 - 1U & param_1);
    }
    else {
      uVar6 = uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar5 / uVar3;
        }
        uVar6 = uVar5 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(this + 0x50) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if (*(wchar32 *)(plVar7 + 2) == param_1) {
            uVar11 = *(undefined8 *)((long)plVar7 + 0x2c);
            uVar10 = *(undefined8 *)((long)plVar7 + 0x24);
            uVar12 = *(undefined8 *)((long)plVar7 + 0x14);
            uVar1 = *(undefined4 *)((long)plVar7 + 0x34);
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)((long)plVar7 + 0x1c);
            *(undefined8 *)param_2 = uVar12;
            *(undefined8 *)(param_2 + 0x18) = uVar11;
            *(undefined8 *)(param_2 + 0x10) = uVar10;
            *(undefined4 *)(param_2 + 0x20) = uVar1;
            return param_2[0x1c] != (FontLetterDefinition)0x0;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & uVar3 - 1;
          }
          else if (uVar3 <= uVar8) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar2 * uVar3;
          }
          if (uVar8 != uVar6) {
            return false;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return false;
}

