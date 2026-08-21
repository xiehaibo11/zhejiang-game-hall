
ulong power_1_third(uint param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((int)param_1 < 0x201) {
    uVar3 = (ulong)(uint)(*(int *)(power_one_third + (long)(int)param_1 * 4) >> 1);
  }
  else if (param_1 >> 0xf == 0) {
    iVar2 = pvmp3_normalize(param_1);
    uVar4 = (uint)(0x16 - (long)iVar2);
    lVar1 = (long)(int)(param_1 >> (ulong)(uVar4 & 0x1f)) * 4;
    uVar3 = (ulong)((long)(int)(*(int *)(power_one_third + lVar1) +
                               (*(int *)(power_one_third + lVar1 + 4) -
                                *(int *)(power_one_third + lVar1) >> (uVar4 & 0x1f)) *
                               (param_1 & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU))) *
                   (long)*(int *)(&DAT_01998760 + (0x16 - (long)iVar2) * 4)) >> 0x1e;
  }
  else {
    uVar3 = 0x7fffffff;
  }
  return uVar3;
}

