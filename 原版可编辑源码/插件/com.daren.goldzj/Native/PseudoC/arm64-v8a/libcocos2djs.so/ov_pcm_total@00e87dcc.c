
long ov_pcm_total(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (((*(int *)(param_1 + 0xb0) < 2) || (*(int *)(param_1 + 8) == 0)) ||
     (iVar1 = *(int *)(param_1 + 0x28), iVar1 <= param_2)) {
    lVar3 = -0x83;
  }
  else if (param_2 < 0) {
    if (iVar1 < 1) {
      lVar3 = 0;
    }
    else {
      iVar4 = 0;
      lVar3 = 0;
      do {
        lVar2 = ov_pcm_total(param_1,iVar4);
        iVar4 = iVar4 + 1;
        lVar3 = lVar2 + lVar3;
      } while (iVar1 != iVar4);
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x48) + (long)(int)(param_2 << 1 | 1) * 8);
  }
  return lVar3;
}

