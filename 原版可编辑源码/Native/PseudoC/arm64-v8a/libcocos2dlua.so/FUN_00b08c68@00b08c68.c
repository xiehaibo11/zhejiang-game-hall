
ulong FUN_00b08c68(long param_1,int param_2,undefined4 param_3,ulong *param_4)

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
      uVar1 = *param_4;
      puVar3[1] = param_4[1];
      *puVar3 = uVar1;
      *(long **)(param_1 + 0x30) = plVar6;
    }
    else if (param_2 == 0x73) {
      if (param_4 != (ulong *)0x0) {
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
    goto switchD_00b08cb0_caseD_b;
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
switchD_00b08cb0_caseD_b:
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
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    goto switchD_00b08cb0_caseD_b;
  case 10:
    uVar1 = *(ulong *)plVar6[1];
  }
  return uVar1;
}

