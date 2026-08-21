
ulong BN_GF2m_poly2arr(long *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  uVar3 = BN_is_zero();
  if ((int)uVar3 != 0) {
    return 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 1);
  do {
    uVar7 = (long)(int)uVar4;
    iVar2 = (int)uVar4 * 0x40 + -1;
    do {
      iVar6 = iVar2;
      uVar4 = uVar7 - 1;
      if ((long)uVar7 < 1) {
        iVar2 = (int)uVar3;
        if (param_3 <= iVar2) {
          return uVar3;
        }
        *(undefined4 *)(param_2 + (long)iVar2 * 4) = 0xffffffff;
        return (ulong)(iVar2 + 1);
      }
      uVar5 = *(ulong *)(*param_1 + uVar4 * 8);
      uVar7 = uVar4;
      iVar2 = iVar6 + -0x40;
    } while (uVar5 == 0);
    uVar7 = 0x8000000000000000;
    iVar2 = 0x40;
    do {
      if ((uVar5 & uVar7) != 0) {
        iVar1 = (int)uVar3;
        if (iVar1 < param_3) {
          *(int *)(param_2 + (long)iVar1 * 4) = iVar6;
        }
        uVar3 = (ulong)(iVar1 + 1);
      }
      iVar2 = iVar2 + -1;
      uVar7 = uVar7 >> 1;
      iVar6 = iVar6 + -1;
    } while (0 < iVar2);
  } while( true );
}

