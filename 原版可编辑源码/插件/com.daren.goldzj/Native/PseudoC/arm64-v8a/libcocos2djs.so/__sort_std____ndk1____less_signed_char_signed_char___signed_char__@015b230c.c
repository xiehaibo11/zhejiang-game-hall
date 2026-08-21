
/* void std::__ndk1::__sort<std::__ndk1::__less<signed char, signed char>&, signed char*>(signed
   char*, signed char*, std::__ndk1::__less<signed char, signed char>&) */

void std::__ndk1::__sort<std::__ndk1::__less<signed_char,signed_char>&,signed_char*>
               (signed *param_1,signed *param_2,__less *param_3)

{
  signed sVar1;
  signed sVar2;
  signed sVar3;
  long lVar4;
  signed *psVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  signed *psVar10;
  signed *psVar11;
  signed *psVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  signed *psVar17;
  signed *psVar18;
  
LAB_015b2330:
  psVar17 = param_2 + -1;
  psVar12 = param_1;
LAB_015b233c:
  param_1 = psVar12;
  uVar9 = (long)param_2 - (long)param_1;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_015b25d4_caseD_0;
  case 2:
    sVar1 = *param_1;
    if ((int)(char)sVar1 <= (int)(uint)(byte)param_2[-1]) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = sVar1;
    return;
  case 3:
    sVar1 = param_1[1];
    sVar3 = *param_1;
    sVar2 = param_2[-1];
    if ((char)sVar3 <= (char)sVar1) {
      if ((int)(char)sVar1 <= (int)(uint)(byte)sVar2) {
        return;
      }
      param_1[1] = sVar2;
      param_2[-1] = sVar1;
      sVar1 = *param_1;
      if ((char)sVar1 <= (char)param_1[1]) {
        return;
      }
      *param_1 = param_1[1];
      param_1[1] = sVar1;
      return;
    }
    if ((int)(uint)(byte)sVar2 < (int)(char)sVar1) {
      *param_1 = sVar2;
      param_2[-1] = sVar3;
      return;
    }
    *param_1 = sVar1;
    param_1[1] = sVar3;
    if ((int)(char)sVar3 <= (int)(uint)(byte)param_2[-1]) {
      return;
    }
    param_1[1] = param_2[-1];
    param_2[-1] = sVar3;
    return;
  case 4:
    sVar1 = param_1[1];
    iVar8 = (int)(char)sVar1;
    sVar3 = *param_1;
    sVar2 = param_1[2];
    iVar14 = (int)(char)sVar2;
    if ((char)sVar1 < (char)sVar3) {
      if ((char)sVar2 < (char)sVar1) {
        *param_1 = sVar2;
      }
      else {
        *param_1 = sVar1;
        param_1[1] = sVar3;
        if ((char)sVar3 <= iVar14) goto LAB_015b27dc;
        param_1[1] = sVar2;
      }
      param_1[2] = sVar3;
      iVar8 = (int)(char)sVar3;
    }
    else {
      if (iVar14 < (char)sVar1) {
        param_1[1] = sVar2;
        param_1[2] = sVar1;
        if (iVar14 < (char)sVar3) {
          *param_1 = sVar2;
          param_1[1] = sVar3;
        }
        goto LAB_015b27e0;
      }
LAB_015b27dc:
      iVar8 = (int)(char)sVar2;
    }
LAB_015b27e0:
    if (iVar8 <= (int)(uint)(byte)param_2[-1]) {
      return;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = SUB41(iVar8,0);
    sVar1 = param_1[2];
    sVar3 = param_1[1];
    if ((char)sVar3 <= (char)sVar1) {
      return;
    }
    sVar2 = *param_1;
    param_1[1] = sVar1;
    param_1[2] = sVar3;
    if ((char)sVar2 <= (char)sVar1) {
      return;
    }
    *param_1 = sVar1;
    param_1[1] = sVar2;
    return;
  case 5:
    FUN_015b2838(param_1,param_1 + 1,param_1 + 2,param_1 + 3,psVar17,param_3);
    return;
  default:
    if (0x1e < (long)uVar9) {
      psVar12 = param_1 + (uVar9 >> 1);
      if ((long)uVar9 < 1000) {
        sVar1 = *psVar12;
        sVar3 = *param_1;
        sVar2 = *psVar17;
        if ((char)sVar1 < (char)sVar3) {
          if ((char)sVar2 < (char)sVar1) {
            *param_1 = sVar2;
            *psVar17 = sVar3;
            iVar8 = 1;
          }
          else {
            *param_1 = sVar1;
            *psVar12 = sVar3;
            if ((char)*psVar17 < (char)sVar3) {
              *psVar12 = *psVar17;
              *psVar17 = sVar3;
              goto LAB_015b253c;
            }
LAB_015b254c:
            iVar8 = 1;
          }
        }
        else if ((char)sVar2 < (char)sVar1) {
          *psVar12 = sVar2;
          *psVar17 = sVar1;
          sVar1 = *param_1;
          if ((char)sVar1 <= (char)*psVar12) goto LAB_015b254c;
          *param_1 = *psVar12;
          *psVar12 = sVar1;
LAB_015b253c:
          iVar8 = 2;
        }
        else {
          iVar8 = 0;
        }
      }
      else {
        iVar8 = FUN_015b2838(param_1,param_1 + (uVar9 >> 2),psVar12,psVar12 + (uVar9 >> 2),psVar17,
                             param_3);
      }
      sVar1 = *param_1;
      psVar10 = psVar17;
      psVar11 = param_2 + -2;
      if ((char)*psVar12 <= (char)sVar1) goto LAB_015b23c8;
      goto LAB_015b23e8;
    }
    sVar1 = param_1[1];
    sVar3 = *param_1;
    sVar2 = param_1[2];
    uVar13 = (uint)(char)sVar2;
    iVar8 = (int)(char)sVar2;
    if ((char)sVar1 < (char)sVar3) {
      if ((char)sVar2 < (char)sVar1) {
        *param_1 = sVar2;
      }
      else {
        *param_1 = sVar1;
        param_1[1] = sVar3;
        if ((char)sVar3 <= iVar8) goto LAB_015b2660;
        param_1[1] = sVar2;
      }
      param_1[2] = sVar3;
      uVar13 = (int)(char)sVar3;
    }
    else if (iVar8 < (char)sVar1) {
      param_1[1] = sVar2;
      param_1[2] = sVar1;
      uVar13 = (int)(char)sVar1;
      if (iVar8 < (char)sVar3) {
        *param_1 = sVar2;
        param_1[1] = sVar3;
      }
    }
LAB_015b2660:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar15 = 0;
    psVar12 = param_1 + 3;
  }
LAB_015b2670:
  sVar1 = *psVar12;
  lVar4 = lVar15;
  if ((char)sVar1 < (char)uVar13) {
    do {
      lVar16 = lVar4;
      param_1[lVar16 + 3] = SUB41(uVar13,0);
      psVar17 = param_1;
      if (lVar16 == -2) goto LAB_015b26b0;
      uVar13 = (uint)(char)param_1[lVar16 + 1];
      lVar4 = lVar16 + -1;
    } while ((char)sVar1 < (char)param_1[lVar16 + 1]);
    psVar17 = param_1 + lVar16 + 2;
LAB_015b26b0:
    *psVar17 = sVar1;
  }
  if (psVar12 + 1 == param_2) {
switchD_015b25d4_caseD_0:
    return;
  }
  uVar13 = (uint)(byte)*psVar12;
  lVar15 = lVar15 + 1;
  psVar12 = psVar12 + 1;
  goto LAB_015b2670;
LAB_015b23c8:
  while (psVar10 = psVar11, param_1 != psVar10) {
    psVar11 = psVar10 + -1;
    if ((char)*psVar10 < (char)*psVar12) goto code_r0x015b23dc;
  }
  psVar10 = param_1 + 1;
  if ((int)(char)*psVar17 <= (int)(char)sVar1) {
    if (psVar10 == psVar17) {
      return;
    }
    psVar10 = param_1 + 2;
    while (sVar3 = psVar10[-1], (int)(uint)(byte)sVar3 <= (int)(char)sVar1) {
      psVar10 = psVar10 + 1;
      if (param_2 == psVar10) {
        return;
      }
    }
    psVar10[-1] = *psVar17;
    *psVar17 = sVar3;
  }
  psVar11 = psVar17;
  if (psVar10 == psVar17) {
    return;
  }
  while( true ) {
    do {
      psVar12 = psVar10;
      psVar10 = psVar12 + 1;
      sVar1 = *psVar12;
    } while ((char)sVar1 <= (char)*param_1);
    do {
      psVar11 = psVar11 + -1;
    } while ((char)*param_1 < (char)*psVar11);
    if (psVar11 <= psVar12) break;
    *psVar12 = *psVar11;
    *psVar11 = sVar1;
  }
  goto LAB_015b233c;
code_r0x015b23dc:
  *param_1 = *psVar10;
  *psVar10 = sVar1;
  iVar8 = iVar8 + 1;
LAB_015b23e8:
  psVar11 = param_1 + 1;
  psVar5 = psVar12;
  psVar18 = psVar11;
  if (psVar11 < psVar10) {
    while( true ) {
      psVar12 = psVar5;
      psVar11 = psVar18 + -1;
      do {
        psVar18 = psVar11;
        psVar11 = psVar18 + 1;
        sVar1 = *psVar11;
      } while ((char)sVar1 < (char)*psVar12);
      psVar18 = psVar18 + 2;
      do {
        psVar10 = psVar10 + -1;
      } while ((char)*psVar12 <= (char)*psVar10);
      if (psVar10 < psVar11) break;
      *psVar11 = *psVar10;
      *psVar10 = sVar1;
      iVar8 = iVar8 + 1;
      psVar5 = psVar10;
      if (psVar12 != psVar11) {
        psVar5 = psVar12;
      }
    }
  }
  if (psVar11 != psVar12) {
    sVar1 = *psVar11;
    if ((char)*psVar12 < (char)sVar1) {
      iVar8 = iVar8 + 1;
      *psVar11 = *psVar12;
      *psVar12 = sVar1;
    }
  }
  if (iVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<std::__ndk1::__less<signed_char,signed_char>&,signed_char*>
                      (param_1,psVar11,param_3);
    bVar7 = __insertion_sort_incomplete<std::__ndk1::__less<signed_char,signed_char>&,signed_char*>
                      (psVar11 + 1,param_2,param_3);
    if (bVar7) goto LAB_015b25b4;
    psVar12 = psVar11 + 1;
    if (bVar6) goto LAB_015b233c;
  }
  if ((long)param_2 - (long)psVar11 <= (long)psVar11 - (long)param_1) {
    __sort<std::__ndk1::__less<signed_char,signed_char>&,signed_char*>(psVar11 + 1,param_2,param_3);
    param_2 = psVar11;
    goto LAB_015b2330;
  }
  __sort<std::__ndk1::__less<signed_char,signed_char>&,signed_char*>(param_1,psVar11,param_3);
  psVar12 = psVar11 + 1;
  goto LAB_015b233c;
LAB_015b25b4:
  param_2 = psVar11;
  if (bVar6) {
    return;
  }
  goto LAB_015b2330;
}

