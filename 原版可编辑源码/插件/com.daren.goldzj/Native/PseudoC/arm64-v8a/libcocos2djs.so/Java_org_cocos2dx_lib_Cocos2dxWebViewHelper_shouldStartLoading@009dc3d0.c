
uint Java_org_cocos2dx_lib_Cocos2dxWebViewHelper_shouldStartLoading
               (long *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  char *__s;
  size_t __n;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  void *__dest;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long local_60;
  long local_58;
  
                    /* try { // try from 009dc3d4 to 00adc413 has its CatchHandler @ 009dc3d4
                       catch() { ... } // from try @ 009dc3d4 with catch @ 009dc3d4
                       catch() { ... } // from try @ 009dc474 with catch @ 009dc3d4 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009dc414 to 00adc41b has its CatchHandler @ 009dc4c4 */
  __s = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_4,0);
                    /* try { // try from 009dc41c to 00adc42f has its CatchHandler @ 009dc4b4 */
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
                    /* try { // try from 009dc440 to 00adc447 has its CatchHandler @ 009dc4b0 */
    __dest = (void *)((ulong)&local_78 | 1);
                    /* try { // try from 009dc448 to 00adc45b has its CatchHandler @ 009dc4ac */
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_009dc484;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
                    /* try { // try from 009dc464 to 00adc473 has its CatchHandler @ 009dc4a8 */
    local_78 = uVar5 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
                    /* try { // try from 009dc474 to 00adc4d7 has its CatchHandler @ 009dc3d4 */
  memcpy(__dest,__s,__n);
LAB_009dc484:
  *(undefined1 *)((long)__dest + __n) = 0;
  (**(code **)(*param_1 + 0x550))(param_1,param_4,__s);
                    /* catch() { ... } // from try @ 009dc464 with catch @ 009dc4a8 */
  if (DAT_01d387a0 != 0) {
                    /* catch() { ... } // from try @ 009dc448 with catch @ 009dc4ac */
    uVar5 = DAT_01d387a0 - 1;
                    /* catch() { ... } // from try @ 009dc440 with catch @ 009dc4b0 */
                    /* catch() { ... } // from try @ 009dc41c with catch @ 009dc4b4 */
    uVar6 = (ulong)param_3;
    if ((uVar5 & DAT_01d387a0) == 0) {
      uVar7 = uVar5 & uVar6;
    }
    else {
                    /* catch() { ... } // from try @ 009dc414 with catch @ 009dc4c4 */
      uVar7 = uVar6;
      if (DAT_01d387a0 <= uVar6) {
        uVar7 = 0;
        if (DAT_01d387a0 != 0) {
          uVar7 = uVar6 / DAT_01d387a0;
        }
        uVar7 = uVar6 - uVar7 * DAT_01d387a0;
      }
    }
                    /* try { // try from 009dc4d8 to 00adc517 has its CatchHandler @ 009dc4d8
                       catch() { ... } // from try @ 009dc4d8 with catch @ 009dc4d8
                       catch() { ... } // from try @ 009dc5a4 with catch @ 009dc4d8 */
    plVar8 = *(long **)(DAT_01d38798 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          if (*(int *)(plVar8 + 2) == param_3) {
            plVar4 = *(long **)(*(long *)(plVar8[3] + 0x10) + 0x30);
            if (plVar4 != (long *)0x0) {
                    /* try { // try from 009dc594 to 00adc5a3 has its CatchHandler @ 009dc5d8 */
                    /* try { // try from 009dc5a4 to 00adc60f has its CatchHandler @ 009dc4d8 */
              local_60 = *(long *)(plVar8[3] + 0x10);
              uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_60,&local_78);
              uVar3 = uVar3 & 1;
              if ((local_78 & 1) == 0) goto LAB_009dc554;
              goto LAB_009dc54c;
            }
            break;
          }
        }
        else {
          if ((uVar5 & DAT_01d387a0) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (DAT_01d387a0 <= uVar9) {
                    /* try { // try from 009dc518 to 00adc51f has its CatchHandler @ 009dc5fc */
            uVar1 = 0;
            if (DAT_01d387a0 != 0) {
              uVar1 = uVar9 / DAT_01d387a0;
            }
                    /* try { // try from 009dc520 to 00adc533 has its CatchHandler @ 009dc5ec */
            if (uVar9 - uVar1 * DAT_01d387a0 == uVar7) goto LAB_009dc538;
            break;
          }
          if (uVar9 != uVar7) break;
        }
LAB_009dc538:
      }
    }
  }
  uVar3 = 1;
                    /* try { // try from 009dc544 to 00adc54b has its CatchHandler @ 009dc5e8 */
  if ((local_78 & 1) != 0) {
LAB_009dc54c:
                    /* try { // try from 009dc54c to 00adc55f has its CatchHandler @ 009dc5e4 */
    operator_delete(local_68);
  }
LAB_009dc554:
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 009dc570 to 00adc577 has its CatchHandler @ 009dc5e0 */
                    /* try { // try from 009dc578 to 00adc58b has its CatchHandler @ 009dc5dc */
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

