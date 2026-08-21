
/* cocos2d::WebViewImpl::shouldStartLoading(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint cocos2d::WebViewImpl::shouldStartLoading(int param_1,basic_string *param_2)

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
  long local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 009dc54c with catch @ 009dc5e4 */
                    /* catch() { ... } // from try @ 009dc544 with catch @ 009dc5e8 */
                    /* catch() { ... } // from try @ 009dc520 with catch @ 009dc5ec */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 009dc518 with catch @ 009dc5fc */
  if (DAT_01d387a0 != 0) {
    uVar5 = DAT_01d387a0 - 1;
                    /* try { // try from 009dc610 to 00adc64f has its CatchHandler @ 009dc610
                       catch() { ... } // from try @ 009dc610 with catch @ 009dc610
                       catch() { ... } // from try @ 009dc708 with catch @ 009dc610 */
    uVar6 = (ulong)param_1;
    if ((uVar5 & DAT_01d387a0) == 0) {
      uVar7 = uVar5 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (DAT_01d387a0 <= uVar6) {
        uVar7 = 0;
        if (DAT_01d387a0 != 0) {
          uVar7 = uVar6 / DAT_01d387a0;
        }
        uVar7 = uVar6 - uVar7 * DAT_01d387a0;
      }
    }
    plVar8 = *(long **)(DAT_01d38798 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
                    /* try { // try from 009dc650 to 00adc657 has its CatchHandler @ 009dc768 */
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
                    /* try { // try from 009dc658 to 00adc66b has its CatchHandler @ 009dc758 */
        if (uVar9 == uVar6) {
          if (*(int *)(plVar8 + 2) == param_1) {
                    /* try { // try from 009dc6a8 to 00adc6af has its CatchHandler @ 009dc74c */
                    /* try { // try from 009dc6b0 to 00adc6c3 has its CatchHandler @ 009dc748 */
            plVar4 = *(long **)(*(long *)(plVar8[3] + 0x10) + 0x30);
            if (plVar4 != (long *)0x0) {
              local_30 = *(long *)(plVar8[3] + 0x10);
              uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_30,param_2);
              goto LAB_009dc6d4;
            }
            break;
          }
        }
        else {
          if ((uVar5 & DAT_01d387a0) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (DAT_01d387a0 <= uVar9) {
                    /* try { // try from 009dc67c to 00adc683 has its CatchHandler @ 009dc754 */
            uVar1 = 0;
            if (DAT_01d387a0 != 0) {
              uVar1 = uVar9 / DAT_01d387a0;
            }
                    /* try { // try from 009dc684 to 00adc697 has its CatchHandler @ 009dc750 */
            if (uVar9 - uVar1 * DAT_01d387a0 == uVar7) goto LAB_009dc68c;
            break;
          }
          if (uVar9 != uVar7) break;
        }
LAB_009dc68c:
      }
    }
  }
  uVar3 = 1;
LAB_009dc6d4:
                    /* try { // try from 009dc6d4 to 00adc6db has its CatchHandler @ 009dc744 */
                    /* try { // try from 009dc6dc to 00adc6ef has its CatchHandler @ 009dc740 */
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009dc6f8 to 00adc707 has its CatchHandler @ 009dc73c */
  __stack_chk_fail();
}

