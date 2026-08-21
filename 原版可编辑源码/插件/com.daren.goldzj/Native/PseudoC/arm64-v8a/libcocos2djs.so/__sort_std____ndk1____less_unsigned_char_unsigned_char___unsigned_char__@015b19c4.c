
/* void std::__ndk1::__sort<std::__ndk1::__less<unsigned char, unsigned char>&, unsigned
   char*>(unsigned char*, unsigned char*, std::__ndk1::__less<unsigned char, unsigned char>&) */

void std::__ndk1::__sort<std::__ndk1::__less<unsigned_char,unsigned_char>&,unsigned_char*>
               (uchar *param_1,uchar *param_2,__less *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  byte bVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  
LAB_015b19e8:
  pbVar16 = param_2 + -1;
  pbVar13 = param_1;
LAB_015b19f4:
  param_1 = pbVar13;
  uVar10 = (long)param_2 - (long)param_1;
  switch(uVar10) {
  case 0:
  case 1:
    goto switchD_015b1c8c_caseD_0;
  case 2:
    bVar1 = *param_1;
    if (bVar1 <= param_2[-1]) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = bVar1;
    return;
  case 3:
    bVar1 = param_1[1];
    bVar3 = *param_1;
    bVar2 = param_2[-1];
    if (bVar3 <= bVar1) {
      if (bVar1 <= bVar2) {
        return;
      }
      param_1[1] = bVar2;
      param_2[-1] = bVar1;
      bVar1 = *param_1;
      if (bVar1 <= param_1[1]) {
        return;
      }
      *param_1 = param_1[1];
      param_1[1] = bVar1;
      return;
    }
    if (bVar2 < bVar1) {
      *param_1 = bVar2;
      param_2[-1] = bVar3;
      return;
    }
    *param_1 = bVar1;
    param_1[1] = bVar3;
    if (bVar3 <= param_2[-1]) {
      return;
    }
    param_1[1] = param_2[-1];
    param_2[-1] = bVar3;
    return;
  case 4:
    bVar1 = param_1[1];
    bVar3 = *param_1;
    bVar2 = param_1[2];
    bVar9 = bVar2;
    if (bVar1 < bVar3) {
      if (bVar2 < bVar1) {
        *param_1 = bVar2;
      }
      else {
        *param_1 = bVar1;
        param_1[1] = bVar3;
        if (bVar3 <= bVar2) goto LAB_015b1e98;
        param_1[1] = bVar2;
      }
      param_1[2] = bVar3;
      bVar9 = bVar3;
    }
    else if (bVar2 < bVar1) {
      param_1[1] = bVar2;
      param_1[2] = bVar1;
      bVar9 = bVar1;
      if (bVar2 < bVar3) {
        *param_1 = bVar2;
        param_1[1] = bVar3;
      }
    }
LAB_015b1e98:
    if (bVar9 <= param_2[-1]) {
      return;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = bVar9;
    bVar1 = param_1[2];
    bVar3 = param_1[1];
    if (bVar3 <= bVar1) {
      return;
    }
    bVar2 = *param_1;
    param_1[1] = bVar1;
    param_1[2] = bVar3;
    if (bVar2 <= bVar1) {
      return;
    }
    *param_1 = bVar1;
    param_1[1] = bVar2;
    return;
  case 5:
    FUN_015b1ef0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,pbVar16,param_3);
    return;
  default:
    if (0x1e < (long)uVar10) {
      pbVar13 = param_1 + (uVar10 >> 1);
      if ((long)uVar10 < 1000) {
        bVar1 = *pbVar13;
        bVar3 = *param_1;
        bVar2 = *pbVar16;
        if (bVar1 < bVar3) {
          if (bVar2 < bVar1) {
            *param_1 = bVar2;
            *pbVar16 = bVar3;
            iVar8 = 1;
          }
          else {
            *param_1 = bVar1;
            *pbVar13 = bVar3;
            if (*pbVar16 < bVar3) {
              *pbVar13 = *pbVar16;
              *pbVar16 = bVar3;
              goto LAB_015b1bf4;
            }
LAB_015b1c04:
            iVar8 = 1;
          }
        }
        else if (bVar2 < bVar1) {
          *pbVar13 = bVar2;
          *pbVar16 = bVar1;
          bVar1 = *param_1;
          if (bVar1 <= *pbVar13) goto LAB_015b1c04;
          *param_1 = *pbVar13;
          *pbVar13 = bVar1;
LAB_015b1bf4:
          iVar8 = 2;
        }
        else {
          iVar8 = 0;
        }
      }
      else {
        iVar8 = FUN_015b1ef0(param_1,param_1 + (uVar10 >> 2),pbVar13,pbVar13 + (uVar10 >> 2),pbVar16
                             ,param_3);
      }
      bVar1 = *param_1;
      pbVar11 = pbVar16;
      pbVar12 = param_2 + -2;
      if (*pbVar13 <= bVar1) goto LAB_015b1a80;
      goto LAB_015b1aa0;
    }
    bVar1 = param_1[1];
    bVar3 = *param_1;
    bVar2 = param_1[2];
    bVar9 = bVar2;
    if (bVar1 < bVar3) {
      if (bVar2 < bVar1) {
        *param_1 = bVar2;
      }
      else {
        *param_1 = bVar1;
        param_1[1] = bVar3;
        if (bVar3 <= bVar2) goto LAB_015b1d18;
        param_1[1] = bVar2;
      }
      param_1[2] = bVar3;
      bVar9 = bVar3;
    }
    else if (bVar2 < bVar1) {
      param_1[1] = bVar2;
      param_1[2] = bVar1;
      bVar9 = bVar1;
      if (bVar2 < bVar3) {
        *param_1 = bVar2;
        param_1[1] = bVar3;
      }
    }
LAB_015b1d18:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar14 = 0;
    pbVar13 = param_1 + 3;
  }
LAB_015b1d28:
  bVar1 = *pbVar13;
  lVar4 = lVar14;
  if (bVar1 < bVar9) {
    do {
      lVar15 = lVar4;
      param_1[lVar15 + 3] = bVar9;
      pbVar16 = param_1;
      if (lVar15 == -2) goto LAB_015b1d68;
      bVar9 = param_1[lVar15 + 1];
      lVar4 = lVar15 + -1;
    } while (bVar1 < bVar9);
    pbVar16 = param_1 + lVar15 + 2;
LAB_015b1d68:
    *pbVar16 = bVar1;
  }
  if (pbVar13 + 1 == param_2) {
switchD_015b1c8c_caseD_0:
    return;
  }
  bVar9 = *pbVar13;
  lVar14 = lVar14 + 1;
  pbVar13 = pbVar13 + 1;
  goto LAB_015b1d28;
LAB_015b1a80:
  while (pbVar11 = pbVar12, param_1 != pbVar11) {
    pbVar12 = pbVar11 + -1;
    if (*pbVar11 < *pbVar13) goto code_r0x015b1a94;
  }
  pbVar11 = param_1 + 1;
  if (*pbVar16 <= bVar1) {
    if (pbVar11 == pbVar16) {
      return;
    }
    pbVar11 = param_1 + 2;
    while (bVar3 = pbVar11[-1], bVar3 <= bVar1) {
      pbVar11 = pbVar11 + 1;
      if (param_2 == pbVar11) {
        return;
      }
    }
    pbVar11[-1] = *pbVar16;
    *pbVar16 = bVar3;
  }
  pbVar12 = pbVar16;
  if (pbVar11 == pbVar16) {
    return;
  }
  while( true ) {
    do {
      pbVar13 = pbVar11;
      pbVar11 = pbVar13 + 1;
      bVar1 = *pbVar13;
    } while (bVar1 <= *param_1);
    do {
      pbVar12 = pbVar12 + -1;
    } while (*param_1 < *pbVar12);
    if (pbVar12 <= pbVar13) break;
    *pbVar13 = *pbVar12;
    *pbVar12 = bVar1;
  }
  goto LAB_015b19f4;
code_r0x015b1a94:
  *param_1 = *pbVar11;
  *pbVar11 = bVar1;
  iVar8 = iVar8 + 1;
LAB_015b1aa0:
  pbVar12 = param_1 + 1;
  pbVar5 = pbVar13;
  pbVar17 = pbVar12;
  if (pbVar12 < pbVar11) {
    while( true ) {
      pbVar13 = pbVar5;
      pbVar12 = pbVar17 + -1;
      do {
        pbVar17 = pbVar12;
        pbVar12 = pbVar17 + 1;
        bVar1 = *pbVar12;
      } while (bVar1 < *pbVar13);
      pbVar17 = pbVar17 + 2;
      do {
        pbVar11 = pbVar11 + -1;
      } while (*pbVar13 <= *pbVar11);
      if (pbVar11 < pbVar12) break;
      *pbVar12 = *pbVar11;
      *pbVar11 = bVar1;
      iVar8 = iVar8 + 1;
      pbVar5 = pbVar11;
      if (pbVar13 != pbVar12) {
        pbVar5 = pbVar13;
      }
    }
  }
  if (pbVar12 != pbVar13) {
    bVar1 = *pbVar12;
    if (*pbVar13 < bVar1) {
      iVar8 = iVar8 + 1;
      *pbVar12 = *pbVar13;
      *pbVar13 = bVar1;
    }
  }
  if (iVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<std::__ndk1::__less<unsigned_char,unsigned_char>&,unsigned_char*>
                      (param_1,pbVar12,param_3);
    bVar7 = __insertion_sort_incomplete<std::__ndk1::__less<unsigned_char,unsigned_char>&,unsigned_char*>
                      (pbVar12 + 1,param_2,param_3);
    if (bVar7) goto LAB_015b1c6c;
    pbVar13 = pbVar12 + 1;
    if (bVar6) goto LAB_015b19f4;
  }
  if ((long)param_2 - (long)pbVar12 <= (long)pbVar12 - (long)param_1) {
    __sort<std::__ndk1::__less<unsigned_char,unsigned_char>&,unsigned_char*>
              (pbVar12 + 1,param_2,param_3);
    param_2 = pbVar12;
    goto LAB_015b19e8;
  }
  __sort<std::__ndk1::__less<unsigned_char,unsigned_char>&,unsigned_char*>(param_1,pbVar12,param_3);
  pbVar13 = pbVar12 + 1;
  goto LAB_015b19f4;
LAB_015b1c6c:
  param_2 = pbVar12;
  if (bVar6) {
    return;
  }
  goto LAB_015b19e8;
}

