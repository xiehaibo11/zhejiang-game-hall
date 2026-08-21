
long FUN_00c1a4a8(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = (int)param_1[2];
  uVar3 = (int)*param_1 - iVar6;
  if ((param_2 < 0x7fffff01) && (param_2 = param_2 + uVar3, param_2 < 0x7fffff01)) {
    uVar4 = (int)param_1[1] - iVar6;
    uVar2 = uVar4;
    if (uVar4 < 0x20) {
      uVar2 = 0x20;
    }
    for (; uVar2 < param_2; uVar2 = uVar2 * 2) {
    }
    lVar5 = FUN_00c1a2b4(param_1[3],param_1[2],uVar4,(ulong)uVar2);
    param_1[2] = lVar5;
    lVar1 = lVar5 + (ulong)uVar3;
    param_1[1] = lVar5 + (ulong)uVar2;
    *param_1 = lVar1;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfac84(param_1[3]);
}

