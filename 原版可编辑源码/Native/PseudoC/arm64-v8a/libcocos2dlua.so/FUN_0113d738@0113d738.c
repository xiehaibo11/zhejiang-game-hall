
void FUN_0113d738(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  lVar9 = param_3 + 3;
  if (-1 < param_3) {
    lVar9 = param_3;
  }
  lVar9 = lVar9 >> 2;
  lVar11 = lVar9 - lVar10;
  if (lVar11 != 0 && lVar10 <= lVar9) {
    TIFFSwabArrayOfLong(param_2,lVar9);
    if (lVar10 == 3) {
      iVar3 = *param_2;
      piVar6 = param_2 + 5;
      do {
        lVar9 = lVar9 + -3;
        iVar3 = piVar6[-2] + iVar3;
        piVar6[-2] = iVar3;
        piVar6[-1] = piVar6[-1] + piVar6[-4];
        *piVar6 = *piVar6 + piVar6[-3];
        piVar6 = piVar6 + 3;
      } while (3 < lVar9);
    }
    else if (lVar10 == 4) {
      iVar3 = *param_2;
      do {
        piVar6 = param_2 + 4;
        iVar3 = *piVar6 + iVar3;
        lVar9 = lVar9 + -4;
        *piVar6 = iVar3;
        param_2[5] = param_2[5] + param_2[1];
        param_2[6] = param_2[6] + param_2[2];
        param_2[7] = param_2[7] + param_2[3];
        param_2 = piVar6;
      } while (4 < lVar9);
    }
    else {
      uVar4 = lVar10 - 4;
      uVar5 = uVar4 & 0xfffffffffffffff8;
      do {
        if (lVar10 != 0) {
          if (lVar10 != 1) {
            if (lVar10 != 2) {
              if (4 < lVar10) {
                piVar6 = param_2;
                uVar7 = uVar4;
                if ((uVar4 < 8) || (uVar5 == 0)) {
LAB_0113d890:
                  lVar9 = uVar7 + 1;
                  do {
                    lVar9 = lVar9 + -1;
                    piVar6[lVar10] = piVar6[lVar10] + *piVar6;
                    piVar6 = piVar6 + 1;
                  } while (1 < lVar9);
                }
                else {
                  piVar6 = param_2 + uVar5;
                  uVar7 = uVar5;
                  piVar8 = param_2;
                  do {
                    piVar1 = piVar8 + lVar10;
                    piVar2 = piVar8 + 2;
                    uVar12 = *(undefined8 *)piVar8;
                    uVar14 = *(undefined8 *)(piVar8 + 6);
                    uVar13 = *(undefined8 *)(piVar8 + 4);
                    uVar7 = uVar7 - 8;
                    piVar8 = piVar8 + 8;
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
                  } while (uVar7 != 0);
                  uVar7 = uVar4 - uVar5;
                  if (uVar4 != uVar5) goto LAB_0113d890;
                }
                param_2 = param_2 + uVar4;
              }
              param_2[lVar10] = param_2[lVar10] + *param_2;
              piVar6 = param_2 + 1;
              piVar6[lVar10] = piVar6[lVar10] + *piVar6;
              param_2 = param_2 + 2;
            }
            param_2[lVar10] = param_2[lVar10] + *param_2;
            param_2 = param_2 + 1;
          }
          param_2[lVar10] = param_2[lVar10] + *param_2;
          param_2 = param_2 + 1;
        }
        lVar11 = lVar11 - lVar10;
      } while (0 < lVar11);
    }
  }
  return;
}

