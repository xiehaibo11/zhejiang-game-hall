
void FUN_01643c84(int *param_1,int *param_2,int *param_3,undefined8 param_4,long param_5,
                 long param_6,int *param_7,long param_8)

{
  size_t sVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  while( true ) {
    if (param_6 == 0) {
      return;
    }
    if ((param_6 <= param_8) || (param_5 <= param_8)) break;
    if (param_5 == 0) {
      return;
    }
    lVar18 = -param_5;
    while (*param_1 <= *param_2) {
      bVar3 = lVar18 == -1;
      lVar18 = lVar18 + 1;
      param_1 = param_1 + 4;
      if (bVar3) {
        return;
      }
    }
    param_5 = -lVar18;
    if (param_5 < param_6) {
      lVar17 = param_6;
      if (param_6 < 0) {
        lVar17 = param_6 + 1;
      }
      lVar17 = lVar17 >> 1;
      piVar19 = param_2 + lVar17 * 4;
      piVar13 = param_1;
      if ((long)param_2 - (long)param_1 != 0) {
        uVar6 = (long)param_2 - (long)param_1 >> 4;
        do {
          uVar10 = uVar6 >> 1;
          uVar11 = uVar6 + ~uVar10;
          uVar6 = uVar10;
          if (piVar13[uVar10 * 4] <= *piVar19) {
            piVar13 = piVar13 + uVar10 * 4 + 4;
            uVar6 = uVar11;
          }
        } while (uVar6 != 0);
      }
      param_5 = (long)piVar13 - (long)param_1 >> 4;
    }
    else {
      if (lVar18 == -1) {
        uVar22 = *(undefined8 *)(param_1 + 2);
        uVar20 = *(undefined8 *)param_1;
        uVar21 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar21;
        *(undefined8 *)(param_2 + 2) = uVar22;
        *(undefined8 *)param_2 = uVar20;
        return;
      }
      if (param_5 < 0) {
        param_5 = param_5 + 1;
      }
      param_5 = param_5 >> 1;
      piVar13 = param_1 + param_5 * 4;
      piVar19 = param_2;
      if ((long)param_3 - (long)param_2 != 0) {
        uVar6 = (long)param_3 - (long)param_2 >> 4;
        piVar12 = param_2;
        do {
          uVar11 = uVar6 >> 1;
          piVar19 = piVar12 + uVar11 * 4 + 4;
          uVar6 = uVar6 + ~uVar11;
          if (*piVar13 <= piVar12[uVar11 * 4]) {
            piVar19 = piVar12;
            uVar6 = uVar11;
          }
          piVar12 = piVar19;
        } while (uVar6 != 0);
      }
      lVar17 = (long)piVar19 - (long)param_2 >> 4;
    }
    piVar12 = piVar19;
    if ((piVar13 != param_2) && (piVar12 = piVar13, param_2 != piVar19)) {
      if (piVar13 + 4 == param_2) {
        uVar21 = *(undefined8 *)(piVar13 + 2);
        uVar20 = *(undefined8 *)piVar13;
        sVar1 = (long)piVar19 - (long)param_2;
        if (sVar1 != 0) {
          memmove(piVar13,param_2,sVar1);
        }
        piVar12 = piVar13 + ((long)sVar1 >> 4) * 4;
        *(undefined8 *)(piVar12 + 2) = uVar21;
        *(undefined8 *)piVar12 = uVar20;
      }
      else if (param_2 + 4 == piVar19) {
        uVar21 = *(undefined8 *)(piVar19 + -2);
        uVar20 = *(undefined8 *)(piVar19 + -4);
        sVar1 = (long)piVar19 + (-0x10 - (long)piVar13);
        piVar12 = piVar19;
        if (sVar1 != 0) {
          memmove((int *)((long)piVar19 - sVar1),piVar13,sVar1);
          piVar12 = (int *)((long)piVar19 - sVar1);
        }
        *(undefined8 *)(piVar13 + 2) = uVar21;
        *(undefined8 *)piVar13 = uVar20;
      }
      else {
        lVar7 = (long)param_2 - (long)piVar13 >> 4;
        lVar4 = (long)piVar19 - (long)param_2 >> 4;
        piVar5 = param_2;
        piVar8 = piVar13;
        lVar16 = lVar7;
        lVar15 = lVar4;
        if (lVar7 == lVar4) {
          do {
            uVar22 = *(undefined8 *)(piVar8 + 2);
            uVar20 = *(undefined8 *)piVar8;
            uVar21 = *(undefined8 *)piVar5;
            piVar9 = piVar8 + 4;
            *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar5 + 2);
            *(undefined8 *)piVar8 = uVar21;
            *(undefined8 *)(piVar5 + 2) = uVar22;
            *(undefined8 *)piVar5 = uVar20;
            piVar5 = piVar5 + 4;
            piVar8 = piVar9;
            piVar12 = param_2;
          } while (param_2 != piVar9);
        }
        else {
          do {
            lVar14 = lVar15;
            lVar15 = 0;
            if (lVar14 != 0) {
              lVar15 = lVar16 / lVar14;
            }
            lVar15 = lVar16 - lVar15 * lVar14;
            lVar16 = lVar14;
          } while (lVar15 != 0);
          if (lVar14 != 0) {
            piVar12 = piVar13 + lVar14 * 4;
            do {
              uVar21 = *(undefined8 *)(piVar12 + -2);
              uVar20 = *(undefined8 *)(piVar12 + -4);
              piVar12 = piVar12 + -4;
              piVar8 = piVar12;
              piVar5 = piVar12 + lVar7 * 4;
              do {
                piVar9 = piVar5;
                uVar22 = *(undefined8 *)piVar9;
                lVar16 = (long)piVar19 - (long)piVar9 >> 4;
                piVar5 = piVar9 + lVar7 * 4;
                if (lVar16 <= lVar7) {
                  piVar5 = piVar13 + (lVar7 - lVar16) * 4;
                }
                *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar9 + 2);
                *(undefined8 *)piVar8 = uVar22;
                piVar8 = piVar9;
              } while (piVar5 != piVar12);
              *(undefined8 *)(piVar9 + 2) = uVar21;
              *(undefined8 *)piVar9 = uVar20;
            } while (piVar12 != piVar13);
          }
          piVar12 = piVar13 + lVar4 * 4;
        }
      }
    }
    if (param_5 + lVar17 < (param_6 - (param_5 + lVar17)) - lVar18) {
      FUN_01643c84(param_1,piVar13,piVar12,param_4,param_5,lVar17,param_7,param_8);
      param_6 = param_6 - lVar17;
      param_5 = -(param_5 + lVar18);
      param_2 = piVar19;
      param_1 = piVar12;
    }
    else {
      FUN_01643c84(piVar12,piVar19,param_3,param_4,-(param_5 + lVar18),param_6 - lVar17,param_7,
                   param_8);
      param_6 = lVar17;
      param_3 = piVar12;
      param_2 = piVar13;
    }
  }
  if (param_6 < param_5) {
    if (param_3 == param_2) {
      return;
    }
    lVar18 = 0;
    do {
      uVar20 = *(undefined8 *)((long)param_2 + lVar18);
      ((undefined8 *)((long)param_7 + lVar18))[1] = ((undefined8 *)((long)param_2 + lVar18))[1];
      *(undefined8 *)((long)param_7 + lVar18) = uVar20;
      lVar18 = lVar18 + 0x10;
    } while ((long)param_3 - (long)param_2 != lVar18);
    if (lVar18 != 0) {
      piVar19 = (int *)((long)param_7 + lVar18);
      do {
        param_3 = param_3 + -4;
        if (param_2 == param_1) {
          lVar18 = 0;
          do {
            puVar2 = (undefined8 *)((long)piVar19 + lVar18 + -0x10);
            uVar20 = *puVar2;
            ((undefined8 *)((long)param_3 + lVar18))[1] = puVar2[1];
            *(undefined8 *)((long)param_3 + lVar18) = uVar20;
            lVar18 = lVar18 + -0x10;
          } while ((long)param_7 - (long)piVar19 != lVar18);
          return;
        }
        piVar12 = param_2 + -4;
        piVar13 = piVar19 + -4;
        if (*piVar13 < *piVar12) {
          uVar21 = *(undefined8 *)(param_2 + -2);
          uVar20 = *(undefined8 *)piVar12;
          piVar13 = piVar19;
          param_2 = piVar12;
        }
        else {
          uVar21 = *(undefined8 *)(piVar19 + -2);
          uVar20 = *(undefined8 *)piVar13;
        }
        *(undefined8 *)(param_3 + 2) = uVar21;
        *(undefined8 *)param_3 = uVar20;
        piVar19 = piVar13;
      } while (piVar13 != param_7);
    }
  }
  else {
    if (param_1 == param_2) {
      return;
    }
    lVar18 = 0;
    do {
      uVar20 = *(undefined8 *)((long)param_1 + lVar18);
      ((undefined8 *)((long)param_7 + lVar18))[1] = ((undefined8 *)((long)param_1 + lVar18))[1];
      *(undefined8 *)((long)param_7 + lVar18) = uVar20;
      lVar18 = lVar18 + 0x10;
    } while ((long)param_2 - (long)param_1 != lVar18);
    if (lVar18 != 0) {
      piVar19 = param_7;
      do {
        if (param_2 == param_3) {
          sVar1 = (long)param_7 + (lVar18 - (long)piVar19);
          if (sVar1 == 0) {
            return;
          }
          memmove(param_1,piVar19,sVar1);
          return;
        }
        if (*param_2 < *piVar19) {
          uVar21 = *(undefined8 *)(param_2 + 2);
          uVar20 = *(undefined8 *)param_2;
          piVar13 = piVar19;
          param_2 = param_2 + 4;
        }
        else {
          piVar13 = piVar19 + 4;
          uVar21 = *(undefined8 *)(piVar19 + 2);
          uVar20 = *(undefined8 *)piVar19;
        }
        *(undefined8 *)(param_1 + 2) = uVar21;
        *(undefined8 *)param_1 = uVar20;
        param_1 = param_1 + 4;
        piVar19 = piVar13;
      } while ((long)piVar13 - (long)param_7 != lVar18);
    }
  }
  return;
}

