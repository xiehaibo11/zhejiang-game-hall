
ulong FUN_00af97e8(long param_1,int param_2,undefined4 param_3,ulong *param_4)

{
  ulong uVar1;
  BUF_MEM *a;
  size_t sVar2;
  ulong *puVar3;
  size_t *psVar4;
  size_t *psVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x30);
  uVar1 = 0;
  if (0x71 < param_2) {
    if (param_2 == 0x72) {
      if (((*(int *)(param_1 + 0x1c) != 0) && (plVar6 != (long *)0x0)) &&
         (*(int *)(param_1 + 0x18) != 0)) {
        a = (BUF_MEM *)*plVar6;
        if ((*(byte *)(param_1 + 0x21) >> 1 & 1) != 0) {
                    /* try { // try from 00af98e0 to 00bf991b has its CatchHandler @ 00af97a8 */
          a->data = (char *)0x0;
        }
        BUF_MEM_free(a);
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *(undefined4 *)(param_1 + 0x1c) = param_3;
      *plVar6 = (long)param_4;
      puVar3 = (ulong *)plVar6[1];
      uVar1 = param_4[2];
      puVar3[3] = param_4[3];
      puVar3[2] = uVar1;
                    /* catch() { ... } // from try @ 00af98a8 with catch @ 00af9900 */
      uVar1 = *param_4;
      puVar3[1] = param_4[1];
      *puVar3 = uVar1;
      *(long **)(param_1 + 0x30) = plVar6;
    }
    else if (param_2 == 0x73) {
      if (param_4 != (ulong *)0x0) {
                    /* try { // try from 00af991c to 00bf9a1b has its CatchHandler @ 00af991c
                       catch() { ... } // from try @ 00af991c with catch @ 00af991c
                       catch() { ... } // from try @ 00af9a54 with catch @ 00af991c */
        if ((plVar6 == (long *)0x0) || (*(int *)(param_1 + 0x18) == 0)) {
          *param_4 = plVar6[1];
        }
        else {
          psVar5 = (size_t *)plVar6[1];
          if ((void *)psVar5[1] != *(void **)(*plVar6 + 8)) {
            memmove(*(void **)(*plVar6 + 8),(void *)psVar5[1],*psVar5);
            psVar4 = (size_t *)*plVar6;
            psVar5 = (size_t *)plVar6[1];
            *psVar4 = *psVar5;
            psVar5[1] = psVar4[1];
          }
          *param_4 = (ulong)psVar5;
        }
      }
    }
    else {
      if (param_2 != 0x82) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x28) = param_3;
    }
    goto switchD_00af9830_caseD_b;
  }
  switch(param_2) {
  case 1:
    psVar5 = (size_t *)*plVar6;
    if ((void *)psVar5[1] != (void *)0x0) {
      sVar2 = psVar5[2];
      psVar4 = psVar5;
      if ((*(byte *)(param_1 + 0x21) & 6) == 0) {
        memset((void *)psVar5[1],0,sVar2);
        sVar2 = 0;
        psVar4 = (size_t *)*plVar6;
      }
      *psVar5 = sVar2;
      psVar5 = (size_t *)plVar6[1];
      sVar2 = psVar4[2];
      psVar5[3] = psVar4[3];
      psVar5[2] = sVar2;
      sVar2 = *psVar4;
      psVar5[1] = psVar4[1];
      *psVar5 = sVar2;
    }
  case 0xb:
  case 0xc:
switchD_00af9830_caseD_b:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = (ulong)(*(long *)plVar6[1] == 0);
    break;
  case 3:
    uVar1 = *(ulong *)plVar6[1];
    if (param_4 != (ulong *)0x0) {
      *param_4 = ((ulong *)plVar6[1])[1];
    }
    break;
  case 8:
    uVar1 = (ulong)*(int *)(param_1 + 0x1c);
                    /* try { // try from 00af98a8 to 00bf98df has its CatchHandler @ 00af9900 */
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    goto switchD_00af9830_caseD_b;
  case 10:
    uVar1 = *(ulong *)plVar6[1];
  }
  return uVar1;
}

