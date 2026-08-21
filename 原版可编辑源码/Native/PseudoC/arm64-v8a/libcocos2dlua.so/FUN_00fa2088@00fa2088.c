
void FUN_00fa2088(float *param_1,float *param_2,undefined8 param_3,ulong param_4,float *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
                    /* try { // try from 00fa20d8 to 010a2187 has its CatchHandler @ 00fa20d8
                       catch() { ... } // from try @ 00fa20d8 with catch @ 00fa20d8
                       catch() { ... } // from try @ 00fa2220 with catch @ 00fa20d8
                       catch() { ... } // from try @ 00fa2288 with catch @ 00fa20d8
                       catch() { ... } // from try @ 00fa2308 with catch @ 00fa20d8 */
      if (*param_1 <= param_2[-1]) {
        *param_5 = *param_1;
        fVar12 = param_2[-1];
      }
      else {
        *param_5 = param_2[-1];
        fVar12 = *param_1;
      }
      param_5[1] = fVar12;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        pfVar4 = param_1 + 1;
        fVar12 = *param_1;
        *param_5 = fVar12;
        if (pfVar4 != param_2) {
          lVar3 = 0;
          pfVar6 = param_5;
          do {
            pfVar10 = pfVar6 + 1;
            if (fVar12 <= *pfVar4) {
              *pfVar10 = *pfVar4;
            }
            else {
              pfVar6[1] = fVar12;
              pfVar7 = param_5;
              if (pfVar6 != param_5) {
                lVar9 = 0;
                do {
                  pfVar7 = (float *)((long)pfVar6 + lVar9);
                  if (pfVar7[-1] <= *pfVar4) break;
                  lVar9 = lVar9 + -4;
                  *pfVar7 = pfVar7[-1];
                  pfVar7 = param_5;
                } while (lVar3 != lVar9);
              }
              *pfVar7 = *pfVar4;
            }
            pfVar4 = pfVar4 + 1;
            if (pfVar4 == param_2) {
              return;
            }
            fVar12 = *pfVar10;
            lVar3 = lVar3 + -4;
            pfVar6 = pfVar10;
                    /* try { // try from 00fa2188 to 010a221f has its CatchHandler @ 00fa232c */
          } while( true );
        }
      }
    }
    else {
      uVar11 = param_4 >> 1;
      pfVar10 = param_1 + uVar11;
      FUN_00fa1d58(param_1,pfVar10,param_3,uVar11,param_5,uVar11);
      FUN_00fa1d58(pfVar10,param_2,param_3,param_4 - uVar11,param_5 + uVar11,param_4 - uVar11);
      pfVar6 = pfVar10;
      pfVar4 = param_1;
      if (uVar11 != 0) {
        do {
          if (pfVar6 == param_2) {
            if (pfVar4 == pfVar10) {
              return;
            }
                    /* try { // try from 00fa2288 to 010a2303 has its CatchHandler @ 00fa20d8 */
            uVar5 = (long)param_1 + (uVar11 * 4 - (long)pfVar4) + -4;
            uVar11 = (uVar5 >> 2) + 1;
                    /* catch() { ... } // from try @ 00fa224c with catch @ 00fa2328 */
                    /* catch() { ... } // from try @ 00fa2188 with catch @ 00fa232c */
            if ((7 < uVar11) &&
               ((uVar5 = uVar5 & 0xfffffffffffffffc, (float *)((long)pfVar4 + uVar5 + 4) <= param_5
                || ((float *)((long)param_5 + uVar5 + 4) <= pfVar4)))) {
              uVar8 = uVar11 & 0x7ffffffffffffff8;
              lVar3 = 0;
              uVar5 = uVar8;
              do {
                puVar1 = (undefined8 *)((long)pfVar4 + lVar3);
                uVar13 = *puVar1;
                uVar15 = puVar1[3];
                uVar14 = puVar1[2];
                puVar2 = (undefined8 *)((long)param_5 + lVar3);
                uVar5 = uVar5 - 8;
                lVar3 = lVar3 + 0x20;
                puVar2[1] = puVar1[1];
                *puVar2 = uVar13;
                puVar2[3] = uVar15;
                puVar2[2] = uVar14;
              } while (uVar5 != 0);
              pfVar4 = pfVar4 + uVar8;
              param_5 = param_5 + (uVar11 & 0x3ffffffffffffff8);
              if (uVar11 == uVar8) {
                return;
              }
            }
            do {
              pfVar6 = pfVar4 + 1;
              *param_5 = *pfVar4;
              pfVar4 = pfVar6;
              param_5 = param_5 + 1;
            } while (pfVar10 != pfVar6);
            return;
          }
          fVar12 = *pfVar4;
          if (fVar12 <= *pfVar6) {
            pfVar4 = pfVar4 + 1;
            *param_5 = fVar12;
          }
          else {
            *param_5 = *pfVar6;
            pfVar6 = pfVar6 + 1;
          }
                    /* try { // try from 00fa2220 to 010a224b has its CatchHandler @ 00fa20d8 */
          param_5 = param_5 + 1;
        } while (pfVar4 != pfVar10);
      }
      if (pfVar6 != param_2) {
        uVar5 = (long)param_2 + (-4 - (long)pfVar6);
        uVar11 = (uVar5 >> 2) + 1;
        if ((7 < uVar11) &&
           ((lVar3 = (uVar5 & 0xfffffffffffffffc) + 4, (float *)((long)pfVar6 + lVar3) <= param_5 ||
            ((float *)((long)param_5 + lVar3) <= pfVar6)))) {
          uVar8 = uVar11 & 0x7ffffffffffffff8;
          pfVar4 = pfVar6 + 4;
          pfVar6 = pfVar6 + uVar8;
          pfVar10 = param_5 + 4;
          uVar5 = uVar8;
          do {
            pfVar7 = pfVar4 + -2;
            uVar13 = *(undefined8 *)(pfVar4 + -4);
            uVar15 = *(undefined8 *)(pfVar4 + 2);
            uVar14 = *(undefined8 *)pfVar4;
            pfVar4 = pfVar4 + 8;
            uVar5 = uVar5 - 8;
            *(undefined8 *)(pfVar10 + -2) = *(undefined8 *)pfVar7;
            *(undefined8 *)(pfVar10 + -4) = uVar13;
            *(undefined8 *)(pfVar10 + 2) = uVar15;
            *(undefined8 *)pfVar10 = uVar14;
            pfVar10 = pfVar10 + 8;
          } while (uVar5 != 0);
          param_5 = param_5 + uVar8;
                    /* try { // try from 00fa2304 to 010a2307 has its CatchHandler @ 00fa2308 */
          if (uVar11 == uVar8) {
            return;
          }
        }
        do {
          pfVar4 = pfVar6 + 1;
                    /* catch() { ... } // from try @ 00fa2274 with catch @ 00fa2308
                       catch() { ... } // from try @ 00fa2304 with catch @ 00fa2308
                       try { // try from 00fa2308 to 010a236f has its CatchHandler @ 00fa20d8 */
          *param_5 = *pfVar6;
          param_5 = param_5 + 1;
          pfVar6 = pfVar4;
        } while (param_2 != pfVar4);
      }
    }
  }
  return;
}

