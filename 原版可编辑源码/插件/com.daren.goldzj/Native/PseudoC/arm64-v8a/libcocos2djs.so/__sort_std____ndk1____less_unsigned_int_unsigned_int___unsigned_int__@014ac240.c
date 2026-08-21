
/* void std::__ndk1::__sort<std::__ndk1::__less<unsigned int, unsigned int>&, unsigned
   int*>(unsigned int*, unsigned int*, std::__ndk1::__less<unsigned int, unsigned int>&) */

void std::__ndk1::__sort<std::__ndk1::__less<unsigned_int,unsigned_int>&,unsigned_int*>
               (uint *param_1,uint *param_2,__less *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  
LAB_014ac264:
  puVar13 = param_2 + -1;
  puVar16 = param_1;
LAB_014ac270:
  param_1 = puVar16;
  lVar14 = (long)param_2 - (long)param_1;
  uVar11 = lVar14 >> 2;
  switch(uVar11) {
  case 0:
  case 1:
    goto switchD_014ac528_caseD_0;
  case 2:
    uVar2 = *param_1;
    if (uVar2 <= param_2[-1]) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = uVar2;
    return;
  case 3:
    uVar2 = *param_1;
    uVar4 = param_1[1];
    uVar3 = param_2[-1];
    if (uVar2 <= uVar4) {
      if (uVar4 <= uVar3) {
        return;
      }
      param_1[1] = uVar3;
      param_2[-1] = uVar4;
      uVar2 = *param_1;
      if (uVar2 <= param_1[1]) {
        return;
      }
      *param_1 = param_1[1];
      param_1[1] = uVar2;
      return;
    }
    if (uVar3 < uVar4) {
      *param_1 = uVar3;
      param_2[-1] = uVar2;
      return;
    }
    *param_1 = uVar4;
    param_1[1] = uVar2;
    if (uVar2 <= param_2[-1]) {
      return;
    }
    param_1[1] = param_2[-1];
    param_2[-1] = uVar2;
    return;
  case 4:
    uVar2 = *param_1;
    uVar4 = param_1[1];
    uVar3 = param_1[2];
    uVar10 = uVar3;
    if (uVar4 < uVar2) {
      if (uVar3 < uVar4) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar4;
        param_1[1] = uVar2;
        if (uVar2 <= uVar3) goto LAB_014ac700;
        param_1[1] = uVar3;
      }
      param_1[2] = uVar2;
      uVar10 = uVar2;
    }
    else if (uVar3 < uVar4) {
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      uVar10 = uVar4;
      if (uVar3 < uVar2) {
        *param_1 = uVar3;
        param_1[1] = uVar2;
      }
    }
LAB_014ac700:
    if (uVar10 <= param_2[-1]) {
      return;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = uVar10;
    uVar2 = param_1[1];
    uVar4 = param_1[2];
    if (uVar2 <= uVar4) {
      return;
    }
    uVar3 = *param_1;
    param_1[1] = uVar4;
    param_1[2] = uVar2;
    if (uVar3 <= uVar4) {
      return;
    }
    *param_1 = uVar4;
    param_1[1] = uVar3;
    return;
  case 5:
    FUN_014ac74c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar13,param_3);
    return;
  default:
    if (0x7b < lVar14) {
      uVar1 = uVar11;
      if ((long)uVar11 < 0) {
        uVar1 = uVar11 + 1;
      }
      puVar16 = (uint *)((long)param_1 + (uVar1 & 0x7ffffffffffffffe) * 2);
      if (lVar14 < 0xf9d) {
        uVar2 = *puVar16;
        uVar4 = *param_1;
        uVar3 = *puVar13;
        if (uVar2 < uVar4) {
          if (uVar3 < uVar2) {
            *param_1 = uVar3;
            *puVar13 = uVar4;
            iVar9 = 1;
          }
          else {
            *param_1 = uVar2;
            *puVar16 = uVar4;
            if (*puVar13 < uVar4) {
              *puVar16 = *puVar13;
              *puVar13 = uVar4;
              goto LAB_014ac490;
            }
LAB_014ac4a0:
            iVar9 = 1;
          }
        }
        else if (uVar3 < uVar2) {
          *puVar16 = uVar3;
          *puVar13 = uVar2;
          uVar2 = *param_1;
          if (uVar2 <= *puVar16) goto LAB_014ac4a0;
          *param_1 = *puVar16;
          *puVar16 = uVar2;
LAB_014ac490:
          iVar9 = 2;
        }
        else {
          iVar9 = 0;
        }
      }
      else {
        uVar1 = uVar11 + 3;
        if (-1 < (long)uVar11) {
          uVar1 = uVar11;
        }
        iVar9 = FUN_014ac74c(param_1,(long)param_1 + (uVar1 & 0xfffffffffffffffc),puVar16,
                             (long)puVar16 + (uVar1 & 0xfffffffffffffffc),puVar13,param_3);
      }
      uVar2 = *param_1;
      puVar12 = puVar13;
      puVar15 = param_2 + -2;
      if (*puVar16 <= uVar2) goto LAB_014ac31c;
      goto LAB_014ac33c;
    }
    uVar2 = *param_1;
    uVar4 = param_1[1];
    uVar3 = param_1[2];
    uVar10 = uVar3;
    if (uVar4 < uVar2) {
      if (uVar3 < uVar4) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar4;
        param_1[1] = uVar2;
        if (uVar2 <= uVar3) goto LAB_014ac5a4;
        param_1[1] = uVar3;
      }
      param_1[2] = uVar2;
      uVar10 = uVar2;
    }
    else if (uVar3 < uVar4) {
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      uVar10 = uVar4;
      if (uVar3 < uVar2) {
        *param_1 = uVar3;
        param_1[1] = uVar2;
      }
    }
LAB_014ac5a4:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar14 = 0xc;
    puVar16 = param_1 + 3;
  }
LAB_014ac5b4:
  uVar2 = *puVar16;
  lVar17 = lVar14;
  if (uVar2 < uVar10) {
    do {
      lVar5 = lVar17 + -4;
      *(uint *)((long)param_1 + lVar17) = uVar10;
      puVar13 = param_1;
      if (lVar5 == 0) goto LAB_014ac5f0;
      uVar10 = *(uint *)((long)param_1 + lVar17 + -8);
      lVar17 = lVar5;
    } while (uVar2 < uVar10);
    puVar13 = (uint *)((long)param_1 + lVar5);
LAB_014ac5f0:
    *puVar13 = uVar2;
  }
  if (puVar16 + 1 == param_2) {
switchD_014ac528_caseD_0:
    return;
  }
  uVar10 = *puVar16;
  lVar14 = lVar14 + 4;
  puVar16 = puVar16 + 1;
  goto LAB_014ac5b4;
LAB_014ac31c:
  while (puVar12 = puVar15, param_1 != puVar12) {
    puVar15 = puVar12 + -1;
    if (*puVar12 < *puVar16) goto code_r0x014ac330;
  }
  puVar12 = param_1 + 1;
  if (*puVar13 <= uVar2) {
    if (puVar12 == puVar13) {
      return;
    }
    puVar12 = param_1 + 2;
    while (uVar4 = puVar12[-1], uVar4 <= uVar2) {
      puVar12 = puVar12 + 1;
      if (param_2 == puVar12) {
        return;
      }
    }
    puVar12[-1] = *puVar13;
    *puVar13 = uVar4;
  }
  puVar15 = puVar13;
  if (puVar12 == puVar13) {
    return;
  }
  while( true ) {
    do {
      puVar16 = puVar12;
      puVar12 = puVar16 + 1;
      uVar2 = *puVar16;
    } while (uVar2 <= *param_1);
    do {
      puVar15 = puVar15 + -1;
    } while (*param_1 < *puVar15);
    if (puVar15 <= puVar16) break;
    *puVar16 = *puVar15;
    *puVar15 = uVar2;
  }
  goto LAB_014ac270;
code_r0x014ac330:
  *param_1 = *puVar12;
  *puVar12 = uVar2;
  iVar9 = iVar9 + 1;
LAB_014ac33c:
  puVar15 = param_1 + 1;
  puVar6 = puVar16;
  puVar18 = puVar15;
  if (puVar15 < puVar12) {
    while( true ) {
      puVar16 = puVar6;
      puVar15 = puVar18 + -1;
      do {
        puVar18 = puVar15;
        puVar15 = puVar18 + 1;
        uVar2 = *puVar15;
      } while (uVar2 < *puVar16);
      puVar18 = puVar18 + 2;
      do {
        puVar12 = puVar12 + -1;
      } while (*puVar16 <= *puVar12);
      if (puVar12 < puVar15) break;
      *puVar15 = *puVar12;
      *puVar12 = uVar2;
      iVar9 = iVar9 + 1;
      puVar6 = puVar12;
      if (puVar16 != puVar15) {
        puVar6 = puVar16;
      }
    }
  }
  if (puVar15 != puVar16) {
    uVar2 = *puVar15;
    if (*puVar16 < uVar2) {
      iVar9 = iVar9 + 1;
      *puVar15 = *puVar16;
      *puVar16 = uVar2;
    }
  }
  if (iVar9 == 0) {
    bVar7 = __insertion_sort_incomplete<std::__ndk1::__less<unsigned_int,unsigned_int>&,unsigned_int*>
                      (param_1,puVar15,param_3);
    bVar8 = __insertion_sort_incomplete<std::__ndk1::__less<unsigned_int,unsigned_int>&,unsigned_int*>
                      (puVar15 + 1,param_2,param_3);
    if (bVar8) goto LAB_014ac508;
    puVar16 = puVar15 + 1;
    if (bVar7) goto LAB_014ac270;
  }
  if ((long)param_2 - (long)puVar15 <= (long)puVar15 - (long)param_1) {
    __sort<std::__ndk1::__less<unsigned_int,unsigned_int>&,unsigned_int*>
              (puVar15 + 1,param_2,param_3);
    param_2 = puVar15;
    goto LAB_014ac264;
  }
  __sort<std::__ndk1::__less<unsigned_int,unsigned_int>&,unsigned_int*>(param_1,puVar15,param_3);
  puVar16 = puVar15 + 1;
  goto LAB_014ac270;
LAB_014ac508:
  param_2 = puVar15;
  if (bVar7) {
    return;
  }
  goto LAB_014ac264;
}

