
void FUN_01539ea0(RegExpTree **param_1,RegExpTree **param_2,undefined8 *param_3,ulong param_4,
                 RegExpTree **param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  RegExpTree *pRVar4;
  ulong uVar5;
  RegExpTree **ppRVar6;
  ulong uVar7;
  RegExpTree **ppRVar8;
  RegExpTree **ppRVar9;
  RegExpTree **ppRVar10;
  long lVar11;
  RegExpTree **ppRVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  RegExpTree *pRVar16;
  undefined8 uVar17;
  RegExpTree *pRVar18;
  undefined8 uVar19;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      param_2 = param_2 + -1;
      iVar3 = v8::internal::CompareFirstCharCaseIndependent((Mapping *)*param_3,param_2,param_1);
      if (iVar3 < 0) {
        *param_5 = *param_2;
        pRVar4 = *param_1;
      }
      else {
        *param_5 = *param_1;
        pRVar4 = *param_2;
      }
      param_5[1] = pRVar4;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        ppRVar8 = param_1 + 1;
        *param_5 = *param_1;
        if (ppRVar8 != param_2) {
          lVar11 = 0;
          ppRVar10 = param_5;
          do {
            iVar3 = v8::internal::CompareFirstCharCaseIndependent
                              ((Mapping *)*param_3,ppRVar8,ppRVar10);
            if (iVar3 < 0) {
              ppRVar10[1] = *ppRVar10;
              ppRVar9 = param_5;
              if (ppRVar10 != param_5) {
                lVar14 = 0;
                do {
                  ppRVar9 = (RegExpTree **)((long)ppRVar10 + lVar14);
                  iVar3 = v8::internal::CompareFirstCharCaseIndependent
                                    ((Mapping *)*param_3,ppRVar8,ppRVar9 + -1);
                  if (-1 < iVar3) break;
                  lVar14 = lVar14 + -8;
                  *ppRVar9 = ppRVar9[-1];
                  ppRVar9 = param_5;
                } while (lVar11 != lVar14);
              }
              *ppRVar9 = *ppRVar8;
            }
            else {
              ppRVar10[1] = *ppRVar8;
            }
            ppRVar8 = ppRVar8 + 1;
            lVar11 = lVar11 + -8;
            ppRVar10 = ppRVar10 + 1;
          } while (ppRVar8 != param_2);
        }
      }
    }
    else {
      uVar13 = param_4 >> 1;
      ppRVar8 = param_1 + uVar13;
      FUN_01539b44(param_1,ppRVar8,param_3,uVar13,param_5,uVar13);
      FUN_01539b44(ppRVar8,param_2,param_3,param_4 - uVar13,param_5 + uVar13,param_4 - uVar13);
      ppRVar10 = ppRVar8;
      ppRVar9 = param_5;
      ppRVar6 = param_1;
      if (uVar13 != 0) {
        do {
          if (ppRVar10 == param_2) {
            if (ppRVar6 == ppRVar8) {
              return;
            }
            uVar5 = (long)param_1 + (uVar13 * 8 - (long)ppRVar6) + -8;
            uVar13 = (uVar5 >> 3) + 1;
            if ((3 < uVar13) &&
               ((uVar5 = uVar5 & 0xfffffffffffffff8,
                (RegExpTree **)((long)ppRVar6 + uVar5 + 8) <= ppRVar9 ||
                ((RegExpTree **)((long)ppRVar9 + uVar5 + 8) <= ppRVar6)))) {
              uVar7 = uVar13 & 0x3ffffffffffffffc;
              lVar11 = 0;
              uVar5 = uVar7;
              do {
                puVar1 = (undefined8 *)((long)ppRVar6 + lVar11);
                uVar15 = *puVar1;
                uVar19 = puVar1[3];
                uVar17 = puVar1[2];
                puVar2 = (undefined8 *)((long)ppRVar9 + lVar11);
                uVar5 = uVar5 - 4;
                lVar11 = lVar11 + 0x20;
                puVar2[1] = puVar1[1];
                *puVar2 = uVar15;
                puVar2[3] = uVar19;
                puVar2[2] = uVar17;
              } while (uVar5 != 0);
              ppRVar6 = ppRVar6 + uVar7;
              ppRVar9 = ppRVar9 + (uVar13 & 0x1ffffffffffffffc);
              if (uVar13 == uVar7) {
                return;
              }
            }
            do {
              ppRVar10 = ppRVar6 + 1;
              *ppRVar9 = *ppRVar6;
              ppRVar6 = ppRVar10;
              ppRVar9 = ppRVar9 + 1;
            } while (ppRVar8 != ppRVar10);
            return;
          }
          iVar3 = v8::internal::CompareFirstCharCaseIndependent
                            ((Mapping *)*param_3,ppRVar10,ppRVar6);
          if (iVar3 < 0) {
            pRVar4 = *ppRVar10;
            ppRVar12 = ppRVar6;
            ppRVar10 = ppRVar10 + 1;
          }
          else {
            ppRVar12 = ppRVar6 + 1;
            pRVar4 = *ppRVar6;
          }
          param_5 = ppRVar9 + 1;
          *ppRVar9 = pRVar4;
          ppRVar9 = param_5;
          ppRVar6 = ppRVar12;
        } while (ppRVar12 != ppRVar8);
      }
      if (ppRVar10 != param_2) {
        uVar5 = (long)param_2 + (-8 - (long)ppRVar10);
        uVar13 = (uVar5 >> 3) + 1;
        if ((3 < uVar13) &&
           ((lVar11 = (uVar5 & 0xfffffffffffffff8) + 8,
            (RegExpTree **)((long)ppRVar10 + lVar11) <= param_5 ||
            ((RegExpTree **)((long)param_5 + lVar11) <= ppRVar10)))) {
          uVar7 = uVar13 & 0x3ffffffffffffffc;
          ppRVar8 = ppRVar10 + 2;
          ppRVar10 = ppRVar10 + uVar7;
          ppRVar9 = param_5 + 2;
          uVar5 = uVar7;
          do {
            ppRVar6 = ppRVar8 + -1;
            pRVar4 = ppRVar8[-2];
            pRVar18 = ppRVar8[1];
            pRVar16 = *ppRVar8;
            ppRVar8 = ppRVar8 + 4;
            uVar5 = uVar5 - 4;
            ppRVar9[-1] = *ppRVar6;
            ppRVar9[-2] = pRVar4;
            ppRVar9[1] = pRVar18;
            *ppRVar9 = pRVar16;
            ppRVar9 = ppRVar9 + 4;
          } while (uVar5 != 0);
          param_5 = param_5 + uVar7;
          if (uVar13 == uVar7) {
            return;
          }
        }
        do {
          ppRVar8 = ppRVar10 + 1;
          *param_5 = *ppRVar10;
          param_5 = param_5 + 1;
          ppRVar10 = ppRVar8;
        } while (param_2 != ppRVar8);
      }
    }
  }
  return;
}

