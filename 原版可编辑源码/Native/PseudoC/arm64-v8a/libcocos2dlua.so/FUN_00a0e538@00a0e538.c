
/* WARNING: Removing unreachable block (ram,0x00a0e6c0) */

long FUN_00a0e538(long param_1,long *param_2,ulong *param_3,long *param_4,ulong *param_5)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  ulong uVar7;
  wchar_t *pwVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_f0;
  char *local_e8;
  ulong uStack_e0;
  long local_d8;
  long local_d0;
  ulong local_c8;
  int local_c0;
  wchar_t local_b4;
  mbstate_t local_b0;
  char acStack_a8 [64];
  long local_68;
  
                    /* try { // try from 00a0e54c to 00b0e567 has its CatchHandler @ 00a0e640 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar9 = 0;
                    /* try { // try from 00a0e578 to 00b0e5c3 has its CatchHandler @ 00a0e648 */
LAB_00a0e584:
  if (*param_3 != 0) {
    uVar10 = 1;
    do {
      local_d8 = *param_2;
      local_f0 = 0x40;
      local_e8 = acStack_a8;
      uStack_e0 = uVar10;
      lVar2 = FUN_00a0ea94(param_1,&local_d8,&uStack_e0,&local_e8,&local_f0);
      if (lVar2 == -1) {
        piVar4 = (int *)__errno();
        if (*piVar4 != 0x16) {
          if (*piVar4 != 0x54) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0e76c with catch @ 00a0e790
                        */
            abort();
          }
          goto LAB_00a0e748;
        }
      }
      else {
        local_b0 = *(mbstate_t *)(param_1 + 0x90);
                    /* try { // try from 00a0e60c to 00b0e623 has its CatchHandler @ 00a0e644 */
        sVar3 = mbrtowc(&local_b4,acStack_a8,(long)local_e8 - (long)acStack_a8,&local_b0);
                    /* try { // try from 00a0e624 to 00b0e693 has its CatchHandler @ 00a0e378 */
        if (sVar3 != 0xfffffffffffffffe) goto code_r0x00a0e628;
      }
      uVar10 = uVar10 + 1;
      if (*param_3 < uVar10) {
        puVar5 = (undefined4 *)__errno();
        *puVar5 = 0x16;
        goto LAB_00a0e748;
      }
    } while( true );
  }
  goto LAB_00a0e74c;
code_r0x00a0e628:
  if (sVar3 == 0xffffffffffffffff) {
    if (*(int *)(param_1 + 0x4c) == 0) {
                    /* catch() { ... } // from try @ 00a0e510 with catch @ 00a0e63c */
      if (*(code **)(param_1 + 0x60) == (code *)0x0) {
        iVar6 = 1;
      }
      else {
                    /* catch() { ... } // from try @ 00a0e54c with catch @ 00a0e640 */
        local_d0 = *param_4;
                    /* catch() { ... } // from try @ 00a0e60c with catch @ 00a0e644 */
                    /* catch() { ... } // from try @ 00a0e520 with catch @ 00a0e648
                       catch() { ... } // from try @ 00a0e578 with catch @ 00a0e648 */
        local_c8 = *param_5;
        local_c0 = 0;
        (**(code **)(param_1 + 0x60))
                  (*param_2,uVar10,FUN_00a21d44,&local_d0,*(undefined8 *)(param_1 + 0x70));
        iVar6 = local_c0;
                    /* catch() { ... } // from try @ 00a0e3c4 with catch @ 00a0e678
                       catch() { ... } // from try @ 00a0e49c with catch @ 00a0e678 */
        if (local_c0 == 0) {
          lVar9 = lVar9 + 1;
          *param_2 = *param_2 + uVar10;
          *param_3 = *param_3 - uVar10;
                    /* try { // try from 00a0e714 to 00b0e71f has its CatchHandler @ 00a0e730 */
          *param_4 = local_d0;
          *param_5 = local_c8;
          iVar6 = 4;
        }
        else {
          piVar4 = (int *)__errno();
          *piVar4 = iVar6;
          iVar6 = 1;
        }
      }
      goto LAB_00a0e72c;
    }
  }
  else {
    uVar7 = *param_5;
    if (uVar7 < 4) {
      puVar5 = (undefined4 *)__errno();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0e6bc with catch @ 00a0e6d8
                        */
      *puVar5 = 7;
      iVar6 = 1;
      goto LAB_00a0e72c;
    }
    pwVar8 = (wchar_t *)*param_4;
    *pwVar8 = local_b4;
    *param_4 = (long)(pwVar8 + 1);
    *param_5 = uVar7 - 4;
  }
  lVar9 = sVar3 + lVar9;
  *param_2 = *param_2 + uVar10;
  *param_3 = *param_3 - uVar10;
  iVar6 = 4;
LAB_00a0e72c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0e714 with catch @ 00a0e730
                        */
  if (iVar6 == 4) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
LAB_00a0e748:
    lVar9 = -1;
LAB_00a0e74c:
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00a0e76c to 00b0e777 has its CatchHandler @ 00a0e790 */
      return lVar9;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00a0e584;
}

