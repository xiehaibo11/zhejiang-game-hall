
int FUN_00e69a9c(uint *param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  ulong uVar21;
  int local_44;
  
  uVar1 = *param_2;
  uVar21 = (ulong)uVar1;
  uVar5 = FUN_00e13bcc(param_4,8,0,uVar1 << 1,0,&local_44);
  *(undefined8 *)(param_1 + 4) = uVar5;
  if (local_44 == 0) {
    uVar5 = FUN_00e13bcc(param_4,0x30,0,uVar21,0,&local_44);
    *(undefined8 *)(param_1 + 2) = uVar5;
    if (local_44 == 0) {
      uVar5 = FUN_00e13bcc(param_4,0x20,0,uVar1 << 1 | 1,0,&local_44);
      *(undefined8 *)(param_1 + 10) = uVar5;
      if (local_44 == 0) {
        *param_1 = uVar1;
        param_1[1] = 0;
        param_1[8] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *(ulong *)(param_1 + 6) = *(long *)(param_1 + 4) + uVar21 * 8;
        if (uVar1 != 0) {
          puVar11 = *(undefined8 **)(param_2 + 2);
          puVar12 = *(undefined8 **)(param_1 + 2);
          uVar13 = uVar1;
          do {
            uVar13 = uVar13 - 1;
            *puVar12 = *puVar11;
            puVar8 = puVar11 + 1;
            puVar11 = (undefined8 *)((long)puVar11 + 0xc);
            *(undefined4 *)(puVar12 + 3) = *(undefined4 *)puVar8;
            puVar12 = puVar12 + 6;
          } while (uVar13 != 0);
        }
        if (param_3 == (int *)0x0) {
          uVar13 = 0;
        }
        else {
          iVar2 = *param_3;
          puVar14 = *(uint **)(param_3 + 2);
          uVar13 = 0;
          *(int **)(param_1 + 0xe) = param_3;
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            uVar3 = *puVar14;
            if (uVar3 != 0) {
              uVar15 = 0;
              uVar18 = 0;
              uVar19 = 0;
              pbVar16 = *(byte **)(puVar14 + 2);
              uVar10 = uVar13;
LAB_00e69bd4:
              do {
                if (uVar18 == 0) {
                  pbVar17 = pbVar16 + 1;
                  uVar19 = (uint)*pbVar16;
                  uVar18 = 0x80;
                  if ((*pbVar16 & 0x80) != 0) goto LAB_00e69be0;
                }
                else {
                  pbVar17 = pbVar16;
                  if ((uVar18 & uVar19) != 0) {
LAB_00e69be0:
                    if (uVar15 < uVar21) {
                      lVar7 = *(long *)(param_1 + 2);
                      puVar20 = (uint *)(lVar7 + uVar15 * 0x30 + 0x18);
                      uVar13 = *puVar20;
                      if ((uVar13 >> 2 & 1) == 0) {
                        *puVar20 = uVar13 | 4;
                        puVar12 = *(undefined8 **)(param_1 + 6);
                        piVar6 = (int *)(lVar7 + uVar15 * 0x30);
                        puVar11 = (undefined8 *)(lVar7 + uVar15 * 0x30 + 0x20);
                        *puVar11 = 0;
                        if (uVar10 != 0) {
                          iVar4 = *piVar6;
                          puVar8 = puVar12;
                          uVar13 = uVar10;
                          do {
                            piVar9 = (int *)*puVar8;
                            if ((*piVar9 <= *(int *)(lVar7 + uVar15 * 0x30 + 4) + iVar4) &&
                               (iVar4 <= piVar9[1] + *piVar9)) {
                              *puVar11 = piVar9;
                              break;
                            }
                            uVar13 = uVar13 - 1;
                            puVar8 = puVar8 + 1;
                          } while (uVar13 != 0);
                        }
                        if (uVar10 < uVar1) {
                          uVar13 = uVar10 + 1;
                          param_1[1] = uVar13;
                          puVar12[uVar10] = piVar6;
                          uVar15 = uVar15 + 1;
                          uVar18 = (int)uVar18 >> 1;
                          pbVar16 = pbVar17;
                          uVar10 = uVar13;
                          if (uVar15 == uVar3) break;
                          goto LAB_00e69bd4;
                        }
                      }
                    }
                  }
                }
                uVar15 = uVar15 + 1;
                uVar18 = (int)uVar18 >> 1;
                pbVar16 = pbVar17;
                uVar13 = uVar10;
              } while (uVar15 != uVar3);
            }
            puVar14 = puVar14 + 6;
          }
        }
        if ((uVar13 != uVar1) && (uVar1 != 0)) {
          uVar15 = 0;
          do {
            lVar7 = *(long *)(param_1 + 2);
            piVar6 = (int *)(lVar7 + uVar15 * 0x30);
            uVar3 = piVar6[6];
            if ((uVar3 >> 2 & 1) == 0) {
              piVar6[6] = uVar3 | 4;
              puVar11 = *(undefined8 **)(param_1 + 6);
              puVar12 = (undefined8 *)(lVar7 + uVar15 * 0x30 + 0x20);
              *puVar12 = 0;
              if (uVar13 != 0) {
                puVar8 = puVar11;
                uVar3 = uVar13;
                do {
                  piVar9 = (int *)*puVar8;
                  if ((*piVar9 <= *(int *)(lVar7 + uVar15 * 0x30 + 4) + *piVar6) &&
                     (*piVar6 <= piVar9[1] + *piVar9)) {
                    *puVar12 = piVar9;
                    break;
                  }
                  uVar3 = uVar3 - 1;
                  puVar8 = puVar8 + 1;
                } while (uVar3 != 0);
              }
              if (uVar13 < uVar1) {
                param_1[1] = uVar13 + 1;
                puVar11[uVar13] = piVar6;
                uVar13 = uVar13 + 1;
              }
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar21);
        }
      }
    }
  }
  return local_44;
}

