
/* universe::Translated::log(char const*, ...) */

void universe::Translated::log(char *param_1,...)

{
  long lVar1;
  byte bVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  undefined1 *puVar6;
  int iVar7;
  char *__s;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  byte local_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 *local_e8;
  undefined1 *local_b0;
  byte *pbStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 **local_90;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_128 = in_x2;
  uStack_120 = in_x3;
  local_118 = in_x4;
  uStack_110 = in_x5;
  local_108 = in_x6;
  uStack_100 = in_x7;
  __s = operator_new__(0x4000,(nothrow_t *)&std::nothrow);
  if (__s != (char *)0x0) {
    iVar10 = 0x4000;
    do {
      uStack_98 = 0xffffff80ffffffd0;
      local_b0 = (undefined1 *)register0x00000008;
      pbStack_a8 = &local_f8;
      puStack_a0 = auStack_130;
      iVar7 = vsnprintf(__s,(long)(iVar10 + -3),in_x1,&local_b0);
      if (iVar7 < 0) {
        iVar10 = iVar10 << 1;
      }
      else {
        if (iVar7 <= iVar10 + -3) {
          (__s + iVar7)[0] = '\n';
          (__s + iVar7)[1] = '\0';
          __android_log_print(3,"cocos2d-x debug info","%s",__s);
          if (*(long *)param_1 != 0) {
            buildContent((Translated *)param_1,"universe",__s);
            puVar6 = local_e8;
            uVar5 = uStack_ef;
            uVar4 = uStack_f0;
            uVar3 = uStack_f7;
            bVar2 = local_f8;
            local_f8 = 0;
            uStack_f7 = 0;
            uStack_f0 = 0;
            uStack_ef = 0;
            local_e8 = (undefined1 *)0x0;
                    /* try { // try from 009e0d5c to 00ae0db3 has its CatchHandler @ 009e0d5c
                       catch() { ... } // from try @ 009e0d5c with catch @ 009e0d5c
                       catch() { ... } // from try @ 009e0db8 with catch @ 009e0d5c */
            local_90 = (undefined1 **)0x0;
            local_90 = operator_new(0x38);
            local_90[3] = param_1;
            *(byte *)(local_90 + 4) = bVar2;
            *local_90 = (undefined1 *)&PTR____func_016a0268;
            local_90[2] = (undefined1 *)0x0;
            local_90[1] = _log;
            local_90[5] = (undefined1 *)CONCAT71(uVar5,uVar4);
            local_90[6] = puVar6;
            *(ulong *)((long)local_90 + 0x21) = CONCAT17(uVar4,uVar3);
                    /* try { // try from 009e0db4 to 00ae0db7 has its CatchHandler @ 009e0e14 */
                    /* try { // try from 009e0db8 to 00ae0e2f has its CatchHandler @ 009e0d5c */
            core::Flags::post((Flags *)(param_1 + 8),(function *)&local_b0);
            if (&local_b0 == local_90) {
              pcVar9 = *(code **)(*local_90 + 0x20);
LAB_009e0dec:
              (*pcVar9)();
            }
            else if (local_90 != (undefined1 **)0x0) {
              pcVar9 = *(code **)(*local_90 + 0x28);
              goto LAB_009e0dec;
            }
            if ((local_f8 & 1) != 0) {
              operator_delete(local_e8);
            }
          }
          operator_delete__(__s);
          break;
        }
        iVar10 = iVar7 + 3;
      }
      operator_delete__(__s);
      uVar8 = (ulong)iVar10;
      if ((long)uVar8 < 0) {
        uVar8 = 0xffffffffffffffff;
      }
      __s = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
    } while (__s != (char *)0x0);
  }
                    /* catch() { ... } // from try @ 009e0db4 with catch @ 009e0e14 */
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

