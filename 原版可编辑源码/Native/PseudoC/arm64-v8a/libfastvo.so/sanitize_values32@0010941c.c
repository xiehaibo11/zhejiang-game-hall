
void sanitize_values32(long param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    uVar4 = (ulong)param_4;
    if (param_4 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar4 & 0xfffffffe;
      piVar7 = (int *)(param_1 + 4);
      uVar8 = uVar6;
      do {
        iVar3 = piVar7[-1];
        iVar1 = *piVar7;
        if ((param_3 < iVar3) && (param_2 <= iVar3)) {
          piVar7[-1] = param_3;
        }
        if (param_3 < iVar1 && param_2 <= iVar1) {
          *piVar7 = param_3;
        }
        if (iVar3 < param_2) {
          piVar7[-1] = param_2;
        }
        if (iVar1 < param_2) {
          *piVar7 = param_2;
        }
        uVar8 = uVar8 - 2;
        piVar7 = piVar7 + 2;
      } while (uVar8 != 0);
      if (uVar6 == uVar4) {
        return;
      }
    }
    piVar7 = (int *)(param_1 + uVar6 * 4);
    lVar5 = uVar4 - uVar6;
    do {
      iVar3 = *piVar7;
      if ((iVar3 < param_2) || (param_3 < iVar3)) {
        iVar1 = param_3;
        if (iVar3 <= param_3) {
          iVar1 = 0;
        }
        iVar2 = param_2;
        if (param_2 <= iVar3) {
          iVar2 = iVar1;
        }
        *piVar7 = iVar2;
      }
      lVar5 = lVar5 + -1;
      piVar7 = piVar7 + 1;
    } while (lVar5 != 0);
  }
  return;
}

