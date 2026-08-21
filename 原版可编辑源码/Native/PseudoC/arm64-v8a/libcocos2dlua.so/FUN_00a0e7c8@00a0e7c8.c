
long FUN_00a0e7c8(long param_1,long *param_2,ulong *param_3,undefined8 *param_4,undefined8 *param_5)

{
  int iVar1;
  wchar_t wVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int iVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  long lVar15;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  int local_b8;
  mbstate_t local_b0;
  char acStack_a8 [64];
  long local_68;
  
                    /* try { // try from 00a0e7cc to 00b0e7d7 has its CatchHandler @ 00a0e7f0 */
  lVar3 = tpidr_el0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0e7cc with catch @ 00a0e7f0
                        */
  local_68 = *(long *)(lVar3 + 0x28);
  lVar11 = 0;
  do {
    uVar12 = *param_3;
    if (uVar12 < 4) goto LAB_00a0ea30;
    local_b0 = *(mbstate_t *)(param_1 + 0x90);
    lVar15 = 0;
    pwVar14 = (wchar_t *)*param_2;
    if (3 < uVar12) {
LAB_00a0e870:
      uVar12 = uVar12 - 4;
      sVar4 = wcrtomb(acStack_a8 + lVar15,*pwVar14,&local_b0);
      if (sVar4 != 0xffffffffffffffff) {
        lVar15 = sVar4 + lVar15;
        if (sVar4 == 0) {
LAB_00a0e860:
          iVar9 = 0;
        }
        else {
          local_d8 = *param_4;
          local_e0 = *param_5;
          local_d0 = lVar15;
          local_c8 = acStack_a8;
          lVar5 = FUN_00a0ea94(param_1,&local_c8,&local_d0,&local_d8,&local_e0);
          if (lVar5 == -1) {
            piVar6 = (int *)__errno();
            iVar1 = *piVar6;
            iVar9 = 1;
            if ((iVar1 != 7) && (iVar1 != 0x54)) {
              if ((iVar1 != 0x16) || (sVar4 = __ctype_get_mb_cur_max(), 0x40 < sVar4 + lVar15)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_00a0e860;
            }
          }
          else {
            lVar11 = lVar5 + lVar11;
            *(mbstate_t *)(param_1 + 0x90) = local_b0;
            *param_2 = (long)(pwVar14 + 1);
            *param_3 = uVar12;
            *param_4 = local_d8;
                    /* try { // try from 00a0e8ec to 00b0e9b3 has its CatchHandler @ 00a0e8ec
                       catch() { ... } // from try @ 00a0e8ec with catch @ 00a0e8ec
                       catch() { ... } // from try @ 00a0ea40 with catch @ 00a0e8ec */
            *param_5 = local_e0;
            iVar9 = 5;
          }
          if (iVar9 == 0) goto LAB_00a0e860;
        }
        pwVar14 = pwVar14 + 1;
        if (iVar9 == 0) goto LAB_00a0e868;
        goto LAB_00a0ea14;
      }
      if (*(int *)(param_1 + 0x4c) != 0) goto LAB_00a0e860;
      pcVar10 = *(code **)(param_1 + 0x68);
      if (pcVar10 == (code *)0x0) {
        puVar7 = (undefined4 *)__errno();
        *puVar7 = 0x54;
        break;
      }
      local_c8 = (char *)*param_4;
      local_c0 = *param_5;
      local_b8 = 0;
      pwVar13 = (wchar_t *)*param_2;
      if (pwVar14 < pwVar13) goto LAB_00a0e9d4;
      wVar2 = *pwVar13;
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      while( true ) {
        pwVar13 = pwVar13 + 1;
        (*pcVar10)(wVar2,FUN_00a21e04,&local_c8,uVar8);
        iVar1 = local_b8;
        if (pwVar14 < pwVar13) break;
        pcVar10 = *(code **)(param_1 + 0x68);
        uVar8 = *(undefined8 *)(param_1 + 0x70);
        wVar2 = *pwVar13;
      }
      if (local_b8 == 0) {
LAB_00a0e9d4:
        *(mbstate_t *)(param_1 + 0x90) = local_b0;
        *param_2 = (long)(pwVar14 + 1);
        *param_3 = uVar12;
        lVar11 = lVar11 + 1;
        *param_4 = local_c8;
        *param_5 = local_c0;
                    /* try { // try from 00a0ea0c to 00b0ea3f has its CatchHandler @ 00a0eb04 */
        iVar9 = 5;
      }
      else {
                    /* try { // try from 00a0e9b4 to 00b0e9bb has its CatchHandler @ 00a0eb30 */
        piVar6 = (int *)__errno();
        *piVar6 = iVar1;
                    /* try { // try from 00a0e9bc to 00b0e9c3 has its CatchHandler @ 00a0eb18 */
        iVar9 = 1;
                    /* try { // try from 00a0e9cc to 00b0e9d3 has its CatchHandler @ 00a0eb08 */
      }
LAB_00a0ea14:
      if (iVar9 == 5) goto LAB_00a0e81c;
      goto LAB_00a0e820;
    }
LAB_00a0e81c:
    iVar9 = 0;
LAB_00a0e820:
  } while (iVar9 == 0);
  lVar11 = -1;
LAB_00a0ea30:
                    /* try { // try from 00a0ea40 to 00b0eb8b has its CatchHandler @ 00a0e8ec */
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00a0e868:
  if (uVar12 < 4) goto LAB_00a0e81c;
  goto LAB_00a0e870;
}

