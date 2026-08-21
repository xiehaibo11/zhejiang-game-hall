
void FUN_01643828(int *param_1,int *param_2,undefined8 param_3,ulong param_4,int *param_5,
                 long param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      piVar4 = param_2 + -4;
      if (*piVar4 < *param_1) {
        uVar12 = *(undefined8 *)(param_1 + 2);
        uVar6 = *(undefined8 *)param_1;
        uVar8 = *(undefined8 *)piVar4;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)param_1 = uVar8;
        *(undefined8 *)(param_2 + -2) = uVar12;
        *(undefined8 *)piVar4 = uVar6;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 4 != param_2)) {
        lVar3 = 0;
        piVar4 = param_1;
        piVar7 = param_1 + 4;
        do {
          uVar6 = *(undefined8 *)(piVar4 + 6);
          uVar8 = *(undefined8 *)piVar7;
          piVar4 = param_1;
          lVar9 = lVar3;
          if (piVar7 != param_1) {
            do {
              if (*(int *)((long)param_1 + lVar9) <= (int)uVar8) {
                piVar4 = (int *)((long)param_1 + lVar9 + 0x10);
                break;
              }
              puVar2 = (undefined8 *)((long)param_1 + lVar9);
              lVar9 = lVar9 + -0x10;
              puVar2[3] = puVar2[1];
              puVar2[2] = *puVar2;
            } while (lVar9 != -0x10);
          }
          *(undefined8 *)piVar4 = uVar8;
          *(undefined8 *)(piVar4 + 2) = uVar6;
          piVar1 = piVar7 + 4;
          lVar3 = lVar3 + 0x10;
          piVar4 = piVar7;
          piVar7 = piVar1;
        } while (piVar1 != param_2);
      }
    }
    else {
      uVar11 = param_4 >> 1;
      piVar4 = param_1 + uVar11 * 4;
      if (param_6 < (long)param_4) {
        FUN_01643828();
        FUN_01643828(piVar4,param_2,param_3,param_4 - uVar11,param_5,param_6);
        FUN_01643c84(param_1,piVar4,param_2,param_3,uVar11,param_4 - uVar11,param_5,param_6);
        return;
      }
      FUN_01643a78(param_1,piVar4,param_3,uVar11);
      piVar7 = param_5 + uVar11 * 4;
      FUN_01643a78(piVar4,param_2,param_3,param_4 - uVar11,piVar7);
      piVar4 = piVar7;
      piVar1 = param_5;
      do {
        if (piVar4 == param_5 + param_4 * 4) {
          if (piVar1 == piVar7) {
            return;
          }
          lVar3 = 0;
          do {
            uVar6 = *(undefined8 *)((long)piVar1 + lVar3);
            ((undefined8 *)((long)param_1 + lVar3))[1] = ((undefined8 *)((long)piVar1 + lVar3))[1];
            *(undefined8 *)((long)param_1 + lVar3) = uVar6;
            lVar3 = lVar3 + 0x10;
          } while ((long)param_5 + (uVar11 * 0x10 - (long)piVar1) != lVar3);
          return;
        }
        if (*piVar4 < *piVar1) {
          uVar8 = *(undefined8 *)(piVar4 + 2);
          uVar6 = *(undefined8 *)piVar4;
          piVar4 = piVar4 + 4;
          piVar5 = piVar1;
        }
        else {
          piVar5 = piVar1 + 4;
          uVar8 = *(undefined8 *)(piVar1 + 2);
          uVar6 = *(undefined8 *)piVar1;
        }
        piVar10 = param_1 + 4;
        *(undefined8 *)(param_1 + 2) = uVar8;
        *(undefined8 *)param_1 = uVar6;
        piVar1 = piVar5;
        param_1 = piVar10;
      } while (piVar5 != piVar7);
      if (piVar4 != param_5 + param_4 * 4) {
        lVar3 = 0;
        do {
          uVar6 = *(undefined8 *)((long)piVar4 + lVar3);
          puVar2 = (undefined8 *)((long)piVar10 + lVar3);
          puVar2[1] = ((undefined8 *)((long)piVar4 + lVar3))[1];
          *puVar2 = uVar6;
          lVar3 = lVar3 + 0x10;
        } while ((long)param_5 + (param_4 * 0x10 - (long)piVar4) != lVar3);
      }
    }
  }
  return;
}

