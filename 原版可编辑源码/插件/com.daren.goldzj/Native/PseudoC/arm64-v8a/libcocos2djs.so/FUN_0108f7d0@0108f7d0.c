
void FUN_0108f7d0(ulong param_1,uint param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  
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
    uVar1 = *(uint *)((param_1 & 0xffffffff00000000) + 0xa8);
    iVar5 = param_2 << 2;
    uVar4 = param_4 << 3 | 7;
    do {
      uVar2 = *(uint *)(param_1 + 7 + (long)iVar5);
      if (uVar2 == uVar1) {
        *(undefined8 *)(param_3 + (int)uVar4) = 0xfff7fffffff7ffff;
      }
      else {
        if ((uVar2 & 1) == 0) {
          dVar6 = (double)((int)uVar2 >> 1);
        }
        else {
          dVar6 = *(double *)((param_1 & 0xffffffff00000000 | (ulong)uVar2) + 3);
          if (NAN(dVar6)) {
            *(double *)(param_3 + (int)uVar4) = NAN;
            goto LAB_0108f854;
          }
        }
        *(double *)(param_3 + (int)uVar4) = dVar6;
      }
LAB_0108f854:
      param_5 = param_5 + -1;
      iVar5 = iVar5 + 4;
      uVar4 = uVar4 + 8;
    } while (param_5 != 0);
  }
  return;
}

