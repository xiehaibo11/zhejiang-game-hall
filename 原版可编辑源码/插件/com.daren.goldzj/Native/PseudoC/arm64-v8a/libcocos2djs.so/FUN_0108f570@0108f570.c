
void FUN_0108f570(long param_1,uint param_2,long param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_6 < 0) {
    param_6 = param_5 - param_2;
    uVar4 = *(int *)(param_3 + 3) >> 1;
    if ((uint)(param_6 + param_4) < uVar4) {
      uVar2 = (param_6 + param_4) * 8 | 7;
      iVar3 = ((uVar4 + param_2) - param_5) - param_4;
      do {
        *(undefined8 *)(param_3 + (int)uVar2) = 0xfff7fffffff7ffff;
        iVar3 = iVar3 + -1;
        uVar2 = uVar2 + 8;
      } while (iVar3 != 0);
    }
  }
  if ((param_6 != 0) && (param_2 < param_5 + param_2)) {
    iVar3 = param_2 << 2;
    uVar4 = param_4 << 3 | 7;
    do {
      lVar1 = (long)iVar3;
      param_5 = param_5 + -1;
      iVar3 = iVar3 + 4;
      *(double *)(param_3 + (int)uVar4) = (double)(*(int *)(param_1 + 7 + lVar1) >> 1);
      uVar4 = uVar4 + 8;
    } while (param_5 != 0);
  }
  return;
}

