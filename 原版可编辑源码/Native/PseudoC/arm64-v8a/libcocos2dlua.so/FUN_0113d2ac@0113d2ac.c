
void FUN_0113d2ac(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar7 = param_3 + 3;
  if (-1 < param_3) {
    lVar7 = param_3;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  lVar7 = lVar7 >> 2;
  lVar6 = lVar7 - lVar4;
  if (lVar6 != 0 && lVar4 <= lVar7) {
    if (lVar4 == 3) {
      iVar5 = *param_2;
      piVar3 = param_2 + 5;
      do {
        lVar7 = lVar7 + -3;
        iVar5 = piVar3[-2] + iVar5;
        piVar3[-2] = iVar5;
        piVar3[-1] = piVar3[-1] + piVar3[-4];
        *piVar3 = *piVar3 + piVar3[-3];
        piVar3 = piVar3 + 3;
      } while (3 < lVar7);
    }
    else if (lVar4 == 4) {
      iVar5 = *param_2;
      do {
        piVar3 = param_2 + 4;
        iVar5 = *piVar3 + iVar5;
        lVar7 = lVar7 + -4;
                    /* try { // try from 0113d30c to 0123d317 has its CatchHandler @ 0113d3f8 */
        *piVar3 = iVar5;
        param_2[5] = param_2[5] + param_2[1];
        param_2[6] = param_2[6] + param_2[2];
        param_2[7] = param_2[7] + param_2[3];
                    /* try { // try from 0113d318 to 0123d40f has its CatchHandler @ 0113d278 */
        param_2 = piVar3;
      } while (4 < lVar7);
    }
    else {
      uVar8 = lVar4 - 4;
      uVar9 = uVar8 & 0xfffffffffffffff8;
      do {
        if (lVar4 != 0) {
          if (lVar4 != 1) {
            if (lVar4 != 2) {
              if (4 < lVar4) {
                piVar3 = param_2;
                uVar10 = uVar8;
                if ((uVar8 < 8) || (uVar9 == 0)) {
LAB_0113d3e4:
                  lVar7 = uVar10 + 1;
                  do {
                    lVar7 = lVar7 + -1;
                    /* catch() { ... } // from try @ 0113d30c with catch @ 0113d3f8 */
                    piVar3[lVar4] = piVar3[lVar4] + *piVar3;
                    piVar3 = piVar3 + 1;
                  } while (1 < lVar7);
                }
                else {
                  piVar3 = param_2 + uVar9;
                  uVar10 = uVar9;
                  piVar11 = param_2;
                  do {
                    piVar1 = piVar11 + lVar4;
                    piVar2 = piVar11 + 2;
                    uVar12 = *(undefined8 *)piVar11;
                    uVar14 = *(undefined8 *)(piVar11 + 6);
                    uVar13 = *(undefined8 *)(piVar11 + 4);
                    uVar10 = uVar10 - 8;
                    piVar11 = piVar11 + 8;
                    *(ulong *)(piVar1 + 2) =
                         CONCAT44((int)((ulong)*(undefined8 *)(piVar1 + 2) >> 0x20) +
                                  (int)((ulong)*(undefined8 *)piVar2 >> 0x20),
                                  (int)*(undefined8 *)(piVar1 + 2) + (int)*(undefined8 *)piVar2);
                    *(ulong *)piVar1 =
                         CONCAT44((int)((ulong)*(undefined8 *)piVar1 >> 0x20) +
                                  (int)((ulong)uVar12 >> 0x20),
                                  (int)*(undefined8 *)piVar1 + (int)uVar12);
                    *(ulong *)(piVar1 + 6) =
                         CONCAT44((int)((ulong)*(undefined8 *)(piVar1 + 6) >> 0x20) +
                                  (int)((ulong)uVar14 >> 0x20),
                                  (int)*(undefined8 *)(piVar1 + 6) + (int)uVar14);
                    *(ulong *)(piVar1 + 4) =
                         CONCAT44((int)((ulong)*(undefined8 *)(piVar1 + 4) >> 0x20) +
                                  (int)((ulong)uVar13 >> 0x20),
                                  (int)*(undefined8 *)(piVar1 + 4) + (int)uVar13);
                  } while (uVar10 != 0);
                  uVar10 = uVar8 - uVar9;
                  if (uVar8 != uVar9) goto LAB_0113d3e4;
                }
                param_2 = param_2 + uVar8;
              }
                    /* catch() { ... } // from try @ 0113d44c with catch @ 0113d410
                       catch() { ... } // from try @ 0113d498 with catch @ 0113d410 */
              param_2[lVar4] = param_2[lVar4] + *param_2;
              piVar3 = param_2 + 1;
              piVar3[lVar4] = piVar3[lVar4] + *piVar3;
              param_2 = param_2 + 2;
            }
            param_2[lVar4] = param_2[lVar4] + *param_2;
            param_2 = param_2 + 1;
          }
                    /* try { // try from 0113d448 to 0123d44b has its CatchHandler @ 0113d498 */
                    /* try { // try from 0113d44c to 0123d48f has its CatchHandler @ 0113d410 */
          param_2[lVar4] = param_2[lVar4] + *param_2;
          param_2 = param_2 + 1;
        }
        lVar6 = lVar6 - lVar4;
      } while (0 < lVar6);
    }
  }
  return;
}

