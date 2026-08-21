
void FUN_010ab8b8(uint *param_1,uint param_2,short *param_3,uint param_4,short *param_5,int param_6,
                 int param_7)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  undefined8 uVar18;
  
  puVar8 = param_1 + 0xc2;
  if (param_7 != 0) {
    puVar8 = param_1 + 0x246;
  }
  uVar10 = 0;
  uVar9 = 0;
  if (param_7 != 0) {
    param_1 = param_1 + 0x184;
  }
  *param_1 = 0;
  *puVar8 = 0;
  if (1 < param_2) {
    bVar4 = false;
    uVar9 = 0;
    uVar10 = 0;
                    /* try { // try from 010ab8f8 to 011ab8ff has its CatchHandler @ 010ab938 */
    do {
      if (!bVar4) {
        sVar1 = param_3[1];
        puVar5 = puVar8;
        psVar13 = param_3;
        uVar11 = uVar9;
      }
      else {
        sVar1 = *param_3;
        puVar5 = param_1;
        psVar13 = param_3 + 1;
        uVar11 = uVar10;
      }
                    /* catch() { ... } // from try @ 010ab8f8 with catch @ 010ab938 */
      puVar14 = puVar5 + 2;
      uVar15 = (int)*psVar13 - (int)sVar1;
      if (uVar11 != 0) {
        iVar16 = -uVar11;
        uVar7 = (ulong)uVar11;
LAB_010ab954:
        if ((int)sVar1 < (int)*puVar14) {
          puVar6 = puVar5 + (ulong)uVar11 * 0xc + 2;
          puVar5 = puVar5 + (ulong)(uVar11 - 1) * 0xc + 2;
          do {
            uVar18 = *(undefined8 *)(puVar5 + 8);
            iVar16 = iVar16 + 1;
            *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar5 + 10);
            *(undefined8 *)(puVar6 + 8) = uVar18;
            uVar18 = *(undefined8 *)(puVar5 + 4);
            *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar5 + 6);
            *(undefined8 *)(puVar6 + 4) = uVar18;
            uVar18 = *(undefined8 *)puVar5;
            *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar5 + 2);
            *(undefined8 *)puVar6 = uVar18;
            puVar6 = puVar6 + -0xc;
            puVar5 = puVar5 + -0xc;
          } while (iVar16 != 0);
          goto LAB_010ab9a8;
        }
        if ((int)sVar1 != *puVar14) goto code_r0x010ab964;
        if ((int)uVar15 < 0) {
                    /* try { // try from 010ab900 to 011ab94f has its CatchHandler @ 010ab8b0 */
          if ((int)puVar14[1] <= (int)uVar15) goto LAB_010ab9d4;
        }
        else if ((int)uVar15 <= (int)puVar14[1]) goto LAB_010ab9d4;
        puVar14[1] = uVar15;
        goto LAB_010ab9d4;
      }
LAB_010ab9a8:
      *puVar14 = (int)sVar1;
      puVar14[1] = uVar15;
      if (!bVar4) {
        uVar9 = uVar9 + 1;
      }
      else {
        uVar10 = uVar10 + 1;
      }
LAB_010ab9d4:
      param_2 = param_2 - 2;
      param_3 = param_3 + 2;
      bVar4 = true;
    } while (1 < param_2);
  }
  *param_1 = uVar10;
  *puVar8 = uVar9;
  if (1 < param_4) {
    puVar5 = puVar8 + 2;
    do {
      sVar1 = param_5[1];
      uVar11 = (int)*param_5 - (int)sVar1;
      uVar15 = (uint)sVar1;
      puVar14 = puVar5;
      if (uVar9 != 0) {
        iVar16 = -uVar9;
        uVar7 = (ulong)uVar9;
LAB_010aba48:
        uVar12 = *puVar14;
        if (uVar12 != uVar15 && (int)sVar1 <= (int)uVar12) {
          puVar6 = puVar5 + (ulong)(uVar9 - 1) * 0xc;
          puVar17 = puVar5 + (ulong)uVar9 * 0xc;
          do {
            uVar18 = *(undefined8 *)(puVar6 + 8);
            iVar16 = iVar16 + 1;
            *(undefined8 *)(puVar17 + 10) = *(undefined8 *)(puVar6 + 10);
            *(undefined8 *)(puVar17 + 8) = uVar18;
            uVar18 = *(undefined8 *)(puVar6 + 4);
            *(undefined8 *)(puVar17 + 6) = *(undefined8 *)(puVar6 + 6);
            *(undefined8 *)(puVar17 + 4) = uVar18;
            uVar18 = *(undefined8 *)puVar6;
            *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar6 + 2);
            *(undefined8 *)puVar17 = uVar18;
            puVar6 = puVar6 + -0xc;
            puVar17 = puVar17 + -0xc;
          } while (iVar16 != 0);
          goto LAB_010aba98;
        }
                    /* try { // try from 010aba54 to 011abae7 has its CatchHandler @ 010aba54
                       catch() { ... } // from try @ 010aba54 with catch @ 010aba54
                       catch() { ... } // from try @ 010abaf0 with catch @ 010aba54 */
        if (uVar12 != uVar15) goto code_r0x010aba58;
        if ((int)uVar11 < 0) {
          if ((int)puVar14[1] <= (int)uVar11) goto LAB_010abaa0;
        }
        else if ((int)uVar11 <= (int)puVar14[1]) goto LAB_010abaa0;
        puVar14[1] = uVar11;
        goto LAB_010abaa0;
      }
LAB_010aba98:
      uVar9 = uVar9 + 1;
      *puVar14 = uVar15;
      puVar14[1] = uVar11;
LAB_010abaa0:
      param_4 = param_4 - 2;
      param_5 = param_5 + 2;
    } while (1 < param_4);
  }
  *param_1 = uVar10;
  *puVar8 = uVar9;
  if (0 < (int)uVar10) {
    uVar11 = uVar10 - 1;
    puVar5 = param_1;
    uVar15 = uVar10;
    if (uVar11 != 0) goto LAB_010abb10;
    do {
      uVar12 = puVar5[2];
      uVar15 = uVar11;
      uVar11 = puVar5[3];
      while( true ) {
        puVar5[4] = uVar11 + uVar12;
        puVar5[5] = uVar12;
        puVar5 = puVar5 + 0xc;
        uVar11 = uVar15 - 1;
        if (uVar11 == 0) break;
LAB_010abb10:
        if (uVar15 == 0) goto LAB_010abb14;
        uVar12 = puVar5[2];
        uVar2 = puVar5[0xe] - uVar12;
        uVar15 = uVar11;
        uVar11 = puVar5[3];
        if ((int)uVar2 < (int)puVar5[3]) {
                    /* try { // try from 010abae8 to 011abaef has its CatchHandler @ 010abb30 */
          puVar5[3] = uVar2;
          uVar11 = uVar2;
                    /* try { // try from 010abaf0 to 011abb47 has its CatchHandler @ 010aba54 */
        }
      }
    } while( true );
  }
LAB_010abb14:
  if ((int)uVar9 < 1) {
LAB_010abb70:
    if (uVar10 != 0) {
      uVar11 = param_1[4];
      param_1[5] = param_1[5] - param_6;
      if (uVar10 == 1) {
        param_1 = param_1 + 2;
      }
      else {
        iVar16 = 1 - uVar10;
        puVar5 = param_1 + 0x11;
        do {
          iVar3 = *puVar5 - uVar11;
          if (iVar3 < param_6 * 2) {
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            uVar11 = uVar11 + (iVar3 >> 1);
            *puVar5 = uVar11;
            puVar5[-0xd] = uVar11;
          }
          else {
            puVar5[-0xd] = uVar11 + param_6;
            *puVar5 = *puVar5 - param_6;
          }
          uVar11 = puVar5[-1];
          iVar16 = iVar16 + 1;
          puVar5 = puVar5 + 0xc;
        } while (iVar16 != 0);
        param_1 = param_1 + (ulong)(uVar10 - 2) * 0xc + 0xe;
      }
      param_1[2] = uVar11 + param_6;
    }
    if (uVar9 != 0) {
      uVar10 = puVar8[4];
      puVar8[5] = puVar8[5] - param_6;
      if (uVar9 == 1) {
        puVar8 = puVar8 + 2;
      }
      else {
        iVar16 = 1 - uVar9;
        puVar5 = puVar8 + 0x11;
        do {
          iVar3 = *puVar5 - uVar10;
          if (iVar3 < param_6 * 2) {
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            uVar10 = uVar10 + (iVar3 >> 1);
            uVar11 = uVar10;
          }
          else {
            uVar11 = uVar10 + param_6;
            uVar10 = *puVar5 - param_6;
          }
          *puVar5 = uVar10;
          uVar10 = puVar5[-1];
          puVar5[-0xd] = uVar11;
          iVar16 = iVar16 + 1;
          puVar5 = puVar5 + 0xc;
        } while (iVar16 != 0);
        puVar8 = puVar8 + (ulong)(uVar9 - 2) * 0xc + 0xe;
      }
      puVar8[2] = uVar10 + param_6;
    }
    return;
  }
  uVar11 = uVar9 - 1;
  puVar5 = puVar8;
  uVar15 = uVar9;
  if (uVar11 != 0) goto LAB_010abb6c;
  do {
    uVar12 = puVar5[2];
    uVar15 = uVar11;
    uVar11 = puVar5[3];
    while( true ) {
      puVar5[4] = uVar12;
      puVar5[5] = uVar11 + uVar12;
      puVar5 = puVar5 + 0xc;
      uVar11 = uVar15 - 1;
      if (uVar11 == 0) break;
LAB_010abb6c:
      if (uVar15 == 0) goto LAB_010abb70;
                    /* catch() { ... } // from try @ 010abae8 with catch @ 010abb30 */
      uVar12 = puVar5[2];
      uVar2 = uVar12 - puVar5[0xe];
      uVar15 = uVar11;
      uVar11 = puVar5[3];
      if ((int)puVar5[3] < (int)uVar2) {
        puVar5[3] = uVar2;
        uVar11 = uVar2;
      }
    }
  } while( true );
code_r0x010ab964:
  puVar14 = puVar14 + 0xc;
  uVar7 = uVar7 - 1;
  iVar16 = iVar16 + 1;
  if ((int)uVar7 == 0) goto LAB_010ab9a8;
  goto LAB_010ab954;
code_r0x010aba58:
  puVar14 = puVar14 + 0xc;
  uVar7 = uVar7 - 1;
  iVar16 = iVar16 + 1;
  if ((int)uVar7 == 0) goto LAB_010aba98;
  goto LAB_010aba48;
}

