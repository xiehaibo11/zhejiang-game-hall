
void Java_org_cocos2dx_lib_Cocos2dxWebViewHelper_onJsCallback
               (long *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  long local_50;
  long local_48;
  
                    /* try { // try from 00de5400 to 00ee5407 has its CatchHandler @ 00de5768 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar3 = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_4,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,pcVar3);
  (**(code **)(*param_1 + 0x550))(param_1,param_4,pcVar3);
                    /* try { // try from 00de546c to 00ee5473 has its CatchHandler @ 00de5758 */
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
    uVar6 = (ulong)param_3;
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
                    /* try { // try from 00de54d8 to 00ee54df has its CatchHandler @ 00de5748 */
          if ((int)plVar8[2] == param_3) {
            plVar4 = *(long **)(*(long *)(plVar8[3] + 0x10) + 0x5a0);
            if (plVar4 != (long *)0x0) {
              local_50 = *(long *)(plVar8[3] + 0x10);
              (**(code **)(*plVar4 + 0x30))(plVar4,&local_50,local_68);
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
                    /* try { // try from 00de5544 to 00ee554b has its CatchHandler @ 00de5738 */
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

