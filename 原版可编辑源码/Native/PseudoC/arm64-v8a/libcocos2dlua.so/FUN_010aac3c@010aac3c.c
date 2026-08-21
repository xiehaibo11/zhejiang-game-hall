
int FUN_010aac3c(uint *param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  int *piVar23;
  ulong uVar24;
  int local_44;
  
  uVar2 = *param_2;
  uVar24 = (ulong)uVar2;
                    /* catch() { ... } // from try @ 010aac0c with catch @ 010aac7c */
  uVar7 = ft_mem_realloc(param_4,8,0,uVar2 << 1,0,&local_44);
  *(undefined8 *)(param_1 + 4) = uVar7;
  if (local_44 == 0) {
    uVar7 = ft_mem_realloc(param_4,0x30,0,uVar24,0,&local_44);
    *(undefined8 *)(param_1 + 2) = uVar7;
                    /* catch() { ... } // from try @ 010aad34 with catch @ 010aacb4 */
    if (local_44 == 0) {
      uVar7 = ft_mem_realloc(param_4,0x20,0,uVar2 << 1 | 1,0,&local_44);
      *(undefined8 *)(param_1 + 10) = uVar7;
      if (local_44 == 0) {
        *param_1 = uVar2;
        param_1[1] = 0;
                    /* try { // try from 010aacec to 011aacf3 has its CatchHandler @ 010aade8 */
        param_1[8] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *(ulong *)(param_1 + 6) = *(long *)(param_1 + 4) + uVar24 * 8;
        if (uVar2 != 0) {
          puVar12 = *(undefined4 **)(param_2 + 2);
          puVar13 = *(undefined4 **)(param_1 + 2);
          uVar14 = uVar2;
          do {
            uVar14 = uVar14 - 1;
            *puVar13 = *puVar12;
                    /* try { // try from 010aad18 to 011aad33 has its CatchHandler @ 010aadb0 */
            puVar13[1] = puVar12[1];
            puVar1 = puVar12 + 2;
            puVar12 = puVar12 + 3;
            puVar13[6] = *puVar1;
            puVar13 = puVar13 + 0xc;
          } while (uVar14 != 0);
        }
                    /* try { // try from 010aad34 to 011aae03 has its CatchHandler @ 010aacb4 */
        if (param_3 == (int *)0x0) {
          uVar14 = 0;
        }
        else {
          iVar3 = *param_3;
          puVar15 = *(uint **)(param_3 + 2);
          uVar14 = 0;
          *(int **)(param_1 + 0xe) = param_3;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar4 = *puVar15;
            if (uVar4 != 0) {
              uVar16 = 0;
              uVar19 = 0;
              uVar20 = 0;
              pbVar17 = *(byte **)(puVar15 + 2);
              do {
                if (uVar19 == 0) {
                  pbVar18 = pbVar17 + 1;
                  uVar20 = (uint)*pbVar17;
                  uVar19 = 0x80;
                  if ((*pbVar17 & 0x80) != 0) goto LAB_010aad88;
                }
                else {
                  pbVar18 = pbVar17;
                  if ((uVar19 & uVar20) != 0) {
LAB_010aad88:
                    if (uVar16 < uVar24) {
                      lVar9 = *(long *)(param_1 + 2);
                      puVar21 = (uint *)(lVar9 + uVar16 * 0x30 + 0x18);
                      uVar6 = *puVar21;
                      if ((uVar6 >> 2 & 1) == 0) {
                        *puVar21 = uVar6 | 4;
                        puVar22 = *(undefined8 **)(param_1 + 6);
                    /* catch() { ... } // from try @ 010aad18 with catch @ 010aadb0 */
                        piVar23 = (int *)(lVar9 + uVar16 * 0x30);
                        puVar8 = (undefined8 *)(lVar9 + uVar16 * 0x30 + 0x20);
                        *puVar8 = 0;
                        if (uVar14 != 0) {
                          iVar5 = *piVar23;
                          puVar10 = puVar22;
                          uVar6 = uVar14;
                          do {
                            piVar11 = (int *)*puVar10;
                    /* catch() { ... } // from try @ 010aacec with catch @ 010aade8 */
                            if ((*piVar11 <= *(int *)(lVar9 + uVar16 * 0x30 + 4) + iVar5) &&
                               (iVar5 <= piVar11[1] + *piVar11)) {
                              *puVar8 = piVar11;
                              break;
                            }
                            uVar6 = uVar6 - 1;
                            puVar10 = puVar10 + 1;
                          } while (uVar6 != 0);
                        }
                        if (uVar14 < uVar2) {
                          param_1[1] = uVar14 + 1;
                          puVar22[uVar14] = piVar23;
                          uVar14 = uVar14 + 1;
                        }
                      }
                    }
                  }
                }
                    /* catch() { ... } // from try @ 010aaebc with catch @ 010aae34 */
                uVar16 = uVar16 + 1;
                uVar19 = (int)uVar19 >> 1;
                pbVar17 = pbVar18;
              } while (uVar16 != uVar4);
            }
            puVar15 = puVar15 + 6;
          }
        }
        if ((uVar14 != uVar2) && (uVar2 != 0)) {
          uVar16 = 0;
          do {
            if (uVar16 < uVar24) {
              lVar9 = *(long *)(param_1 + 2);
              puVar15 = (uint *)(lVar9 + uVar16 * 0x30 + 0x18);
              uVar4 = *puVar15;
              if ((uVar4 >> 2 & 1) == 0) {
                    /* try { // try from 010aaea0 to 011aaebb has its CatchHandler @ 010ab13c */
                *puVar15 = uVar4 | 4;
                puVar8 = *(undefined8 **)(param_1 + 6);
                piVar23 = (int *)(lVar9 + uVar16 * 0x30);
                puVar22 = (undefined8 *)(lVar9 + uVar16 * 0x30 + 0x20);
                *puVar22 = 0;
                if (uVar14 != 0) {
                    /* try { // try from 010aaebc to 011ab18f has its CatchHandler @ 010aae34 */
                  iVar3 = *piVar23;
                  puVar10 = puVar8;
                  uVar4 = uVar14;
                  do {
                    piVar11 = (int *)*puVar10;
                    if ((*piVar11 <= *(int *)(lVar9 + uVar16 * 0x30 + 4) + iVar3) &&
                       (iVar3 <= piVar11[1] + *piVar11)) {
                      *puVar22 = piVar11;
                    /* try { // try from 010aae74 to 011aae7b has its CatchHandler @ 010ab174 */
                      break;
                    }
                    uVar4 = uVar4 - 1;
                    puVar10 = puVar10 + 1;
                  } while (uVar4 != 0);
                }
                if (uVar14 < uVar2) {
                  param_1[1] = uVar14 + 1;
                  puVar8[uVar14] = piVar23;
                  uVar14 = uVar14 + 1;
                }
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar24);
        }
      }
    }
  }
  return local_44;
}

