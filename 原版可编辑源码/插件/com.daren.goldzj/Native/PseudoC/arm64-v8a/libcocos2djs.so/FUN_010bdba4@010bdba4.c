
long FUN_010bdba4(undefined8 param_1,long *param_2,ulong *param_3,long param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  double *pdVar4;
  double dVar5;
  
  uVar3 = *param_3;
  if ((uVar3 & 1) == 0) {
    dVar5 = (double)((int)uVar3 >> 1);
  }
  else {
    dVar5 = *(double *)(uVar3 + 3);
  }
  lVar2 = *param_2;
  uVar1 = param_5 - (int)param_4;
  uVar3 = (-((ulong)(uVar1 >> 0x1c) & 1) & 0xffffffff00000000 | ((ulong)uVar1 & 0x1fffffff) << 3) >>
          3;
  if (0 < (int)uVar3) {
    pdVar4 = (double *)(*(long *)(lVar2 + 0x27) + (ulong)*(uint *)(lVar2 + 0x2f) + param_4 * 8);
    do {
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
      *pdVar4 = dVar5;
      pdVar4 = pdVar4 + 1;
    } while (0 < (int)uVar1);
    lVar2 = *param_2;
  }
  return lVar2;
}

