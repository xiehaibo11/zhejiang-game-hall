
long ov_time_tell(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xb0) < 2) {
    return -0x83;
  }
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = 0;
    lVar2 = 0;
  }
  else {
    lVar1 = ov_pcm_total(param_1,0xffffffff);
    lVar2 = ov_time_total(param_1,0xffffffff);
    iVar4 = *(int *)(param_1 + 0x28);
    iVar6 = iVar4 * 2 + -1;
    lVar5 = (long)iVar4;
    do {
      iVar4 = iVar4 + -1;
      if (lVar5 < 1) break;
      lVar1 = lVar1 - *(long *)(*(long *)(param_1 + 0x48) + (long)iVar6 * 8);
      lVar3 = ov_time_total(param_1,iVar4);
      lVar2 = lVar2 - lVar3;
      iVar6 = iVar6 + -2;
      lVar5 = lVar5 + -1;
    } while (*(long *)(param_1 + 0xa8) < lVar1);
  }
  lVar5 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar5 = (*(long *)(param_1 + 0xa8) * 1000 - lVar1) / *(long *)(param_1 + 0x58);
  }
  return lVar5 + lVar2;
}

