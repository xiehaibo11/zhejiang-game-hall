
/* cocos2d::WebViewImpl::didFinishLoading(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::WebViewImpl::didFinishLoading(int param_1,basic_string *param_2)

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
  
                    /* try { // try from 009dc8f4 to 00adc903 has its CatchHandler @ 009dc938 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009dc904 to 00adc967 has its CatchHandler @ 009dc864 */
  if (DAT_01d387a0 != 0) {
    uVar4 = DAT_01d387a0 - 1;
    uVar5 = (ulong)param_1;
    if ((uVar4 & DAT_01d387a0) == 0) {
                    /* catch() { ... } // from try @ 009dc8d0 with catch @ 009dc940 */
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (DAT_01d387a0 <= uVar5) {
        uVar6 = 0;
        if (DAT_01d387a0 != 0) {
          uVar6 = uVar5 / DAT_01d387a0;
        }
                    /* catch() { ... } // from try @ 009dc8f4 with catch @ 009dc938 */
        uVar6 = uVar5 - uVar6 * DAT_01d387a0;
                    /* catch() { ... } // from try @ 009dc8d8 with catch @ 009dc93c */
      }
    }
                    /* catch() { ... } // from try @ 009dc8ac with catch @ 009dc944 */
    plVar7 = *(long **)(DAT_01d38798 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
                    /* catch() { ... } // from try @ 009dc8a4 with catch @ 009dc954 */
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_009dc9c4;
          uVar8 = plVar7[1];
          if (uVar8 != uVar5) break;
                    /* try { // try from 009dc968 to 00adc9a7 has its CatchHandler @ 009dc968
                       catch() { ... } // from try @ 009dc968 with catch @ 009dc968
                       catch() { ... } // from try @ 009dca60 with catch @ 009dc968 */
          if (*(int *)(plVar7 + 2) == param_1) {
                    /* try { // try from 009dc9a8 to 00adc9af has its CatchHandler @ 009dcac0 */
            plVar3 = *(long **)(*(long *)(plVar7[3] + 0x10) + 0x60);
            if (plVar3 != (long *)0x0) {
                    /* try { // try from 009dc9b0 to 00adc9c3 has its CatchHandler @ 009dcab0 */
              local_30 = *(long *)(plVar7[3] + 0x10);
              (**(code **)(*plVar3 + 0x30))(plVar3,&local_30,param_2);
            }
            goto LAB_009dc9c4;
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
      } while (uVar8 == uVar6);
    }
  }
LAB_009dc9c4:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009dc9d4 to 00adc9db has its CatchHandler @ 009dcaac */
                    /* try { // try from 009dc9dc to 00adc9ef has its CatchHandler @ 009dcaa8 */
  return;
}

