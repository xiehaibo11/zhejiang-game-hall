
void FUN_00e6a88c(uint *param_1,uint param_2,short *param_3,uint param_4,short *param_5,int param_6,
                 int param_7)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar9 = param_1 + 0xc2;
  if (param_7 != 0) {
    puVar9 = param_1 + 0x246;
  }
  uVar11 = 0;
  uVar10 = 0;
  if (param_7 != 0) {
    param_1 = param_1 + 0x184;
  }
  *param_1 = 0;
  *puVar9 = 0;
  if (1 < param_2) {
    bVar4 = false;
    uVar10 = 0;
    uVar11 = 0;
    do {
      if (!bVar4) {
        sVar1 = param_3[1];
        uVar12 = (int)*param_3 - (int)sVar1;
        puVar8 = puVar9;
        uVar15 = uVar10;
      }
      else {
        sVar1 = *param_3;
        uVar12 = (int)param_3[1] - (int)sVar1;
        puVar8 = param_1;
        uVar15 = uVar11;
      }
      uVar13 = (uint)sVar1;
      puVar14 = puVar8 + 2;
      if (uVar15 != 0) {
        iVar16 = -uVar15;
        uVar6 = (ulong)uVar15;
LAB_00e6a938:
        if ((int)uVar13 < (int)*puVar14) {
          puVar5 = puVar8 + (ulong)(uVar15 - 1) * 0xc + 2;
          puVar8 = puVar8 + (ulong)uVar15 * 0xc + 2;
          do {
            uVar21 = *(undefined8 *)(puVar5 + 4);
            uVar18 = *(undefined8 *)(puVar5 + 10);
            uVar17 = *(undefined8 *)(puVar5 + 8);
            uVar20 = *(undefined8 *)(puVar5 + 2);
            uVar19 = *(undefined8 *)puVar5;
            iVar16 = iVar16 + 1;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar5 + 6);
            *(undefined8 *)(puVar8 + 4) = uVar21;
            *(undefined8 *)(puVar8 + 10) = uVar18;
            *(undefined8 *)(puVar8 + 8) = uVar17;
            *(undefined8 *)(puVar8 + 2) = uVar20;
            *(undefined8 *)puVar8 = uVar19;
            puVar5 = puVar5 + -0xc;
            puVar8 = puVar8 + -0xc;
          } while (iVar16 != 0);
          goto LAB_00e6a984;
        }
        if (uVar13 != *puVar14) goto code_r0x00e6a948;
        if ((int)uVar12 < 0) {
          if ((int)puVar14[1] <= (int)uVar12) goto LAB_00e6a9b0;
        }
        else if ((int)uVar12 <= (int)puVar14[1]) goto LAB_00e6a9b0;
        puVar14[1] = uVar12;
        goto LAB_00e6a9b0;
      }
LAB_00e6a984:
      *puVar14 = uVar13;
      puVar14[1] = uVar12;
      if (!bVar4) {
        uVar10 = uVar10 + 1;
      }
      else {
        uVar11 = uVar11 + 1;
      }
LAB_00e6a9b0:
      param_2 = param_2 - 2;
      param_3 = param_3 + 2;
      bVar4 = true;
    } while (1 < param_2);
  }
  *param_1 = uVar11;
  *puVar9 = uVar10;
  if (1 < param_4) {
    puVar8 = puVar9 + 2;
    do {
      sVar1 = param_5[1];
      uVar12 = (int)*param_5 - (int)sVar1;
      uVar15 = (uint)sVar1;
      puVar14 = puVar8;
      if (uVar10 != 0) {
        iVar16 = -uVar10;
        uVar6 = (ulong)uVar10;
LAB_00e6aa00:
        uVar13 = *puVar14;
        if (uVar13 != uVar15 && (int)sVar1 <= (int)uVar13) {
          puVar5 = puVar8 + (ulong)uVar10 * 0xc;
          puVar7 = puVar8 + (ulong)(uVar10 - 1) * 0xc;
          do {
            uVar21 = *(undefined8 *)(puVar7 + 4);
            uVar18 = *(undefined8 *)(puVar7 + 10);
            uVar17 = *(undefined8 *)(puVar7 + 8);
            uVar20 = *(undefined8 *)(puVar7 + 2);
            uVar19 = *(undefined8 *)puVar7;
            iVar16 = iVar16 + 1;
            *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar7 + 6);
            *(undefined8 *)(puVar5 + 4) = uVar21;
            *(undefined8 *)(puVar5 + 10) = uVar18;
            *(undefined8 *)(puVar5 + 8) = uVar17;
            *(undefined8 *)(puVar5 + 2) = uVar20;
            *(undefined8 *)puVar5 = uVar19;
            puVar5 = puVar5 + -0xc;
            puVar7 = puVar7 + -0xc;
          } while (iVar16 != 0);
          goto LAB_00e6aa48;
        }
        if (uVar13 != uVar15) goto code_r0x00e6aa10;
        if ((int)uVar12 < 0) {
          if ((int)uVar12 < (int)puVar14[1]) {
            puVar14[1] = uVar12;
          }
        }
        else if ((int)puVar14[1] < (int)uVar12) {
          puVar14[1] = uVar12;
        }
        goto joined_r0x00e6aaa0;
      }
LAB_00e6aa48:
      uVar10 = uVar10 + 1;
      *puVar14 = uVar15;
      puVar14[1] = uVar12;
joined_r0x00e6aaa0:
      param_5 = param_5 + 2;
      param_4 = param_4 - 2;
    } while (1 < param_4);
  }
  *param_1 = uVar11;
  *puVar9 = uVar10;
  if (uVar11 != 0) {
    uVar12 = uVar11 - 1;
    puVar8 = param_1;
    uVar15 = uVar11;
    if (uVar12 != 0) goto LAB_00e6ab00;
    do {
      uVar13 = puVar8[2];
      uVar15 = uVar12;
      uVar12 = puVar8[3];
      while( true ) {
        puVar8[4] = uVar12 + uVar13;
        puVar8[5] = uVar13;
        puVar8 = puVar8 + 0xc;
        uVar12 = uVar15 - 1;
        if (uVar12 == 0) break;
LAB_00e6ab00:
        if (uVar15 == 0) goto LAB_00e6ab04;
        uVar13 = puVar8[2];
        uVar2 = puVar8[0xe] - uVar13;
        uVar15 = uVar12;
        uVar12 = puVar8[3];
        if ((int)uVar2 < (int)puVar8[3]) {
          puVar8[3] = uVar2;
          uVar12 = uVar2;
        }
      }
    } while( true );
  }
LAB_00e6ab04:
  if (uVar10 != 0) {
    uVar12 = uVar10 - 1;
    puVar8 = puVar9;
    uVar15 = uVar10;
    if (uVar12 != 0) goto LAB_00e6ab58;
    do {
      uVar13 = puVar8[2];
      uVar15 = uVar12;
      uVar12 = puVar8[3];
      while( true ) {
        puVar8[4] = uVar13;
        puVar8[5] = uVar12 + uVar13;
        puVar8 = puVar8 + 0xc;
        uVar12 = uVar15 - 1;
        if (uVar12 == 0) break;
LAB_00e6ab58:
        if (uVar15 == 0) goto LAB_00e6ab5c;
        uVar13 = puVar8[2];
        uVar2 = uVar13 - puVar8[0xe];
        uVar15 = uVar12;
        uVar12 = puVar8[3];
        if ((int)puVar8[3] < (int)uVar2) {
          puVar8[3] = uVar2;
          uVar12 = uVar2;
        }
      }
    } while( true );
  }
LAB_00e6ab5c:
  if (uVar11 != 0) {
    uVar12 = param_1[4];
    param_1[5] = param_1[5] - param_6;
    if (uVar11 == 1) {
      param_1 = param_1 + 2;
    }
    else {
      iVar16 = 1 - uVar11;
      puVar8 = param_1 + 0x11;
      do {
        while( true ) {
          iVar3 = *puVar8 - uVar12;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          if (param_6 <= iVar3 >> 1) break;
          uVar12 = (iVar3 >> 1) + uVar12;
          *puVar8 = uVar12;
          puVar8[-0xd] = uVar12;
          uVar12 = puVar8[-1];
          iVar16 = iVar16 + 1;
          puVar8 = puVar8 + 0xc;
          if (iVar16 == 0) goto LAB_00e6abe0;
        }
        puVar8[-0xd] = uVar12 + param_6;
        *puVar8 = *puVar8 - param_6;
        uVar12 = puVar8[-1];
        iVar16 = iVar16 + 1;
        puVar8 = puVar8 + 0xc;
      } while (iVar16 != 0);
LAB_00e6abe0:
      param_1 = param_1 + (ulong)(uVar11 - 2) * 0xc + 0xe;
    }
    param_1[2] = uVar12 + param_6;
  }
  if (uVar10 != 0) {
    uVar11 = puVar9[4];
    puVar9[5] = puVar9[5] - param_6;
    if (uVar10 == 1) {
      puVar9 = puVar9 + 2;
    }
    else {
      iVar16 = 1 - uVar10;
      puVar8 = puVar9 + 0x11;
      do {
        uVar12 = uVar11 + param_6;
        iVar3 = *puVar8 - uVar11;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        uVar15 = (iVar3 >> 1) + uVar11;
        uVar11 = puVar8[-1];
        uVar13 = uVar15;
        if (param_6 <= iVar3 >> 1) {
          uVar15 = uVar12;
          uVar13 = *puVar8 - param_6;
        }
        *puVar8 = uVar13;
        puVar8[-0xd] = uVar15;
        iVar16 = iVar16 + 1;
        puVar8 = puVar8 + 0xc;
      } while (iVar16 != 0);
      puVar9 = puVar9 + (ulong)(uVar10 - 2) * 0xc + 0xe;
    }
    puVar9[2] = uVar11 + param_6;
  }
  return;
code_r0x00e6a948:
  puVar14 = puVar14 + 0xc;
  uVar6 = uVar6 - 1;
  iVar16 = iVar16 + 1;
  if ((int)uVar6 == 0) goto LAB_00e6a984;
  goto LAB_00e6a938;
code_r0x00e6aa10:
  puVar14 = puVar14 + 0xc;
  uVar6 = uVar6 - 1;
  iVar16 = iVar16 + 1;
  if ((int)uVar6 == 0) goto LAB_00e6aa48;
  goto LAB_00e6aa00;
}

