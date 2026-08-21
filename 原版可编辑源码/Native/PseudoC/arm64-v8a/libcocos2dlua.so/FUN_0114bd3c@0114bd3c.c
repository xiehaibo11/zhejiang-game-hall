
bool FUN_0114bd3c(byte *param_1,uint param_2,int param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = (long)(int)param_2;
  uVar3 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  uVar2 = (ulong)param_1[lVar1];
  uVar4 = (ulong)param_1[-uVar3];
  if (param_3 < (int)((uint)(byte)(&DAT_0149961c)[uVar4 - uVar2] +
                     (uint)(byte)(&DAT_0149961c)[(ulong)param_1[-lVar1] - (ulong)*param_1] * 4)) {
    return false;
  }
  if (param_4 < (int)(uint)(byte)(&DAT_0149961c)
                                 [(ulong)param_1[lVar1 * -4] -
                                  (ulong)param_1[lVar1 + (long)(int)param_2 * -4]]) {
    return false;
  }
  if (param_4 < (int)(uint)(byte)(&DAT_0149961c)[param_1[lVar1 + (long)(int)param_2 * -4] - uVar4])
  {
    return false;
  }
  if (param_4 < (int)(uint)(byte)(&DAT_0149961c)[uVar4 - param_1[-lVar1]]) {
    return false;
  }
  if (param_4 < (int)(uint)(byte)(&DAT_0149961c)
                                 [(ulong)param_1[uVar3 + lVar1] - (ulong)param_1[uVar3]]) {
    return false;
  }
  if (param_4 < (int)(uint)(byte)(&DAT_0149961c)[param_1[uVar3] - uVar2]) {
    return false;
  }
  return (int)(uint)(byte)(&DAT_0149961c)[uVar2 - *param_1] <= param_4;
}

