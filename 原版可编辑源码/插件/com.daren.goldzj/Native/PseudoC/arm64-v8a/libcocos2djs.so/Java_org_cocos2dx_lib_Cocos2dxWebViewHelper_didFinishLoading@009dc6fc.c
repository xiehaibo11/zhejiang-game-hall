
void Java_org_cocos2dx_lib_Cocos2dxWebViewHelper_didFinishLoading
               (long *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  char *__s;
  size_t __n;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  void *__dest;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long local_60;
  long local_58;
  
                    /* try { // try from 009dc708 to 00adc77b has its CatchHandler @ 009dc610 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 009dc6f8 with catch @ 009dc73c */
                    /* catch() { ... } // from try @ 009dc6dc with catch @ 009dc740 */
  __s = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_4,0);
                    /* catch() { ... } // from try @ 009dc6d4 with catch @ 009dc744 */
                    /* catch() { ... } // from try @ 009dc6b0 with catch @ 009dc748 */
  local_78 = 0;
  local_70 = 0;
                    /* catch() { ... } // from try @ 009dc6a8 with catch @ 009dc74c */
  local_68 = (void *)0x0;
                    /* catch() { ... } // from try @ 009dc684 with catch @ 009dc750 */
  __n = strlen(__s);
                    /* catch() { ... } // from try @ 009dc67c with catch @ 009dc754 */
                    /* catch() { ... } // from try @ 009dc658 with catch @ 009dc758 */
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
                    /* catch() { ... } // from try @ 009dc650 with catch @ 009dc768 */
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_009dc7b0;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_78 = uVar4 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_009dc7b0:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 009dc7c8 to 00adc7cf has its CatchHandler @ 009dc850 */
  (**(code **)(*param_1 + 0x550))(param_1,param_4,__s);
                    /* try { // try from 009dc7d0 to 00adc7df has its CatchHandler @ 009dc840 */
  if (DAT_01d387a0 != 0) {
    uVar4 = DAT_01d387a0 - 1;
    uVar5 = (ulong)param_3;
    if ((uVar4 & DAT_01d387a0) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (DAT_01d387a0 <= uVar5) {
                    /* try { // try from 009dc7f4 to 00adc803 has its CatchHandler @ 009dc83c */
        uVar6 = 0;
        if (DAT_01d387a0 != 0) {
          uVar6 = uVar5 / DAT_01d387a0;
        }
        uVar6 = uVar5 - uVar6 * DAT_01d387a0;
      }
    }
                    /* try { // try from 009dc804 to 00adc863 has its CatchHandler @ 009dc77c */
    plVar7 = *(long **)(DAT_01d38798 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_009dc888;
          uVar8 = plVar7[1];
          if (uVar8 != uVar5) break;
          if (*(int *)(plVar7 + 2) == param_3) {
                    /* try { // try from 009dc864 to 00adc8a3 has its CatchHandler @ 009dc864
                       catch() { ... } // from try @ 009dc864 with catch @ 009dc864
                       catch() { ... } // from try @ 009dc904 with catch @ 009dc864 */
            plVar3 = *(long **)(*(long *)(plVar7[3] + 0x10) + 0x60);
            if (plVar3 != (long *)0x0) {
              local_60 = *(long *)(plVar7[3] + 0x10);
              (**(code **)(*plVar3 + 0x30))(plVar3,&local_60,&local_78);
            }
            goto LAB_009dc888;
          }
        }
        if ((uVar4 & DAT_01d387a0) == 0) {
                    /* catch() { ... } // from try @ 009dc7c8 with catch @ 009dc850 */
          uVar8 = uVar8 & uVar4;
        }
        else {
                    /* catch() { ... } // from try @ 009dc7f4 with catch @ 009dc83c */
                    /* catch() { ... } // from try @ 009dc7d0 with catch @ 009dc840 */
          if (DAT_01d387a0 <= uVar8) {
            uVar1 = 0;
            if (DAT_01d387a0 != 0) {
              uVar1 = uVar8 / DAT_01d387a0;
            }
            uVar8 = uVar8 - uVar1 * DAT_01d387a0;
          }
        }
      } while (uVar8 == uVar6);
    }
  }
LAB_009dc888:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 009dc8a4 to 00adc8ab has its CatchHandler @ 009dc954 */
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009dc8ac to 00adc8bf has its CatchHandler @ 009dc944 */
  return;
}

