
bool FUN_0125c874(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    uVar1 = *param_1;
    if (*(ulong *)(*param_3 + (ulong)param_2[-1] * 8) < *(ulong *)(*param_3 + (ulong)uVar1 * 8)) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar1;
      return true;
    }
    break;
  case 3:
    uVar1 = *param_1;
    uVar2 = param_1[1];
    lVar12 = *param_3;
    uVar3 = param_2[-1];
    uVar5 = *(ulong *)(lVar12 + (ulong)uVar2 * 8);
    uVar11 = *(ulong *)(lVar12 + (ulong)uVar3 * 8);
    if (uVar5 < *(ulong *)(lVar12 + (ulong)uVar1 * 8)) {
      if (uVar11 < uVar5) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar2;
        param_1[1] = uVar1;
        if (*(ulong *)(*param_3 + (ulong)uVar1 * 8) <= *(ulong *)(*param_3 + (ulong)param_2[-1] * 8)
           ) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = uVar1;
      return true;
    }
    if (uVar5 <= uVar11) {
      return true;
    }
    param_1[1] = uVar3;
    param_2[-1] = uVar2;
    uVar1 = *param_1;
    uVar5 = (ulong)param_1[1];
    lVar12 = *param_3;
    goto LAB_0125ca18;
  case 4:
    FUN_0125c71c(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    return true;
  case 5:
    puVar9 = param_1 + 2;
    puVar6 = param_1 + 3;
    FUN_0125c71c(param_1,param_1 + 1,puVar9,puVar6,param_3);
    uVar1 = param_1[3];
    if (*(ulong *)(*param_3 + (ulong)uVar1 * 8) <= *(ulong *)(*param_3 + (ulong)param_2[-1] * 8)) {
      return true;
    }
    *puVar6 = param_2[-1];
    param_2[-1] = uVar1;
    uVar1 = *puVar6;
    uVar5 = (ulong)uVar1;
    uVar2 = *puVar9;
    if (*(ulong *)(*param_3 + (ulong)uVar2 * 8) <= *(ulong *)(*param_3 + uVar5 * 8)) {
      return true;
    }
    *puVar9 = uVar1;
    *puVar6 = uVar2;
    uVar2 = param_1[1];
    if (*(ulong *)(*param_3 + (ulong)uVar2 * 8) <= *(ulong *)(*param_3 + uVar5 * 8)) {
      return true;
    }
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    lVar12 = *param_3;
    uVar1 = *param_1;
LAB_0125ca18:
    if (*(ulong *)(lVar12 + uVar5 * 8) < *(ulong *)(lVar12 + (ulong)uVar1 * 8)) {
      *param_1 = (uint)uVar5;
      param_1[1] = uVar1;
      return true;
    }
    break;
  default:
    uVar1 = *param_1;
    uVar5 = (ulong)uVar1;
    uVar2 = param_1[1];
    uVar11 = (ulong)uVar2;
    lVar12 = *param_3;
    uVar3 = param_1[2];
    uVar8 = (ulong)uVar3;
    uVar10 = *(ulong *)(lVar12 + uVar11 * 8);
    uVar13 = *(ulong *)(lVar12 + uVar8 * 8);
    if (uVar10 < *(ulong *)(lVar12 + uVar5 * 8)) {
      if (uVar13 < uVar10) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar2;
        param_1[1] = uVar1;
        if (*(ulong *)(*param_3 + uVar5 * 8) <= *(ulong *)(*param_3 + uVar8 * 8)) goto LAB_0125cab4;
        param_1[1] = uVar3;
      }
      param_1[2] = uVar1;
      uVar8 = uVar5;
    }
    else if (uVar13 < uVar10) {
      param_1[1] = uVar3;
      param_1[2] = uVar2;
      lVar12 = uVar8 * 8;
      uVar8 = uVar11;
      if (*(ulong *)(*param_3 + lVar12) < *(ulong *)(*param_3 + uVar5 * 8)) {
        *param_1 = uVar3;
        param_1[1] = uVar1;
      }
    }
LAB_0125cab4:
    if (param_1 + 3 != param_2) {
      iVar7 = 0;
      lVar12 = 0xc;
      puVar9 = param_1 + 3;
      do {
        uVar1 = *puVar9;
        lVar14 = lVar12;
        if (*(ulong *)(*param_3 + (ulong)uVar1 * 8) < *(ulong *)(*param_3 + uVar8 * 8)) {
          do {
            lVar4 = lVar14 + -4;
            *(int *)((long)param_1 + lVar14) = (int)uVar8;
            puVar6 = param_1;
            if (lVar4 == 0) goto LAB_0125cb1c;
            uVar8 = (ulong)*(uint *)((long)param_1 + lVar14 + -8);
            lVar14 = lVar4;
          } while (*(ulong *)(*param_3 + (ulong)uVar1 * 8) < *(ulong *)(*param_3 + uVar8 * 8));
          puVar6 = (uint *)((long)param_1 + lVar4);
LAB_0125cb1c:
          iVar7 = iVar7 + 1;
          *puVar6 = uVar1;
          if (iVar7 == 8) {
            return puVar9 + 1 == param_2;
          }
        }
        if (puVar9 + 1 == param_2) {
          return true;
        }
        uVar8 = (ulong)*puVar9;
        lVar12 = lVar12 + 4;
        puVar9 = puVar9 + 1;
      } while( true );
    }
  }
  return true;
}

