
/* cocos2d::WebViewImpl::onJsCallback(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::WebViewImpl::onJsCallback(int param_1,basic_string *param_2)

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
                    /* catch() { ... } // from try @ 009dce94 with catch @ 009dced8 */
  local_28 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 009dce78 with catch @ 009dcedc */
                    /* catch() { ... } // from try @ 009dce70 with catch @ 009dcee0 */
                    /* catch() { ... } // from try @ 009dce4c with catch @ 009dcee4 */
                    /* catch() { ... } // from try @ 009dce44 with catch @ 009dcee8 */
  if (DAT_01d387a0 != 0) {
                    /* catch() { ... } // from try @ 009dce20 with catch @ 009dceec */
    uVar4 = DAT_01d387a0 - 1;
                    /* catch() { ... } // from try @ 009dce18 with catch @ 009dcef0 */
                    /* catch() { ... } // from try @ 009dcdf4 with catch @ 009dcef4 */
    uVar5 = (ulong)param_1;
    if ((uVar4 & DAT_01d387a0) == 0) {
                    /* try { // try from 009dcf18 to 00adcf57 has its CatchHandler @ 009dcf18
                       catch() { ... } // from try @ 009dcf18 with catch @ 009dcf18
                       catch() { ... } // from try @ 009dcfe4 with catch @ 009dcf18 */
      uVar6 = uVar4 & uVar5;
    }
    else {
                    /* catch() { ... } // from try @ 009dcdec with catch @ 009dcf04 */
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
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_009dcf9c;
          uVar8 = plVar7[1];
          if (uVar8 != uVar5) break;
          if (*(int *)(plVar7 + 2) == param_1) {
            plVar3 = *(long **)(*(long *)(plVar7[3] + 0x10) + 0xc0);
                    /* try { // try from 009dcf84 to 00adcf8b has its CatchHandler @ 009dd028 */
            if (plVar3 != (long *)0x0) {
                    /* try { // try from 009dcf8c to 00adcf9f has its CatchHandler @ 009dd024 */
              local_30 = *(long *)(plVar7[3] + 0x10);
              (**(code **)(*plVar3 + 0x30))(plVar3,&local_30,param_2);
            }
            goto LAB_009dcf9c;
          }
        }
        if ((uVar4 & DAT_01d387a0) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else {
                    /* try { // try from 009dcf58 to 00adcf5f has its CatchHandler @ 009dd03c */
          if (DAT_01d387a0 <= uVar8) {
            uVar1 = 0;
            if (DAT_01d387a0 != 0) {
              uVar1 = uVar8 / DAT_01d387a0;
            }
                    /* try { // try from 009dcf60 to 00adcf73 has its CatchHandler @ 009dd02c */
            uVar8 = uVar8 - uVar1 * DAT_01d387a0;
          }
        }
      } while (uVar8 == uVar6);
    }
  }
LAB_009dcf9c:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009dcfb0 to 00adcfb7 has its CatchHandler @ 009dd020 */
                    /* try { // try from 009dcfb8 to 00adcfcb has its CatchHandler @ 009dd01c */
  return;
}

