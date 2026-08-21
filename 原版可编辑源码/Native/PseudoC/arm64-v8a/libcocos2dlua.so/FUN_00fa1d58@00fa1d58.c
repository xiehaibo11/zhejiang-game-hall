
void FUN_00fa1d58(float *param_1,float *param_2,undefined8 param_3,ulong param_4,float *param_5,
                 long param_6)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      if (param_2[-1] < *param_1) {
        fVar13 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = fVar13;
      }
    }
    else if ((long)param_4 < 0x81) {
                    /* try { // try from 00fa1dbc to 010a1e63 has its CatchHandler @ 00fa1dbc
                       catch() { ... } // from try @ 00fa1dbc with catch @ 00fa1dbc
                       catch() { ... } // from try @ 00fa1ebc with catch @ 00fa1dbc
                       catch() { ... } // from try @ 00fa1f24 with catch @ 00fa1dbc
                       catch() { ... } // from try @ 00fa1fa0 with catch @ 00fa1dbc */
      if ((param_1 != param_2) && (pfVar6 = param_1 + 1, pfVar6 != param_2)) {
        lVar7 = 0;
        do {
          fVar13 = *pfVar6;
          pfVar8 = param_1;
          lVar9 = lVar7;
          if (pfVar6 != param_1) {
            do {
              pfVar1 = (float *)((long)param_1 + lVar9);
              if (*pfVar1 <= fVar13) {
                pfVar8 = pfVar1 + 1;
                break;
              }
              lVar9 = lVar9 + -4;
              pfVar1[1] = *pfVar1;
            } while (lVar9 != -4);
          }
          pfVar6 = pfVar6 + 1;
          lVar7 = lVar7 + 4;
          *pfVar8 = fVar13;
        } while (pfVar6 != param_2);
      }
    }
    else {
      uVar11 = param_4 >> 1;
      pfVar6 = param_1 + uVar11;
      if (param_6 < (long)param_4) {
        FUN_00fa1d58();
                    /* try { // try from 00fa1e64 to 010a1ebb has its CatchHandler @ 00fa1fc4 */
        FUN_00fa1d58(pfVar6,param_2,param_3,param_4 - uVar11,param_5,param_6);
        FUN_00fa23a0(param_1,pfVar6,param_2,param_3,uVar11,param_4 - uVar11,param_5,param_6);
        return;
      }
      FUN_00fa2088(param_1,pfVar6,param_3,uVar11);
      pfVar1 = param_5 + uVar11;
                    /* try { // try from 00fa1ebc to 010a1ee7 has its CatchHandler @ 00fa1dbc */
      FUN_00fa2088(pfVar6,param_2,param_3,param_4 - uVar11,pfVar1);
      pfVar2 = param_5 + param_4;
      pfVar8 = pfVar1;
      pfVar6 = param_5;
      while (pfVar8 != pfVar2) {
        fVar13 = *pfVar6;
        if (fVar13 <= *pfVar8) {
          pfVar6 = pfVar6 + 1;
                    /* try { // try from 00fa1ee8 to 010a1ef7 has its CatchHandler @ 00fa1fc0 */
          *param_1 = fVar13;
        }
        else {
                    /* try { // try from 00fa1f10 to 010a1f23 has its CatchHandler @ 00fa1fa0 */
          *param_1 = *pfVar8;
          pfVar8 = pfVar8 + 1;
        }
        param_1 = param_1 + 1;
        if (pfVar6 == pfVar1) {
          if (pfVar8 == pfVar2) {
            return;
          }
          uVar5 = (long)param_5 + (param_4 * 4 - (long)pfVar8) + -4;
          uVar11 = (uVar5 >> 2) + 1;
          if ((7 < uVar11) &&
             ((uVar5 = uVar5 & 0xfffffffffffffffc, (float *)((long)pfVar8 + uVar5 + 4) <= param_1 ||
              ((float *)((long)param_1 + uVar5 + 4) <= pfVar8)))) {
            uVar10 = uVar11 & 0x7ffffffffffffff8;
            lVar7 = 0;
            uVar5 = uVar10;
            do {
              puVar3 = (undefined8 *)((long)pfVar8 + lVar7);
              uVar12 = *puVar3;
              uVar15 = puVar3[3];
              uVar14 = puVar3[2];
              puVar4 = (undefined8 *)((long)param_1 + lVar7);
              uVar5 = uVar5 - 8;
              lVar7 = lVar7 + 0x20;
              puVar4[1] = puVar3[1];
              *puVar4 = uVar12;
              puVar4[3] = uVar15;
              puVar4[2] = uVar14;
                    /* catch() { ... } // from try @ 00fa2028 with catch @ 00fa2008 */
            } while (uVar5 != 0);
            pfVar8 = pfVar8 + uVar10;
            param_1 = param_1 + (uVar11 & 0x3ffffffffffffff8);
            if (uVar11 == uVar10) {
              return;
            }
          }
          do {
            pfVar6 = pfVar8 + 1;
                    /* try { // try from 00fa1f9c to 010a1f9f has its CatchHandler @ 00fa1fa0 */
            *param_1 = *pfVar8;
            pfVar8 = pfVar6;
            param_1 = param_1 + 1;
                    /* catch() { ... } // from try @ 00fa1f10 with catch @ 00fa1fa0
                       catch() { ... } // from try @ 00fa1f9c with catch @ 00fa1fa0
                       try { // try from 00fa1fa0 to 010a2007 has its CatchHandler @ 00fa1dbc */
          } while (pfVar2 != pfVar6);
          return;
        }
      }
      if (pfVar6 == pfVar1) {
        return;
      }
                    /* try { // try from 00fa1f24 to 010a1f9b has its CatchHandler @ 00fa1dbc */
      uVar5 = (long)param_5 + (uVar11 * 4 - (long)pfVar6) + -4;
      uVar11 = (uVar5 >> 2) + 1;
                    /* catch() { ... } // from try @ 00fa1ee8 with catch @ 00fa1fc0 */
                    /* catch() { ... } // from try @ 00fa1e64 with catch @ 00fa1fc4 */
      if ((7 < uVar11) &&
         ((uVar5 = uVar5 & 0xfffffffffffffffc, (float *)((long)pfVar6 + uVar5 + 4) <= param_1 ||
          ((float *)((long)param_1 + uVar5 + 4) <= pfVar6)))) {
                    /* try { // try from 00fa2020 to 010a2027 has its CatchHandler @ 00fa204c */
        uVar10 = uVar11 & 0x7ffffffffffffff8;
                    /* try { // try from 00fa2028 to 010a20d7 has its CatchHandler @ 00fa2008 */
        lVar7 = 0;
        uVar5 = uVar10;
        do {
          puVar3 = (undefined8 *)((long)pfVar6 + lVar7);
          uVar12 = *puVar3;
          uVar15 = puVar3[3];
          uVar14 = puVar3[2];
          puVar4 = (undefined8 *)((long)param_1 + lVar7);
          uVar5 = uVar5 - 8;
          lVar7 = lVar7 + 0x20;
                    /* catch() { ... } // from try @ 00fa2020 with catch @ 00fa204c */
          puVar4[1] = puVar3[1];
          *puVar4 = uVar12;
          puVar4[3] = uVar15;
          puVar4[2] = uVar14;
        } while (uVar5 != 0);
        pfVar6 = pfVar6 + uVar10;
        param_1 = param_1 + (uVar11 & 0x3ffffffffffffff8);
        if (uVar11 == uVar10) {
          return;
        }
      }
      do {
        pfVar8 = pfVar6 + 1;
        *param_1 = *pfVar6;
        pfVar6 = pfVar8;
        param_1 = param_1 + 1;
      } while (pfVar1 != pfVar8);
    }
  }
  return;
}

