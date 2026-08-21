
undefined8 FUN_00dddfdc(long param_1,long param_2,long param_3)

{
  bool bVar1;
  short *psVar2;
  ulong uVar3;
  ushort *puVar4;
  ushort uVar5;
  short sVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  piVar9 = *(int **)(param_1 + 0x350);
  lVar7 = 0;
  if ((long)piVar9[2] != 0) {
    lVar7 = param_3 / (long)piVar9[2];
  }
  lVar15 = param_2;
  if (*piVar9 != 1) {
    lVar15 = *(long *)(piVar9 + 4);
    (**(code **)(piVar9 + 8))(piVar9,param_2,lVar7);
  }
  pcVar11 = *(char **)(param_1 + 0x388);
  lVar10 = *(long *)(param_1 + 0x370) - *(long *)(param_1 + 0x390);
  if (0 < lVar7) {
    uVar16 = 0;
    uVar17 = 0;
    do {
      if (lVar10 < 4) {
        *(char **)(param_1 + 0x388) = pcVar11;
        *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x370) - lVar10;
        iVar8 = TIFFFlushData1(param_1);
        if (iVar8 == 0) {
          return 0xffffffff;
        }
        pcVar11 = *(char **)(param_1 + 0x388);
        lVar10 = *(long *)(param_1 + 0x370) - *(long *)(param_1 + 0x390);
      }
      uVar3 = uVar17;
      uVar18 = uVar17;
      if ((long)uVar17 < lVar7) {
        do {
          uVar18 = uVar3;
          psVar2 = (short *)(lVar15 + uVar18 * 2);
          uVar16 = 1;
          while ((uVar3 = uVar18 + uVar16, (long)uVar3 < lVar7 &&
                 (((ushort)psVar2[uVar16] & 0xff00) == ((int)*psVar2 & 0xffffff00U)))) {
            uVar3 = uVar16 + 1;
            bVar1 = 0x7f < (long)uVar16;
            uVar16 = uVar3;
            if (bVar1) {
              uVar16 = uVar3 & 0xffffffff;
              goto LAB_00dde108;
            }
          }
          if (3 < (int)uVar16) goto LAB_00dde108;
        } while ((long)uVar3 < lVar7);
        uVar18 = uVar18 + uVar16;
      }
LAB_00dde108:
      if ((uVar18 - uVar17 & 0xfffffffffffffffe) == 2) {
        sVar6 = *(short *)(lVar15 + uVar17 * 2);
        lVar13 = 0;
        do {
          if ((*(ushort *)(lVar15 + 2 + uVar17 * 2 + lVar13 * 2) & 0xff00) !=
              ((int)sVar6 & 0xffffff00U)) goto LAB_00dde170;
          lVar13 = lVar13 + 1;
        } while ((uVar18 - 1) - uVar17 != lVar13);
        *pcVar11 = (char)lVar13 + '\x7f';
        pcVar11[1] = (char)((ushort)sVar6 >> 8);
        pcVar11 = pcVar11 + 2;
        lVar10 = lVar10 + -2;
        uVar17 = uVar18;
      }
LAB_00dde170:
      if ((long)uVar17 < (long)uVar18) {
        do {
          lVar13 = uVar18 - uVar17;
          if (0x7e < lVar13) {
            lVar13 = 0x7f;
          }
          pcVar12 = pcVar11;
          if (lVar10 < lVar13 + 3) {
            *(char **)(param_1 + 0x388) = pcVar11;
            *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x370) - lVar10;
            iVar8 = TIFFFlushData1(param_1);
            if (iVar8 == 0) {
              return 0xffffffff;
            }
            pcVar12 = *(char **)(param_1 + 0x388);
            lVar10 = *(long *)(param_1 + 0x370) - *(long *)(param_1 + 0x390);
          }
          pcVar11 = pcVar12 + 1;
          *pcVar12 = (char)lVar13;
          lVar10 = lVar10 + -1;
          if (lVar13 != 0) {
            lVar13 = ~uVar18 + uVar17;
            if (lVar13 < -0x7f) {
              lVar13 = -0x80;
            }
            lVar13 = lVar13 + 1;
            pcVar12 = pcVar11;
            do {
              lVar14 = uVar17 * 2;
              uVar17 = uVar17 + 1;
              lVar13 = lVar13 + 1;
              lVar10 = lVar10 + -1;
              pcVar11 = pcVar12 + 1;
              *pcVar12 = *(char *)(lVar15 + lVar14 + 1);
              pcVar12 = pcVar11;
            } while (lVar13 != 0);
          }
        } while ((long)uVar17 < (long)uVar18);
        if ((int)uVar16 < 4) goto LAB_00dde244;
LAB_00dde218:
        *pcVar11 = (char)uVar16 + '~';
        lVar10 = lVar10 + -2;
        pcVar11[1] = *(char *)(lVar15 + uVar18 * 2 + 1);
        pcVar11 = pcVar11 + 2;
      }
      else {
        if (3 < (int)uVar16) goto LAB_00dde218;
LAB_00dde244:
        uVar16 = 0;
      }
      uVar17 = uVar17 + (long)(int)uVar16;
    } while ((long)uVar17 < lVar7);
    if (0 < lVar7) {
      uVar17 = 0;
      do {
        pcVar12 = pcVar11;
        if (lVar10 < 4) {
          *(char **)(param_1 + 0x388) = pcVar11;
          *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x370) - lVar10;
          iVar8 = TIFFFlushData1(param_1);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          pcVar12 = *(char **)(param_1 + 0x388);
          lVar10 = *(long *)(param_1 + 0x370) - *(long *)(param_1 + 0x390);
        }
        uVar3 = uVar17;
        uVar18 = uVar17;
        if ((long)uVar17 < lVar7) {
          do {
            uVar18 = uVar3;
            puVar4 = (ushort *)(lVar15 + uVar18 * 2);
            uVar16 = 1;
            while ((uVar3 = uVar18 + uVar16, (long)uVar3 < lVar7 &&
                   (((puVar4[uVar16] ^ *puVar4) & 0xff) == 0))) {
              uVar3 = uVar16 + 1;
              bVar1 = 0x7f < (long)uVar16;
              uVar16 = uVar3;
              if (bVar1) {
                uVar16 = uVar3 & 0xffffffff;
                goto LAB_00dde310;
              }
            }
            if (3 < (int)uVar16) goto LAB_00dde310;
          } while ((long)uVar3 < lVar7);
          uVar18 = uVar18 + uVar16;
        }
LAB_00dde310:
        pcVar11 = pcVar12;
        if ((uVar18 - uVar17 & 0xfffffffffffffffe) == 2) {
          uVar5 = *(ushort *)(lVar15 + uVar17 * 2);
          lVar13 = 0;
          do {
            if (((*(ushort *)(lVar15 + 2 + uVar17 * 2 + lVar13 * 2) ^ uVar5) & 0xff) != 0)
            goto LAB_00dde36c;
            lVar13 = lVar13 + 1;
          } while ((uVar18 - 1) - uVar17 != lVar13);
          pcVar12[1] = (char)uVar5;
          pcVar11 = pcVar12 + 2;
          *pcVar12 = (char)lVar13 + '\x7f';
          lVar10 = lVar10 + -2;
          uVar17 = uVar18;
        }
LAB_00dde36c:
        if ((long)uVar17 < (long)uVar18) {
          do {
            lVar13 = uVar18 - uVar17;
            if (0x7e < lVar13) {
              lVar13 = 0x7f;
            }
            pcVar12 = pcVar11;
            if (lVar10 < lVar13 + 3) {
              *(char **)(param_1 + 0x388) = pcVar11;
              *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x370) - lVar10;
              iVar8 = TIFFFlushData1(param_1);
              if (iVar8 == 0) {
                return 0xffffffff;
              }
              pcVar12 = *(char **)(param_1 + 0x388);
              lVar10 = *(long *)(param_1 + 0x370) - *(long *)(param_1 + 0x390);
            }
            pcVar11 = pcVar12 + 1;
            *pcVar12 = (char)lVar13;
            lVar10 = lVar10 + -1;
            if (lVar13 != 0) {
              lVar13 = ~uVar18 + uVar17;
              if (lVar13 < -0x7f) {
                lVar13 = -0x80;
              }
              lVar13 = lVar13 + 1;
              pcVar12 = pcVar11;
              do {
                lVar14 = uVar17 * 2;
                uVar17 = uVar17 + 1;
                lVar13 = lVar13 + 1;
                lVar10 = lVar10 + -1;
                pcVar11 = pcVar12 + 1;
                *pcVar12 = *(char *)(lVar15 + lVar14);
                pcVar12 = pcVar11;
              } while (lVar13 != 0);
            }
          } while ((long)uVar17 < (long)uVar18);
          if ((int)uVar16 < 4) goto LAB_00dde440;
LAB_00dde414:
          *pcVar11 = (char)uVar16 + '~';
          lVar10 = lVar10 + -2;
          pcVar11[1] = *(char *)(lVar15 + uVar18 * 2);
          pcVar11 = pcVar11 + 2;
        }
        else {
          if (3 < (int)uVar16) goto LAB_00dde414;
LAB_00dde440:
          uVar16 = 0;
        }
        uVar17 = uVar17 + (long)(int)uVar16;
      } while ((long)uVar17 < lVar7);
    }
  }
  *(char **)(param_1 + 0x388) = pcVar11;
  *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x370) - lVar10;
  return 1;
}

