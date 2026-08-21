
void FUN_00fa6254(long *param_1,long *param_2,undefined8 param_3,ulong param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      if (*(int *)(param_2[-1] + 0x84) < *(int *)(*param_1 + 0x84)) {
        *param_5 = param_2[-1];
        lVar7 = *param_1;
      }
      else {
                    /* try { // try from 00fa6370 to 010a654f has its CatchHandler @ 00fa7114 */
        *param_5 = *param_1;
        lVar7 = param_2[-1];
      }
      param_5[1] = lVar7;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
                    /* try { // try from 00fa6298 to 010a62af has its CatchHandler @ 00fa7078 */
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        plVar4 = param_1 + 1;
        lVar7 = *param_1;
        *param_5 = lVar7;
        if (plVar4 != param_2) {
          lVar3 = 0;
          plVar6 = param_5;
          do {
            plVar11 = plVar6 + 1;
            if (*(int *)(*plVar4 + 0x84) < *(int *)(lVar7 + 0x84)) {
              plVar6[1] = lVar7;
              plVar9 = param_5;
              if (plVar6 != param_5) {
                lVar7 = 0;
                do {
                  lVar10 = ((long *)((long)plVar6 + lVar7))[-1];
                  plVar9 = (long *)((long)plVar6 + lVar7);
                  if (*(int *)(lVar10 + 0x84) <= *(int *)(*plVar4 + 0x84)) break;
                  *(long *)((long)plVar6 + lVar7) = lVar10;
                    /* try { // try from 00fa6330 to 010a6337 has its CatchHandler @ 00fa7040 */
                  lVar7 = lVar7 + -8;
                  plVar9 = param_5;
                } while (lVar3 != lVar7);
              }
              *plVar9 = *plVar4;
            }
            else {
              *plVar11 = *plVar4;
            }
            plVar4 = plVar4 + 1;
            if (plVar4 == param_2) {
              return;
            }
            lVar7 = *plVar11;
            lVar3 = lVar3 + -8;
            plVar6 = plVar11;
          } while( true );
        }
      }
    }
    else {
      uVar12 = param_4 >> 1;
      plVar11 = param_1 + uVar12;
      FUN_00fa5f0c(param_1,plVar11,param_3,uVar12,param_5,uVar12);
      FUN_00fa5f0c(plVar11,param_2,param_3,param_4 - uVar12,param_5 + uVar12,param_4 - uVar12);
      plVar6 = plVar11;
      plVar4 = param_1;
      if (uVar12 != 0) {
        do {
          if (plVar6 == param_2) {
            if (plVar4 == plVar11) {
              return;
            }
            uVar5 = (long)param_1 + (uVar12 * 8 - (long)plVar4) + -8;
            uVar12 = (uVar5 >> 3) + 1;
            if ((3 < uVar12) &&
               ((uVar5 = uVar5 & 0xfffffffffffffff8, (long *)((long)plVar4 + uVar5 + 8) <= param_5
                || ((long *)((long)param_5 + uVar5 + 8) <= plVar4)))) {
              uVar8 = uVar12 & 0x3ffffffffffffffc;
              lVar7 = 0;
              uVar5 = uVar8;
              do {
                puVar1 = (undefined8 *)((long)plVar4 + lVar7);
                uVar13 = *puVar1;
                uVar15 = puVar1[3];
                uVar14 = puVar1[2];
                puVar2 = (undefined8 *)((long)param_5 + lVar7);
                uVar5 = uVar5 - 4;
                lVar7 = lVar7 + 0x20;
                puVar2[1] = puVar1[1];
                *puVar2 = uVar13;
                puVar2[3] = uVar15;
                puVar2[2] = uVar14;
              } while (uVar5 != 0);
              plVar4 = plVar4 + uVar8;
              param_5 = param_5 + (uVar12 & 0x1ffffffffffffffc);
              if (uVar12 == uVar8) {
                return;
              }
            }
            do {
              plVar6 = plVar4 + 1;
              *param_5 = *plVar4;
              plVar4 = plVar6;
              param_5 = param_5 + 1;
            } while (plVar11 != plVar6);
            return;
          }
          lVar7 = *plVar4;
          if (*(int *)(*plVar6 + 0x84) < *(int *)(lVar7 + 0x84)) {
            *param_5 = *plVar6;
            plVar6 = plVar6 + 1;
          }
          else {
            plVar4 = plVar4 + 1;
            *param_5 = lVar7;
          }
          param_5 = param_5 + 1;
        } while (plVar4 != plVar11);
      }
      if (plVar6 != param_2) {
        uVar5 = (long)param_2 + (-8 - (long)plVar6);
        uVar12 = (uVar5 >> 3) + 1;
        if ((3 < uVar12) &&
           ((lVar7 = (uVar5 & 0xfffffffffffffff8) + 8, (long *)((long)plVar6 + lVar7) <= param_5 ||
            ((long *)((long)param_5 + lVar7) <= plVar6)))) {
          uVar8 = uVar12 & 0x3ffffffffffffffc;
          plVar4 = plVar6 + 2;
          plVar6 = plVar6 + uVar8;
          plVar11 = param_5 + 2;
          uVar5 = uVar8;
          do {
            plVar9 = plVar4 + -1;
            lVar7 = plVar4[-2];
            lVar10 = plVar4[1];
            lVar3 = *plVar4;
            plVar4 = plVar4 + 4;
            uVar5 = uVar5 - 4;
            plVar11[-1] = *plVar9;
            plVar11[-2] = lVar7;
            plVar11[1] = lVar10;
            *plVar11 = lVar3;
            plVar11 = plVar11 + 4;
          } while (uVar5 != 0);
          param_5 = param_5 + uVar8;
          if (uVar12 == uVar8) {
            return;
          }
        }
        do {
          plVar4 = plVar6 + 1;
          *param_5 = *plVar6;
          param_5 = param_5 + 1;
          plVar6 = plVar4;
        } while (param_2 != plVar4);
      }
    }
  }
  return;
}

