
void FUN_001304a0(uint param_1,int param_2,int param_3,uint param_4,float *param_5,long param_6,
                 ulong param_7,float *param_8,undefined8 *param_9,long param_10)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  float *pfVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined4 *puVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  int iVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  undefined8 *puVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  undefined8 *puVar40;
  uint uVar41;
  float *pfVar42;
  uint uVar43;
  long lVar44;
  int iVar45;
  long lVar46;
  int iVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  long lVar50;
  int iVar51;
  int iVar52;
  ulong uVar53;
  long lVar54;
  float *pfVar55;
  int iVar56;
  undefined8 *puVar57;
  long lVar58;
  ulong uVar59;
  ulong uVar60;
  float *pfVar61;
  long lVar62;
  float *pfVar63;
  long lVar64;
  float *pfVar65;
  long lVar66;
  int iVar67;
  long lVar68;
  float fVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  float fVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  int local_94;
  
  uVar60 = (ulong)param_4;
  uVar59 = (ulong)param_1;
  dVar11 = cos((double)(6.2831855 / (float)param_2));
  dVar12 = sin((double)(6.2831855 / (float)param_2));
  if ((int)param_1 < param_3) {
    if (0 < (int)param_1) {
      uVar28 = 0;
      pfVar14 = param_8;
      pfVar42 = param_5;
      do {
        pfVar16 = pfVar14;
        pfVar21 = pfVar42;
        iVar22 = param_3;
        if (0 < param_3) {
          do {
            iVar22 = iVar22 + -1;
            *pfVar16 = *pfVar21;
            pfVar16 = (float *)((long)pfVar16 +
                               (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2));
            pfVar21 = (float *)((long)pfVar21 +
                               (-(ulong)(param_2 * param_1 >> 0x1f) & 0xfffffffc00000000 |
                               (ulong)(param_2 * param_1) << 2));
          } while (iVar22 != 0);
        }
        uVar28 = uVar28 + 1;
        pfVar42 = pfVar42 + 1;
        pfVar14 = pfVar14 + 1;
      } while (uVar28 != param_1);
    }
  }
  else if (0 < param_3) {
    uVar43 = param_2 * param_1;
    uVar28 = (ulong)(param_1 - 1) + 1;
    lVar58 = 0;
    lVar35 = 0;
    lVar24 = 0;
    pfVar42 = param_8 + 4;
    pfVar14 = param_5 + 4;
    lVar44 = uVar28 - (param_1 & 7);
    do {
      if (0 < (int)param_1) {
        if (uVar28 < 8) {
LAB_00130640:
          iVar22 = 0;
          lVar68 = lVar35;
          lVar62 = lVar24;
        }
        else {
          lVar62 = lVar58 * (int)uVar43;
          lVar68 = lVar58 * (int)param_1;
          if ((param_8 + lVar68 < param_5 + uVar28 + lVar62) &&
             (param_5 + lVar62 < param_8 + uVar28 + lVar68)) goto LAB_00130640;
          lVar68 = lVar35 + lVar44;
          lVar62 = lVar24 + lVar44;
          lVar64 = lVar44;
          pfVar16 = pfVar14;
          pfVar21 = pfVar42;
          do {
            pfVar55 = pfVar16 + -2;
            uVar71 = *(undefined8 *)(pfVar16 + -4);
            uVar73 = *(undefined8 *)(pfVar16 + 2);
            uVar70 = *(undefined8 *)pfVar16;
            lVar64 = lVar64 + -8;
            pfVar16 = pfVar16 + 8;
            *(undefined8 *)(pfVar21 + -2) = *(undefined8 *)pfVar55;
            *(undefined8 *)(pfVar21 + -4) = uVar71;
            *(undefined8 *)(pfVar21 + 2) = uVar73;
            *(undefined8 *)pfVar21 = uVar70;
            pfVar21 = pfVar21 + 8;
          } while (lVar64 != 0);
          iVar22 = (int)lVar44;
          if ((param_1 & 7) == 0) goto LAB_00130668;
        }
        iVar22 = param_1 - iVar22;
        pfVar16 = param_5 + lVar68;
        pfVar21 = param_8 + lVar62;
        do {
          iVar22 = iVar22 + -1;
          *pfVar21 = *pfVar16;
          pfVar16 = pfVar16 + 1;
          pfVar21 = pfVar21 + 1;
        } while (iVar22 != 0);
      }
LAB_00130668:
      lVar58 = lVar58 + 1;
      lVar24 = lVar24 + (int)param_1;
      lVar35 = lVar35 + (int)uVar43;
      pfVar42 = (float *)((long)pfVar42 +
                         (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2));
      pfVar14 = (float *)((long)pfVar14 +
                         (-(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar43 << 2));
    } while ((int)lVar58 != param_3);
  }
  iVar22 = param_2 + 1 >> 1;
  uVar43 = param_1 * 2;
  uVar28 = (ulong)uVar43;
  if (2 < param_2) {
    iVar51 = param_3 * param_1;
    iVar25 = iVar51 * (param_2 + -1);
    iVar45 = 1;
    iVar32 = iVar51;
    pfVar42 = param_5;
    do {
      pfVar42 = (float *)((long)pfVar42 +
                         (-(ulong)((param_1 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         uVar28 << 2));
      pfVar14 = pfVar42;
      pfVar16 = param_8;
      iVar47 = param_3;
      if (0 < param_3) {
        do {
          iVar47 = iVar47 + -1;
          pfVar16[iVar32] = pfVar14[-1] + pfVar14[-1];
          pfVar16[iVar25] = *pfVar14 + *pfVar14;
          pfVar14 = (float *)((long)pfVar14 +
                             (-(ulong)(param_2 * param_1 >> 0x1f) & 0xfffffffc00000000 |
                             (ulong)(param_2 * param_1) << 2));
          pfVar16 = (float *)((long)pfVar16 +
                             (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2));
        } while (iVar47 != 0);
      }
      iVar45 = iVar45 + 1;
      iVar32 = iVar32 + iVar51;
      iVar25 = iVar25 - iVar51;
    } while (iVar45 < iVar22);
  }
  iVar45 = (int)(param_1 - 1) >> 1;
  if (param_1 - 1 == 0) {
LAB_00130994:
    if (2 < param_2) {
      uVar41 = (param_2 + -1) * param_4;
      uVar37 = (ulong)param_4;
      uVar34 = -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar60 << 2;
      iVar25 = (param_2 + -2) * param_4;
      lVar44 = (long)(int)param_4;
      uVar28 = (ulong)(param_4 - 1) + 1;
      puVar30 = (undefined8 *)((long)param_9 + uVar34);
      lVar58 = param_7 + uVar37 * 4;
      puVar36 = (undefined8 *)((long)param_9 + uVar37 * 4);
      uVar53 = uVar37 & 0xfffffffc;
      puVar5 = (undefined8 *)((long)param_9 + (lVar44 + uVar37) * 4);
      uVar26 = -(ulong)(uVar41 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar41 << 2;
      lVar24 = (long)(int)uVar41;
      puVar6 = (undefined8 *)((long)param_9 + uVar26);
      lVar35 = uVar28 * 4;
      puVar7 = (undefined8 *)((long)param_9 + (lVar24 + uVar37) * 4);
      iVar51 = 0;
      fVar69 = 0.0;
      fVar75 = 1.0;
      lVar68 = uVar28 - (param_4 & 3);
      iVar32 = 1;
      uVar33 = uVar41;
      uVar43 = param_4;
      do {
        lVar62 = (long)(int)uVar33;
        lVar64 = (long)(int)uVar43;
        puVar2 = (undefined8 *)(param_7 + (long)(int)uVar33 * 4);
        puVar3 = (undefined8 *)(param_7 + (long)(int)uVar43 * 4);
        uVar9 = param_4 + iVar51 * param_4;
        fVar82 = fVar75 * (float)dVar12;
        uVar27 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
        uVar9 = uVar41 + iVar51 * -param_4;
        fVar75 = fVar75 * (float)dVar11 - fVar69 * (float)dVar12;
        puVar8 = (undefined8 *)(param_7 + uVar27);
        fVar69 = fVar69 * (float)dVar11 + fVar82;
        if (0 < (int)param_4) {
          lVar66 = lVar24;
          lVar46 = lVar64;
          lVar50 = lVar44;
          lVar54 = lVar62;
          if (param_4 < 4) {
LAB_00130b24:
            uVar39 = 0;
          }
          else {
            uVar39 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
            puVar17 = (undefined8 *)(lVar58 + uVar39);
            puVar15 = (undefined8 *)(lVar58 + uVar27);
            puVar48 = (undefined8 *)(param_7 + uVar39);
            uVar39 = 0;
            if (puVar17 <= puVar8 || puVar15 <= puVar48) {
              if ((((puVar8 < puVar36 && param_9 < puVar15) ||
                   (puVar8 < puVar5 && puVar30 < puVar15)) || (puVar8 < puVar7 && puVar6 < puVar15))
                 || ((puVar48 < puVar36 && param_9 < puVar17 ||
                     (puVar48 < puVar5 && puVar30 < puVar17)))) goto LAB_00130b24;
              if (puVar7 <= puVar48 || puVar17 <= puVar6) {
                puVar15 = puVar2;
                puVar17 = param_9;
                uVar39 = uVar53;
                puVar48 = puVar3;
                do {
                  puVar20 = (undefined8 *)((long)puVar17 + uVar34);
                  uVar70 = puVar20[1];
                  uVar71 = *puVar20;
                  uVar73 = *puVar17;
                  uVar39 = uVar39 - 4;
                  puVar48[1] = CONCAT44((float)((ulong)puVar17[1] >> 0x20) +
                                        fVar75 * (float)((ulong)uVar70 >> 0x20),
                                        (float)puVar17[1] + fVar75 * (float)uVar70);
                  *puVar48 = CONCAT44((float)((ulong)uVar73 >> 0x20) +
                                      fVar75 * (float)((ulong)uVar71 >> 0x20),
                                      (float)uVar73 + fVar75 * (float)uVar71);
                  puVar20 = (undefined8 *)((long)puVar17 + uVar26);
                  uVar70 = puVar20[1];
                  uVar71 = *puVar20;
                  puVar17 = puVar17 + 2;
                  puVar15[1] = CONCAT44(fVar69 * (float)((ulong)uVar70 >> 0x20),
                                        fVar69 * (float)uVar70);
                  *puVar15 = CONCAT44(fVar69 * (float)((ulong)uVar71 >> 0x20),fVar69 * (float)uVar71
                                     );
                  puVar15 = puVar15 + 2;
                  puVar48 = puVar48 + 2;
                } while (uVar39 != 0);
                lVar66 = uVar53 + lVar24;
                uVar39 = uVar53;
                lVar46 = uVar53 + lVar64;
                lVar50 = uVar53 + lVar44;
                lVar54 = uVar53 + lVar62;
                if (uVar53 == uVar37) goto LAB_00130b74;
              }
            }
          }
          lVar38 = uVar37 - uVar39;
          pfVar42 = (float *)((long)param_9 + uVar39 * 4);
          pfVar14 = (float *)((long)param_9 + lVar66 * 4);
          pfVar16 = (float *)(param_7 + lVar46 * 4);
          pfVar21 = (float *)((long)param_9 + lVar50 * 4);
          pfVar55 = (float *)(param_7 + lVar54 * 4);
          do {
            lVar38 = lVar38 + -1;
            *pfVar16 = *pfVar42 + fVar75 * *pfVar21;
            *pfVar55 = fVar69 * *pfVar14;
            pfVar42 = pfVar42 + 1;
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
            pfVar21 = pfVar21 + 1;
            pfVar55 = pfVar55 + 1;
          } while (lVar38 != 0);
        }
LAB_00130b74:
        if (4 < param_2) {
          uVar39 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
          puVar17 = (undefined8 *)(param_7 + uVar39);
          puVar15 = (undefined8 *)(param_7 + lVar35 + uVar27);
          puVar48 = (undefined8 *)(param_7 + lVar35 + uVar39);
          iVar19 = 0;
          iVar47 = 2;
          fVar82 = fVar69;
          fVar78 = fVar75;
          iVar18 = param_4 * 2;
          iVar52 = iVar25;
          do {
            fVar91 = fVar69 * fVar78;
            fVar78 = fVar75 * fVar78 - fVar69 * fVar82;
            fVar82 = fVar75 * fVar82 + fVar91;
            if (0 < (int)param_4) {
              lVar66 = (long)iVar18;
              lVar46 = (long)iVar52;
              iVar67 = 0;
              lVar50 = lVar64;
              lVar54 = lVar62;
              if (3 < uVar28) {
                uVar9 = param_4 * 2 + iVar19 * param_4;
                uVar27 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
                puVar20 = (undefined8 *)((long)param_9 + uVar27 + lVar35);
                puVar40 = (undefined8 *)((long)param_9 + uVar27);
                uVar9 = iVar25 + iVar19 * -param_4;
                uVar27 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
                puVar49 = (undefined8 *)((long)param_9 + uVar27 + lVar35);
                puVar57 = (undefined8 *)((long)param_9 + uVar27);
                if ((((puVar48 <= puVar8 || puVar15 <= puVar17) &&
                      (puVar20 <= puVar8 || puVar15 <= puVar40)) &&
                    (puVar49 <= puVar8 || puVar15 <= puVar57)) &&
                   ((puVar20 <= puVar17 || puVar48 <= puVar40 &&
                    (puVar49 <= puVar17 || puVar48 <= puVar57)))) {
                  lVar66 = lVar68 + lVar66;
                  lVar46 = lVar68 + lVar46;
                  puVar20 = (undefined8 *)((long)param_9 + (long)iVar52 * 4);
                  puVar40 = puVar2;
                  puVar49 = (undefined8 *)((long)param_9 + (long)iVar18 * 4);
                  puVar57 = puVar3;
                  lVar50 = lVar68;
                  do {
                    uVar71 = *puVar49;
                    lVar50 = lVar50 + -4;
                    puVar57[1] = CONCAT44((float)((ulong)puVar57[1] >> 0x20) +
                                          fVar78 * (float)((ulong)puVar49[1] >> 0x20),
                                          (float)puVar57[1] + fVar78 * (float)puVar49[1]);
                    *puVar57 = CONCAT44((float)((ulong)*puVar57 >> 0x20) +
                                        fVar78 * (float)((ulong)uVar71 >> 0x20),
                                        (float)*puVar57 + fVar78 * (float)uVar71);
                    uVar71 = *puVar20;
                    puVar40[1] = CONCAT44((float)((ulong)puVar40[1] >> 0x20) +
                                          fVar82 * (float)((ulong)puVar20[1] >> 0x20),
                                          (float)puVar40[1] + fVar82 * (float)puVar20[1]);
                    *puVar40 = CONCAT44((float)((ulong)*puVar40 >> 0x20) +
                                        fVar82 * (float)((ulong)uVar71 >> 0x20),
                                        (float)*puVar40 + fVar82 * (float)uVar71);
                    puVar20 = puVar20 + 2;
                    puVar40 = puVar40 + 2;
                    puVar49 = puVar49 + 2;
                    puVar57 = puVar57 + 2;
                  } while (lVar50 != 0);
                  iVar67 = (int)lVar68;
                  lVar50 = lVar68 + lVar64;
                  lVar54 = lVar68 + lVar62;
                  if ((param_4 & 3) == 0) goto LAB_00130ecc;
                }
              }
              iVar67 = param_4 - iVar67;
              pfVar42 = (float *)((long)param_9 + lVar46 * 4);
              pfVar14 = (float *)(param_7 + lVar50 * 4);
              pfVar16 = (float *)(param_7 + lVar54 * 4);
              pfVar21 = (float *)((long)param_9 + lVar66 * 4);
              do {
                iVar67 = iVar67 + -1;
                *pfVar14 = *pfVar14 + fVar78 * *pfVar21;
                *pfVar16 = *pfVar16 + fVar82 * *pfVar42;
                pfVar42 = pfVar42 + 1;
                pfVar14 = pfVar14 + 1;
                pfVar16 = pfVar16 + 1;
                pfVar21 = pfVar21 + 1;
              } while (iVar67 != 0);
            }
LAB_00130ecc:
            iVar47 = iVar47 + 1;
            iVar52 = iVar52 - param_4;
            iVar18 = iVar18 + param_4;
            iVar19 = iVar19 + 1;
          } while (iVar47 < iVar22);
        }
        uVar33 = uVar33 - param_4;
        uVar43 = uVar43 + param_4;
        iVar32 = iVar32 + 1;
        iVar51 = iVar51 + 1;
      } while (iVar32 < iVar22);
      if (2 < param_2) {
        iVar51 = 0;
        iVar32 = 1;
        uVar28 = (long)param_9 + uVar37 * 4;
        uVar34 = uVar37 & 0xfffffff8;
        uVar26 = uVar60;
        do {
          if (0 < (int)param_4) {
            lVar58 = (long)(int)uVar26;
            if ((param_4 < 8) ||
               ((uVar43 = param_4 + iVar51 * param_4,
                uVar53 = -(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar43 << 2,
                param_9 < (undefined8 *)(uVar28 + uVar53) && ((long)param_9 + uVar53 < uVar28)))) {
              uVar53 = 0;
            }
            else {
              lVar58 = uVar34 + lVar58;
              uVar53 = uVar34;
              puVar30 = param_9;
              do {
                puVar36 = (undefined8 *)
                          ((long)puVar30 + (-(uVar26 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2));
                uVar71 = *puVar36;
                uVar73 = puVar36[3];
                uVar70 = puVar36[2];
                uVar53 = uVar53 - 8;
                puVar30[1] = CONCAT44((float)((ulong)puVar36[1] >> 0x20) +
                                      (float)((ulong)puVar30[1] >> 0x20),
                                      (float)puVar36[1] + (float)puVar30[1]);
                *puVar30 = CONCAT44((float)((ulong)uVar71 >> 0x20) +
                                    (float)((ulong)*puVar30 >> 0x20),(float)uVar71 + (float)*puVar30
                                   );
                puVar30[3] = CONCAT44((float)((ulong)uVar73 >> 0x20) +
                                      (float)((ulong)puVar30[3] >> 0x20),
                                      (float)uVar73 + (float)puVar30[3]);
                puVar30[2] = CONCAT44((float)((ulong)uVar70 >> 0x20) +
                                      (float)((ulong)puVar30[2] >> 0x20),
                                      (float)uVar70 + (float)puVar30[2]);
                puVar30 = puVar30 + 4;
              } while (uVar53 != 0);
              uVar53 = uVar34;
              if (uVar34 == uVar37) goto LAB_00130fd0;
            }
            lVar24 = uVar37 - uVar53;
            pfVar42 = (float *)((long)param_9 + lVar58 * 4);
            pfVar14 = (float *)((long)param_9 + uVar53 * 4);
            do {
              lVar24 = lVar24 + -1;
              *pfVar14 = *pfVar42 + *pfVar14;
              pfVar42 = pfVar42 + 1;
              pfVar14 = pfVar14 + 1;
            } while (lVar24 != 0);
          }
LAB_00130fd0:
          iVar32 = iVar32 + 1;
          uVar26 = (ulong)((int)uVar26 + param_4);
          iVar51 = iVar51 + 1;
        } while (iVar32 < iVar22);
        if (2 < param_2) {
          uVar41 = param_3 * param_1;
          iVar32 = 1;
          uVar33 = uVar41 * (param_2 + -1);
          uVar43 = uVar41;
          do {
            if (0 < param_3) {
              uVar26 = -(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2;
              uVar28 = -(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar43 << 2;
              lVar35 = 0;
              lVar58 = param_6 + uVar26;
              lVar24 = param_6 + uVar28;
              iVar51 = param_3;
              do {
                iVar51 = iVar51 + -1;
                *(float *)((long)param_8 + lVar35 + uVar28) =
                     *(float *)(lVar24 + lVar35) - *(float *)(lVar58 + lVar35);
                *(float *)((long)param_8 + lVar35 + uVar26) =
                     *(float *)(lVar24 + lVar35) + *(float *)(lVar58 + lVar35);
                lVar35 = lVar35 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2);
              } while (iVar51 != 0);
            }
            iVar32 = iVar32 + 1;
            uVar43 = uVar43 + uVar41;
            uVar33 = uVar33 - uVar41;
          } while (iVar32 < iVar22);
        }
      }
    }
    if (param_1 == 1) {
      return;
    }
  }
  else if (iVar45 < param_3) {
    if (2 < param_2) {
      local_94 = uVar43 - 2;
      iVar19 = param_3 * param_1;
      iVar32 = uVar43 + 2;
      iVar47 = iVar19 * (param_2 + -1) + 2;
      iVar51 = iVar19 + 2;
      iVar25 = 1;
      do {
        if (2 < (int)param_1) {
          iVar18 = 2;
          iVar23 = local_94;
          iVar4 = iVar51;
          iVar67 = iVar47;
          iVar52 = iVar32;
          do {
            if (0 < param_3) {
              lVar24 = 0;
              lVar58 = 0;
              iVar56 = param_3;
              do {
                pfVar42 = (float *)((long)param_5 + lVar24 + (long)iVar52 * 4 + -4);
                pfVar14 = (float *)((long)param_5 + lVar24 + (long)iVar23 * 4);
                pfVar16 = (float *)((long)param_8 + lVar58 + (long)iVar4 * 4 + -4);
                pfVar21 = (float *)((long)param_8 + lVar58 + (long)iVar67 * 4 + -4);
                iVar56 = iVar56 + -1;
                *pfVar16 = *pfVar42 + pfVar14[-1];
                lVar58 = lVar58 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2);
                lVar24 = lVar24 + (-(ulong)(param_2 * param_1 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)(param_2 * param_1) << 2);
                *pfVar21 = *pfVar42 - pfVar14[-1];
                pfVar16[1] = pfVar42[1] - *pfVar14;
                pfVar21[1] = pfVar42[1] + *pfVar14;
              } while (iVar56 != 0);
            }
            iVar18 = iVar18 + 2;
            iVar23 = iVar23 + -2;
            iVar52 = iVar52 + 2;
            iVar67 = iVar67 + 2;
            iVar4 = iVar4 + 2;
          } while (iVar18 < (int)param_1);
        }
        iVar25 = iVar25 + 1;
        iVar32 = iVar32 + uVar43;
        local_94 = local_94 + uVar43;
        iVar47 = iVar47 - iVar19;
        iVar51 = iVar51 + iVar19;
      } while (iVar25 < iVar22);
      goto LAB_00130994;
    }
  }
  else if (2 < param_2) {
    iVar25 = param_3 * param_1;
    uVar26 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2;
    iVar47 = iVar25 * (param_2 + -1);
    uVar34 = -(ulong)(param_2 * param_1 >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(param_2 * param_1) << 2;
    iVar32 = 1;
    iVar51 = iVar25;
    do {
      if (0 < param_3) {
        uVar37 = -(uVar28 >> 0x1f) & 0xfffffffc00000000 | uVar28 << 2;
        iVar19 = 0;
        pfVar42 = param_8 + (long)iVar51 + 2;
        pfVar14 = param_8 + (long)iVar47 + 2;
        pfVar16 = (float *)((long)param_5 + (uVar37 - 0xc));
        pfVar21 = (float *)((long)param_5 + uVar37 + 8);
        do {
          if (2 < (int)param_1) {
            iVar18 = 2;
            pfVar55 = pfVar21;
            pfVar61 = pfVar14;
            pfVar63 = pfVar16;
            pfVar65 = pfVar42;
            do {
              iVar18 = iVar18 + 2;
              pfVar65[-1] = pfVar55[-1] + *pfVar63;
              pfVar61[-1] = pfVar55[-1] - *pfVar63;
              *pfVar65 = *pfVar55 - pfVar63[1];
              pfVar1 = pfVar63 + 1;
              pfVar63 = pfVar63 + -2;
              *pfVar61 = *pfVar55 + *pfVar1;
              pfVar55 = pfVar55 + 2;
              pfVar61 = pfVar61 + 2;
              pfVar65 = pfVar65 + 2;
            } while (iVar18 < (int)param_1);
          }
          iVar19 = iVar19 + 1;
          pfVar42 = (float *)((long)pfVar42 + uVar26);
          pfVar16 = (float *)((long)pfVar16 + uVar34);
          pfVar14 = (float *)((long)pfVar14 + uVar26);
          pfVar21 = (float *)((long)pfVar21 + uVar34);
        } while (iVar19 != param_3);
      }
      iVar32 = iVar32 + 1;
      uVar28 = (ulong)((int)uVar28 + uVar43);
      iVar47 = iVar47 - iVar25;
      iVar51 = iVar51 + iVar25;
    } while (iVar32 < iVar22);
    goto LAB_00130994;
  }
  if (iVar45 < param_3) {
    if (2 < param_2) {
      iVar51 = param_3 * param_1;
      uVar41 = iVar51 * (param_2 + -1) + 2;
      uVar43 = iVar51 + 2;
      iVar32 = 1;
      do {
        if (2 < (int)param_1) {
          iVar25 = 2;
          uVar33 = uVar41;
          uVar9 = uVar43;
          do {
            if (0 < param_3) {
              uVar26 = -(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2;
              uVar28 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
              lVar58 = 0;
              iVar47 = param_3;
              do {
                pfVar42 = (float *)(param_6 + -4 + uVar28 + lVar58);
                pfVar14 = (float *)(param_6 + uVar26 + lVar58);
                pfVar16 = (float *)((long)param_8 + lVar58 + (uVar28 - 4));
                pfVar21 = (float *)((long)param_8 + lVar58 + uVar26);
                iVar47 = iVar47 + -1;
                *pfVar16 = *pfVar42 - *pfVar14;
                lVar58 = lVar58 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2);
                pfVar21[-1] = *pfVar42 + *pfVar14;
                pfVar16[1] = pfVar42[1] + pfVar14[-1];
                *pfVar21 = pfVar42[1] - pfVar14[-1];
              } while (iVar47 != 0);
            }
            iVar25 = iVar25 + 2;
            uVar33 = uVar33 + 2;
            uVar9 = uVar9 + 2;
          } while (iVar25 < (int)param_1);
        }
        iVar32 = iVar32 + 1;
        uVar41 = uVar41 - iVar51;
        uVar43 = uVar43 + iVar51;
      } while (iVar32 < iVar22);
    }
  }
  else if (2 < param_2) {
    uVar41 = param_3 * param_1;
    uVar28 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2;
    uVar33 = uVar41 * (param_2 + -1);
    iVar32 = 1;
    uVar43 = uVar41;
    do {
      if (0 < param_3) {
        iVar51 = 0;
        lVar58 = param_6;
        pfVar42 = param_8;
        do {
          if (2 < (int)param_1) {
            iVar25 = 2;
            lVar24 = (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2) + 4;
            uVar26 = -(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar43 << 2;
            do {
              uVar26 = uVar26 + 8;
              pfVar14 = (float *)(lVar58 + uVar26);
              pfVar16 = (float *)(lVar58 + lVar24);
              pfVar21 = (float *)((long)pfVar42 + lVar24);
              iVar25 = iVar25 + 2;
              ((float *)((long)pfVar42 + uVar26))[-1] = pfVar14[-1] - pfVar16[1];
              lVar24 = lVar24 + 8;
              *pfVar21 = pfVar14[-1] + pfVar16[1];
              *(float *)((long)pfVar42 + uVar26) = *pfVar14 + *pfVar16;
              pfVar21[1] = *pfVar14 - *pfVar16;
            } while (iVar25 < (int)param_1);
          }
          iVar51 = iVar51 + 1;
          lVar58 = lVar58 + uVar28;
          pfVar42 = (float *)((long)pfVar42 + uVar28);
        } while (iVar51 != param_3);
      }
      iVar32 = iVar32 + 1;
      uVar33 = uVar33 - uVar41;
      uVar43 = uVar43 + uVar41;
    } while (iVar32 < iVar22);
  }
  if (0 < (int)param_4) {
    if ((param_4 < 8) ||
       ((param_7 < (long)param_9 + uVar60 * 4 && (param_9 < (undefined8 *)(param_7 + uVar60 * 4)))))
    {
      uVar28 = 0;
    }
    else {
      uVar28 = uVar60 & 0xfffffff8;
      puVar30 = param_9 + 2;
      puVar36 = (undefined8 *)(param_7 + 0x10);
      uVar26 = uVar28;
      do {
        puVar5 = puVar30 + -1;
        uVar71 = puVar30[-2];
        uVar73 = puVar30[1];
        uVar70 = *puVar30;
        puVar30 = puVar30 + 4;
        uVar26 = uVar26 - 8;
        puVar36[-1] = *puVar5;
        puVar36[-2] = uVar71;
        puVar36[1] = uVar73;
        *puVar36 = uVar70;
        puVar36 = puVar36 + 4;
      } while (uVar26 != 0);
      if (uVar28 == uVar60) goto LAB_001312b4;
    }
    lVar58 = uVar60 - uVar28;
    puVar29 = (undefined4 *)(param_7 + uVar28 * 4);
    puVar31 = (undefined4 *)((long)param_9 + uVar28 * 4);
    do {
      lVar58 = lVar58 + -1;
      *puVar29 = *puVar31;
      puVar29 = puVar29 + 1;
      puVar31 = puVar31 + 1;
    } while (lVar58 != 0);
  }
LAB_001312b4:
  if (1 < param_2) {
    iVar22 = 1;
    uVar43 = param_3 * param_1;
    do {
      if (0 < param_3) {
        uVar60 = -(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar43 << 2;
        iVar32 = param_3;
        do {
          iVar32 = iVar32 + -1;
          *(undefined4 *)(param_6 + uVar60) = *(undefined4 *)((long)param_8 + uVar60);
          uVar60 = uVar60 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2);
        } while (iVar32 != 0);
      }
      iVar22 = iVar22 + 1;
      uVar43 = uVar43 + param_3 * param_1;
    } while (iVar22 != param_2);
  }
  if (param_3 < iVar45) {
    if (1 < param_2) {
      uVar60 = (ulong)(param_1 - 3 & 0xfffffffe);
      uVar33 = param_1 - 1 & 6;
      lVar58 = uVar60 + 3;
      uVar9 = param_3 * param_1;
      uVar43 = (param_1 - 3 >> 1) + 1;
      lVar24 = (uVar60 + 2) - (ulong)uVar33;
      iVar45 = 0;
      uVar60 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2;
      iVar22 = 1;
      uVar59 = (ulong)uVar43 & 0xfffffffc;
      iVar32 = -1;
      uVar41 = uVar9;
      do {
        if (0 < param_3) {
          iVar51 = uVar9 + uVar9 * iVar45;
          uVar28 = -(ulong)(uVar41 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar41 << 2;
          pfVar42 = (float *)((long)param_8 + uVar28 + 4);
          pfVar14 = (float *)(param_6 + 4 + uVar28);
          uVar10 = iVar45 * param_1 - 1;
          uVar28 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2;
          lVar35 = 0;
          lVar44 = (long)(int)uVar41;
          do {
            if (2 < (int)param_1) {
              lVar68 = lVar44;
              lVar62 = (long)iVar32;
              if (uVar43 < 4) {
LAB_001314fc:
                iVar25 = 2;
              }
              else {
                lVar46 = lVar35 * (int)param_1;
                lVar64 = (long)iVar51 + 1 + lVar46;
                lVar66 = lVar58 + iVar51 + lVar46;
                pfVar16 = (float *)(param_6 + lVar64 * 4);
                pfVar21 = (float *)(param_6 + lVar66 * 4);
                if (pfVar16 < (float *)(param_10 + lVar58 * 4 + uVar28) &&
                    (float *)(param_10 + 4 + uVar28) < pfVar21) goto LAB_001314fc;
                iVar25 = 2;
                if (param_8 + lVar66 <= pfVar16 || pfVar21 <= param_8 + lVar64) {
                  lVar68 = lVar24 + iVar51 + lVar46;
                  pfVar16 = pfVar42;
                  uVar26 = uVar59;
                  pfVar21 = (float *)(param_10 + 4 + (long)iVar32 * 4);
                  pfVar55 = pfVar14;
                  do {
                    uVar70 = *(undefined8 *)(pfVar21 + 2);
                    uVar71 = *(undefined8 *)pfVar21;
                    uVar13 = *(undefined8 *)(pfVar21 + 6);
                    uVar73 = *(undefined8 *)(pfVar21 + 4);
                    uVar74 = *(undefined8 *)(pfVar16 + 2);
                    uVar72 = *(undefined8 *)pfVar16;
                    uVar77 = *(undefined8 *)(pfVar16 + 6);
                    uVar76 = *(undefined8 *)(pfVar16 + 4);
                    fVar69 = *pfVar21;
                    fVar91 = pfVar21[1];
                    fVar75 = pfVar21[2];
                    fVar79 = pfVar21[3];
                    fVar82 = pfVar21[4];
                    fVar80 = pfVar21[5];
                    fVar78 = pfVar21[6];
                    fVar81 = pfVar21[7];
                    pfVar21 = pfVar21 + 8;
                    fVar83 = *pfVar16;
                    fVar87 = pfVar16[1];
                    fVar84 = pfVar16[2];
                    fVar88 = pfVar16[3];
                    fVar85 = pfVar16[4];
                    fVar89 = pfVar16[5];
                    fVar86 = pfVar16[6];
                    fVar90 = pfVar16[7];
                    pfVar16 = pfVar16 + 8;
                    uVar26 = uVar26 - 4;
                    *pfVar55 = (float)uVar71 * (float)uVar72 -
                               (float)((ulong)uVar71 >> 0x20) * (float)((ulong)uVar72 >> 0x20);
                    pfVar55[1] = fVar69 * fVar87 + fVar91 * fVar83;
                    pfVar55[2] = (float)uVar70 * (float)uVar74 -
                                 (float)((ulong)uVar70 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
                    pfVar55[3] = fVar75 * fVar88 + fVar79 * fVar84;
                    pfVar55[4] = (float)uVar73 * (float)uVar76 -
                                 (float)((ulong)uVar73 >> 0x20) * (float)((ulong)uVar76 >> 0x20);
                    pfVar55[5] = fVar82 * fVar89 + fVar80 * fVar85;
                    pfVar55[6] = (float)uVar13 * (float)uVar77 -
                                 (float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar77 >> 0x20);
                    pfVar55[7] = fVar78 * fVar90 + fVar81 * fVar86;
                    pfVar55 = pfVar55 + 8;
                  } while (uVar26 != 0);
                  lVar62 = lVar24 + (int)uVar10;
                  iVar25 = (param_1 + 1 & 0xfffffffe) - uVar33;
                  if (uVar59 == uVar43) goto LAB_0013155c;
                }
              }
              pfVar16 = (float *)(param_10 + 8 + lVar62 * 4);
              pfVar21 = param_8 + lVar68 + 2;
              pfVar55 = (float *)(param_6 + 8 + lVar68 * 4);
              do {
                iVar25 = iVar25 + 2;
                pfVar55[-1] = pfVar16[-1] * pfVar21[-1] - *pfVar16 * *pfVar21;
                pfVar63 = pfVar16 + -1;
                fVar75 = *pfVar16;
                fVar69 = *pfVar21;
                pfVar16 = pfVar16 + 2;
                pfVar61 = pfVar21 + -1;
                pfVar21 = pfVar21 + 2;
                *pfVar55 = *pfVar63 * fVar69 + fVar75 * *pfVar61;
                pfVar55 = pfVar55 + 2;
              } while (iVar25 < (int)param_1);
            }
LAB_0013155c:
            lVar35 = lVar35 + 1;
            lVar44 = lVar44 + (int)param_1;
            pfVar14 = (float *)((long)pfVar14 + uVar60);
            pfVar42 = (float *)((long)pfVar42 + uVar60);
          } while ((int)lVar35 != param_3);
        }
        iVar22 = iVar22 + 1;
        iVar32 = iVar32 + param_1;
        iVar45 = iVar45 + 1;
        uVar41 = uVar41 + uVar9;
      } while (iVar22 != param_2);
    }
  }
  else if (1 < param_2) {
    iVar22 = 1;
    uVar43 = param_3 * param_1 + 2;
    iVar45 = -1;
    do {
      if (2 < (int)param_1) {
        iVar32 = 2;
        lVar58 = (long)iVar45;
        uVar41 = uVar43;
        do {
          if (0 < param_3) {
            uVar60 = -(ulong)(uVar41 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar41 << 2;
            iVar51 = param_3;
            do {
              lVar24 = (lVar58 + 1) * 4;
              pfVar42 = (float *)((long)param_8 + uVar60);
              lVar35 = (lVar58 + 2) * 4;
              pfVar14 = (float *)(param_6 + uVar60);
              iVar51 = iVar51 + -1;
              pfVar14[-1] = *(float *)(param_10 + lVar24) * pfVar42[-1] -
                            *(float *)(param_10 + lVar35) * *pfVar42;
              uVar60 = uVar60 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2);
              *pfVar14 = *(float *)(param_10 + lVar24) * *pfVar42 +
                         *(float *)(param_10 + lVar35) * pfVar42[-1];
            } while (iVar51 != 0);
          }
          iVar32 = iVar32 + 2;
          uVar41 = uVar41 + 2;
          lVar58 = lVar58 + 2;
        } while (iVar32 < (int)param_1);
      }
      iVar22 = iVar22 + 1;
      uVar43 = uVar43 + param_3 * param_1;
      iVar45 = iVar45 + param_1;
    } while (iVar22 != param_2);
  }
  return;
}

