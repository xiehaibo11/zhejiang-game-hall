
ulong FT_DivFix(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar1 = 1;
  if (param_1 < 0) {
    iVar1 = -1;
  }
  uVar4 = -param_2;
  if (-1 < (long)param_2) {
    uVar4 = param_2;
  }
  iVar2 = -iVar1;
  if (-1 < (long)param_2) {
    iVar2 = iVar1;
  }
  if (uVar4 != 0) {
    lVar3 = -param_1;
    if (-1 < param_1) {
      lVar3 = param_1;
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = ((uVar4 >> 1) + lVar3 * 0x10000) / uVar4;
    }
    uVar4 = -uVar5;
    if (-1 < iVar2) {
      uVar4 = uVar5;
    }
    return uVar4;
  }
  uVar4 = 0xffffffff80000001;
  if (-1 < iVar2) {
    uVar4 = 0x7fffffff;
  }
  return uVar4;
}

