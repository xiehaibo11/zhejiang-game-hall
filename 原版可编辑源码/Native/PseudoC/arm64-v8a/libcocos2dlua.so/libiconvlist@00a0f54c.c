
void libiconvlist(code *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  ulong __nmemb;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong __nmemb_00;
  ulong uVar8;
  undefined8 local_56e0 [922];
  long local_3a10;
  int local_3a08 [3686];
  long local_70;
  
                    /* catch() { ... } // from try @ 00a0f3e4 with catch @ 00a0f550 */
                    /* catch() { ... } // from try @ 00a0f448 with catch @ 00a0f560 */
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00a0f494 with catch @ 00a0f580 */
  lVar6 = 0;
                    /* catch() { ... } // from try @ 00a0f480 with catch @ 00a0f598 */
  piVar7 = &DAT_012f98d4;
  __nmemb_00 = 0;
  while( true ) {
    lVar6 = lVar6 + 1;
    piVar2 = piVar7 + 2;
                    /* catch() { ... } // from try @ 00a0f474 with catch @ 00a0f5b8 */
    if (lVar6 == 0x39a) break;
    piVar1 = piVar7 + 1;
                    /* catch() { ... } // from try @ 00a0f36c with catch @ 00a0f5bc */
                    /* catch() { ... } // from try @ 00a0f4c8 with catch @ 00a0f5c0 */
    piVar7 = piVar2;
    if (((-1 < *piVar1) && (lVar6 != 0xc1)) && (lVar6 != 0x1f0)) {
      iVar4 = *piVar2;
      *(undefined **)(local_3a08 + __nmemb_00 * 4 + -2) = &DAT_012fb5a0 + *piVar1;
      local_3a08[__nmemb_00 * 4] = iVar4;
      __nmemb_00 = __nmemb_00 + 1;
    }
  }
  if (1 < __nmemb_00) {
    qsort(&local_3a10,__nmemb_00,0x10,FUN_00a0f6ec);
  }
  uVar8 = 0;
                    /* try { // try from 00a0f620 to 00b0f77b has its CatchHandler @ 00a0f620
                       catch() { ... } // from try @ 00a0f620 with catch @ 00a0f620
                       catch() { ... } // from try @ 00a0f8b0 with catch @ 00a0f620 */
  if (__nmemb_00 != 0) {
    do {
      piVar7 = local_3a08 + uVar8 * 4 + -2;
      iVar4 = local_3a08[uVar8 * 4];
      __nmemb = 0;
      do {
        uVar5 = __nmemb;
        __nmemb = uVar5 + 1;
        local_56e0[uVar5] = *(undefined8 *)piVar7;
        if (__nmemb_00 + ~uVar8 == uVar5) break;
        piVar2 = piVar7 + 6;
        piVar7 = piVar7 + 4;
      } while (*piVar2 == iVar4);
      uVar8 = uVar8 + uVar5 + 1;
      if (1 < __nmemb) {
        qsort(local_56e0,__nmemb,8,FUN_00a0f6fc);
      }
      iVar4 = (*param_1)((int)uVar5 + 1,local_56e0,param_2);
    } while ((iVar4 == 0) && (uVar8 < __nmemb_00));
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

