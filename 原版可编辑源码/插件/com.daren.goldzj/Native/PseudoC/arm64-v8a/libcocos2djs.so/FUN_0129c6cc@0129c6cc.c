
ulong FUN_0129c6cc(ulong param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  byte *pbVar20;
  
  if ((param_2 == (byte *)0x0) || (param_3 < 0x40)) {
    uVar17 = param_1 >> 0x10 & 0xffff;
    param_1 = param_1 & 0xffff;
    if (param_3 == 1) {
      param_1 = param_1 + *param_2;
      uVar18 = param_1 - 0xfff1;
      if (param_1 < 0xfff1) {
        uVar18 = param_1;
      }
      uVar17 = uVar18 + uVar17;
      param_1 = uVar17 * 0x10000 - 0xfff10000;
      if (uVar17 < 0xfff1) {
        param_1 = uVar17 * 0x10000;
      }
      param_1 = param_1 | uVar18;
    }
    else if (param_2 == (byte *)0x0) {
      param_1 = 1;
    }
    else {
      uVar18 = param_1;
      if (param_3 < 0x10) {
        for (; param_3 != 0; param_3 = param_3 - 1) {
          uVar17 = uVar18 + *param_2 + uVar17;
          uVar18 = uVar18 + *param_2;
          param_2 = param_2 + 1;
        }
        param_1 = uVar18 - 0xfff1;
        if (uVar18 < 0xfff1) {
          param_1 = uVar18;
        }
        uVar17 = uVar17 % 0xfff1;
      }
      else {
        while (0x15a < param_3 >> 4) {
          param_3 = param_3 - 0x15b0;
          iVar19 = -0x15b;
          pbVar20 = param_2;
          do {
            bVar16 = iVar19 != -1;
            iVar19 = iVar19 + 1;
            lVar1 = param_1 + *pbVar20;
            lVar2 = lVar1 + (ulong)pbVar20[1];
            lVar3 = lVar2 + (ulong)pbVar20[2];
            lVar4 = lVar3 + (ulong)pbVar20[3];
            lVar5 = lVar4 + (ulong)pbVar20[4];
            lVar6 = lVar5 + (ulong)pbVar20[5];
            lVar7 = lVar6 + (ulong)pbVar20[6];
            lVar8 = lVar7 + (ulong)pbVar20[7];
            lVar9 = lVar8 + (ulong)pbVar20[8];
            lVar10 = lVar9 + (ulong)pbVar20[9];
            lVar11 = lVar10 + (ulong)pbVar20[10];
            lVar12 = lVar11 + (ulong)pbVar20[0xb];
            lVar13 = lVar12 + (ulong)pbVar20[0xc];
            lVar14 = lVar13 + (ulong)pbVar20[0xd];
            lVar15 = lVar14 + (ulong)pbVar20[0xe];
            param_1 = lVar15 + (ulong)pbVar20[0xf];
            uVar17 = lVar1 + uVar17 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9
                     + lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
            pbVar20 = pbVar20 + 0x10;
          } while (bVar16);
          param_2 = param_2 + 0x15b0;
          param_1 = param_1 % 0xfff1;
          uVar17 = uVar17 % 0xfff1;
        }
        if (param_3 != 0) {
          for (; 0xf < param_3; param_3 = param_3 - 0x10) {
            lVar1 = param_1 + *param_2;
            lVar2 = lVar1 + (ulong)param_2[1];
            lVar3 = lVar2 + (ulong)param_2[2];
            lVar4 = lVar3 + (ulong)param_2[3];
            lVar5 = lVar4 + (ulong)param_2[4];
            lVar6 = lVar5 + (ulong)param_2[5];
            lVar7 = lVar6 + (ulong)param_2[6];
            lVar8 = lVar7 + (ulong)param_2[7];
            lVar9 = lVar8 + (ulong)param_2[8];
            lVar10 = lVar9 + (ulong)param_2[9];
            lVar11 = lVar10 + (ulong)param_2[10];
            lVar12 = lVar11 + (ulong)param_2[0xb];
            lVar13 = lVar12 + (ulong)param_2[0xc];
            lVar14 = lVar13 + (ulong)param_2[0xd];
            lVar15 = lVar14 + (ulong)param_2[0xe];
            param_1 = lVar15 + (ulong)param_2[0xf];
            uVar17 = lVar1 + uVar17 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9
                     + lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
            param_2 = param_2 + 0x10;
          }
          for (uVar18 = 0; param_3 != uVar18; uVar18 = uVar18 + 1) {
            param_1 = param_1 + param_2[uVar18];
            uVar17 = param_1 + uVar17;
          }
          param_1 = param_1 % 0xfff1;
          uVar17 = uVar17 % 0xfff1;
        }
      }
      param_1 = param_1 | uVar17 << 0x10;
    }
  }
  else {
    param_1 = FUN_0129ca58();
    param_1 = param_1 & 0xffffffff;
  }
  return param_1;
}

