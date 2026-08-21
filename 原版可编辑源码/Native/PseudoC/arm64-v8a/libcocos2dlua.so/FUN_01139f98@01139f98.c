
undefined8 FUN_01139f98(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  
  piVar9 = *(int **)(param_1 + 0x350);
  lVar7 = 0;
  if ((long)piVar9[2] != 0) {
    lVar7 = param_3 / (long)piVar9[2];
  }
  lVar14 = param_2;
  if (*piVar9 != 2) {
    lVar14 = *(long *)(piVar9 + 4);
    (**(code **)(piVar9 + 8))(piVar9,param_2,lVar7);
  }
  pcVar10 = *(char **)(param_1 + 0x388);
  uVar18 = 0;
  lVar12 = *(long *)(param_1 + 0x370) - *(long *)(param_1 + 0x390);
  uVar16 = 0x18;
  do {
    if (0 < lVar7) {
      uVar17 = 0;
      uVar6 = 0xff << (ulong)(uVar16 & 0x1f);
      do {
        if (lVar12 < 4) {
          *(char **)(param_1 + 0x388) = pcVar10;
          *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x370) - lVar12;
          iVar8 = TIFFFlushData1(param_1);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          pcVar10 = *(char **)(param_1 + 0x388);
          lVar12 = *(long *)(param_1 + 0x370) - *(long *)(param_1 + 0x390);
        }
        uVar4 = uVar17;
        uVar15 = uVar17;
        if ((long)uVar17 < lVar7) {
          do {
            uVar15 = uVar4;
                    /* try { // try from 0113a06c to 0123a073 has its CatchHandler @ 0113a9e8 */
            puVar3 = (uint *)(lVar14 + uVar15 * 4);
                    /* try { // try from 0113a074 to 0123a483 has its CatchHandler @ 01139f50 */
            uVar18 = 1;
            while ((uVar4 = uVar15 + uVar18, (long)uVar4 < lVar7 &&
                   (((puVar3[uVar18] ^ *puVar3) & uVar6) == 0))) {
              uVar4 = uVar18 + 1;
              bVar1 = 0x7f < (long)uVar18;
              uVar18 = uVar4;
              if (bVar1) {
                uVar18 = uVar4 & 0xffffffff;
                goto LAB_0113a0c4;
              }
            }
            if (3 < (int)uVar18) goto LAB_0113a0c4;
          } while ((long)uVar4 < lVar7);
          uVar15 = uVar15 + uVar18;
        }
LAB_0113a0c4:
        if ((uVar15 - uVar17 & 0xfffffffffffffffe) == 2) {
          lVar13 = 0;
          uVar5 = *(uint *)(lVar14 + uVar17 * 4) & uVar6;
          do {
            if ((*(uint *)(lVar14 + 4 + uVar17 * 4 + lVar13 * 4) & uVar6) != uVar5)
            goto LAB_0113a12c;
            lVar13 = lVar13 + 1;
          } while ((uVar15 - 1) - uVar17 != lVar13);
          *pcVar10 = (char)lVar13 + '\x7f';
          pcVar10[1] = (char)(uVar5 >> (ulong)(uVar16 & 0x1f));
          pcVar10 = pcVar10 + 2;
          lVar12 = lVar12 + -2;
          uVar17 = uVar15;
        }
LAB_0113a12c:
        if ((long)uVar17 < (long)uVar15) {
          do {
            lVar13 = uVar15 - uVar17;
            if (0x7e < lVar13) {
              lVar13 = 0x7f;
            }
            pcVar11 = pcVar10;
            if (lVar12 < lVar13 + 3) {
              *(char **)(param_1 + 0x388) = pcVar10;
              *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x370) - lVar12;
              iVar8 = TIFFFlushData1(param_1);
              if (iVar8 == 0) {
                return 0xffffffff;
              }
              pcVar11 = *(char **)(param_1 + 0x388);
              lVar12 = *(long *)(param_1 + 0x370) - *(long *)(param_1 + 0x390);
            }
            pcVar10 = pcVar11 + 1;
            *pcVar11 = (char)lVar13;
            lVar12 = lVar12 + -1;
            if (lVar13 != 0) {
              lVar13 = ~uVar15 + uVar17;
              if (lVar13 < -0x7f) {
                lVar13 = -0x80;
              }
              lVar13 = lVar13 + 1;
              pcVar11 = pcVar10;
              do {
                lVar2 = uVar17 * 4;
                uVar17 = uVar17 + 1;
                lVar13 = lVar13 + 1;
                lVar12 = lVar12 + -1;
                pcVar10 = pcVar11 + 1;
                *pcVar11 = (char)(*(uint *)(lVar14 + lVar2) >> (ulong)(uVar16 & 0x1f));
                pcVar11 = pcVar10;
              } while (lVar13 != 0);
            }
          } while ((long)uVar17 < (long)uVar15);
          if ((int)uVar18 < 4) goto LAB_0113a208;
LAB_0113a1dc:
          *pcVar10 = (char)uVar18 + '~';
          lVar12 = lVar12 + -2;
          pcVar10[1] = (char)(*(uint *)(lVar14 + uVar15 * 4) >> (ulong)(uVar16 & 0x1f));
          pcVar10 = pcVar10 + 2;
        }
        else {
          if (3 < (int)uVar18) goto LAB_0113a1dc;
LAB_0113a208:
          uVar18 = 0;
        }
        uVar17 = uVar17 + (long)(int)uVar18;
      } while ((long)uVar17 < lVar7);
    }
    bVar1 = (int)uVar16 < 8;
    uVar16 = uVar16 - 8;
    if (bVar1) {
      *(char **)(param_1 + 0x388) = pcVar10;
      *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x370) - lVar12;
      return 1;
    }
  } while( true );
}

