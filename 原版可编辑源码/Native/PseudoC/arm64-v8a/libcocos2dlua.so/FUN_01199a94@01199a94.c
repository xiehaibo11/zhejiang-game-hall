
int FUN_01199a94(ushort *param_1,ushort *param_2,long param_3,int *param_4,int *param_5)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ushort *puVar17;
  ulong uVar18;
  ushort *puVar19;
  ushort *puVar20;
  
  uVar3 = *param_1;
  if (uVar3 == 0xffff) {
    uVar12 = 0;
  }
  else if (param_1[1] == 0xffff) {
    uVar12 = 1;
  }
  else if (param_1[2] == 0xffff) {
    uVar12 = 2;
  }
  else if (param_1[3] == 0xffff) {
    uVar12 = 3;
  }
  else if (param_1[4] == 0xffff) {
    uVar12 = 4;
  }
  else {
    uVar12 = 5;
    if (param_1[5] != 0xffff) {
      uVar12 = 6;
    }
  }
  if (*param_2 == 0xffff) {
    uVar13 = 0;
  }
  else if (param_2[1] == 0xffff) {
    uVar13 = 1;
  }
  else if (param_2[2] == 0xffff) {
    uVar13 = 2;
  }
  else if (param_2[3] == 0xffff) {
    uVar13 = 3;
  }
  else if (param_2[4] == 0xffff) {
    uVar13 = 4;
  }
  else {
    uVar13 = 5;
    if (param_2[5] != 0xffff) {
      uVar13 = 6;
    }
  }
  if (uVar13 + uVar12 < 9) {
    *param_4 = -1;
    *param_5 = -1;
    if (uVar12 != 0) {
      iVar15 = -1;
      uVar18 = 0;
      do {
        uVar1 = uVar18 + 1;
        uVar11 = 0;
        if (uVar1 != uVar12) {
          uVar11 = uVar1 & 0xffffffff;
        }
        uVar4 = param_1[uVar11];
        uVar2 = uVar3;
        if (uVar3 <= uVar4) {
          uVar2 = uVar4;
          uVar4 = uVar3;
        }
        iVar14 = -1;
        puVar17 = param_2;
        uVar11 = (ulong)uVar13;
        do {
          if (uVar11 == 0) goto joined_r0x01199bbc;
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = (iVar14 + 2U) / uVar13;
          }
          puVar19 = puVar17 + 1;
          uVar3 = *puVar17;
          uVar5 = param_2[(iVar14 + 2U) - uVar10 * uVar13];
          iVar14 = iVar14 + 1;
          uVar11 = uVar11 - 1;
          uVar9 = uVar5;
          if (uVar3 <= uVar5) {
            uVar9 = uVar3;
            uVar3 = uVar5;
          }
          puVar17 = puVar19;
        } while ((uVar9 != uVar4) || (uVar3 != uVar2));
        *param_4 = (int)uVar18;
        *param_5 = iVar14;
        iVar15 = iVar14;
joined_r0x01199bbc:
        if (uVar1 == uVar12) goto LAB_01199c50;
        uVar3 = param_1[uVar1];
        uVar18 = uVar1;
      } while( true );
    }
    iVar15 = -1;
LAB_01199c50:
    iVar14 = *param_4;
    if ((iVar14 != -1) && (iVar15 != -1)) {
      iVar8 = uVar12 + iVar14 + -1;
      iVar6 = 0;
      if (uVar13 != 0) {
        iVar6 = (iVar15 + 2) / (int)uVar13;
      }
      iVar7 = 0;
      if (uVar12 != 0) {
        iVar7 = iVar8 / (int)uVar12;
      }
      uVar3 = param_1[iVar14];
      puVar20 = (ushort *)(param_3 + (ulong)uVar3 * 6);
      puVar19 = (ushort *)(param_3 + (ulong)param_2[(int)((iVar15 + 2) - iVar6 * uVar13)] * 6);
      puVar17 = (ushort *)(param_3 + (ulong)param_1[(int)(iVar8 - iVar7 * uVar12)] * 6);
      uVar10 = (uint)*puVar17;
      uVar16 = (uint)puVar17[2];
      if ((int)((puVar19[2] - uVar16) * (*puVar20 - uVar10)) <
          (int)((puVar20[2] - uVar16) * (*puVar19 - uVar10))) {
        iVar8 = uVar13 + iVar15 + -1;
        iVar6 = 0;
        if (uVar13 != 0) {
          iVar6 = iVar8 / (int)uVar13;
        }
        iVar7 = 0;
        if (uVar12 != 0) {
          iVar7 = (iVar14 + 2) / (int)uVar12;
        }
        puVar19 = (ushort *)(param_3 + (ulong)param_2[iVar15] * 6);
        puVar20 = (ushort *)(param_3 + (ulong)param_1[(int)((iVar14 + 2) - iVar7 * uVar12)] * 6);
        puVar17 = (ushort *)(param_3 + (ulong)param_2[(int)(iVar8 - iVar6 * uVar13)] * 6);
        uVar10 = (uint)*puVar17;
        uVar13 = (uint)puVar17[2];
        if ((int)((puVar20[2] - uVar13) * (*puVar19 - uVar10)) <
            (int)((puVar19[2] - uVar13) * (*puVar20 - uVar10))) {
          iVar15 = 0;
          if (uVar12 != 0) {
            iVar15 = (iVar14 + 1) / (int)uVar12;
          }
          iVar6 = (uint)*(ushort *)(param_3 + (ulong)uVar3 * 6) -
                  (uint)*(ushort *)
                         (param_3 + (ulong)param_1[(int)((iVar14 + 1) - iVar15 * uVar12)] * 6);
          iVar15 = (uint)*(ushort *)(param_3 + (ulong)((uint)uVar3 * 3 + 2) * 2) -
                   (uint)*(ushort *)
                          (param_3 +
                          (ulong)((uint)param_1[(int)((iVar14 + 1) - iVar15 * uVar12)] * 3 + 2) * 2)
          ;
          return iVar6 * iVar6 + iVar15 * iVar15;
        }
      }
    }
  }
  return -1;
}

