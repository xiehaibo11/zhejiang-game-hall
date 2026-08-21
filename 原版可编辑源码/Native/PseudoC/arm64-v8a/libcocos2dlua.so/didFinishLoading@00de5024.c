
/* cocos2d::experimental::ui::WebViewImpl::didFinishLoading(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::experimental::ui::WebViewImpl::didFinishLoading(int param_1,basic_string *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (DAT_01788a88 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(DAT_01788a88 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_01788a88 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_01788a88 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_01788a88 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_01788a88 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_01788a88 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_01788a88 >> 8)),POPCOUNT((char)DAT_01788a88)))
                                                  )))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar5 = (ulong)param_1;
    if (uVar4 < 2) {
      uVar6 = DAT_01788a88 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (DAT_01788a88 <= uVar5) {
        uVar6 = 0;
        if (DAT_01788a88 != 0) {
          uVar6 = uVar5 / DAT_01788a88;
        }
        uVar6 = uVar5 - uVar6 * DAT_01788a88;
      }
    }
    plVar7 = *(long **)(DAT_01788a80 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if ((int)plVar7[2] == param_1) {
            plVar3 = *(long **)(*(long *)(plVar7[3] + 0x10) + 0x540);
            if (plVar3 != (long *)0x0) {
              local_30 = *(long *)(plVar7[3] + 0x10);
              (**(code **)(*plVar3 + 0x30))(plVar3,&local_30,param_2);
            }
            break;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & DAT_01788a88 - 1;
          }
          else if (DAT_01788a88 <= uVar8) {
            uVar1 = 0;
            if (DAT_01788a88 != 0) {
              uVar1 = uVar8 / DAT_01788a88;
            }
            uVar8 = uVar8 - uVar1 * DAT_01788a88;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

