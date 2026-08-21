
/* cocos2d::extension::ControlButton::getTitleForState(cocos2d::extension::Control::State) */

void cocos2d::extension::ControlButton::getTitleForState
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                *param_1,long param_2,int param_3)

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
  
  uVar2 = *(ulong *)(param_2 + 0x3b0);
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
    uVar3 = (ulong)param_3;
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
    plVar5 = *(long **)(*(long *)(param_2 + 0x3a8) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar6 = plVar5[1];
        if (uVar6 == uVar3) {
          if ((int)plVar5[2] == param_3) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(param_1,(basic_string *)(plVar5 + 3));
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
          if (uVar6 != uVar4) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    uVar3 = (ulong)(uVar2 != 0 && uVar2 - 1 != 0);
    if ((uVar9 & 0xffffffff) < 2) {
      uVar3 = (ulong)~(uint)uVar2 & 1;
    }
    plVar5 = *(long **)(*(long *)(param_2 + 0x3a8) + uVar3 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) goto LAB_00e0ae00;
            uVar4 = plVar5[1];
            if (uVar4 != 1) break;
            if (*(int *)(plVar5 + 2) == 1) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string(param_1,(basic_string *)(plVar5 + 3));
              return;
            }
          }
          if ((uVar9 & 0xffffffff) < 2) break;
          if (uVar2 <= uVar4) {
            uVar6 = 0;
            if (uVar2 != 0) {
              uVar6 = uVar4 / uVar2;
            }
            uVar4 = uVar4 - uVar6 * uVar2;
          }
          if (uVar4 != uVar3) goto LAB_00e0ae00;
        }
      } while ((uVar4 & uVar2 - 1) == uVar3);
    }
  }
LAB_00e0ae00:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(param_1,"");
  return;
}

