
void Java_org_cocos2dx_lib_Cocos2dxWebViewHelper_didFailLoading
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
  
                    /* try { // try from 009dca00 to 00adca07 has its CatchHandler @ 009dcaa4 */
  lVar2 = tpidr_el0;
                    /* try { // try from 009dca08 to 00adca1b has its CatchHandler @ 009dcaa0 */
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009dca2c to 00adca33 has its CatchHandler @ 009dca9c */
  __s = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_4,0);
                    /* try { // try from 009dca34 to 00adca47 has its CatchHandler @ 009dca98 */
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 009dca50 to 00adca5f has its CatchHandler @ 009dca94 */
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
                    /* try { // try from 009dca60 to 00adcad3 has its CatchHandler @ 009dc968 */
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_009dca9c;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_78 = uVar4 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
                    /* catch() { ... } // from try @ 009dca50 with catch @ 009dca94 */
                    /* catch() { ... } // from try @ 009dca34 with catch @ 009dca98 */
  memcpy(__dest,__s,__n);
LAB_009dca9c:
                    /* catch() { ... } // from try @ 009dca2c with catch @ 009dca9c */
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* catch() { ... } // from try @ 009dca08 with catch @ 009dcaa0 */
                    /* catch() { ... } // from try @ 009dca00 with catch @ 009dcaa4 */
                    /* catch() { ... } // from try @ 009dc9dc with catch @ 009dcaa8 */
                    /* catch() { ... } // from try @ 009dc9d4 with catch @ 009dcaac */
                    /* catch() { ... } // from try @ 009dc9b0 with catch @ 009dcab0 */
  (**(code **)(*param_1 + 0x550))(param_1,param_4,__s);
                    /* catch() { ... } // from try @ 009dc9a8 with catch @ 009dcac0 */
  if (DAT_01d387a0 != 0) {
    uVar4 = DAT_01d387a0 - 1;
    uVar5 = (ulong)param_3;
    if ((uVar4 & DAT_01d387a0) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
                    /* try { // try from 009dcad4 to 00adcb13 has its CatchHandler @ 009dcad4
                       catch() { ... } // from try @ 009dcad4 with catch @ 009dcad4
                       catch() { ... } // from try @ 009dcbcc with catch @ 009dcad4 */
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
          if (plVar7 == (long *)0x0) goto LAB_009dcb74;
          uVar8 = plVar7[1];
          if (uVar8 != uVar5) break;
                    /* try { // try from 009dcb14 to 00adcb1b has its CatchHandler @ 009dcc2c */
                    /* try { // try from 009dcb1c to 00adcb2f has its CatchHandler @ 009dcc1c */
          if (*(int *)(plVar7 + 2) == param_3) {
            plVar3 = *(long **)(*(long *)(plVar7[3] + 0x10) + 0x90);
            if (plVar3 != (long *)0x0) {
                    /* try { // try from 009dcb6c to 00adcb73 has its CatchHandler @ 009dcc10 */
              local_60 = *(long *)(plVar7[3] + 0x10);
              (**(code **)(*plVar3 + 0x30))(plVar3,&local_60,&local_78);
            }
            goto LAB_009dcb74;
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
                    /* try { // try from 009dcb40 to 00adcb47 has its CatchHandler @ 009dcc18 */
      } while (uVar8 == uVar6);
    }
  }
LAB_009dcb74:
                    /* try { // try from 009dcb74 to 00adcb87 has its CatchHandler @ 009dcc0c */
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009dcb94 to 00adcb9f has its CatchHandler @ 009dcc08 */
                    /* try { // try from 009dcba0 to 00adcbb3 has its CatchHandler @ 009dcc04 */
  return;
}

