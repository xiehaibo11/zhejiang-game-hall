
/* WARNING: Type propagation algorithm not settling */

void FUN_01082940(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  double dVar17;
  double dVar18;
  
LAB_01082964:
  puVar12 = param_2 + -1;
  puVar16 = param_2 + -2;
  puVar13 = param_1;
LAB_01082970:
  param_1 = puVar13;
  iVar9 = (int)param_2 - (int)param_1;
  iVar3 = iVar9 + 3;
  if (-1 < iVar9) {
    iVar3 = iVar9;
  }
  uVar1 = iVar3 >> 2;
  switch(uVar1) {
  case 0:
  case 1:
    return;
  case 2:
    lVar6 = *param_3;
    uVar4 = lVar6 + (ulong)param_2[-1];
    uVar5 = lVar6 + (ulong)*param_1;
    iVar9 = (int)uVar4;
    iVar3 = (int)uVar5;
    if (((uVar4 & 1) == 0) || (iVar9 != *(int *)(lVar6 + 0xa0))) {
      if (((uVar5 & 1) == 0) || (iVar3 != *(int *)(lVar6 + 0xa0))) {
        if ((uVar4 & 1) == 0) {
          dVar17 = (double)(iVar9 >> 1);
        }
        else {
          dVar17 = *(double *)(uVar4 + 3);
        }
        if ((uVar5 & 1) == 0) {
          dVar18 = (double)(iVar3 >> 1);
        }
        else {
          dVar18 = *(double *)(uVar5 + 3);
        }
        if (dVar18 <= dVar17) {
          return;
        }
      }
    }
    else {
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (iVar3 != iVar9) {
        return;
      }
    }
    uVar1 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar1;
    return;
  case 3:
    FUN_01083270(param_1,param_1 + 1,puVar12,param_3);
    return;
  case 4:
    FUN_01083548(param_1,param_1 + 1,param_1 + 2,puVar12,param_3);
    return;
  case 5:
    FUN_0108372c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar12,param_3);
    return;
  }
  if (iVar9 < 0x7c) {
    FUN_01083270(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar6 = 0;
    puVar12 = param_1 + 3;
    puVar13 = param_1 + 2;
    goto LAB_0108304c;
  }
  puVar13 = param_1 + (uVar1 >> 1);
  if (iVar9 < 4000) {
    iVar3 = FUN_01083270(param_1,puVar13,puVar12,param_3);
  }
  else {
    iVar3 = FUN_0108372c(param_1,(long)param_1 + (ulong)(uVar1 & 0xfffffffc),puVar13,
                         (long)puVar13 + (ulong)(uVar1 & 0xfffffffc),puVar12,param_3);
  }
  lVar6 = *param_3;
  uVar4 = lVar6 + (ulong)*param_1;
  uVar5 = lVar6 + (ulong)*puVar13;
  iVar8 = (int)uVar4;
  iVar9 = (int)uVar5;
  puVar7 = puVar12;
  puVar14 = puVar16;
  if (((uVar4 & 1) == 0) || (iVar8 != *(int *)(lVar6 + 0xa0))) {
    if (((uVar5 & 1) == 0) || (iVar9 != *(int *)(lVar6 + 0xa0))) {
      if ((uVar4 & 1) == 0) {
        dVar17 = (double)(iVar8 >> 1);
      }
      else {
        dVar17 = *(double *)(uVar4 + 3);
      }
      if ((uVar5 & 1) == 0) {
        dVar18 = (double)(iVar9 >> 1);
      }
      else {
        dVar18 = *(double *)(uVar5 + 3);
      }
      if (dVar18 <= dVar17) goto joined_r0x01082a48;
    }
  }
  else if (((uVar5 & 1) == 0) || (iVar9 != iVar8)) {
joined_r0x01082a48:
    for (; param_1 != puVar14; puVar14 = puVar14 + -1) {
      uVar4 = (ulong)*puVar14 + lVar6;
      uVar5 = (ulong)*puVar13 + lVar6;
      iVar8 = (int)uVar4;
      iVar9 = (int)uVar5;
      if (((uVar4 & 1) == 0) || (iVar8 != *(int *)(lVar6 + 0xa0))) {
        if (((uVar5 & 1) == 0) || (iVar9 != *(int *)(lVar6 + 0xa0))) {
          if ((uVar4 & 1) == 0) {
            dVar17 = (double)(iVar8 >> 1);
          }
          else {
            dVar17 = *(double *)(uVar4 + 3);
          }
          if ((uVar5 & 1) == 0) {
            dVar18 = (double)(iVar9 >> 1);
          }
          else {
            dVar18 = *(double *)(uVar5 + 3);
          }
          if (dVar18 <= dVar17) goto LAB_01082a60;
        }
LAB_01082ad4:
        uVar1 = *param_1;
        iVar3 = iVar3 + 1;
        *param_1 = *puVar14;
        *puVar14 = uVar1;
        puVar7 = puVar14;
        goto LAB_01082b3c;
      }
      if (((uVar5 & 1) != 0) && (iVar9 == iVar8)) goto LAB_01082ad4;
LAB_01082a60:
    }
    puVar14 = param_1 + 1;
    uVar4 = (ulong)*param_1 + lVar6;
    uVar5 = (ulong)*puVar12 + lVar6;
    iVar9 = (int)uVar4;
    iVar3 = (int)uVar5;
    if (((uVar4 & 1) == 0) || (iVar9 != *(int *)(lVar6 + 0xa0))) {
      if (((uVar5 & 1) == 0) || (iVar3 != *(int *)(lVar6 + 0xa0))) {
        if ((uVar4 & 1) == 0) {
          dVar17 = (double)(iVar9 >> 1);
        }
        else {
          dVar17 = *(double *)(uVar4 + 3);
        }
        if ((uVar5 & 1) == 0) {
          dVar18 = (double)(iVar3 >> 1);
        }
        else {
          dVar18 = *(double *)(uVar5 + 3);
        }
        if (dVar18 <= dVar17) goto LAB_01082dc8;
      }
    }
    else if (((uVar5 & 1) == 0) || (iVar3 != iVar9)) {
LAB_01082dc8:
      if (puVar14 == puVar12) {
        return;
      }
      puVar14 = param_1 + 2;
      do {
        uVar4 = (ulong)*param_1 + lVar6;
        uVar5 = (ulong)puVar14[-1] + lVar6;
        iVar9 = (int)uVar4;
        iVar3 = (int)uVar5;
        if (((uVar4 & 1) == 0) || (iVar9 != *(int *)(lVar6 + 0xa0))) {
          if (((uVar5 & 1) != 0) && (iVar3 == *(int *)(lVar6 + 0xa0))) goto LAB_01082e5c;
          if ((uVar4 & 1) == 0) {
            dVar17 = (double)(iVar9 >> 1);
          }
          else {
            dVar17 = *(double *)(uVar4 + 3);
          }
          if ((uVar5 & 1) == 0) {
            dVar18 = (double)(iVar3 >> 1);
          }
          else {
            dVar18 = *(double *)(uVar5 + 3);
          }
          if (dVar17 < dVar18) goto LAB_01082e5c;
        }
        else if (((uVar5 & 1) != 0) && (iVar3 == iVar9)) goto LAB_01082e5c;
        puVar14 = puVar14 + 1;
        if (param_2 == puVar14) {
          return;
        }
      } while( true );
    }
    goto LAB_01082e6c;
  }
LAB_01082b3c:
  puVar14 = param_1 + 1;
  puVar15 = puVar14;
  if (puVar14 < puVar7) {
LAB_01082b48:
    lVar6 = *param_3;
    puVar15 = puVar14;
    do {
      uVar4 = lVar6 + (ulong)*puVar15;
      uVar5 = lVar6 + (ulong)*puVar13;
      iVar8 = (int)uVar4;
      iVar9 = (int)uVar5;
      if (((uVar4 & 1) == 0) || (iVar8 != *(int *)(lVar6 + 0xa0))) {
        if (((uVar5 & 1) == 0) || (iVar9 != *(int *)(lVar6 + 0xa0))) {
          if ((uVar4 & 1) == 0) {
            dVar17 = (double)(iVar8 >> 1);
          }
          else {
            dVar17 = *(double *)(uVar4 + 3);
          }
          if ((uVar5 & 1) == 0) {
            dVar18 = (double)(iVar9 >> 1);
          }
          else {
            dVar18 = *(double *)(uVar5 + 3);
          }
          if (dVar18 <= dVar17) goto LAB_01082bdc;
        }
      }
      else if (((uVar5 & 1) == 0) || (iVar9 != iVar8)) goto LAB_01082bdc;
      puVar15 = puVar15 + 1;
    } while( true );
  }
LAB_01082c70:
  if (puVar15 != puVar13) {
    lVar6 = *param_3;
    uVar4 = lVar6 + (ulong)*puVar13;
    uVar5 = lVar6 + (ulong)*puVar15;
    iVar8 = (int)uVar4;
    iVar9 = (int)uVar5;
    if (((uVar4 & 1) == 0) || (iVar8 != *(int *)(lVar6 + 0xa0))) {
      if (((uVar5 & 1) == 0) || (iVar9 != *(int *)(lVar6 + 0xa0))) {
        if ((uVar4 & 1) == 0) {
          dVar17 = (double)(iVar8 >> 1);
        }
        else {
          dVar17 = *(double *)(uVar4 + 3);
        }
        if ((uVar5 & 1) == 0) {
          dVar18 = (double)(iVar9 >> 1);
        }
        else {
          dVar18 = *(double *)(uVar5 + 3);
        }
        if (dVar18 <= dVar17) goto LAB_01082d38;
      }
    }
    else if (((uVar5 & 1) == 0) || (iVar9 != iVar8)) goto LAB_01082d38;
    uVar1 = *puVar15;
    iVar3 = iVar3 + 1;
    *puVar15 = *puVar13;
    *puVar13 = uVar1;
  }
LAB_01082d38:
  if (iVar3 == 0) {
    uVar4 = FUN_0108399c(param_1,puVar15,param_3);
    uVar5 = FUN_0108399c(puVar15 + 1,param_2,param_3);
    if ((uVar5 & 1) != 0) goto LAB_01082fac;
    puVar13 = puVar15 + 1;
    if ((uVar4 & 1) != 0) goto LAB_01082970;
  }
  iVar9 = (int)puVar15 - (int)param_1;
  iVar8 = (int)param_2 - (int)puVar15;
  iVar3 = iVar9 + 3;
  if (-1 < iVar9) {
    iVar3 = iVar9;
  }
  iVar9 = iVar8 + 3;
  if (-1 < iVar8) {
    iVar9 = iVar8;
  }
  if (iVar9 >> 2 <= iVar3 >> 2) {
    FUN_01082940(puVar15 + 1,param_2,param_3);
    param_2 = puVar15;
    goto LAB_01082964;
  }
  FUN_01082940(param_1,puVar15,param_3);
  puVar13 = puVar15 + 1;
  goto LAB_01082970;
LAB_0108304c:
  puVar16 = puVar12;
  lVar10 = *param_3;
  uVar4 = lVar10 + (ulong)*puVar16;
  uVar5 = lVar10 + (ulong)*puVar13;
  iVar9 = (int)uVar4;
  iVar3 = (int)uVar5;
  if (((uVar4 & 1) == 0) || (iVar9 != *(int *)(lVar10 + 0xa0))) {
    if (((uVar5 & 1) == 0) || (iVar3 != *(int *)(lVar10 + 0xa0))) {
      if ((uVar4 & 1) == 0) {
        dVar17 = (double)(iVar9 >> 1);
      }
      else {
        dVar17 = *(double *)(uVar4 + 3);
      }
      if ((uVar5 & 1) == 0) {
        dVar18 = (double)(iVar3 >> 1);
      }
      else {
        dVar18 = *(double *)(uVar5 + 3);
      }
      if (dVar18 <= dVar17) goto LAB_01083038;
    }
LAB_010830c8:
    uVar1 = *puVar16;
    *puVar16 = *puVar13;
    lVar10 = lVar6;
    puVar12 = puVar13;
    if (puVar13 != param_1) {
      do {
        lVar11 = *param_3;
        uVar4 = lVar11 + (ulong)uVar1;
        uVar5 = lVar11 + (ulong)*(uint *)((long)param_1 + lVar10 + 4);
        iVar9 = (int)uVar4;
        iVar3 = (int)uVar5;
        puVar12 = puVar13;
        if (((uVar4 & 1) == 0) || (iVar9 != *(int *)(lVar11 + 0xa0))) {
          if (((uVar5 & 1) == 0) || (iVar3 != *(int *)(lVar11 + 0xa0))) {
            if ((uVar4 & 1) == 0) {
              dVar17 = (double)(iVar9 >> 1);
            }
            else {
              dVar17 = *(double *)(uVar4 + 3);
            }
            if ((uVar5 & 1) == 0) {
              dVar18 = (double)(iVar3 >> 1);
            }
            else {
              dVar18 = *(double *)(uVar5 + 3);
            }
            if (dVar18 <= dVar17) break;
          }
        }
        else if (((uVar5 & 1) == 0) || (iVar3 != iVar9)) break;
        lVar11 = lVar10 + -4;
        puVar13 = (uint *)((long)param_1 + lVar10 + 4);
        *(undefined4 *)((long)param_1 + lVar10 + 8) = *(undefined4 *)((long)param_1 + lVar10 + 4);
        lVar10 = lVar11;
        puVar12 = param_1;
      } while (lVar11 != -8);
    }
    *puVar12 = uVar1;
  }
  else if (((uVar5 & 1) != 0) && (iVar3 == iVar9)) goto LAB_010830c8;
LAB_01083038:
  lVar6 = lVar6 + 4;
  puVar12 = puVar16 + 1;
  puVar13 = puVar16;
  if (puVar16 + 1 == param_2) {
    return;
  }
  goto LAB_0108304c;
LAB_01082e5c:
  uVar1 = puVar14[-1];
  puVar14[-1] = *puVar12;
  *puVar12 = uVar1;
LAB_01082e6c:
  if (puVar14 == puVar12) {
    return;
  }
LAB_01082e78:
  lVar6 = *param_3;
  puVar13 = puVar14;
  do {
    uVar4 = lVar6 + (ulong)*param_1;
    uVar5 = lVar6 + (ulong)*puVar13;
    iVar9 = (int)uVar4;
    iVar3 = (int)uVar5;
    if (((uVar4 & 1) == 0) || (iVar9 != *(int *)(lVar6 + 0xa0))) {
      if (((uVar5 & 1) != 0) && (iVar3 == *(int *)(lVar6 + 0xa0))) break;
      if ((uVar4 & 1) == 0) {
        dVar17 = (double)(iVar9 >> 1);
      }
      else {
        dVar17 = *(double *)(uVar4 + 3);
      }
      if ((uVar5 & 1) == 0) {
        dVar18 = (double)(iVar3 >> 1);
      }
      else {
        dVar18 = *(double *)(uVar5 + 3);
      }
      if (dVar17 < dVar18) break;
    }
    else if (((uVar5 & 1) != 0) && (iVar3 == iVar9)) break;
    puVar13 = puVar13 + 1;
  } while( true );
  while( true ) {
    if ((uVar4 & 1) == 0) {
      dVar17 = (double)(iVar9 >> 1);
    }
    else {
      dVar17 = *(double *)(uVar4 + 3);
    }
    if ((uVar5 & 1) == 0) {
      dVar18 = (double)(iVar3 >> 1);
    }
    else {
      dVar18 = *(double *)(uVar5 + 3);
    }
    if (dVar18 <= dVar17) break;
LAB_01082f0c:
    do {
      puVar7 = puVar7 + -1;
      uVar4 = (ulong)*param_1 + lVar6;
      uVar5 = (ulong)*puVar7 + lVar6;
      iVar9 = (int)uVar4;
      iVar3 = (int)uVar5;
      if (((uVar4 & 1) != 0) && (iVar9 == *(int *)(lVar6 + 0xa0))) {
        if (((uVar5 & 1) == 0) || (iVar3 != iVar9)) goto LAB_01082f78;
        goto LAB_01082f0c;
      }
    } while (((uVar5 & 1) != 0) && (iVar3 == *(int *)(lVar6 + 0xa0)));
  }
LAB_01082f78:
  if (puVar7 <= puVar13) goto LAB_01082970;
  uVar1 = *puVar13;
  puVar14 = puVar13 + 1;
  *puVar13 = *puVar7;
  *puVar7 = uVar1;
  goto LAB_01082e78;
  while( true ) {
    if (((uVar5 & 1) != 0) && (iVar9 == *(int *)(lVar6 + 0xa0))) break;
    if ((uVar4 & 1) == 0) {
      dVar17 = (double)(iVar8 >> 1);
    }
    else {
      dVar17 = *(double *)(uVar4 + 3);
    }
    if ((uVar5 & 1) == 0) {
      dVar18 = (double)(iVar9 >> 1);
    }
    else {
      dVar18 = *(double *)(uVar5 + 3);
    }
    if (dVar17 < dVar18) break;
LAB_01082bdc:
    puVar7 = puVar7 + -1;
    uVar4 = (ulong)*puVar7 + lVar6;
    uVar5 = (ulong)*puVar13 + lVar6;
    iVar8 = (int)uVar4;
    iVar9 = (int)uVar5;
    if (((uVar4 & 1) != 0) && (iVar8 == *(int *)(lVar6 + 0xa0))) {
      if (((uVar5 & 1) != 0) && (iVar9 == iVar8)) break;
      goto LAB_01082bdc;
    }
  }
  if (puVar7 < puVar15) goto LAB_01082c70;
  uVar1 = *puVar15;
  iVar3 = iVar3 + 1;
  puVar2 = puVar7;
  if (puVar13 != puVar15) {
    puVar2 = puVar13;
  }
  puVar14 = puVar15 + 1;
  *puVar15 = *puVar7;
  *puVar7 = uVar1;
  puVar13 = puVar2;
  goto LAB_01082b48;
LAB_01082fac:
  param_2 = puVar15;
  if ((uVar4 & 1) != 0) {
    return;
  }
  goto LAB_01082964;
}

