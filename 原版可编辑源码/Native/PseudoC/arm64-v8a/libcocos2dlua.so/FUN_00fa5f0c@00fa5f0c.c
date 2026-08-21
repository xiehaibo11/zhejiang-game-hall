
void FUN_00fa5f0c(long *param_1,long *param_2,undefined8 param_3,ulong param_4,long *param_5,
                 long param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      if (*(int *)(param_2[-1] + 0x84) < *(int *)(*param_1 + 0x84)) {
        lVar8 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = lVar8;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (plVar7 = param_1 + 1, plVar7 != param_2)) {
        lVar8 = 0;
        do {
          lVar10 = *plVar7;
          plVar9 = param_1;
          if (plVar7 != param_1) {
            iVar5 = *(int *)(lVar10 + 0x84);
            lVar11 = lVar8;
            do {
              if (*(int *)(*(long *)((long)param_1 + lVar11) + 0x84) <= iVar5) {
                plVar9 = (long *)((long)param_1 + lVar11 + 8);
                break;
              }
              lVar12 = lVar11 + -8;
              *(long *)((long)param_1 + lVar11 + 8) = *(long *)((long)param_1 + lVar11);
              lVar11 = lVar12;
            } while (lVar12 != -8);
          }
          plVar7 = plVar7 + 1;
          lVar8 = lVar8 + 8;
          *plVar9 = lVar10;
                    /* try { // try from 00fa5f9c to 010a619f has its CatchHandler @ 00fa7114 */
        } while (plVar7 != param_2);
      }
    }
    else {
      uVar14 = param_4 >> 1;
      plVar7 = param_1 + uVar14;
      if (param_6 < (long)param_4) {
        FUN_00fa5f0c();
        FUN_00fa5f0c(plVar7,param_2,param_3,param_4 - uVar14,param_5,param_6);
        FUN_00fa6584(param_1,plVar7,param_2,param_3,uVar14,param_4 - uVar14,param_5,param_6);
        return;
      }
      FUN_00fa6254(param_1,plVar7,param_3,uVar14);
      plVar1 = param_5 + uVar14;
      FUN_00fa6254(plVar7,param_2,param_3,param_4 - uVar14,plVar1);
      plVar2 = param_5 + param_4;
      plVar9 = plVar1;
      plVar7 = param_5;
      do {
        if (plVar9 == plVar2) {
          if (plVar7 == plVar1) {
            return;
          }
          uVar6 = (long)param_5 + (uVar14 * 8 - (long)plVar7) + -8;
          uVar14 = (uVar6 >> 3) + 1;
          if ((3 < uVar14) &&
             ((uVar6 = uVar6 & 0xfffffffffffffff8, (long *)((long)plVar7 + uVar6 + 8) <= param_1 ||
              ((long *)((long)param_1 + uVar6 + 8) <= plVar7)))) {
            uVar13 = uVar14 & 0x3ffffffffffffffc;
            lVar8 = 0;
            uVar6 = uVar13;
            do {
              puVar3 = (undefined8 *)((long)plVar7 + lVar8);
              uVar15 = *puVar3;
              uVar17 = puVar3[3];
              uVar16 = puVar3[2];
              puVar4 = (undefined8 *)((long)param_1 + lVar8);
                    /* try { // try from 00fa6210 to 010a621b has its CatchHandler @ 00fa7054 */
              uVar6 = uVar6 - 4;
              lVar8 = lVar8 + 0x20;
              puVar4[1] = puVar3[1];
              *puVar4 = uVar15;
              puVar4[3] = uVar17;
              puVar4[2] = uVar16;
            } while (uVar6 != 0);
            plVar7 = plVar7 + uVar13;
            param_1 = param_1 + (uVar14 & 0x1ffffffffffffffc);
            if (uVar14 == uVar13) {
              return;
            }
          }
          do {
            plVar9 = plVar7 + 1;
            *param_1 = *plVar7;
            plVar7 = plVar9;
            param_1 = param_1 + 1;
          } while (plVar1 != plVar9);
          return;
        }
        lVar8 = *plVar7;
        if (*(int *)(*plVar9 + 0x84) < *(int *)(lVar8 + 0x84)) {
          *param_1 = *plVar9;
          plVar9 = plVar9 + 1;
        }
        else {
          plVar7 = plVar7 + 1;
          *param_1 = lVar8;
        }
        param_1 = param_1 + 1;
      } while (plVar7 != plVar1);
      if (plVar9 == plVar2) {
        return;
      }
      uVar6 = (long)param_5 + (param_4 * 8 - (long)plVar9) + -8;
      uVar14 = (uVar6 >> 3) + 1;
      if ((3 < uVar14) &&
         ((uVar6 = uVar6 & 0xfffffffffffffff8, (long *)((long)plVar9 + uVar6 + 8) <= param_1 ||
          ((long *)((long)param_1 + uVar6 + 8) <= plVar9)))) {
        uVar13 = uVar14 & 0x3ffffffffffffffc;
        lVar8 = 0;
        uVar6 = uVar13;
        do {
          puVar3 = (undefined8 *)((long)plVar9 + lVar8);
          uVar15 = *puVar3;
          uVar17 = puVar3[3];
          uVar16 = puVar3[2];
          puVar4 = (undefined8 *)((long)param_1 + lVar8);
          uVar6 = uVar6 - 4;
          lVar8 = lVar8 + 0x20;
          puVar4[1] = puVar3[1];
          *puVar4 = uVar15;
          puVar4[3] = uVar17;
          puVar4[2] = uVar16;
        } while (uVar6 != 0);
        plVar9 = plVar9 + uVar13;
        param_1 = param_1 + (uVar14 & 0x1ffffffffffffffc);
        if (uVar14 == uVar13) {
          return;
        }
      }
      do {
        plVar7 = plVar9 + 1;
        *param_1 = *plVar9;
        plVar9 = plVar7;
        param_1 = param_1 + 1;
      } while (plVar2 != plVar7);
    }
  }
  return;
}

