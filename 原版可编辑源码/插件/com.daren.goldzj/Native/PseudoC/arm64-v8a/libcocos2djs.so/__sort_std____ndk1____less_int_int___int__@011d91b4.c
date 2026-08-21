
/* void std::__ndk1::__sort<std::__ndk1::__less<int, int>&, int*>(int*, int*,
   std::__ndk1::__less<int, int>&) */

void std::__ndk1::__sort<std::__ndk1::__less<int,int>&,int*>
               (int *param_1,int *param_2,__less *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  int *piVar17;
  
LAB_011d91d8:
  piVar12 = param_2 + -1;
  piVar15 = param_1;
LAB_011d91e4:
  param_1 = piVar15;
  lVar13 = (long)param_2 - (long)param_1;
  uVar10 = lVar13 >> 2;
  switch(uVar10) {
  case 0:
  case 1:
    goto switchD_011d949c_caseD_0;
  case 2:
    iVar8 = *param_1;
    if (iVar8 <= param_2[-1]) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = iVar8;
    return;
  case 3:
    iVar8 = *param_1;
    iVar2 = param_1[1];
    iVar3 = param_2[-1];
    if (iVar8 <= iVar2) {
      if (iVar2 <= iVar3) {
        return;
      }
      param_1[1] = iVar3;
      param_2[-1] = iVar2;
      iVar8 = *param_1;
      if (iVar8 <= param_1[1]) {
        return;
      }
      *param_1 = param_1[1];
      param_1[1] = iVar8;
      return;
    }
    if (iVar3 < iVar2) {
      *param_1 = iVar3;
      param_2[-1] = iVar8;
      return;
    }
    *param_1 = iVar2;
    param_1[1] = iVar8;
    if (iVar8 <= param_2[-1]) {
      return;
    }
    param_1[1] = param_2[-1];
    param_2[-1] = iVar8;
    return;
  case 4:
    iVar8 = *param_1;
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    iVar9 = iVar3;
    if (iVar2 < iVar8) {
      if (iVar3 < iVar2) {
        *param_1 = iVar3;
      }
      else {
        *param_1 = iVar2;
        param_1[1] = iVar8;
        if (iVar8 <= iVar3) goto LAB_011d9674;
        param_1[1] = iVar3;
      }
      param_1[2] = iVar8;
      iVar9 = iVar8;
    }
    else if (iVar3 < iVar2) {
      param_1[1] = iVar3;
      param_1[2] = iVar2;
      iVar9 = iVar2;
      if (iVar3 < iVar8) {
        *param_1 = iVar3;
        param_1[1] = iVar8;
      }
    }
LAB_011d9674:
    if (iVar9 <= param_2[-1]) {
      return;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = iVar9;
    iVar8 = param_1[1];
    iVar2 = param_1[2];
    if (iVar8 <= iVar2) {
      return;
    }
    iVar3 = *param_1;
    param_1[1] = iVar2;
    param_1[2] = iVar8;
    if (iVar3 <= iVar2) {
      return;
    }
    *param_1 = iVar2;
    param_1[1] = iVar3;
    return;
  case 5:
    FUN_011d96c0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,piVar12,param_3);
    return;
  default:
    if (0x7b < lVar13) {
      uVar1 = uVar10;
      if ((long)uVar10 < 0) {
        uVar1 = uVar10 + 1;
      }
      piVar15 = (int *)((long)param_1 + (uVar1 & 0x7ffffffffffffffe) * 2);
      if (lVar13 < 0xf9d) {
        iVar8 = *piVar15;
        iVar2 = *param_1;
        iVar3 = *piVar12;
        if (iVar8 < iVar2) {
          if (iVar3 < iVar8) {
            *param_1 = iVar3;
            *piVar12 = iVar2;
            iVar8 = 1;
          }
          else {
            *param_1 = iVar8;
            *piVar15 = iVar2;
            if (*piVar12 < iVar2) {
              *piVar15 = *piVar12;
              *piVar12 = iVar2;
              goto LAB_011d9404;
            }
LAB_011d9414:
            iVar8 = 1;
          }
        }
        else if (iVar3 < iVar8) {
          *piVar15 = iVar3;
          *piVar12 = iVar8;
          iVar8 = *param_1;
          if (iVar8 <= *piVar15) goto LAB_011d9414;
          *param_1 = *piVar15;
          *piVar15 = iVar8;
LAB_011d9404:
          iVar8 = 2;
        }
        else {
          iVar8 = 0;
        }
      }
      else {
        uVar1 = uVar10 + 3;
        if (-1 < (long)uVar10) {
          uVar1 = uVar10;
        }
        iVar8 = FUN_011d96c0(param_1,(long)param_1 + (uVar1 & 0xfffffffffffffffc),piVar15,
                             (long)piVar15 + (uVar1 & 0xfffffffffffffffc),piVar12,param_3);
      }
      iVar2 = *param_1;
      piVar11 = piVar12;
      piVar14 = param_2 + -2;
      if (*piVar15 <= iVar2) goto LAB_011d9290;
      goto LAB_011d92b0;
    }
    iVar8 = *param_1;
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    iVar9 = iVar3;
    if (iVar2 < iVar8) {
      if (iVar3 < iVar2) {
        *param_1 = iVar3;
      }
      else {
        *param_1 = iVar2;
        param_1[1] = iVar8;
        if (iVar8 <= iVar3) goto LAB_011d9518;
        param_1[1] = iVar3;
      }
      param_1[2] = iVar8;
      iVar9 = iVar8;
    }
    else if (iVar3 < iVar2) {
      param_1[1] = iVar3;
      param_1[2] = iVar2;
      iVar9 = iVar2;
      if (iVar3 < iVar8) {
        *param_1 = iVar3;
        param_1[1] = iVar8;
      }
    }
LAB_011d9518:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar13 = 0xc;
    piVar15 = param_1 + 3;
  }
LAB_011d9528:
  iVar8 = *piVar15;
  lVar16 = lVar13;
  if (iVar8 < iVar9) {
    do {
      lVar4 = lVar16 + -4;
      *(int *)((long)param_1 + lVar16) = iVar9;
      piVar12 = param_1;
      if (lVar4 == 0) goto LAB_011d9564;
      iVar9 = *(int *)((long)param_1 + lVar16 + -8);
      lVar16 = lVar4;
    } while (iVar8 < iVar9);
    piVar12 = (int *)((long)param_1 + lVar4);
LAB_011d9564:
    *piVar12 = iVar8;
  }
  if (piVar15 + 1 == param_2) {
switchD_011d949c_caseD_0:
    return;
  }
  iVar9 = *piVar15;
  lVar13 = lVar13 + 4;
  piVar15 = piVar15 + 1;
  goto LAB_011d9528;
LAB_011d9290:
  while (piVar11 = piVar14, param_1 != piVar11) {
    piVar14 = piVar11 + -1;
    if (*piVar11 < *piVar15) goto code_r0x011d92a4;
  }
  piVar11 = param_1 + 1;
  if (*piVar12 <= iVar2) {
    if (piVar11 == piVar12) {
      return;
    }
    piVar11 = param_1 + 2;
    while (iVar8 = piVar11[-1], iVar8 <= iVar2) {
      piVar11 = piVar11 + 1;
      if (param_2 == piVar11) {
        return;
      }
    }
    piVar11[-1] = *piVar12;
    *piVar12 = iVar8;
  }
  piVar14 = piVar12;
  if (piVar11 == piVar12) {
    return;
  }
  while( true ) {
    do {
      piVar15 = piVar11;
      piVar11 = piVar15 + 1;
      iVar8 = *piVar15;
    } while (iVar8 <= *param_1);
    do {
      piVar14 = piVar14 + -1;
    } while (*param_1 < *piVar14);
    if (piVar14 <= piVar15) break;
    *piVar15 = *piVar14;
    *piVar14 = iVar8;
  }
  goto LAB_011d91e4;
code_r0x011d92a4:
  *param_1 = *piVar11;
  *piVar11 = iVar2;
  iVar8 = iVar8 + 1;
LAB_011d92b0:
  piVar14 = param_1 + 1;
  piVar5 = piVar15;
  piVar17 = piVar14;
  if (piVar14 < piVar11) {
    while( true ) {
      piVar15 = piVar5;
      piVar14 = piVar17 + -1;
      do {
        piVar17 = piVar14;
        piVar14 = piVar17 + 1;
        iVar2 = *piVar14;
      } while (iVar2 < *piVar15);
      piVar17 = piVar17 + 2;
      do {
        piVar11 = piVar11 + -1;
      } while (*piVar15 <= *piVar11);
      if (piVar11 < piVar14) break;
      *piVar14 = *piVar11;
      *piVar11 = iVar2;
      iVar8 = iVar8 + 1;
      piVar5 = piVar11;
      if (piVar15 != piVar14) {
        piVar5 = piVar15;
      }
    }
  }
  if (piVar14 != piVar15) {
    iVar2 = *piVar14;
    if (*piVar15 < iVar2) {
      iVar8 = iVar8 + 1;
      *piVar14 = *piVar15;
      *piVar15 = iVar2;
    }
  }
  if (iVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<std::__ndk1::__less<int,int>&,int*>(param_1,piVar14,param_3)
    ;
    bVar7 = __insertion_sort_incomplete<std::__ndk1::__less<int,int>&,int*>
                      (piVar14 + 1,param_2,param_3);
    if (bVar7) goto LAB_011d947c;
    piVar15 = piVar14 + 1;
    if (bVar6) goto LAB_011d91e4;
  }
  if ((long)param_2 - (long)piVar14 <= (long)piVar14 - (long)param_1) {
    __sort<std::__ndk1::__less<int,int>&,int*>(piVar14 + 1,param_2,param_3);
    param_2 = piVar14;
    goto LAB_011d91d8;
  }
  __sort<std::__ndk1::__less<int,int>&,int*>(param_1,piVar14,param_3);
  piVar15 = piVar14 + 1;
  goto LAB_011d91e4;
LAB_011d947c:
  param_2 = piVar14;
  if (bVar6) {
    return;
  }
  goto LAB_011d91d8;
}

