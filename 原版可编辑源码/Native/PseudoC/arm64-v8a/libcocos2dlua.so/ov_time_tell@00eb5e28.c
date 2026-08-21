
long ov_time_tell(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xb0) < 2) {
    lVar1 = -0x83;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      lVar2 = 0;
      lVar3 = 0;
    }
    else {
      lVar2 = ov_pcm_total(param_1,0xffffffff);
      lVar3 = ov_time_total(param_1,0xffffffff);
      iVar5 = *(int *)(param_1 + 0x28);
      iVar6 = iVar5 * 2 + -1;
      lVar1 = (long)iVar5;
      do {
        iVar5 = iVar5 + -1;
        if (lVar1 < 1) break;
        lVar2 = lVar2 - *(long *)(*(long *)(param_1 + 0x48) + (long)iVar6 * 8);
        lVar4 = ov_time_total(param_1,iVar5);
        lVar3 = lVar3 - lVar4;
        iVar6 = iVar6 + -2;
        lVar1 = lVar1 + -1;
      } while (*(long *)(param_1 + 0xa8) < lVar2);
    }
    lVar1 = 0;
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar1 = (*(long *)(param_1 + 0xa8) * 1000 - lVar2) / *(long *)(param_1 + 0x58);
    }
    lVar1 = lVar1 + lVar3;
  }
  return lVar1;
}

