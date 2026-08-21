
long FT_MulFix(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = -param_1;
  if (-1 < param_1) {
    lVar3 = param_1;
  }
  iVar1 = 1;
  if (-1 >= param_1) {
    iVar1 = -1;
  }
  lVar4 = -param_2;
  if (-1 < param_2) {
    lVar4 = param_2;
  }
  iVar2 = -iVar1;
  if (-1 < param_2) {
    iVar2 = iVar1;
  }
  lVar4 = lVar4 * lVar3 + 0x8000 >> 0x10;
  lVar3 = -lVar4;
  if (-1 < iVar2) {
    lVar3 = lVar4;
  }
  return lVar3;
}

