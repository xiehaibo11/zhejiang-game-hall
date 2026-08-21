
/* cocos2d::WebViewImpl::didFailLoading(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::WebViewImpl::didFailLoading(int param_1,basic_string *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (DAT_01d387a0 != 0) {
                    /* catch() { ... } // from try @ 009dcbbc with catch @ 009dcc00 */
    uVar4 = DAT_01d387a0 - 1;
                    /* catch() { ... } // from try @ 009dcba0 with catch @ 009dcc04 */
                    /* catch() { ... } // from try @ 009dcb94 with catch @ 009dcc08 */
                    /* catch() { ... } // from try @ 009dcb74 with catch @ 009dcc0c */
    uVar5 = (ulong)param_1;
                    /* catch() { ... } // from try @ 009dcb6c with catch @ 009dcc10 */
    if ((uVar4 & DAT_01d387a0) == 0) {
                    /* catch() { ... } // from try @ 009dcb14 with catch @ 009dcc2c */
      uVar6 = uVar4 & uVar5;
    }
    else {
                    /* catch() { ... } // from try @ 009dcb48 with catch @ 009dcc14 */
                    /* catch() { ... } // from try @ 009dcb40 with catch @ 009dcc18 */
                    /* catch() { ... } // from try @ 009dcb1c with catch @ 009dcc1c */
      uVar6 = uVar5;
      if (DAT_01d387a0 <= uVar5) {
        uVar6 = 0;
        if (DAT_01d387a0 != 0) {
          uVar6 = uVar5 / DAT_01d387a0;
        }
        uVar6 = uVar5 - uVar6 * DAT_01d387a0;
      }
    }
    plVar7 = *(long **)(DAT_01d38798 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
                    /* try { // try from 009dcc40 to 00adcc7f has its CatchHandler @ 009dcc40
                       catch() { ... } // from try @ 009dcc40 with catch @ 009dcc40
                       catch() { ... } // from try @ 009dcd38 with catch @ 009dcc40 */
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_009dccb0;
          uVar8 = plVar7[1];
          if (uVar8 != uVar5) break;
          if (*(int *)(plVar7 + 2) == param_1) {
            plVar3 = *(long **)(*(long *)(plVar7[3] + 0x10) + 0x90);
            if (plVar3 != (long *)0x0) {
              local_30 = *(long *)(plVar7[3] + 0x10);
                    /* try { // try from 009dccac to 00adccb3 has its CatchHandler @ 009dcd84 */
              (**(code **)(*plVar3 + 0x30))(plVar3,&local_30,param_2);
            }
            goto LAB_009dccb0;
          }
        }
        if ((uVar4 & DAT_01d387a0) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else if (DAT_01d387a0 <= uVar8) {
          uVar1 = 0;
          if (DAT_01d387a0 != 0) {
            uVar1 = uVar8 / DAT_01d387a0;
          }
          uVar8 = uVar8 - uVar1 * DAT_01d387a0;
        }
                    /* try { // try from 009dcc80 to 00adcc87 has its CatchHandler @ 009dcd98 */
      } while (uVar8 == uVar6);
    }
  }
LAB_009dccb0:
                    /* try { // try from 009dccb4 to 00adccc7 has its CatchHandler @ 009dcd80 */
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

