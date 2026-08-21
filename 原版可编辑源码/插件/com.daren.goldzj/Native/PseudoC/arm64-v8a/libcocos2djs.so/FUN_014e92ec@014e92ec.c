
bool FUN_014e92ec(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar8 = *param_1;
    bVar4 = param_2[-2] < iVar8;
    if (param_1[1] != param_2[-1]) {
      bVar4 = (uint)param_1[1] < (uint)param_2[-1];
    }
    if (bVar4) {
      *param_1 = param_2[-2];
      param_2[-2] = iVar8;
      iVar8 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = iVar8;
      return true;
    }
    break;
  case 3:
    FUN_014e8f7c(param_1,param_1 + 2,param_2 + -2);
    return true;
  case 4:
    FUN_014e90a4(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_014e91a0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    return true;
  default:
    FUN_014e8f7c(param_1,param_1 + 2,param_1 + 4);
    if (param_1 + 6 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      piVar9 = param_1 + 6;
      piVar11 = param_1 + 4;
      do {
        piVar6 = piVar9;
        iVar1 = *piVar6;
        uVar2 = piVar6[1];
        bVar4 = iVar1 < *piVar11;
        if (piVar11[1] != uVar2) {
          bVar4 = (uint)piVar11[1] < uVar2;
        }
        lVar5 = lVar7;
        if (bVar4) {
          do {
            lVar10 = lVar5;
            *(undefined4 *)((long)param_1 + lVar10 + 0x18) =
                 *(undefined4 *)((long)param_1 + lVar10 + 0x10);
            *(undefined4 *)((long)param_1 + lVar10 + 0x1c) =
                 *(undefined4 *)((long)param_1 + lVar10 + 0x14);
            piVar9 = param_1;
            if (lVar10 == -0x10) goto LAB_014e93a4;
            uVar3 = *(uint *)((long)param_1 + lVar10 + 0xc);
            bVar4 = iVar1 < *(int *)((long)param_1 + lVar10 + 8);
            if (uVar3 != uVar2) {
              bVar4 = uVar3 < uVar2;
            }
            lVar5 = lVar10 + -8;
          } while (bVar4);
          piVar9 = (int *)((long)param_1 + lVar10 + 0x10);
LAB_014e93a4:
          iVar8 = iVar8 + 1;
          *piVar9 = iVar1;
          piVar9[1] = uVar2;
          if (iVar8 == 8) {
            return piVar6 + 2 == param_2;
          }
        }
        lVar7 = lVar7 + 8;
        piVar9 = piVar6 + 2;
        piVar11 = piVar6;
      } while (piVar6 + 2 != param_2);
    }
  }
  return true;
}

