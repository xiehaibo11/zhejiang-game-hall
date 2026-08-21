
void FUN_00c1a418(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if (param_2 < 0x7fffff01) {
    lVar5 = *param_1;
    iVar4 = (int)param_1[2];
    uVar2 = (int)param_1[1] - iVar4;
    uVar1 = uVar2;
    if (uVar2 < 0x20) {
      uVar1 = 0x20;
    }
    for (; uVar1 < param_2; uVar1 = uVar1 * 2) {
    }
    lVar3 = FUN_00c1a2b4(param_1[3],param_1[2],uVar2,(ulong)uVar1);
    param_1[2] = lVar3;
    *param_1 = lVar3 + (ulong)(uint)((int)lVar5 - iVar4);
    param_1[1] = lVar3 + (ulong)uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfac84(param_1[3]);
}

