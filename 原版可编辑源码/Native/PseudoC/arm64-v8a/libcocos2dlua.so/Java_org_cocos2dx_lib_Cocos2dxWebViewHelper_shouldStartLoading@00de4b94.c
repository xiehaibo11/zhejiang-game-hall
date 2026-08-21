
uint Java_org_cocos2dx_lib_Cocos2dxWebViewHelper_shouldStartLoading
               (long *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar4 = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_4,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,pcVar4);
  (**(code **)(*param_1 + 0x550))(param_1,param_4,pcVar4);
  if (DAT_01788a88 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(DAT_01788a88 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_01788a88 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_01788a88 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_01788a88 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_01788a88 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_01788a88 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_01788a88 >> 8)),POPCOUNT((char)DAT_01788a88)))
                                                  )))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar7 = (ulong)param_3;
    if (uVar6 < 2) {
      uVar8 = DAT_01788a88 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (DAT_01788a88 <= uVar7) {
        uVar8 = 0;
        if (DAT_01788a88 != 0) {
          uVar8 = uVar7 / DAT_01788a88;
        }
        uVar8 = uVar7 - uVar8 * DAT_01788a88;
      }
    }
    plVar9 = *(long **)(DAT_01788a80 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          if ((int)plVar9[2] == param_3) {
            plVar5 = *(long **)(*(long *)(plVar9[3] + 0x10) + 0x510);
            if (plVar5 != (long *)0x0) {
              local_50 = *(long *)(plVar9[3] + 0x10);
              uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_50,local_68);
              uVar3 = uVar3 & 1;
              goto joined_r0x00de4cec;
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & DAT_01788a88 - 1;
          }
          else if (DAT_01788a88 <= uVar10) {
            uVar1 = 0;
            if (DAT_01788a88 != 0) {
              uVar1 = uVar10 / DAT_01788a88;
            }
            uVar10 = uVar10 - uVar1 * DAT_01788a88;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar3 = 1;
joined_r0x00de4cec:
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

