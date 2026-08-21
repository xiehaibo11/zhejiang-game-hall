
void FUN_0153a1d8(RegExpTree **param_1,RegExpTree **param_2,RegExpTree **param_3,undefined8 *param_4
                 ,long param_5,long param_6,RegExpTree **param_7,long param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  RegExpTree **ppRVar8;
  RegExpTree **ppRVar9;
  long lVar10;
  RegExpTree **ppRVar11;
  RegExpTree **ppRVar12;
  ulong uVar13;
  RegExpTree *pRVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  RegExpTree **ppRVar18;
  long lVar19;
  Mapping *pMVar20;
  ulong uVar21;
  RegExpTree **ppRVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  RegExpTree *pRVar27;
  undefined8 uVar28;
  RegExpTree *pRVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  RegExpTree **local_70;
  long local_68;
  
  local_70 = param_3;
  local_68 = param_6;
  if (param_6 == 0) {
    return;
  }
  while ((param_8 < local_68 && (param_8 < param_5))) {
    if (param_5 == 0) {
      return;
    }
    lVar23 = 0;
    lVar19 = 0;
    while( true ) {
      ppRVar9 = (RegExpTree **)((long)param_1 + lVar19);
      iVar4 = v8::internal::CompareFirstCharCaseIndependent((Mapping *)*param_4,param_2,ppRVar9);
      if (iVar4 < 0) break;
      lVar23 = lVar23 + 1;
      lVar19 = lVar19 + 8;
      if (param_5 == lVar23) {
        return;
      }
    }
    lVar6 = param_5 - lVar23;
    if (lVar6 < local_68) {
      lVar19 = local_68;
      if (local_68 < 0) {
        lVar19 = local_68 + 1;
      }
      lVar19 = lVar19 >> 1;
      ppRVar18 = param_2 + lVar19;
      param_1 = ppRVar9;
      if ((long)param_2 - (long)ppRVar9 != 0) {
        uVar21 = (long)param_2 - (long)ppRVar9 >> 3;
        do {
          uVar24 = uVar21 >> 1;
          iVar4 = v8::internal::CompareFirstCharCaseIndependent
                            ((Mapping *)*param_4,ppRVar18,param_1 + uVar24);
          uVar13 = uVar21 + ~uVar24;
          uVar21 = uVar24;
          if (-1 < iVar4) {
            param_1 = param_1 + uVar24 + 1;
            uVar21 = uVar13;
          }
        } while (uVar21 != 0);
      }
      lVar6 = (long)param_1 - (long)ppRVar9 >> 3;
    }
    else {
      if (param_5 + -1 == lVar23) {
        pRVar14 = param_1[lVar23];
        param_1[lVar23] = *param_2;
        *param_2 = pRVar14;
        return;
      }
      if (lVar6 < 0) {
        lVar6 = lVar6 + 1;
      }
      lVar6 = lVar6 >> 1;
      param_1 = (RegExpTree **)((long)param_1 + lVar19 + lVar6 * 8);
      ppRVar18 = param_2;
      if ((long)local_70 - (long)param_2 != 0) {
        uVar21 = (long)local_70 - (long)param_2 >> 3;
        ppRVar22 = param_2;
        do {
          uVar13 = uVar21 >> 1;
          iVar4 = v8::internal::CompareFirstCharCaseIndependent
                            ((Mapping *)*param_4,ppRVar22 + uVar13,param_1);
          ppRVar18 = ppRVar22 + uVar13 + 1;
          uVar21 = uVar21 + ~uVar13;
          if (-1 < iVar4) {
            ppRVar18 = ppRVar22;
            uVar21 = uVar13;
          }
          ppRVar22 = ppRVar18;
        } while (uVar21 != 0);
      }
      lVar19 = (long)ppRVar18 - (long)param_2 >> 3;
    }
    lVar5 = (param_5 - lVar6) - lVar23;
    ppRVar22 = ppRVar18;
    if ((param_1 != param_2) && (ppRVar22 = param_1, param_2 != ppRVar18)) {
      if (param_1 + 1 == param_2) {
        pRVar14 = *param_1;
        sVar3 = (long)ppRVar18 - (long)param_2;
        if (sVar3 != 0) {
          memmove(param_1,param_2,sVar3);
        }
        param_1[(long)sVar3 >> 3] = pRVar14;
        ppRVar22 = param_1 + ((long)sVar3 >> 3);
      }
      else if (param_2 + 1 == ppRVar18) {
        pRVar14 = ppRVar18[-1];
        sVar3 = (long)(ppRVar18 + -1) - (long)param_1;
        ppRVar22 = ppRVar18;
        if (sVar3 != 0) {
          ppRVar22 = (RegExpTree **)((long)ppRVar18 - sVar3);
          memmove(ppRVar22,param_1,sVar3);
        }
        *param_1 = pRVar14;
      }
      else {
        lVar10 = (long)param_2 - (long)param_1 >> 3;
        lVar7 = (long)ppRVar18 - (long)param_2 >> 3;
        lVar17 = lVar10;
        lVar16 = lVar7;
        if (lVar10 == lVar7) {
          uVar13 = ((long)param_2 - (long)param_1) - 8;
          uVar21 = (uVar13 >> 3) + 1;
          ppRVar8 = param_2;
          ppRVar11 = param_1;
          ppRVar22 = param_2;
          if ((3 < uVar21) &&
             ((uVar13 = uVar13 & 0xfffffffffffffff8,
              (RegExpTree **)((long)param_2 + uVar13 + 8) <= param_1 ||
              ((RegExpTree **)((long)param_1 + uVar13 + 8) <= param_2)))) {
            uVar24 = uVar21 & 0x3ffffffffffffffc;
            lVar17 = 0;
            uVar13 = uVar24;
            do {
              puVar1 = (undefined8 *)((long)param_1 + lVar17);
              puVar2 = (undefined8 *)((long)param_2 + lVar17);
              uVar25 = *puVar2;
              uVar28 = puVar2[3];
              uVar26 = puVar2[2];
              uVar31 = puVar1[1];
              uVar30 = *puVar1;
              uVar33 = puVar1[3];
              uVar32 = puVar1[2];
              uVar13 = uVar13 - 4;
              lVar17 = lVar17 + 0x20;
              puVar1[1] = puVar2[1];
              *puVar1 = uVar25;
              puVar1[3] = uVar28;
              puVar1[2] = uVar26;
              puVar2[1] = uVar31;
              *puVar2 = uVar30;
              puVar2[3] = uVar33;
              puVar2[2] = uVar32;
            } while (uVar13 != 0);
            ppRVar8 = param_2 + uVar24;
            ppRVar11 = param_1 + uVar24;
            if (uVar21 == uVar24) goto LAB_0153a580;
          }
          do {
            pRVar14 = *ppRVar11;
            ppRVar12 = ppRVar11 + 1;
            *ppRVar11 = *ppRVar8;
            *ppRVar8 = pRVar14;
            ppRVar8 = ppRVar8 + 1;
            ppRVar11 = ppRVar12;
          } while (param_2 != ppRVar12);
        }
        else {
          do {
            lVar15 = lVar16;
            lVar16 = 0;
            if (lVar15 != 0) {
              lVar16 = lVar17 / lVar15;
            }
            lVar16 = lVar17 - lVar16 * lVar15;
            lVar17 = lVar15;
          } while (lVar16 != 0);
          if (lVar15 != 0) {
            ppRVar22 = param_1 + lVar15;
            do {
              ppRVar22 = ppRVar22 + -1;
              pRVar14 = *ppRVar22;
              ppRVar11 = ppRVar22;
              ppRVar8 = ppRVar22 + lVar10;
              do {
                ppRVar12 = ppRVar8;
                lVar17 = (long)ppRVar18 - (long)ppRVar12 >> 3;
                ppRVar8 = ppRVar12 + lVar10;
                if (lVar17 <= lVar10) {
                  ppRVar8 = param_1 + (lVar10 - lVar17);
                }
                *ppRVar11 = *ppRVar12;
                ppRVar11 = ppRVar12;
              } while (ppRVar8 != ppRVar22);
              *ppRVar12 = pRVar14;
            } while (ppRVar22 != param_1);
          }
          ppRVar22 = param_1 + lVar7;
        }
      }
    }
LAB_0153a580:
    if (lVar19 + lVar6 < ((local_68 + param_5) - (lVar19 + lVar6)) - lVar23) {
      FUN_0153a1d8(ppRVar9,param_1,ppRVar22,param_4,lVar6,lVar19,param_7,param_8);
      lVar19 = local_68 - lVar19;
      ppRVar9 = ppRVar22;
      lVar6 = lVar5;
      param_2 = ppRVar18;
    }
    else {
      FUN_0153a1d8(ppRVar22,ppRVar18,local_70,param_4,lVar5,local_68 - lVar19,param_7,param_8);
      param_2 = param_1;
      local_70 = ppRVar22;
    }
    param_1 = ppRVar9;
    param_5 = lVar6;
    local_68 = lVar19;
    if (lVar19 == 0) {
      return;
    }
  }
  if (param_5 <= local_68) {
    if (param_1 == param_2) {
      return;
    }
    uVar13 = (long)param_2 + (-8 - (long)param_1);
    uVar21 = (uVar13 >> 3) + 1;
    ppRVar9 = param_1;
    ppRVar18 = param_7;
    if ((3 < uVar21) &&
       ((lVar23 = (uVar13 & 0xfffffffffffffff8) + 8,
        (RegExpTree **)((long)param_1 + lVar23) <= param_7 ||
        ((RegExpTree **)((long)param_7 + lVar23) <= param_1)))) {
      uVar24 = uVar21 & 0x3ffffffffffffffc;
      ppRVar9 = param_1 + 2;
      ppRVar22 = param_7 + uVar24;
      ppRVar18 = param_7 + 2;
      uVar13 = uVar24;
      do {
        ppRVar8 = ppRVar9 + -1;
        pRVar14 = ppRVar9[-2];
        pRVar29 = ppRVar9[1];
        pRVar27 = *ppRVar9;
        ppRVar9 = ppRVar9 + 4;
        uVar13 = uVar13 - 4;
        ppRVar18[-1] = *ppRVar8;
        ppRVar18[-2] = pRVar14;
        ppRVar18[1] = pRVar29;
        *ppRVar18 = pRVar27;
        ppRVar18 = ppRVar18 + 4;
      } while (uVar13 != 0);
      ppRVar9 = param_1 + uVar24;
      ppRVar18 = ppRVar22;
      if (uVar21 == uVar24) goto LAB_0153a7bc;
    }
    do {
      ppRVar8 = ppRVar9 + 1;
      ppRVar22 = ppRVar18 + 1;
      *ppRVar18 = *ppRVar9;
      ppRVar9 = ppRVar8;
      ppRVar18 = ppRVar22;
    } while (param_2 != ppRVar8);
LAB_0153a7bc:
    if (ppRVar22 == param_7) {
      return;
    }
    pMVar20 = (Mapping *)*param_4;
    do {
      if (param_2 == local_70) {
        if ((long)ppRVar22 - (long)param_7 != 0) {
          memmove(param_1,param_7,(long)ppRVar22 - (long)param_7);
          return;
        }
        return;
      }
      iVar4 = v8::internal::CompareFirstCharCaseIndependent(pMVar20,param_2,param_7);
      if (iVar4 < 0) {
        pRVar14 = *param_2;
        param_2 = param_2 + 1;
        ppRVar9 = param_7;
      }
      else {
        ppRVar9 = param_7 + 1;
        pRVar14 = *param_7;
      }
      *param_1 = pRVar14;
      param_1 = param_1 + 1;
      param_7 = ppRVar9;
    } while (ppRVar9 != ppRVar22);
    return;
  }
  if (param_2 == local_70) {
    return;
  }
  uVar13 = (long)local_70 + (-8 - (long)param_2);
  uVar21 = (uVar13 >> 3) + 1;
  ppRVar9 = param_2;
  ppRVar18 = param_7;
  if ((3 < uVar21) &&
     ((lVar23 = (uVar13 & 0xfffffffffffffff8) + 8,
      (RegExpTree **)((long)param_2 + lVar23) <= param_7 ||
      ((RegExpTree **)((long)param_7 + lVar23) <= param_2)))) {
    uVar24 = uVar21 & 0x3ffffffffffffffc;
    ppRVar9 = param_7 + 2;
    ppRVar22 = param_7 + uVar24;
    ppRVar18 = param_2 + 2;
    uVar13 = uVar24;
    do {
      ppRVar8 = ppRVar18 + -1;
      pRVar14 = ppRVar18[-2];
      pRVar29 = ppRVar18[1];
      pRVar27 = *ppRVar18;
      uVar13 = uVar13 - 4;
      ppRVar18 = ppRVar18 + 4;
      ppRVar9[-1] = *ppRVar8;
      ppRVar9[-2] = pRVar14;
      ppRVar9[1] = pRVar29;
      *ppRVar9 = pRVar27;
      ppRVar9 = ppRVar9 + 4;
    } while (uVar13 != 0);
    ppRVar9 = param_2 + uVar24;
    ppRVar18 = ppRVar22;
    if (uVar21 == uVar24) goto joined_r0x0153a6c4;
  }
  do {
    ppRVar8 = ppRVar9 + 1;
    ppRVar22 = ppRVar18 + 1;
    *ppRVar18 = *ppRVar9;
    ppRVar9 = ppRVar8;
    ppRVar18 = ppRVar22;
  } while (local_70 != ppRVar8);
joined_r0x0153a6c4:
  while( true ) {
    if (ppRVar22 == param_7) {
      return;
    }
    local_70 = local_70 + -1;
    if (param_1 == param_2) break;
    ppRVar18 = param_2 + -1;
    ppRVar9 = ppRVar22 + -1;
    iVar4 = v8::internal::CompareFirstCharCaseIndependent((Mapping *)*param_4,ppRVar9,ppRVar18);
    if (iVar4 < 0) {
      pRVar14 = *ppRVar18;
      param_2 = ppRVar18;
      ppRVar9 = ppRVar22;
    }
    else {
      pRVar14 = *ppRVar9;
    }
    *local_70 = pRVar14;
    ppRVar22 = ppRVar9;
  }
  lVar23 = 0;
  do {
    *(undefined8 *)((long)local_70 + lVar23) = *(undefined8 *)((long)ppRVar22 + lVar23 + -8);
    lVar23 = lVar23 + -8;
  } while ((long)param_7 - (long)ppRVar22 != lVar23);
  return;
}

