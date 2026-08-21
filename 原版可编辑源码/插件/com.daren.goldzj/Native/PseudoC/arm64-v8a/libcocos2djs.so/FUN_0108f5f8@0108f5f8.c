
void FUN_0108f5f8(ulong param_1,uint param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  if (param_5 < 0) {
    param_5 = (*(int *)(param_1 + 3) >> 1) - param_2;
    iVar5 = param_5 + param_4;
    if (iVar5 < *(int *)(param_3 + 3) >> 1) {
      lVar3 = (long)iVar5;
      uVar4 = iVar5 * 8 | 7;
      do {
        *(undefined8 *)(param_3 + (int)uVar4) = 0xfff7fffffff7ffff;
        lVar3 = lVar3 + 1;
        uVar4 = uVar4 + 8;
      } while (lVar3 < *(int *)(param_3 + 3) >> 1);
    }
  }
  if ((param_5 != 0) && (param_2 < param_5 + param_2)) {
    iVar1 = *(int *)((param_1 & 0xffffffff00000000) + 0xa8);
    iVar5 = param_2 << 2;
    uVar4 = param_4 << 3 | 7;
    do {
      iVar2 = *(int *)(param_1 + 7 + (long)iVar5);
      if (iVar2 == iVar1) {
        *(undefined8 *)(param_3 + (int)uVar4) = 0xfff7fffffff7ffff;
      }
      else {
        *(double *)(param_3 + (int)uVar4) = (double)(iVar2 >> 1);
      }
      param_5 = param_5 + -1;
      iVar5 = iVar5 + 4;
      uVar4 = uVar4 + 8;
    } while (param_5 != 0);
  }
  return;
}

