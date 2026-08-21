
ulong FUN_00e12c3c(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar2 = 1;
  if (param_1 < 0) {
    iVar2 = -1;
  }
  iVar1 = -iVar2;
  if (-1 < param_2) {
    iVar1 = iVar2;
  }
  uVar5 = -param_3;
  if (-1 < (long)param_3) {
    uVar5 = param_3;
  }
  iVar2 = -iVar1;
  if (-1 < (long)param_3) {
    iVar2 = iVar1;
  }
  if (uVar5 != 0) {
    lVar3 = -param_2;
    if (-1 < param_2) {
      lVar3 = param_2;
    }
    lVar4 = -param_1;
    if (-1 < param_1) {
      lVar4 = param_1;
    }
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = (ulong)(lVar3 * lVar4) / uVar5;
    }
    uVar5 = -uVar6;
    if (-1 < iVar2) {
      uVar5 = uVar6;
    }
    return uVar5;
  }
  uVar5 = 0xffffffff80000001;
  if (-1 < iVar2) {
    uVar5 = 0x7fffffff;
  }
  return uVar5;
}

