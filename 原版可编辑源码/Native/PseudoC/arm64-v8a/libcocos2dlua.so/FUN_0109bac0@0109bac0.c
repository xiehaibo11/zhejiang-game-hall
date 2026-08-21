
undefined8 FUN_0109bac0(long param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  
  pbVar8 = (byte *)(param_1 + 10);
  if (*(byte **)(param_2 + 0x108) < pbVar8) {
    ft_validator_error(param_2,8);
  }
  uVar5 = (ulong)*(byte *)(param_1 + 2) << 0x18 | (ulong)*(byte *)(param_1 + 3) << 0x10 |
          (ulong)*(byte *)(param_1 + 4) << 8 | (ulong)*(byte *)(param_1 + 5);
  uVar6 = (ulong)*(byte *)(param_1 + 6) << 0x18 | (ulong)*(byte *)(param_1 + 7) << 0x10 |
          (ulong)*(byte *)(param_1 + 8) << 8 | (ulong)*(byte *)(param_1 + 9);
  if (((uVar5 < 10) || ((ulong)(*(long *)(param_2 + 0x108) - param_1) < uVar5)) ||
     ((uVar5 - 10) / 0xb < uVar6)) {
    ft_validator_error(param_2,8);
  }
  if (uVar6 != 0) {
    uVar11 = 0;
    uVar9 = 1;
    do {
      uVar10 = (ulong)*pbVar8 << 0x10 | (ulong)pbVar8[1] << 8 | (ulong)pbVar8[2];
      uVar7 = (ulong)pbVar8[3] << 0x18 | (ulong)pbVar8[4] << 0x10 | (ulong)pbVar8[5] << 8 |
              (ulong)pbVar8[6];
      uVar14 = (ulong)pbVar8[7] << 0x18 | (ulong)pbVar8[8] << 0x10 | (ulong)pbVar8[9] << 8 |
               (ulong)pbVar8[10];
      if ((uVar5 <= uVar7) || (uVar5 <= uVar14)) {
        ft_validator_error(param_2,8);
      }
      if (uVar10 < uVar9) {
        ft_validator_error(param_2,8);
      }
      if (uVar7 != 0) {
        pbVar1 = (byte *)(param_1 + uVar7);
        pbVar12 = pbVar1 + 4;
        uVar9 = (ulong)*pbVar1 << 0x18 | (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 |
                (ulong)pbVar1[3];
        if ((ulong)(*(long *)(param_2 + 0x108) - (long)pbVar12) >> 2 < uVar9) {
          ft_validator_error(param_2,8);
        }
        else if (uVar9 == 0) goto LAB_0109bcf8;
        uVar7 = 0;
        do {
          uVar13 = (ulong)*pbVar12 << 0x10 | (ulong)pbVar12[1] << 8 | (ulong)pbVar12[2];
          uVar2 = uVar13 + pbVar12[3];
          if (0x10ffff < uVar2) {
            ft_validator_error(param_2,8);
          }
          if (uVar13 < uVar7) {
            ft_validator_error(param_2,8);
          }
          uVar7 = uVar2 + 1;
          uVar9 = uVar9 - 1;
          pbVar12 = pbVar12 + 4;
        } while (uVar9 != 0);
      }
LAB_0109bcf8:
      pbVar8 = pbVar8 + 0xb;
      uVar9 = uVar10 + 1;
      if (uVar14 != 0) {
        pbVar1 = (byte *)(param_1 + uVar14);
        pbVar12 = pbVar1 + 4;
        uVar7 = (ulong)*pbVar1 << 0x18 | (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 |
                (ulong)pbVar1[3];
        if ((ulong)(*(long *)(param_2 + 0x108) - (long)pbVar12) >> 2 < uVar7) {
          ft_validator_error(param_2,8);
        }
        else if (uVar7 == 0) goto LAB_0109bddc;
        uVar10 = 0;
        do {
          bVar3 = pbVar12[3];
          bVar4 = pbVar12[4];
          uVar14 = (ulong)*pbVar12 << 0x10 | (ulong)pbVar12[1] << 8 | (ulong)pbVar12[2];
          if (0x10ffff < uVar14) {
                    /* try { // try from 0109bd88 to 0119be53 has its CatchHandler @ 0109bd88
                       catch() { ... } // from try @ 0109bd88 with catch @ 0109bd88
                       catch() { ... } // from try @ 0109be60 with catch @ 0109bd88 */
            ft_validator_error(param_2,8);
          }
          if (uVar14 < uVar10) {
            ft_validator_error(param_2,8);
          }
          uVar10 = uVar14 + 1;
          if ((*(int *)(param_2 + 0x110) != 0) &&
             (*(uint *)(param_2 + 0x118) <= (uint)CONCAT11(bVar3,bVar4))) {
            ft_validator_error(param_2,0x10);
          }
          uVar7 = uVar7 - 1;
          pbVar12 = pbVar12 + 5;
        } while (uVar7 != 0);
      }
LAB_0109bddc:
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar6);
  }
  return 0;
}

