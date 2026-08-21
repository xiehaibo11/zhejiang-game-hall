
/* WARNING: Type propagation algorithm not settling */

bool FUN_0108399c(uint *param_1,uint *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  double dVar13;
  double dVar14;
  
  iVar5 = (int)param_2 - (int)param_1;
  iVar7 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar7 = iVar5;
  }
  switch(iVar7 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    lVar6 = *param_3;
    uVar1 = lVar6 + (ulong)param_2[-1];
    uVar2 = lVar6 + (ulong)*param_1;
    iVar5 = (int)uVar1;
    iVar7 = (int)uVar2;
    if (((uVar1 & 1) == 0) || (iVar5 != *(int *)(lVar6 + 0xa0))) {
      if (((uVar2 & 1) == 0) || (iVar7 != *(int *)(lVar6 + 0xa0))) {
        if ((uVar1 & 1) == 0) {
          dVar13 = (double)(iVar5 >> 1);
        }
        else {
          dVar13 = *(double *)(uVar1 + 3);
        }
        if ((uVar2 & 1) == 0) {
          dVar14 = (double)(iVar7 >> 1);
        }
        else {
          dVar14 = *(double *)(uVar2 + 3);
        }
        if (dVar14 <= dVar13) {
          return true;
        }
      }
    }
    else {
      if ((uVar2 & 1) == 0) {
        return true;
      }
      if (iVar7 != iVar5) {
        return true;
      }
    }
    uVar3 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar3;
    break;
  case 3:
    FUN_01083270(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_01083548(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_0108372c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_01083270(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      puVar11 = param_1 + 3;
      puVar12 = param_1 + 2;
      do {
        puVar4 = puVar11;
        lVar9 = *param_3;
        uVar1 = lVar9 + (ulong)*puVar4;
        uVar2 = lVar9 + (ulong)*puVar12;
        iVar8 = (int)uVar1;
        iVar5 = (int)uVar2;
        if (((uVar1 & 1) == 0) || (iVar8 != *(int *)(lVar9 + 0xa0))) {
          if (((uVar2 & 1) == 0) || (iVar5 != *(int *)(lVar9 + 0xa0))) {
            if ((uVar1 & 1) == 0) {
              dVar13 = (double)(iVar8 >> 1);
            }
            else {
              dVar13 = *(double *)(uVar1 + 3);
            }
            if ((uVar2 & 1) == 0) {
              dVar14 = (double)(iVar5 >> 1);
            }
            else {
              dVar14 = *(double *)(uVar2 + 3);
            }
            if (dVar14 <= dVar13) goto LAB_01083a6c;
          }
LAB_01083afc:
          uVar3 = *puVar4;
          *puVar4 = *puVar12;
          lVar9 = lVar6;
          puVar11 = puVar12;
          if (puVar12 != param_1) {
            do {
              lVar10 = *param_3;
              uVar1 = lVar10 + (ulong)uVar3;
              uVar2 = lVar10 + (ulong)*(uint *)((long)param_1 + lVar9 + 4);
              iVar8 = (int)uVar1;
              iVar5 = (int)uVar2;
              puVar11 = puVar12;
              if (((uVar1 & 1) == 0) || (iVar8 != *(int *)(lVar10 + 0xa0))) {
                if (((uVar2 & 1) == 0) || (iVar5 != *(int *)(lVar10 + 0xa0))) {
                  if ((uVar1 & 1) == 0) {
                    dVar13 = (double)(iVar8 >> 1);
                  }
                  else {
                    dVar13 = *(double *)(uVar1 + 3);
                  }
                  if ((uVar2 & 1) == 0) {
                    dVar14 = (double)(iVar5 >> 1);
                  }
                  else {
                    dVar14 = *(double *)(uVar2 + 3);
                  }
                  if (dVar14 <= dVar13) break;
                }
              }
              else if (((uVar2 & 1) == 0) || (iVar5 != iVar8)) break;
              lVar10 = lVar9 + -4;
              puVar12 = (uint *)((long)param_1 + lVar9 + 4);
              *(undefined4 *)((long)param_1 + lVar9 + 8) =
                   *(undefined4 *)((long)param_1 + lVar9 + 4);
              lVar9 = lVar10;
              puVar11 = param_1;
            } while (lVar10 != -8);
          }
          iVar7 = iVar7 + 1;
          *puVar11 = uVar3;
          if (iVar7 == 8) {
            return puVar4 + 1 == param_2;
          }
        }
        else if (((uVar2 & 1) != 0) && (iVar5 == iVar8)) goto LAB_01083afc;
LAB_01083a6c:
        lVar6 = lVar6 + 4;
        puVar11 = puVar4 + 1;
        puVar12 = puVar4;
      } while (puVar4 + 1 != param_2);
    }
  }
  return true;
}

