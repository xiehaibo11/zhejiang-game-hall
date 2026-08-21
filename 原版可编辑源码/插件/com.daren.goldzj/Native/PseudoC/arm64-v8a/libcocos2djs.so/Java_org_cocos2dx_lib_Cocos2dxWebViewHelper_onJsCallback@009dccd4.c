
void Java_org_cocos2dx_lib_Cocos2dxWebViewHelper_onJsCallback
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
  
                    /* try { // try from 009dccd8 to 00adccdf has its CatchHandler @ 009dcd7c */
                    /* try { // try from 009dcce0 to 00adccf3 has its CatchHandler @ 009dcd78 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009dcd04 to 00adcd0b has its CatchHandler @ 009dcd74 */
                    /* try { // try from 009dcd0c to 00adcd1f has its CatchHandler @ 009dcd70 */
  __s = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_4,0);
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
                    /* try { // try from 009dcd28 to 00adcd37 has its CatchHandler @ 009dcd6c */
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 009dcd38 to 00adcdab has its CatchHandler @ 009dcc40 */
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_009dcd88;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_78 = uVar4 | 1;
                    /* catch() { ... } // from try @ 009dcd28 with catch @ 009dcd6c */
                    /* catch() { ... } // from try @ 009dcd0c with catch @ 009dcd70 */
                    /* catch() { ... } // from try @ 009dcd04 with catch @ 009dcd74 */
    local_70 = __n;
    local_68 = __dest;
  }
                    /* catch() { ... } // from try @ 009dcce0 with catch @ 009dcd78 */
                    /* catch() { ... } // from try @ 009dccd8 with catch @ 009dcd7c */
                    /* catch() { ... } // from try @ 009dccb4 with catch @ 009dcd80 */
                    /* catch() { ... } // from try @ 009dccac with catch @ 009dcd84 */
  memcpy(__dest,__s,__n);
LAB_009dcd88:
                    /* catch() { ... } // from try @ 009dcc88 with catch @ 009dcd88 */
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* catch() { ... } // from try @ 009dcc80 with catch @ 009dcd98 */
  (**(code **)(*param_1 + 0x550))(param_1,param_4,__s);
                    /* try { // try from 009dcdac to 00adcdeb has its CatchHandler @ 009dcdac
                       catch() { ... } // from try @ 009dcdac with catch @ 009dcdac
                       catch() { ... } // from try @ 009dcea4 with catch @ 009dcdac */
  if (DAT_01d387a0 != 0) {
    uVar4 = DAT_01d387a0 - 1;
    uVar5 = (ulong)param_3;
    if ((uVar4 & DAT_01d387a0) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
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
                    /* try { // try from 009dcdec to 00adcdf3 has its CatchHandler @ 009dcf04 */
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_009dce60;
                    /* try { // try from 009dcdf4 to 00adce07 has its CatchHandler @ 009dcef4 */
          uVar8 = plVar7[1];
          if (uVar8 != uVar5) break;
          if (*(int *)(plVar7 + 2) == param_3) {
            plVar3 = *(long **)(*(long *)(plVar7[3] + 0x10) + 0xc0);
                    /* try { // try from 009dce44 to 00adce4b has its CatchHandler @ 009dcee8 */
            if (plVar3 != (long *)0x0) {
                    /* try { // try from 009dce4c to 00adce5f has its CatchHandler @ 009dcee4 */
              local_60 = *(long *)(plVar7[3] + 0x10);
              (**(code **)(*plVar3 + 0x30))(plVar3,&local_60,&local_78);
            }
            goto LAB_009dce60;
          }
        }
        if ((uVar4 & DAT_01d387a0) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else {
                    /* try { // try from 009dce18 to 00adce1f has its CatchHandler @ 009dcef0 */
          if (DAT_01d387a0 <= uVar8) {
            uVar1 = 0;
            if (DAT_01d387a0 != 0) {
              uVar1 = uVar8 / DAT_01d387a0;
            }
                    /* try { // try from 009dce20 to 00adce33 has its CatchHandler @ 009dceec */
            uVar8 = uVar8 - uVar1 * DAT_01d387a0;
          }
        }
      } while (uVar8 == uVar6);
    }
  }
LAB_009dce60:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 009dce70 to 00adce77 has its CatchHandler @ 009dcee0 */
                    /* try { // try from 009dce78 to 00adce8b has its CatchHandler @ 009dcedc */
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009dcea4 to 00adcf17 has its CatchHandler @ 009dcdac */
    __stack_chk_fail();
  }
                    /* try { // try from 009dce94 to 00adcea3 has its CatchHandler @ 009dced8 */
  return;
}

