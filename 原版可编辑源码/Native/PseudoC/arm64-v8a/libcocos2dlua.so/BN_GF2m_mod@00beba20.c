
undefined8 BN_GF2m_mod(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int local_48 [6];
  
  iVar1 = BN_is_zero(param_3);
  if (iVar1 != 0) {
LAB_00beba4c:
    ERR_put_error(3,0x83,0x6a,"crypto/bn/bn_gf2m.c",0x196);
    return 0;
  }
  uVar3 = (ulong)*(uint *)(param_3 + 1);
  iVar1 = 0;
  do {
    uVar6 = (long)(int)uVar3;
    iVar7 = (int)uVar3 * 0x40 + -1;
    do {
      iVar5 = iVar7;
      uVar3 = uVar6 - 1;
      if ((long)uVar6 < 1) {
        if (iVar1 < 6) {
          local_48[iVar1] = -1;
          iVar1 = iVar1 + 1;
        }
        if ((iVar1 != 0) && (iVar1 < 7)) {
          uVar2 = BN_GF2m_mod_arr(param_1,param_2,local_48);
          return uVar2;
        }
        goto LAB_00beba4c;
      }
      uVar4 = *(ulong *)(*param_3 + uVar3 * 8);
      uVar6 = uVar3;
      iVar7 = iVar5 + -0x40;
    } while (uVar4 == 0);
    uVar6 = 0x8000000000000000;
    iVar7 = 0x40;
    do {
      if ((uVar6 & uVar4) != 0) {
        if (iVar1 < 6) {
          local_48[iVar1] = iVar5;
        }
        iVar1 = iVar1 + 1;
      }
      iVar7 = iVar7 + -1;
      uVar6 = uVar6 >> 1;
      iVar5 = iVar5 + -1;
    } while (0 < iVar7);
  } while( true );
}

