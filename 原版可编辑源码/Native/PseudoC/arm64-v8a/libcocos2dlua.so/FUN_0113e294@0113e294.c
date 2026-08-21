
void FUN_0113e294(long param_1,long param_2,long param_3)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar7 = param_3 + 3;
  if (-1 < param_3) {
    lVar7 = param_3;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  lVar7 = lVar7 >> 2;
  lVar5 = lVar7 - lVar4;
  if (lVar5 != 0 && lVar4 <= lVar7) {
    uVar2 = lVar4 - 4;
    if (uVar2 == 0) {
      lVar5 = (lVar7 + 4) - lVar4;
      puVar6 = (undefined8 *)(param_2 + lVar7 * 4 + lVar4 * -4);
      do {
        uVar13 = puVar6[-2];
        lVar5 = lVar5 + -4;
        puVar6[1] = CONCAT44((int)((ulong)puVar6[1] >> 0x20) - (int)((ulong)puVar6[-1] >> 0x20),
                             (int)puVar6[1] - (int)puVar6[-1]);
        *puVar6 = CONCAT44((int)((ulong)*puVar6 >> 0x20) - (int)((ulong)uVar13 >> 0x20),
                           (int)*puVar6 - (int)uVar13);
        puVar6 = puVar6 + -2;
      } while (4 < lVar5);
    }
    else {
      lVar7 = lVar5 + -1;
      if (lVar4 == 3) {
        do {
          piVar8 = (int *)(param_2 + lVar7 * 4);
          lVar5 = lVar7 + 1;
          lVar7 = lVar7 + -3;
          piVar8[2] = piVar8[2] - piVar8[-1];
          piVar8[3] = piVar8[3] - *piVar8;
          piVar8[1] = piVar8[1] - piVar8[-2];
        } while (3 < lVar5);
      }
      else {
        uVar9 = uVar2 & 7;
        piVar8 = (int *)(param_2 + lVar7 * 4);
        do {
          if (lVar4 != 0) {
            if (lVar4 != 1) {
              if (lVar4 != 2) {
                if (4 < lVar4) {
                  piVar10 = piVar8;
                  uVar12 = uVar2;
                  if ((uVar2 < 8) || (uVar2 - uVar9 == 0)) {
LAB_0113e3cc:
                    lVar7 = uVar12 + 1;
                    do {
                      lVar7 = lVar7 + -1;
                      piVar10[lVar4] = piVar10[lVar4] - *piVar10;
                      piVar10 = piVar10 + -1;
                    } while (1 < lVar7);
                  }
                  else {
                    piVar10 = piVar8 + (4 - lVar4) + uVar9;
                    piVar11 = piVar8 + -3;
                    lVar7 = uVar2 - uVar9;
                    do {
                      piVar1 = piVar11 + lVar4;
                      piVar3 = piVar11 + -2;
                      uVar15 = *(undefined8 *)(piVar11 + -4);
                      uVar14 = *(undefined8 *)(piVar11 + 2);
                      uVar13 = *(undefined8 *)piVar11;
                      lVar7 = lVar7 + -8;
                      piVar11 = piVar11 + -8;
                      *(ulong *)(piVar1 + -2) =
                           CONCAT44((int)((ulong)*(undefined8 *)(piVar1 + -2) >> 0x20) -
                                    (int)((ulong)*(undefined8 *)piVar3 >> 0x20),
                                    (int)*(undefined8 *)(piVar1 + -2) - (int)*(undefined8 *)piVar3);
                      *(ulong *)(piVar1 + -4) =
                           CONCAT44((int)((ulong)*(undefined8 *)(piVar1 + -4) >> 0x20) -
                                    (int)((ulong)uVar15 >> 0x20),
                                    (int)*(undefined8 *)(piVar1 + -4) - (int)uVar15);
                      *(ulong *)(piVar1 + 2) =
                           CONCAT44((int)((ulong)*(undefined8 *)(piVar1 + 2) >> 0x20) -
                                    (int)((ulong)uVar14 >> 0x20),
                                    (int)*(undefined8 *)(piVar1 + 2) - (int)uVar14);
                      *(ulong *)piVar1 =
                           CONCAT44((int)((ulong)*(undefined8 *)piVar1 >> 0x20) -
                                    (int)((ulong)uVar13 >> 0x20),
                                    (int)*(undefined8 *)piVar1 - (int)uVar13);
                    } while (lVar7 != 0);
                    uVar12 = uVar9;
                    if (uVar9 != 0) goto LAB_0113e3cc;
                  }
                  piVar8 = piVar8 + (4 - lVar4);
                }
                piVar8[lVar4] = piVar8[lVar4] - *piVar8;
                piVar10 = piVar8 + -1;
                piVar10[lVar4] = piVar10[lVar4] - *piVar10;
                piVar8 = piVar8 + -2;
              }
              piVar8[lVar4] = piVar8[lVar4] - *piVar8;
              piVar8 = piVar8 + -1;
            }
            piVar8[lVar4] = piVar8[lVar4] - *piVar8;
            piVar8 = piVar8 + -1;
          }
          lVar5 = lVar5 - lVar4;
        } while (0 < lVar5);
      }
    }
  }
  return;
}

