
void FUN_01539b44(RegExpTree **param_1,RegExpTree **param_2,undefined8 *param_3,ulong param_4,
                 RegExpTree **param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  RegExpTree **ppRVar5;
  RegExpTree **ppRVar6;
  RegExpTree *pRVar7;
  RegExpTree **ppRVar8;
  ulong uVar9;
  RegExpTree **ppRVar10;
  RegExpTree **ppRVar11;
  RegExpTree **ppRVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  RegExpTree *local_48;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      param_2 = param_2 + -1;
      iVar3 = v8::internal::CompareFirstCharCaseIndependent((Mapping *)*param_3,param_2,param_1);
      if (iVar3 < 0) {
        pRVar7 = *param_1;
        *param_1 = *param_2;
        *param_2 = pRVar7;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (ppRVar12 = param_1 + 1, ppRVar12 != param_2)) {
        lVar13 = 0;
        do {
          local_48 = *ppRVar12;
          ppRVar8 = param_1;
          lVar14 = lVar13;
          if (ppRVar12 != param_1) {
            do {
              ppRVar5 = (RegExpTree **)((long)param_1 + lVar14);
              iVar3 = v8::internal::CompareFirstCharCaseIndependent
                                ((Mapping *)*param_3,&local_48,ppRVar5);
              if (-1 < iVar3) {
                ppRVar8 = ppRVar5 + 1;
                break;
              }
              lVar14 = lVar14 + -8;
              ppRVar5[1] = *ppRVar5;
            } while (lVar14 != -8);
          }
          ppRVar12 = ppRVar12 + 1;
          lVar13 = lVar13 + 8;
          *ppRVar8 = local_48;
        } while (ppRVar12 != param_2);
      }
    }
    else {
      uVar15 = param_4 >> 1;
      ppRVar12 = param_1 + uVar15;
      if (param_6 < (long)param_4) {
        FUN_01539b44();
        FUN_01539b44(ppRVar12,param_2,param_3,param_4 - uVar15,param_5,param_6);
        FUN_0153a1d8(param_1,ppRVar12,param_2,param_3,uVar15,param_4 - uVar15,param_5,param_6);
        return;
      }
      FUN_01539ea0(param_1,ppRVar12,param_3,uVar15);
      ppRVar8 = param_5 + uVar15;
      FUN_01539ea0(ppRVar12,param_2,param_3,param_4 - uVar15,ppRVar8);
      ppRVar12 = param_5 + param_4;
      ppRVar5 = ppRVar8;
      ppRVar6 = param_5;
      do {
        if (ppRVar5 == ppRVar12) {
          if (ppRVar6 == ppRVar8) {
            return;
          }
          uVar4 = (long)param_5 + (uVar15 * 8 - (long)ppRVar6) + -8;
          uVar15 = (uVar4 >> 3) + 1;
          if ((3 < uVar15) &&
             ((uVar4 = uVar4 & 0xfffffffffffffff8,
              (RegExpTree **)((long)ppRVar6 + uVar4 + 8) <= param_1 ||
              ((RegExpTree **)((long)param_1 + uVar4 + 8) <= ppRVar6)))) {
            uVar9 = uVar15 & 0x3ffffffffffffffc;
            lVar13 = 0;
            uVar4 = uVar9;
            do {
              puVar1 = (undefined8 *)((long)ppRVar6 + lVar13);
              uVar16 = *puVar1;
              uVar18 = puVar1[3];
              uVar17 = puVar1[2];
              puVar2 = (undefined8 *)((long)param_1 + lVar13);
              uVar4 = uVar4 - 4;
              lVar13 = lVar13 + 0x20;
              puVar2[1] = puVar1[1];
              *puVar2 = uVar16;
              puVar2[3] = uVar18;
              puVar2[2] = uVar17;
            } while (uVar4 != 0);
            ppRVar6 = ppRVar6 + uVar9;
            param_1 = param_1 + (uVar15 & 0x1ffffffffffffffc);
            if (uVar15 == uVar9) {
              return;
            }
          }
          do {
            ppRVar12 = ppRVar6 + 1;
            *param_1 = *ppRVar6;
            ppRVar6 = ppRVar12;
            param_1 = param_1 + 1;
          } while (ppRVar8 != ppRVar12);
          return;
        }
        iVar3 = v8::internal::CompareFirstCharCaseIndependent((Mapping *)*param_3,ppRVar5,ppRVar6);
        if (iVar3 < 0) {
          pRVar7 = *ppRVar5;
          ppRVar11 = ppRVar6;
          ppRVar5 = ppRVar5 + 1;
        }
        else {
          ppRVar11 = ppRVar6 + 1;
          pRVar7 = *ppRVar6;
        }
        ppRVar10 = param_1 + 1;
        *param_1 = pRVar7;
        ppRVar6 = ppRVar11;
        param_1 = ppRVar10;
      } while (ppRVar11 != ppRVar8);
      if (ppRVar5 == ppRVar12) {
        return;
      }
      uVar4 = (long)param_5 + (param_4 * 8 - (long)ppRVar5) + -8;
      uVar15 = (uVar4 >> 3) + 1;
      if ((3 < uVar15) &&
         ((uVar4 = uVar4 & 0xfffffffffffffff8,
          (RegExpTree **)((long)ppRVar5 + uVar4 + 8) <= ppRVar10 ||
          ((RegExpTree **)((long)ppRVar10 + uVar4 + 8) <= ppRVar5)))) {
        uVar9 = uVar15 & 0x3ffffffffffffffc;
        lVar13 = 0;
        uVar4 = uVar9;
        do {
          puVar1 = (undefined8 *)((long)ppRVar5 + lVar13);
          uVar16 = *puVar1;
          uVar18 = puVar1[3];
          uVar17 = puVar1[2];
          puVar2 = (undefined8 *)((long)ppRVar10 + lVar13);
          uVar4 = uVar4 - 4;
          lVar13 = lVar13 + 0x20;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar16;
          puVar2[3] = uVar18;
          puVar2[2] = uVar17;
        } while (uVar4 != 0);
        ppRVar5 = ppRVar5 + uVar9;
        ppRVar10 = ppRVar10 + (uVar15 & 0x1ffffffffffffffc);
        if (uVar15 == uVar9) {
          return;
        }
      }
      do {
        ppRVar8 = ppRVar5 + 1;
        *ppRVar10 = *ppRVar5;
        ppRVar5 = ppRVar8;
        ppRVar10 = ppRVar10 + 1;
      } while (ppRVar12 != ppRVar8);
    }
  }
  return;
}

