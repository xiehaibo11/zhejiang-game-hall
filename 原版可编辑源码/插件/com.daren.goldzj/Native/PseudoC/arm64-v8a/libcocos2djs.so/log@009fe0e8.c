
/* universe::Translated::log(char const*, ...) */

void universe::Translated::log(char *param_1,...)

{
  long lVar1;
  byte bVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  void *pvVar6;
  int iVar7;
  char *__s;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  int iVar11;
  undefined1 auStack_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  byte local_118;
  undefined7 uStack_117;
  undefined1 local_110;
  undefined7 uStack_10f;
  void *local_108;
  undefined1 *local_100;
  byte *pbStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  long alStack_b0 [4];
  long *local_90;
  
                    /* try { // try from 009fe100 to 00afe10b has its CatchHandler @ 009fe178 */
                    /* try { // try from 009fe10c to 00afe113 has its CatchHandler @ 009fe174 */
                    /* try { // try from 009fe114 to 00afe13b has its CatchHandler @ 009fe180 */
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  local_148 = in_x2;
  uStack_140 = in_x3;
  local_138 = in_x4;
  uStack_130 = in_x5;
  local_128 = in_x6;
  uStack_120 = in_x7;
                    /* try { // try from 009fe13c to 00afe19b has its CatchHandler @ 009fe0ac */
  __s = operator_new__(0x4000,(nothrow_t *)&std::nothrow);
  if (__s != (char *)0x0) {
    iVar11 = 0x4000;
                    /* catch() { ... } // from try @ 009fe10c with catch @ 009fe174 */
    do {
                    /* catch() { ... } // from try @ 009fe100 with catch @ 009fe178 */
                    /* catch() { ... } // from try @ 009fe114 with catch @ 009fe180 */
      uStack_e8 = 0xffffff80ffffffd0;
      local_100 = (undefined1 *)register0x00000008;
      pbStack_f8 = &local_118;
      puStack_f0 = auStack_150;
                    /* catch() { ... } // from try @ 009fe1f8 with catch @ 009fe19c */
      iVar7 = vsnprintf(__s,(long)(iVar11 + -3),in_x1,&local_100);
      if (iVar7 < 0) {
        iVar11 = iVar11 << 1;
      }
      else {
        if (iVar7 <= iVar11 + -3) {
                    /* try { // try from 009fe1e4 to 00afe1f7 has its CatchHandler @ 009fe450 */
          (__s + iVar7)[0] = '\n';
          (__s + iVar7)[1] = '\0';
                    /* try { // try from 009fe1f8 to 00afe46b has its CatchHandler @ 009fe19c */
          __android_log_print(3,"cocos2d-x debug info","%s",__s);
          if (*(long *)param_1 != 0) {
            buildContent((Translated *)param_1,"universe",__s);
            pvVar6 = local_108;
            uVar5 = uStack_10f;
            uVar4 = local_110;
            uVar3 = uStack_117;
            bVar2 = local_118;
            local_110 = 0;
            uStack_10f = 0;
            local_108 = (void *)0x0;
            local_118 = 0;
            uStack_117 = 0;
            local_90 = (long *)0x0;
            local_90 = operator_new(0x38);
            local_90[3] = (long)param_1;
            *(byte *)(local_90 + 4) = bVar2;
            *local_90 = (long)&PTR____func_01c6c6d0;
            local_90[2] = 0;
            local_90[1] = (long)_log;
            local_90[5] = CONCAT71(uVar5,uVar4);
            local_90[6] = (long)pvVar6;
            *(ulong *)((long)local_90 + 0x21) = CONCAT17(uVar4,uVar3);
            core::Flags::post((Flags *)(param_1 + 8),(function *)alStack_b0);
            if (alStack_b0 == local_90) {
              pcVar10 = *(code **)(*local_90 + 0x20);
LAB_009fe2d4:
              (*pcVar10)();
            }
            else if (local_90 != (long *)0x0) {
              pcVar10 = *(code **)(*local_90 + 0x28);
              goto LAB_009fe2d4;
            }
            if ((local_118 & 1) != 0) {
              operator_delete(local_108);
            }
          }
          operator_delete__(__s);
          break;
        }
        iVar11 = iVar7 + 3;
      }
      operator_delete__(__s);
      uVar9 = (ulong)iVar11;
      if ((long)uVar9 < 0) {
        uVar9 = 0xffffffffffffffff;
      }
      __s = operator_new__(uVar9,(nothrow_t *)&std::nothrow);
    } while (__s != (char *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

