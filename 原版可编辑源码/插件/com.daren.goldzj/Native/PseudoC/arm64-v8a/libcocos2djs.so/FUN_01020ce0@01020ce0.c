
void FUN_01020ce0(ulong *param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  
LAB_01020d08:
  puVar6 = param_2 + -2;
  puVar11 = param_1;
LAB_01020d14:
  param_1 = puVar11;
  lVar7 = (long)param_2 - (long)param_1;
  lVar3 = lVar7 >> 4;
  switch(lVar3) {
  case 0:
  case 1:
    goto switchD_01021128_caseD_0;
  case 2:
    uVar8 = *param_1;
    if (uVar8 <= param_2[-2]) {
      return;
    }
    *param_1 = param_2[-2];
    param_2[-2] = uVar8;
    break;
  case 3:
    uVar2 = param_1[2];
    uVar8 = *param_1;
    uVar12 = param_2[-2];
    if (uVar8 <= uVar2) {
      if (uVar2 <= uVar12) {
        return;
      }
      param_1[2] = uVar12;
      param_2[-2] = uVar2;
      uVar8 = param_1[3];
      param_1[3] = param_2[-1];
      param_2[-1] = uVar8;
      uVar8 = *param_1;
      if (uVar8 <= param_1[2]) {
        return;
      }
      uVar2 = param_1[1];
      *param_1 = param_1[2];
      param_1[1] = param_1[3];
      param_1[2] = uVar8;
      param_1[3] = uVar2;
      return;
    }
    if (uVar2 <= uVar12) {
      uVar12 = param_1[1];
      *param_1 = uVar2;
      param_1[1] = param_1[3];
      param_1[2] = uVar8;
      param_1[3] = uVar12;
      if (uVar8 <= param_2[-2]) {
        return;
      }
      param_1[2] = param_2[-2];
      param_2[-2] = uVar8;
      uVar8 = param_1[3];
      param_1[3] = param_2[-1];
      goto LAB_0102128c;
    }
    *param_1 = uVar12;
    param_2[-2] = uVar8;
    break;
  case 4:
    FUN_010213e4(param_1,param_1 + 2,param_1 + 4,puVar6);
    return;
  case 5:
    FUN_010213e4(param_1,param_1 + 2,param_1 + 4,param_1 + 6);
    uVar8 = param_1[6];
    if (uVar8 <= param_2[-2]) {
      return;
    }
    param_1[6] = param_2[-2];
    param_2[-2] = uVar8;
    uVar8 = param_1[7];
    param_1[7] = param_2[-1];
    param_2[-1] = uVar8;
    uVar8 = param_1[6];
    uVar2 = param_1[4];
    if (uVar2 <= uVar8) {
      return;
    }
    uVar13 = param_1[2];
    uVar12 = param_1[7];
    uVar14 = param_1[5];
    param_1[4] = uVar8;
    param_1[5] = uVar12;
    param_1[6] = uVar2;
    param_1[7] = uVar14;
    if (uVar13 <= uVar8) {
      return;
    }
    uVar2 = *param_1;
    uVar14 = param_1[3];
    param_1[2] = uVar8;
    param_1[3] = uVar12;
    param_1[4] = uVar13;
    param_1[5] = uVar14;
    if (uVar2 <= uVar8) {
      return;
    }
    uVar13 = param_1[1];
    *param_1 = uVar8;
    param_1[1] = uVar12;
    param_1[2] = uVar2;
    param_1[3] = uVar13;
    return;
  default:
    if (0x6f < lVar7) {
      lVar16 = lVar3;
      if (lVar3 < 0) {
        lVar16 = lVar3 + 1;
      }
      lVar16 = lVar16 >> 1;
      puVar11 = param_1 + lVar16 * 2;
      if (lVar7 < 0x3e71) {
        uVar2 = *puVar11;
        uVar8 = *param_1;
        uVar12 = *puVar6;
        if (uVar2 < uVar8) {
          if (uVar12 < uVar2) {
            *param_1 = uVar12;
            param_2[-2] = uVar8;
            uVar8 = param_1[1];
            iVar1 = 1;
            param_1[1] = param_2[-1];
            param_2[-1] = uVar8;
          }
          else {
            *param_1 = uVar2;
            *puVar11 = uVar8;
            puVar5 = param_1 + lVar16 * 2 + 1;
            uVar2 = param_1[1];
            param_1[1] = *puVar5;
            *puVar5 = uVar2;
            if (*puVar6 < uVar8) {
              *puVar11 = *puVar6;
              param_2[-2] = uVar8;
              uVar8 = *puVar5;
              *puVar5 = param_2[-1];
              param_2[-1] = uVar8;
              goto LAB_01020efc;
            }
LAB_01020f0c:
            iVar1 = 1;
          }
        }
        else if (uVar12 < uVar2) {
          *puVar11 = uVar12;
          param_2[-2] = uVar2;
          puVar5 = param_1 + lVar16 * 2 + 1;
          uVar8 = *puVar5;
          *puVar5 = param_2[-1];
          param_2[-1] = uVar8;
          uVar8 = *param_1;
          if (uVar8 <= *puVar11) goto LAB_01020f0c;
          *param_1 = *puVar11;
          *puVar11 = uVar8;
          uVar8 = param_1[1];
          param_1[1] = *puVar5;
          *puVar5 = uVar8;
LAB_01020efc:
          iVar1 = 2;
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        lVar7 = lVar3 + 3;
        if (-1 < lVar3) {
          lVar7 = lVar3;
        }
        lVar7 = lVar7 >> 2;
        puVar5 = param_1 + lVar7 * 2;
        puVar10 = puVar11 + lVar7 * 2;
        iVar1 = FUN_010213e4(param_1,puVar5,puVar11,puVar10);
        uVar8 = *puVar10;
        if (*puVar6 < uVar8) {
          *puVar10 = *puVar6;
          param_2[-2] = uVar8;
          uVar8 = puVar10[1];
          puVar10[1] = param_2[-1];
          param_2[-1] = uVar8;
          uVar8 = *puVar11;
          if (*puVar10 < uVar8) {
            *puVar11 = *puVar10;
            *puVar10 = uVar8;
            puVar15 = param_1 + lVar16 * 2 + 1;
            uVar8 = *puVar15;
            *puVar15 = puVar10[1];
            puVar10[1] = uVar8;
            uVar8 = *puVar5;
            if (*puVar11 < uVar8) {
              *puVar5 = *puVar11;
              *puVar11 = uVar8;
              puVar10 = param_1 + lVar7 * 2 + 1;
              uVar8 = *puVar10;
              *puVar10 = *puVar15;
              *puVar15 = uVar8;
              uVar8 = *param_1;
              if (*puVar5 < uVar8) {
                *param_1 = *puVar5;
                *puVar5 = uVar8;
                uVar8 = param_1[1];
                iVar1 = iVar1 + 4;
                param_1[1] = *puVar10;
                *puVar10 = uVar8;
              }
              else {
                iVar1 = iVar1 + 3;
              }
            }
            else {
              iVar1 = iVar1 + 2;
            }
          }
          else {
            iVar1 = iVar1 + 1;
          }
        }
      }
      uVar8 = *param_1;
      puVar5 = puVar6;
      puVar10 = param_2 + -4;
      if (*puVar11 <= uVar8) goto LAB_01020f3c;
      goto LAB_01020f6c;
    }
    uVar2 = param_1[2];
    uVar12 = *param_1;
    uVar13 = param_1[4];
    uVar8 = uVar13;
    if (uVar2 < uVar12) {
      if (uVar13 < uVar2) {
        uVar8 = param_1[1];
        *param_1 = uVar13;
        param_1[1] = param_1[5];
        param_1[4] = uVar12;
        param_1[5] = uVar8;
        uVar8 = uVar12;
      }
      else {
        *param_1 = uVar2;
        uVar2 = param_1[1];
        param_1[1] = param_1[3];
        param_1[2] = uVar12;
        param_1[3] = uVar2;
        if (uVar13 < uVar12) {
          uVar8 = param_1[5];
          param_1[2] = uVar13;
          param_1[5] = uVar2;
          param_1[3] = uVar8;
          param_1[4] = uVar12;
          uVar8 = uVar12;
        }
      }
    }
    else if (uVar13 < uVar2) {
      uVar14 = param_1[5];
      uVar8 = param_1[3];
      param_1[2] = uVar13;
      param_1[3] = uVar14;
      param_1[4] = uVar2;
      param_1[5] = uVar8;
      uVar8 = uVar2;
      if (uVar13 < uVar12) {
        uVar2 = param_1[1];
        *param_1 = uVar13;
        param_1[1] = uVar14;
        param_1[2] = uVar12;
        param_1[3] = uVar2;
      }
    }
    if (param_1 + 6 == param_2) {
      return;
    }
    lVar3 = 0;
    puVar11 = param_1 + 6;
    goto LAB_010211f0;
  }
  uVar8 = param_1[1];
  param_1[1] = param_2[-1];
LAB_0102128c:
  param_2[-1] = uVar8;
  return;
LAB_010211f0:
  uVar2 = *puVar11;
  if (uVar2 < uVar8) {
    uVar12 = puVar11[1];
    lVar7 = lVar3;
    do {
      lVar16 = lVar7;
      *(ulong *)((long)param_1 + lVar16 + 0x30) = uVar8;
      *(undefined8 *)((long)param_1 + lVar16 + 0x38) =
           *(undefined8 *)((long)param_1 + lVar16 + 0x28);
      puVar6 = param_1;
      if (lVar16 == -0x20) goto LAB_01021238;
      uVar8 = *(ulong *)((long)param_1 + lVar16 + 0x10);
      lVar7 = lVar16 + -0x10;
    } while (uVar2 < uVar8);
    puVar6 = (ulong *)((long)param_1 + lVar16 + 0x20);
LAB_01021238:
    *puVar6 = uVar2;
    *(ulong *)((long)param_1 + lVar16 + 0x28) = uVar12;
  }
  if (puVar11 + 2 == param_2) {
switchD_01021128_caseD_0:
    return;
  }
  uVar8 = *puVar11;
  lVar3 = lVar3 + 0x10;
  puVar11 = puVar11 + 2;
  goto LAB_010211f0;
LAB_01020f3c:
  while (puVar5 = puVar10, param_1 != puVar5) {
    puVar10 = puVar5 + -2;
    if (*puVar5 < *puVar11) goto code_r0x01020f50;
  }
  puVar5 = param_1 + 2;
  if (*puVar6 <= uVar8) {
    if (puVar5 == puVar6) {
      return;
    }
    puVar5 = param_1 + 4;
    while (uVar2 = puVar5[-2], uVar2 <= uVar8) {
      puVar5 = puVar5 + 2;
      if (param_2 == puVar5) {
        return;
      }
    }
    puVar5[-2] = *puVar6;
    param_2[-2] = uVar2;
    uVar8 = puVar5[-1];
    puVar5[-1] = param_2[-1];
    param_2[-1] = uVar8;
  }
  puVar10 = puVar6;
  if (puVar5 == puVar6) {
    return;
  }
  while( true ) {
    do {
      puVar11 = puVar5;
      puVar5 = puVar11 + 2;
      uVar8 = *puVar11;
    } while (uVar8 <= *param_1);
    do {
      puVar15 = puVar10;
      puVar10 = puVar15 + -2;
    } while (*param_1 < *puVar10);
    if (puVar10 <= puVar11) break;
    *puVar11 = *puVar10;
    *puVar10 = uVar8;
    uVar8 = puVar11[1];
    puVar11[1] = puVar15[-1];
    puVar15[-1] = uVar8;
  }
  goto LAB_01020d14;
code_r0x01020f50:
  *param_1 = *puVar5;
  *puVar5 = uVar8;
  uVar8 = param_1[1];
  iVar1 = iVar1 + 1;
  param_1[1] = puVar5[1];
  puVar5[1] = uVar8;
LAB_01020f6c:
  puVar10 = param_1 + 2;
  puVar9 = puVar11;
  puVar15 = puVar10;
  if (puVar10 < puVar5) {
    while( true ) {
      puVar11 = puVar9;
      puVar10 = puVar15 + -2;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + 2;
        uVar8 = *puVar10;
      } while (uVar8 < *puVar11);
      puVar15 = puVar9 + 4;
      do {
        puVar4 = puVar5;
        puVar5 = puVar4 + -2;
      } while (*puVar11 <= *puVar5);
      if (puVar5 < puVar10) break;
      *puVar10 = *puVar5;
      *puVar5 = uVar8;
      uVar8 = puVar9[3];
      iVar1 = iVar1 + 1;
      puVar9[3] = puVar4[-1];
      puVar4[-1] = uVar8;
      puVar9 = puVar5;
      if (puVar11 != puVar10) {
        puVar9 = puVar11;
      }
    }
  }
  if (puVar10 != puVar11) {
    uVar8 = *puVar10;
    if (*puVar11 < uVar8) {
      *puVar10 = *puVar11;
      *puVar11 = uVar8;
      uVar8 = puVar10[1];
      iVar1 = iVar1 + 1;
      puVar10[1] = puVar11[1];
      puVar11[1] = uVar8;
    }
  }
  if (iVar1 == 0) {
    uVar8 = FUN_01021558(param_1,puVar10);
    uVar2 = FUN_01021558(puVar10 + 2,param_2);
    if ((uVar2 & 1) != 0) goto LAB_01021108;
    puVar11 = puVar10 + 2;
    if ((uVar8 & 1) != 0) goto LAB_01020d14;
  }
  if ((long)param_2 - (long)puVar10 <= (long)puVar10 - (long)param_1) {
    FUN_01020ce0(puVar10 + 2,param_2);
    param_2 = puVar10;
    goto LAB_01020d08;
  }
  FUN_01020ce0(param_1,puVar10);
  puVar11 = puVar10 + 2;
  goto LAB_01020d14;
LAB_01021108:
  param_2 = puVar10;
  if ((uVar8 & 1) != 0) {
    return;
  }
  goto LAB_01020d08;
}

