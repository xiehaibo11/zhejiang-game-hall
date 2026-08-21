
void FUN_00e6a1a8(uint param_1,long param_2,long param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  
  if (param_4 != 0) {
    iVar3 = -param_6;
    lVar7 = (long)param_5;
    uVar4 = 0x80;
    uVar1 = 0x100;
    if (param_6 != 2) {
      uVar1 = 0x80;
      uVar4 = 0x100;
    }
    do {
      uVar8 = *(uint *)(param_3 + 0x1c);
      if ((uVar8 >> 4 & 1) == 0) {
        cVar2 = *(char *)(param_3 + 0x20);
        iVar11 = (int)cVar2;
        lVar9 = *(long *)(param_3 + 0x30);
        if ((cVar2 == param_6) || (cVar2 == iVar3)) {
LAB_00e6a208:
          if (iVar11 != 0) {
            if (iVar11 == param_6) {
              if (param_1 != 0) {
                uVar12 = 0;
                do {
                  piVar5 = *(int **)(param_2 + (ulong)uVar12 * 8);
                  if ((lVar9 - *piVar5 < lVar7) && (-(lVar9 - *piVar5) < lVar7)) {
                    uVar8 = uVar8 | 0x210;
                    goto LAB_00e6a324;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < param_1);
              }
            }
            else if ((iVar11 == iVar3) && (param_1 != 0)) {
              uVar12 = 0;
LAB_00e6a2a0:
              piVar5 = *(int **)(param_2 + (ulong)uVar12 * 8);
              lVar6 = (lVar9 - *piVar5) - (long)piVar5[1];
              if ((lVar7 <= lVar6) || (lVar7 <= -lVar6)) goto LAB_00e6a2c4;
              uVar8 = uVar8 | 0x410;
LAB_00e6a324:
              *(uint *)(param_3 + 0x1c) = uVar8;
              *(int **)(param_3 + 0x28) = piVar5;
            }
            goto joined_r0x00e6a3ac;
          }
        }
        else {
          cVar2 = *(char *)(param_3 + 0x21);
          iVar11 = (int)cVar2;
          if ((cVar2 == param_6) || (cVar2 == iVar3)) goto LAB_00e6a208;
        }
        if ((uVar8 >> 6 & 1) != 0) {
          if ((uVar8 & uVar4) == 0) {
            if (((uVar8 & uVar1) != 0) && (param_1 != 0)) {
              uVar12 = 0;
LAB_00e6a2e4:
              piVar5 = *(int **)(param_2 + (ulong)uVar12 * 8);
              lVar6 = (lVar9 - *piVar5) - (long)piVar5[1];
              if ((lVar7 <= lVar6) || (lVar7 <= -lVar6)) goto LAB_00e6a308;
              uVar8 = uVar8 | 0x410;
              *(int **)(param_3 + 0x28) = piVar5;
LAB_00e6a350:
              *(uint *)(param_3 + 0x1c) = uVar8;
            }
          }
          else {
            if (param_1 == 0) goto joined_r0x00e6a3ac;
            uVar12 = 0;
            do {
              piVar5 = *(int **)(param_2 + (ulong)uVar12 * 8);
              lVar6 = lVar9 - *piVar5;
              if ((lVar6 < lVar7) && (-lVar6 < lVar7)) {
                *(int **)(param_3 + 0x28) = piVar5;
                uVar8 = uVar8 | 0x210;
                goto LAB_00e6a350;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < param_1);
          }
LAB_00e6a354:
          if ((*(long *)(param_3 + 0x28) == 0) && (param_1 != 0)) {
            uVar10 = 0;
            do {
              piVar5 = *(int **)(param_2 + uVar10 * 8);
              if ((*piVar5 <= lVar9) && (lVar9 <= piVar5[1] + *piVar5)) {
                *(int **)(param_3 + 0x28) = piVar5;
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < param_1);
          }
        }
      }
joined_r0x00e6a3ac:
      param_3 = param_3 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
LAB_00e6a2c4:
  uVar12 = uVar12 + 1;
  if (param_1 <= uVar12) goto joined_r0x00e6a3ac;
  goto LAB_00e6a2a0;
LAB_00e6a308:
  uVar12 = uVar12 + 1;
  if (param_1 <= uVar12) goto LAB_00e6a354;
  goto LAB_00e6a2e4;
}

