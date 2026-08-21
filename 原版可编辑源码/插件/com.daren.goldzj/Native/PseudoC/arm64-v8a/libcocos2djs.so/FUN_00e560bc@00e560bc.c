
undefined8 FUN_00e560bc(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  
  pbVar9 = (byte *)(param_1 + 10);
  if (*(byte **)(param_2 + 0x108) < pbVar9) {
    FUN_00e14b1c(param_2,8);
  }
  pbVar7 = (byte *)(param_1 + 4);
  uVar5 = (ulong)*(byte *)(param_1 + 2) << 0x18 | (ulong)*(byte *)(param_1 + 3) << 0x10 |
          (ulong)*pbVar7 << 8 | (ulong)*(byte *)(param_1 + 5);
  uVar6 = (ulong)*(byte *)(param_1 + 6) << 0x18 | (ulong)*(byte *)(param_1 + 7) << 0x10 |
          (ulong)*(byte *)(param_1 + 8) << 8 | (ulong)*(byte *)(param_1 + 9);
  if (((uVar5 < 10) || ((ulong)(*(long *)(param_2 + 0x108) - param_1) < uVar5)) ||
     ((uVar5 - 10) / 0xb < uVar6)) {
    FUN_00e14b1c(param_2,8);
  }
  if (uVar6 != 0) {
    uVar8 = 0;
    uVar11 = 1;
    do {
      uVar12 = (ulong)*pbVar9 << 0x10 | (ulong)pbVar9[1] << 8 | (ulong)pbVar9[2];
      uVar10 = (ulong)pbVar9[3] << 0x18 | (ulong)pbVar9[4] << 0x10 | (ulong)pbVar9[5] << 8 |
               (ulong)pbVar9[6];
      uVar13 = (ulong)pbVar9[7] << 0x18 | (ulong)pbVar9[8] << 0x10 | (ulong)pbVar9[9] << 8 |
               (ulong)pbVar9[10];
      if ((uVar5 <= uVar10) || (uVar5 <= uVar13)) {
        FUN_00e14b1c(param_2,8);
      }
      if (uVar12 < uVar11) {
        FUN_00e14b1c(param_2,8);
      }
      if (uVar10 != 0) {
        pbVar14 = pbVar7 + uVar10;
        if (*(byte **)(param_2 + 0x108) < pbVar14) {
          FUN_00e14b1c(param_2,8);
        }
        uVar11 = (ulong)pbVar14[-4] << 0x18 | (ulong)pbVar14[-3] << 0x10 | (ulong)pbVar14[-2] << 8 |
                 (ulong)pbVar14[-1];
        if ((ulong)(*(long *)(param_2 + 0x108) - (long)pbVar14) >> 2 < uVar11) {
          FUN_00e14b1c(param_2,8);
        }
        else if (uVar11 == 0) goto LAB_00e56334;
        uVar10 = 0;
        do {
          while( true ) {
            uVar15 = (ulong)*pbVar14 << 0x10 | (ulong)pbVar14[1] << 8 | (ulong)pbVar14[2];
            uVar1 = uVar15 + pbVar14[3];
            if (uVar1 < 0x110000) break;
            FUN_00e14b1c(param_2,8);
            if (uVar15 < uVar10) goto LAB_00e56318;
LAB_00e562f0:
            uVar10 = uVar1 + 1;
            uVar11 = uVar11 - 1;
            pbVar14 = pbVar14 + 4;
            if (uVar11 == 0) goto LAB_00e56334;
          }
          if (uVar10 <= uVar15) goto LAB_00e562f0;
LAB_00e56318:
          FUN_00e14b1c(param_2,8);
          uVar10 = uVar1 + 1;
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 4;
        } while (uVar11 != 0);
      }
LAB_00e56334:
      pbVar9 = pbVar9 + 0xb;
      uVar11 = uVar12 + 1;
      if (uVar13 != 0) {
        pbVar14 = pbVar7 + uVar13;
        if (*(byte **)(param_2 + 0x108) < pbVar14) {
          FUN_00e14b1c(param_2,8);
        }
        uVar10 = (ulong)pbVar14[-4] << 0x18 | (ulong)pbVar14[-3] << 0x10 | (ulong)pbVar14[-2] << 8 |
                 (ulong)pbVar14[-1];
        if ((ulong)(*(long *)(param_2 + 0x108) - (long)pbVar14) / 5 < uVar10) {
          FUN_00e14b1c(param_2,8);
        }
        else if (uVar10 == 0) goto LAB_00e5645c;
        uVar12 = 0;
LAB_00e563bc:
        do {
          bVar3 = pbVar14[3];
          bVar4 = pbVar14[4];
          uVar13 = (ulong)*pbVar14 << 0x10 | (ulong)pbVar14[1] << 8 | (ulong)pbVar14[2];
          if (uVar13 < 0x110000) {
            if (uVar12 <= uVar13) goto LAB_00e563ec;
LAB_00e56438:
            FUN_00e14b1c(param_2,8);
            iVar2 = *(int *)(param_2 + 0x110);
          }
          else {
            FUN_00e14b1c(param_2,8);
            if (uVar13 < uVar12) goto LAB_00e56438;
LAB_00e563ec:
            iVar2 = *(int *)(param_2 + 0x110);
          }
          if ((iVar2 != 0) &&
             (uVar12 = uVar13 + 1, *(uint *)(param_2 + 0x118) <= (uint)CONCAT11(bVar3,bVar4))) {
            FUN_00e14b1c(param_2,0x10);
            uVar10 = uVar10 - 1;
            pbVar14 = pbVar14 + 5;
            if (uVar10 == 0) break;
            goto LAB_00e563bc;
          }
          uVar12 = uVar13 + 1;
          uVar10 = uVar10 - 1;
          pbVar14 = pbVar14 + 5;
        } while (uVar10 != 0);
      }
LAB_00e5645c:
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  return 0;
}

