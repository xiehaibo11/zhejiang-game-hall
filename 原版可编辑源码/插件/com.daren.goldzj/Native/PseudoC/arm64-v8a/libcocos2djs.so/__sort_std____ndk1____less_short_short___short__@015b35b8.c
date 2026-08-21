
/* void std::__ndk1::__sort<std::__ndk1::__less<short, short>&, short*>(short*, short*,
   std::__ndk1::__less<short, short>&) */

void std::__ndk1::__sort<std::__ndk1::__less<short,short>&,short*>
               (short *param_1,short *param_2,__less *param_3)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  long lVar6;
  ushort *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ushort uVar11;
  ulong uVar12;
  ushort *puVar13;
  ushort *puVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  long lVar19;
  ushort *puVar20;
  
LAB_015b35dc:
  puVar14 = (ushort *)(param_2 + -1);
  puVar18 = (ushort *)param_1;
LAB_015b35e8:
  param_1 = (short *)puVar18;
  lVar15 = (long)param_2 - (long)param_1;
  uVar12 = lVar15 >> 1;
  switch(uVar12) {
  case 0:
  case 1:
    goto switchD_015b38a0_caseD_0;
  case 2:
    uVar2 = *param_1;
    if ((short)uVar2 <= param_2[-1]) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = uVar2;
    return;
  case 3:
    uVar2 = param_1[1];
    uVar4 = *param_1;
    uVar3 = param_2[-1];
    if ((short)uVar4 <= (short)uVar2) {
      if ((short)uVar2 <= (short)uVar3) {
        return;
      }
      param_1[1] = uVar3;
      param_2[-1] = uVar2;
      uVar2 = *param_1;
      if ((short)uVar2 <= param_1[1]) {
        return;
      }
      *param_1 = param_1[1];
      param_1[1] = uVar2;
      return;
    }
    if ((short)uVar3 < (short)uVar2) {
      *param_1 = uVar3;
      param_2[-1] = uVar4;
      return;
    }
    *param_1 = uVar2;
    param_1[1] = uVar4;
    if ((short)uVar4 <= param_2[-1]) {
      return;
    }
    param_1[1] = param_2[-1];
    param_2[-1] = uVar4;
    return;
  case 4:
    uVar2 = param_1[1];
    uVar4 = *param_1;
    uVar3 = param_1[2];
    uVar11 = uVar3;
    if ((short)uVar2 < (short)uVar4) {
      if ((short)uVar3 < (short)uVar2) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar2;
        param_1[1] = uVar4;
        if ((short)uVar4 <= (short)uVar3) goto LAB_015b3aa8;
        param_1[1] = uVar3;
      }
      param_1[2] = uVar4;
      uVar11 = uVar4;
    }
    else if ((short)uVar3 < (short)uVar2) {
      param_1[1] = uVar3;
      param_1[2] = uVar2;
      uVar11 = uVar2;
      if ((short)uVar3 < (short)uVar4) {
        *param_1 = uVar3;
        param_1[1] = uVar4;
      }
    }
LAB_015b3aa8:
    if ((short)uVar11 <= param_2[-1]) {
      return;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = uVar11;
    uVar2 = param_1[2];
    uVar4 = param_1[1];
    if ((short)uVar4 <= (short)uVar2) {
      return;
    }
    uVar3 = *param_1;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    if ((short)uVar3 <= (short)uVar2) {
      return;
    }
    *param_1 = uVar2;
    param_1[1] = uVar3;
    return;
  case 5:
    FUN_015b3b00(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar14,param_3);
    return;
  default:
    if (0x3d < lVar15) {
      uVar1 = uVar12;
      if ((long)uVar12 < 0) {
        uVar1 = uVar12 + 1;
      }
      puVar18 = (ushort *)((long)param_1 + (uVar1 & 0xfffffffffffffffe));
      if (lVar15 < 1999) {
        uVar2 = *puVar18;
        uVar4 = *param_1;
        uVar3 = *puVar14;
        if ((short)uVar2 < (short)uVar4) {
          if ((short)uVar3 < (short)uVar2) {
            *param_1 = uVar3;
            *puVar14 = uVar4;
            iVar10 = 1;
          }
          else {
            *param_1 = uVar2;
            *puVar18 = uVar4;
            if ((short)*puVar14 < (short)uVar4) {
              *puVar18 = *puVar14;
              *puVar14 = uVar4;
              goto LAB_015b3808;
            }
LAB_015b3818:
            iVar10 = 1;
          }
        }
        else if ((short)uVar3 < (short)uVar2) {
          *puVar18 = uVar3;
          *puVar14 = uVar2;
          uVar2 = *param_1;
          if ((short)uVar2 <= (short)*puVar18) goto LAB_015b3818;
          *param_1 = *puVar18;
          *puVar18 = uVar2;
LAB_015b3808:
          iVar10 = 2;
        }
        else {
          iVar10 = 0;
        }
      }
      else {
        uVar1 = uVar12 + 3;
        if (-1 < (long)uVar12) {
          uVar1 = uVar12;
        }
        iVar10 = FUN_015b3b00(param_1,param_1 + ((long)uVar1 >> 2),puVar18,
                              puVar18 + ((long)uVar1 >> 2),puVar14,param_3);
      }
      uVar2 = *param_1;
      puVar13 = puVar14;
      puVar16 = (ushort *)(param_2 + -2);
      if ((short)*puVar18 <= (short)uVar2) goto LAB_015b3694;
      goto LAB_015b36b4;
    }
    uVar2 = param_1[1];
    uVar4 = *param_1;
    uVar3 = param_1[2];
    uVar17 = (uint)(short)uVar3;
    iVar10 = (int)(short)uVar3;
    if ((short)uVar2 < (short)uVar4) {
      if ((short)uVar3 < (short)uVar2) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar2;
        param_1[1] = uVar4;
        if ((short)uVar4 <= iVar10) goto LAB_015b392c;
        param_1[1] = uVar3;
      }
      param_1[2] = uVar4;
      uVar17 = (int)(short)uVar4;
    }
    else if (iVar10 < (short)uVar2) {
      param_1[1] = uVar3;
      param_1[2] = uVar2;
      uVar17 = (int)(short)uVar2;
      if (iVar10 < (short)uVar4) {
        *param_1 = uVar3;
        param_1[1] = uVar4;
      }
    }
LAB_015b392c:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar15 = 6;
    puVar18 = (ushort *)(param_1 + 3);
  }
LAB_015b393c:
  uVar2 = *puVar18;
  lVar19 = lVar15;
  if ((short)uVar2 < (short)uVar17) {
    do {
      lVar6 = lVar19 + -2;
      *(short *)((long)param_1 + lVar19) = (short)uVar17;
      puVar14 = (ushort *)param_1;
      if (lVar6 == 0) goto LAB_015b3978;
      sVar5 = *(short *)((long)param_1 + lVar19 + -4);
      uVar17 = (uint)sVar5;
      lVar19 = lVar6;
    } while ((short)uVar2 < sVar5);
    puVar14 = (ushort *)((long)param_1 + lVar6);
LAB_015b3978:
    *puVar14 = uVar2;
  }
  if (puVar18 + 1 == (ushort *)param_2) {
switchD_015b38a0_caseD_0:
    return;
  }
  uVar17 = (uint)*puVar18;
  lVar15 = lVar15 + 2;
  puVar18 = puVar18 + 1;
  goto LAB_015b393c;
LAB_015b3694:
  while (puVar13 = puVar16, (ushort *)param_1 != puVar13) {
    puVar16 = puVar13 + -1;
    if ((short)*puVar13 < (short)*puVar18) goto code_r0x015b36a8;
  }
  puVar13 = (ushort *)(param_1 + 1);
  if ((short)*puVar14 <= (short)uVar2) {
    if (puVar13 == puVar14) {
      return;
    }
    puVar13 = (ushort *)(param_1 + 2);
    while (uVar4 = puVar13[-1], (short)uVar4 <= (short)uVar2) {
      puVar13 = puVar13 + 1;
      if ((ushort *)param_2 == puVar13) {
        return;
      }
    }
    puVar13[-1] = *puVar14;
    *puVar14 = uVar4;
  }
  puVar16 = puVar14;
  if (puVar13 == puVar14) {
    return;
  }
  while( true ) {
    do {
      puVar18 = puVar13;
      puVar13 = puVar18 + 1;
      uVar2 = *puVar18;
    } while ((short)uVar2 <= *param_1);
    do {
      puVar16 = puVar16 + -1;
    } while (*param_1 < (short)*puVar16);
    if (puVar16 <= puVar18) break;
    *puVar18 = *puVar16;
    *puVar16 = uVar2;
  }
  goto LAB_015b35e8;
code_r0x015b36a8:
  *param_1 = *puVar13;
  *puVar13 = uVar2;
  iVar10 = iVar10 + 1;
LAB_015b36b4:
  puVar16 = (ushort *)(param_1 + 1);
  puVar7 = puVar18;
  puVar20 = puVar16;
  if (puVar16 < puVar13) {
    while( true ) {
      puVar18 = puVar7;
      puVar16 = puVar20 + -1;
      do {
        puVar20 = puVar16;
        puVar16 = puVar20 + 1;
        uVar2 = *puVar16;
      } while ((short)uVar2 < (short)*puVar18);
      puVar20 = puVar20 + 2;
      do {
        puVar13 = puVar13 + -1;
      } while ((short)*puVar18 <= (short)*puVar13);
      if (puVar13 < puVar16) break;
      *puVar16 = *puVar13;
      *puVar13 = uVar2;
      iVar10 = iVar10 + 1;
      puVar7 = puVar13;
      if (puVar18 != puVar16) {
        puVar7 = puVar18;
      }
    }
  }
  if (puVar16 != puVar18) {
    uVar2 = *puVar16;
    if ((short)*puVar18 < (short)uVar2) {
      iVar10 = iVar10 + 1;
      *puVar16 = *puVar18;
      *puVar18 = uVar2;
    }
  }
  if (iVar10 == 0) {
    bVar8 = __insertion_sort_incomplete<std::__ndk1::__less<short,short>&,short*>
                      (param_1,(short *)puVar16,param_3);
    bVar9 = __insertion_sort_incomplete<std::__ndk1::__less<short,short>&,short*>
                      ((short *)(puVar16 + 1),param_2,param_3);
    if (bVar9) goto LAB_015b3880;
    puVar18 = puVar16 + 1;
    if (bVar8) goto LAB_015b35e8;
  }
  if ((long)param_2 - (long)puVar16 <= (long)puVar16 - (long)param_1) {
    __sort<std::__ndk1::__less<short,short>&,short*>((short *)(puVar16 + 1),param_2,param_3);
    param_2 = (short *)puVar16;
    goto LAB_015b35dc;
  }
  __sort<std::__ndk1::__less<short,short>&,short*>(param_1,(short *)puVar16,param_3);
  puVar18 = puVar16 + 1;
  goto LAB_015b35e8;
LAB_015b3880:
  param_2 = (short *)puVar16;
  if (bVar8) {
    return;
  }
  goto LAB_015b35dc;
}

