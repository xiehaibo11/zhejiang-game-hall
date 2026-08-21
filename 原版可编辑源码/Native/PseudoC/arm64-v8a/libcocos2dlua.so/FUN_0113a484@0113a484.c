
undefined8 FUN_0113a484(long param_1,long param_2,long param_3)

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
  
                    /* try { // try from 0113a484 to 0123a48f has its CatchHandler @ 0113a9d8 */
                    /* try { // try from 0113a490 to 0123a557 has its CatchHandler @ 01139f50 */
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
                    /* try { // try from 0113a558 to 0123a563 has its CatchHandler @ 0113a9e0 */
          uVar16 = 1;
                    /* try { // try from 0113a564 to 0123a5a3 has its CatchHandler @ 01139f50 */
          while ((uVar3 = uVar18 + uVar16, (long)uVar3 < lVar7 &&
                 (((ushort)psVar2[uVar16] & 0xff00) == ((int)*psVar2 & 0xffffff00U)))) {
            uVar3 = uVar16 + 1;
            bVar1 = 0x7f < (long)uVar16;
            uVar16 = uVar3;
            if (bVar1) {
              uVar16 = uVar3 & 0xffffffff;
              goto LAB_0113a5b0;
            }
          }
          if (3 < (int)uVar16) goto LAB_0113a5b0;
        } while ((long)uVar3 < lVar7);
                    /* try { // try from 0113a5a4 to 0123a5af has its CatchHandler @ 0113a9d0 */
        uVar18 = uVar18 + uVar16;
      }
LAB_0113a5b0:
                    /* try { // try from 0113a5b0 to 0123a73b has its CatchHandler @ 01139f50 */
      if ((uVar18 - uVar17 & 0xfffffffffffffffe) == 2) {
        sVar6 = *(short *)(lVar15 + uVar17 * 2);
        lVar13 = 0;
        do {
          if ((*(ushort *)(lVar15 + 2 + uVar17 * 2 + lVar13 * 2) & 0xff00) !=
              ((int)sVar6 & 0xffffff00U)) goto LAB_0113a618;
          lVar13 = lVar13 + 1;
        } while ((uVar18 - 1) - uVar17 != lVar13);
        *pcVar11 = (char)lVar13 + '\x7f';
        pcVar11[1] = (char)((ushort)sVar6 >> 8);
        pcVar11 = pcVar11 + 2;
        lVar10 = lVar10 + -2;
        uVar17 = uVar18;
      }
LAB_0113a618:
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
        if ((int)uVar16 < 4) goto LAB_0113a6ec;
LAB_0113a6c0:
        *pcVar11 = (char)uVar16 + '~';
        lVar10 = lVar10 + -2;
        pcVar11[1] = *(char *)(lVar15 + uVar18 * 2 + 1);
        pcVar11 = pcVar11 + 2;
      }
      else {
        if (3 < (int)uVar16) goto LAB_0113a6c0;
LAB_0113a6ec:
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
                    /* try { // try from 0113a73c to 0123a747 has its CatchHandler @ 0113a9c8 */
          pcVar12 = *(char **)(param_1 + 0x388);
                    /* try { // try from 0113a748 to 0123a95f has its CatchHandler @ 01139f50 */
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
                goto LAB_0113a7b8;
              }
            }
            if (3 < (int)uVar16) goto LAB_0113a7b8;
          } while ((long)uVar3 < lVar7);
          uVar18 = uVar18 + uVar16;
        }
LAB_0113a7b8:
        pcVar11 = pcVar12;
        if ((uVar18 - uVar17 & 0xfffffffffffffffe) == 2) {
          uVar5 = *(ushort *)(lVar15 + uVar17 * 2);
          lVar13 = 0;
          do {
            if (((*(ushort *)(lVar15 + 2 + uVar17 * 2 + lVar13 * 2) ^ uVar5) & 0xff) != 0)
            goto LAB_0113a814;
            lVar13 = lVar13 + 1;
          } while ((uVar18 - 1) - uVar17 != lVar13);
          pcVar12[1] = (char)uVar5;
          pcVar11 = pcVar12 + 2;
          *pcVar12 = (char)lVar13 + '\x7f';
          lVar10 = lVar10 + -2;
          uVar17 = uVar18;
        }
LAB_0113a814:
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
          if ((int)uVar16 < 4) goto LAB_0113a8e8;
LAB_0113a8bc:
          *pcVar11 = (char)uVar16 + '~';
          lVar10 = lVar10 + -2;
          pcVar11[1] = *(char *)(lVar15 + uVar18 * 2);
          pcVar11 = pcVar11 + 2;
        }
        else {
          if (3 < (int)uVar16) goto LAB_0113a8bc;
LAB_0113a8e8:
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

