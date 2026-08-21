
/* cocos2d::experimental::ui::WebViewImpl::shouldStartLoading(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint cocos2d::experimental::ui::WebViewImpl::shouldStartLoading(int param_1,basic_string *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (DAT_01788a88 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(DAT_01788a88 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_01788a88 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_01788a88 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_01788a88 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_01788a88 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_01788a88 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_01788a88 >> 8)),POPCOUNT((char)DAT_01788a88)))
                                                  )))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar6 = (ulong)param_1;
    if (uVar5 < 2) {
      uVar7 = DAT_01788a88 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (DAT_01788a88 <= uVar6) {
        uVar7 = 0;
        if (DAT_01788a88 != 0) {
          uVar7 = uVar6 / DAT_01788a88;
        }
        uVar7 = uVar6 - uVar7 * DAT_01788a88;
      }
    }
    plVar8 = *(long **)(DAT_01788a80 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          if ((int)plVar8[2] == param_1) {
            plVar4 = *(long **)(*(long *)(plVar8[3] + 0x10) + 0x510);
            if (plVar4 != (long *)0x0) {
              local_30 = *(long *)(plVar8[3] + 0x10);
              uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_30,param_2);
              goto LAB_00de4e5c;
            }
            break;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar9 = uVar9 & DAT_01788a88 - 1;
          }
          else if (DAT_01788a88 <= uVar9) {
            uVar1 = 0;
            if (DAT_01788a88 != 0) {
              uVar1 = uVar9 / DAT_01788a88;
            }
            uVar9 = uVar9 - uVar1 * DAT_01788a88;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  uVar3 = 1;
LAB_00de4e5c:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}

