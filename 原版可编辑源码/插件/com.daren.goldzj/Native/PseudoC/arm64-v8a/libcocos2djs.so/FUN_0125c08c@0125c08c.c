
void FUN_0125c08c(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  
LAB_0125c0b0:
  puVar9 = param_2 + -1;
  puVar13 = param_1;
LAB_0125c0bc:
  param_1 = puVar13;
  lVar10 = (long)param_2 - (long)param_1;
  uVar7 = lVar10 >> 2;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_0125c490_caseD_0;
  case 2:
    uVar1 = *param_1;
    if (*(ulong *)(*param_3 + (ulong)uVar1 * 8) <= *(ulong *)(*param_3 + (ulong)param_2[-1] * 8)) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = uVar1;
    return;
  case 3:
    uVar1 = *param_1;
    uVar2 = param_1[1];
    lVar10 = *param_3;
    uVar3 = param_2[-1];
    uVar7 = *(ulong *)(lVar10 + (ulong)uVar2 * 8);
    uVar15 = *(ulong *)(lVar10 + (ulong)uVar3 * 8);
    if (uVar7 < *(ulong *)(lVar10 + (ulong)uVar1 * 8)) {
      if (uVar15 < uVar7) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar2;
        param_1[1] = uVar1;
        if (*(ulong *)(*param_3 + (ulong)uVar1 * 8) <= *(ulong *)(*param_3 + (ulong)param_2[-1] * 8)
           ) {
          return;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = uVar1;
      return;
    }
    if (uVar7 <= uVar15) {
      return;
    }
    param_1[1] = uVar3;
    param_2[-1] = uVar2;
    uVar7 = (ulong)param_1[1];
    break;
  case 4:
    FUN_0125c71c(param_1,param_1 + 1,param_1 + 2,puVar9,param_3);
    return;
  case 5:
    puVar13 = param_1 + 2;
    puVar9 = param_1 + 3;
    FUN_0125c71c(param_1,param_1 + 1,puVar13,puVar9,param_3);
    uVar1 = param_1[3];
    if (*(ulong *)(*param_3 + (ulong)uVar1 * 8) <= *(ulong *)(*param_3 + (ulong)param_2[-1] * 8)) {
      return;
    }
    *puVar9 = param_2[-1];
    param_2[-1] = uVar1;
    uVar1 = *puVar9;
    uVar7 = (ulong)uVar1;
    uVar2 = *puVar13;
    if (*(ulong *)(*param_3 + (ulong)uVar2 * 8) <= *(ulong *)(*param_3 + uVar7 * 8)) {
      return;
    }
    *puVar13 = uVar1;
    *puVar9 = uVar2;
    uVar2 = param_1[1];
    if (*(ulong *)(*param_3 + (ulong)uVar2 * 8) <= *(ulong *)(*param_3 + uVar7 * 8)) {
      return;
    }
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    break;
  default:
    if (0x7b < lVar10) {
      uVar15 = uVar7;
      if ((long)uVar7 < 0) {
        uVar15 = uVar7 + 1;
      }
      puVar13 = (uint *)((long)param_1 + (uVar15 & 0x7ffffffffffffffe) * 2);
      if (lVar10 < 0xf9d) {
        uVar1 = *puVar13;
        lVar10 = *param_3;
        uVar2 = *param_1;
        uVar3 = *puVar9;
        uVar7 = *(ulong *)(lVar10 + (ulong)uVar1 * 8);
        uVar15 = *(ulong *)(lVar10 + (ulong)uVar3 * 8);
        if (uVar7 < *(ulong *)(lVar10 + (ulong)uVar2 * 8)) {
          if (uVar15 < uVar7) {
            *param_1 = uVar3;
            *puVar9 = uVar2;
            iVar6 = 1;
          }
          else {
            *param_1 = uVar1;
            *puVar13 = uVar2;
            if (*(ulong *)(*param_3 + (ulong)*puVar9 * 8) < *(ulong *)(*param_3 + (ulong)uVar2 * 8))
            {
              *puVar13 = *puVar9;
              *puVar9 = uVar2;
              goto LAB_0125c260;
            }
LAB_0125c270:
            iVar6 = 1;
          }
        }
        else if (uVar15 < uVar7) {
          *puVar13 = uVar3;
          *puVar9 = uVar1;
          uVar1 = *param_1;
          if (*(ulong *)(*param_3 + (ulong)uVar1 * 8) <= *(ulong *)(*param_3 + (ulong)*puVar13 * 8))
          goto LAB_0125c270;
          *param_1 = *puVar13;
          *puVar13 = uVar1;
LAB_0125c260:
          iVar6 = 2;
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        uVar15 = uVar7 + 3;
        if (-1 < (long)uVar7) {
          uVar15 = uVar7;
        }
        puVar8 = (uint *)((long)param_1 + (uVar15 & 0xfffffffffffffffc));
        puVar11 = (uint *)((long)puVar13 + (uVar15 & 0xfffffffffffffffc));
        iVar6 = FUN_0125c71c(param_1,puVar8,puVar13,puVar11,param_3);
        uVar1 = *puVar11;
        if (*(ulong *)(*param_3 + (ulong)*puVar9 * 8) < *(ulong *)(*param_3 + (ulong)uVar1 * 8)) {
          *puVar11 = *puVar9;
          *puVar9 = uVar1;
          uVar1 = *puVar13;
          if (*(ulong *)(*param_3 + (ulong)*puVar11 * 8) < *(ulong *)(*param_3 + (ulong)uVar1 * 8))
          {
            *puVar13 = *puVar11;
            *puVar11 = uVar1;
            uVar1 = *puVar8;
            if (*(ulong *)(*param_3 + (ulong)*puVar13 * 8) < *(ulong *)(*param_3 + (ulong)uVar1 * 8)
               ) {
              *puVar8 = *puVar13;
              *puVar13 = uVar1;
              uVar1 = *param_1;
              if (*(ulong *)(*param_3 + (ulong)*puVar8 * 8) <
                  *(ulong *)(*param_3 + (ulong)uVar1 * 8)) {
                *param_1 = *puVar8;
                *puVar8 = uVar1;
                iVar6 = iVar6 + 4;
              }
              else {
                iVar6 = iVar6 + 3;
              }
            }
            else {
              iVar6 = iVar6 + 2;
            }
          }
          else {
            iVar6 = iVar6 + 1;
          }
        }
      }
      uVar1 = *param_1;
      lVar10 = *param_3;
      uVar7 = *(ulong *)(lVar10 + (ulong)uVar1 * 8);
      uVar15 = *(ulong *)(lVar10 + (ulong)*puVar13 * 8);
      puVar8 = puVar9;
      puVar11 = param_2 + -2;
      if (uVar15 <= uVar7) goto LAB_0125c2ac;
      goto LAB_0125c2d0;
    }
    uVar1 = *param_1;
    uVar7 = (ulong)uVar1;
    uVar2 = param_1[1];
    uVar15 = (ulong)uVar2;
    lVar10 = *param_3;
    uVar3 = param_1[2];
    uVar12 = (ulong)uVar3;
    uVar14 = *(ulong *)(lVar10 + uVar15 * 8);
    uVar16 = *(ulong *)(lVar10 + uVar12 * 8);
    if (uVar14 < *(ulong *)(lVar10 + uVar7 * 8)) {
      if (uVar16 < uVar14) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar2;
        param_1[1] = uVar1;
        if (*(ulong *)(*param_3 + uVar7 * 8) <= *(ulong *)(*param_3 + uVar12 * 8))
        goto LAB_0125c540;
        param_1[1] = uVar3;
      }
      param_1[2] = uVar1;
      uVar12 = uVar7;
    }
    else if (uVar16 < uVar14) {
      param_1[1] = uVar3;
      param_1[2] = uVar2;
      lVar10 = uVar12 * 8;
      uVar12 = uVar15;
      if (*(ulong *)(*param_3 + lVar10) < *(ulong *)(*param_3 + uVar7 * 8)) {
        *param_1 = uVar3;
        param_1[1] = uVar1;
      }
    }
LAB_0125c540:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar10 = 0xc;
    puVar13 = param_1 + 3;
    goto LAB_0125c550;
  }
  uVar1 = *param_1;
  if (*(ulong *)(*param_3 + (ulong)uVar1 * 8) <= *(ulong *)(*param_3 + uVar7 * 8)) {
    return;
  }
  *param_1 = (uint)uVar7;
  param_1[1] = uVar1;
  return;
LAB_0125c550:
  uVar1 = *puVar13;
  lVar17 = lVar10;
  if (*(ulong *)(*param_3 + (ulong)uVar1 * 8) < *(ulong *)(*param_3 + uVar12 * 8)) {
    do {
      lVar4 = lVar17 + -4;
      *(int *)((long)param_1 + lVar17) = (int)uVar12;
      puVar9 = param_1;
      if (lVar4 == 0) goto LAB_0125c5a4;
      uVar12 = (ulong)*(uint *)((long)param_1 + lVar17 + -8);
      lVar17 = lVar4;
    } while (*(ulong *)(*param_3 + (ulong)uVar1 * 8) < *(ulong *)(*param_3 + uVar12 * 8));
    puVar9 = (uint *)((long)param_1 + lVar4);
LAB_0125c5a4:
    *puVar9 = uVar1;
  }
  if (puVar13 + 1 == param_2) {
switchD_0125c490_caseD_0:
    return;
  }
  uVar12 = (ulong)*puVar13;
  lVar10 = lVar10 + 4;
  puVar13 = puVar13 + 1;
  goto LAB_0125c550;
LAB_0125c2ac:
  while (puVar8 = puVar11, param_1 != puVar8) {
    puVar11 = puVar8 + -1;
    if (*(ulong *)(lVar10 + (ulong)*puVar8 * 8) < uVar15) goto code_r0x0125c2c4;
  }
  puVar8 = param_1 + 1;
  if (*(ulong *)(lVar10 + (ulong)*puVar9 * 8) <= uVar7) {
    if (puVar8 == puVar9) {
      return;
    }
    puVar8 = param_1 + 2;
    while (uVar1 = puVar8[-1], *(ulong *)(lVar10 + (ulong)uVar1 * 8) <= uVar7) {
      puVar8 = puVar8 + 1;
      if (param_2 == puVar8) {
        return;
      }
    }
    puVar8[-1] = *puVar9;
    *puVar9 = uVar1;
  }
  puVar11 = puVar9;
  if (puVar8 == puVar9) {
    return;
  }
  while( true ) {
    lVar10 = *param_3;
    uVar7 = *(ulong *)(lVar10 + (ulong)*param_1 * 8);
    do {
      puVar13 = puVar8;
      puVar8 = puVar13 + 1;
      uVar1 = *puVar13;
    } while (*(ulong *)(lVar10 + (ulong)uVar1 * 8) <= uVar7);
    do {
      puVar11 = puVar11 + -1;
    } while (uVar7 < *(ulong *)(lVar10 + (ulong)*puVar11 * 8));
    if (puVar11 <= puVar13) break;
    *puVar13 = *puVar11;
    *puVar11 = uVar1;
  }
  goto LAB_0125c0bc;
code_r0x0125c2c4:
  *param_1 = *puVar8;
  *puVar8 = uVar1;
  iVar6 = iVar6 + 1;
LAB_0125c2d0:
  puVar11 = param_1 + 1;
  puVar5 = puVar13;
  puVar18 = puVar11;
  if (puVar11 < puVar8) {
    while( true ) {
      puVar13 = puVar5;
      lVar10 = *param_3;
      uVar7 = *(ulong *)(lVar10 + (ulong)*puVar13 * 8);
      puVar11 = puVar18 + -1;
      do {
        puVar18 = puVar11;
        puVar11 = puVar18 + 1;
        uVar1 = *puVar11;
      } while (*(ulong *)(lVar10 + (ulong)uVar1 * 8) < uVar7);
      puVar18 = puVar18 + 2;
      do {
        puVar8 = puVar8 + -1;
      } while (uVar7 <= *(ulong *)(lVar10 + (ulong)*puVar8 * 8));
      if (puVar8 < puVar11) break;
      *puVar11 = *puVar8;
      *puVar8 = uVar1;
      iVar6 = iVar6 + 1;
      puVar5 = puVar8;
      if (puVar13 != puVar11) {
        puVar5 = puVar13;
      }
    }
  }
  if (puVar11 != puVar13) {
    uVar1 = *puVar11;
    if (*(ulong *)(*param_3 + (ulong)*puVar13 * 8) < *(ulong *)(*param_3 + (ulong)uVar1 * 8)) {
      iVar6 = iVar6 + 1;
      *puVar11 = *puVar13;
      *puVar13 = uVar1;
    }
  }
  if (iVar6 == 0) {
    uVar7 = FUN_0125c874(param_1,puVar11,param_3);
    uVar15 = FUN_0125c874(puVar11 + 1,param_2,param_3);
    if ((uVar15 & 1) != 0) goto LAB_0125c470;
    puVar13 = puVar11 + 1;
    if ((uVar7 & 1) != 0) goto LAB_0125c0bc;
  }
  if ((long)param_2 - (long)puVar11 <= (long)puVar11 - (long)param_1) {
    FUN_0125c08c(puVar11 + 1,param_2,param_3);
    param_2 = puVar11;
    goto LAB_0125c0b0;
  }
  FUN_0125c08c(param_1,puVar11,param_3);
  puVar13 = puVar11 + 1;
  goto LAB_0125c0bc;
LAB_0125c470:
  param_2 = puVar11;
  if ((uVar7 & 1) != 0) {
    return;
  }
  goto LAB_0125c0b0;
}

