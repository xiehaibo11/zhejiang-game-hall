
void FUN_0012db38(uint param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5,
                 long param_6,undefined8 *param_7,undefined4 *param_8,ulong param_9,long param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  float *pfVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  float *pfVar18;
  float *pfVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  float *pfVar29;
  uint uVar30;
  int iVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  undefined8 *puVar35;
  undefined4 *puVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  int iVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  long lVar45;
  int iVar46;
  int iVar47;
  uint uVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  undefined8 *puVar52;
  undefined4 *puVar53;
  int iVar54;
  undefined8 *puVar55;
  undefined4 *puVar56;
  ulong uVar57;
  long lVar58;
  float *pfVar59;
  long lVar60;
  long lVar61;
  ulong uVar62;
  float *pfVar63;
  uint uVar64;
  float *pfVar65;
  float *pfVar66;
  ulong uVar67;
  ulong uVar68;
  undefined8 *puVar69;
  double dVar70;
  double dVar71;
  undefined8 uVar72;
  float fVar73;
  float fVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  float fVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  float fVar80;
  float fVar82;
  undefined8 uVar81;
  float fVar83;
  float fVar85;
  undefined8 uVar84;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  
  uVar67 = (ulong)param_4;
  uVar62 = (ulong)param_1;
  dVar70 = cos((double)(6.2831855 / (float)param_2));
  dVar71 = sin((double)(6.2831855 / (float)param_2));
  uVar23 = param_1 - 1;
  iVar8 = param_2 + 1 >> 1;
  iVar47 = (int)uVar23 >> 1;
  if (uVar23 != 0) {
    if (0 < (int)param_4) {
      if ((param_4 < 8) ||
         ((param_9 < (long)param_7 + uVar67 * 4 && (param_7 < (undefined8 *)(param_9 + uVar67 * 4)))
         )) {
        uVar42 = 0;
      }
      else {
        uVar42 = uVar67 & 0xfffffff8;
        puVar35 = param_7 + 2;
        puVar15 = (undefined8 *)(param_9 + 0x10);
        uVar68 = uVar42;
        do {
          puVar28 = puVar35 + -1;
          uVar81 = puVar35[-2];
          uVar72 = puVar35[1];
          uVar84 = *puVar35;
          puVar35 = puVar35 + 4;
          uVar68 = uVar68 - 8;
          puVar15[-1] = *puVar28;
          puVar15[-2] = uVar81;
          puVar15[1] = uVar72;
          *puVar15 = uVar84;
          puVar15 = puVar15 + 4;
        } while (uVar68 != 0);
        if (uVar42 == uVar67) goto LAB_0012dc28;
      }
      lVar38 = uVar67 - uVar42;
      puVar21 = (undefined4 *)(param_9 + uVar42 * 4);
      puVar36 = (undefined4 *)((long)param_7 + uVar42 * 4);
      do {
        lVar38 = lVar38 + -1;
        *puVar21 = *puVar36;
        puVar21 = puVar21 + 1;
        puVar36 = puVar36 + 1;
      } while (lVar38 != 0);
    }
LAB_0012dc28:
    iVar54 = param_2 + -1;
    if (iVar54 != 0 && 0 < param_2) {
      iVar46 = 1;
      uVar48 = param_3 * param_1;
      do {
        if (0 < (int)param_3) {
          uVar42 = -(ulong)(uVar48 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar48 << 2;
          uVar30 = param_3;
          do {
            uVar30 = uVar30 - 1;
            *(undefined4 *)((long)param_8 + uVar42) = *(undefined4 *)(param_6 + uVar42);
            uVar42 = uVar42 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2);
          } while (uVar30 != 0);
        }
        iVar46 = iVar46 + 1;
        uVar48 = uVar48 + param_3 * param_1;
      } while (iVar46 != param_2);
    }
    if ((int)param_3 < iVar47) {
      if (1 < param_2) {
        uVar42 = (ulong)(param_1 - 3 & 0xfffffffe);
        uVar48 = (param_1 - 3 >> 1) + 1;
        lVar38 = uVar42 * 4 + 0xc;
        lVar32 = (uVar42 + 2) - (ulong)(uVar23 & 6);
        puVar21 = param_8 + 1;
        iVar41 = 0;
        uVar37 = param_3 * param_1;
        iVar46 = 1;
        uVar68 = (ulong)uVar48 & 0xfffffffc;
        iVar31 = -1;
        uVar30 = uVar37;
        do {
          if (0 < (int)param_3) {
            uVar64 = 0;
            uVar9 = iVar41 * param_1 - 1;
            uVar33 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
            uVar6 = uVar30;
            do {
              if (2 < (int)param_1) {
                lVar49 = (long)(int)uVar6;
                if ((uVar48 < 4) ||
                   (uVar5 = uVar37 + uVar37 * iVar41 + uVar64 * param_1,
                   uVar39 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2,
                   (long)puVar21 + uVar39 < param_10 + lVar38 + uVar33 &&
                   param_10 + 4 + uVar33 < (long)(param_8 + uVar42 + 3) + uVar39 ||
                   puVar21 < (undefined4 *)(param_6 + lVar38) &&
                   (undefined4 *)(param_6 + 4U) < param_8 + uVar42 + 3)) {
                  lVar50 = (long)iVar31;
                  iVar16 = 2;
                }
                else {
                  uVar39 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
                  pfVar14 = (float *)((long)puVar21 + uVar39);
                  pfVar18 = (float *)((long)(param_6 + 4U) + uVar39);
                  lVar49 = lVar32 + (int)uVar5;
                  uVar39 = uVar68;
                  pfVar19 = (float *)(param_10 + 4 + (long)iVar31 * 4);
                  do {
                    uVar84 = *(undefined8 *)(pfVar19 + 2);
                    uVar81 = *(undefined8 *)pfVar19;
                    uVar11 = *(undefined8 *)(pfVar19 + 6);
                    uVar72 = *(undefined8 *)(pfVar19 + 4);
                    uVar76 = *(undefined8 *)(pfVar18 + 2);
                    uVar75 = *(undefined8 *)pfVar18;
                    uVar79 = *(undefined8 *)(pfVar18 + 6);
                    uVar78 = *(undefined8 *)(pfVar18 + 4);
                    fVar73 = *pfVar19;
                    fVar87 = pfVar19[1];
                    fVar74 = pfVar19[2];
                    fVar82 = pfVar19[3];
                    fVar80 = pfVar19[4];
                    fVar83 = pfVar19[5];
                    fVar77 = pfVar19[6];
                    fVar85 = pfVar19[7];
                    pfVar19 = pfVar19 + 8;
                    fVar86 = *pfVar18;
                    fVar91 = pfVar18[1];
                    fVar88 = pfVar18[2];
                    fVar92 = pfVar18[3];
                    fVar89 = pfVar18[4];
                    fVar93 = pfVar18[5];
                    fVar90 = pfVar18[6];
                    fVar94 = pfVar18[7];
                    pfVar18 = pfVar18 + 8;
                    uVar39 = uVar39 - 4;
                    *pfVar14 = (float)uVar81 * (float)uVar75 +
                               (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar75 >> 0x20);
                    pfVar14[1] = fVar73 * fVar91 - fVar87 * fVar86;
                    pfVar14[2] = (float)uVar84 * (float)uVar76 +
                                 (float)((ulong)uVar84 >> 0x20) * (float)((ulong)uVar76 >> 0x20);
                    pfVar14[3] = fVar74 * fVar92 - fVar82 * fVar88;
                    pfVar14[4] = (float)uVar72 * (float)uVar78 +
                                 (float)((ulong)uVar72 >> 0x20) * (float)((ulong)uVar78 >> 0x20);
                    pfVar14[5] = fVar80 * fVar93 - fVar83 * fVar89;
                    pfVar14[6] = (float)uVar11 * (float)uVar79 +
                                 (float)((ulong)uVar11 >> 0x20) * (float)((ulong)uVar79 >> 0x20);
                    pfVar14[7] = fVar77 * fVar94 - fVar85 * fVar90;
                    pfVar14 = pfVar14 + 8;
                  } while (uVar39 != 0);
                  lVar50 = lVar32 + (int)uVar9;
                  iVar16 = (param_1 + 1 & 0xfffffffe) - (uVar23 & 6);
                  if (uVar68 == uVar48) goto LAB_0012de90;
                }
                pfVar14 = (float *)(param_10 + 8 + lVar50 * 4);
                pfVar18 = (float *)(param_6 + 8 + lVar49 * 4);
                pfVar19 = (float *)(param_8 + lVar49 + 2);
                do {
                  iVar16 = iVar16 + 2;
                  pfVar19[-1] = pfVar14[-1] * pfVar18[-1] + *pfVar14 * *pfVar18;
                  pfVar59 = pfVar14 + -1;
                  fVar74 = *pfVar14;
                  fVar73 = *pfVar18;
                  pfVar14 = pfVar14 + 2;
                  pfVar29 = pfVar18 + -1;
                  pfVar18 = pfVar18 + 2;
                  *pfVar19 = *pfVar59 * fVar73 - fVar74 * *pfVar29;
                  pfVar19 = pfVar19 + 2;
                } while (iVar16 < (int)param_1);
              }
LAB_0012de90:
              uVar64 = uVar64 + 1;
              uVar6 = uVar6 + param_1;
            } while (uVar64 != param_3);
          }
          iVar46 = iVar46 + 1;
          iVar31 = iVar31 + param_1;
          uVar30 = uVar30 + uVar37;
          iVar41 = iVar41 + 1;
        } while (iVar46 != param_2);
      }
    }
    else if (1 < param_2) {
      iVar46 = 1;
      uVar48 = param_3 * param_1 + 2;
      iVar41 = -1;
      do {
        if (2 < (int)param_1) {
          iVar31 = 2;
          lVar38 = (long)iVar41;
          uVar30 = uVar48;
          do {
            if (0 < (int)param_3) {
              uVar42 = -(ulong)(uVar30 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar30 << 2;
              uVar37 = param_3;
              do {
                lVar32 = (lVar38 + 1) * 4;
                pfVar14 = (float *)(param_6 + uVar42);
                lVar49 = (lVar38 + 2) * 4;
                pfVar18 = (float *)((long)param_8 + uVar42);
                uVar37 = uVar37 - 1;
                pfVar18[-1] = *(float *)(param_10 + lVar32) * pfVar14[-1] +
                              *(float *)(param_10 + lVar49) * *pfVar14;
                uVar42 = uVar42 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2);
                *pfVar18 = *(float *)(param_10 + lVar32) * *pfVar14 -
                           *(float *)(param_10 + lVar49) * pfVar14[-1];
              } while (uVar37 != 0);
            }
            iVar31 = iVar31 + 2;
            uVar30 = uVar30 + 2;
            lVar38 = lVar38 + 2;
          } while (iVar31 < (int)param_1);
        }
        iVar46 = iVar46 + 1;
        uVar48 = uVar48 + param_3 * param_1;
        iVar41 = iVar41 + param_1;
      } while (iVar46 != param_2);
    }
    if (iVar47 < (int)param_3) {
      if (2 < param_2) {
        iVar46 = (param_3 - 1) * param_1 + 2;
        iVar41 = (iVar54 * param_3 + -1) * param_1 + 2;
        iVar54 = 1;
        do {
          if (2 < (int)param_1) {
            iVar31 = 2;
            iVar16 = iVar41;
            iVar12 = iVar46;
            do {
              if (0 < (int)param_3) {
                lVar49 = ((long)(int)param_1 + (long)iVar16) * 4;
                lVar32 = ((long)(int)param_1 + (long)iVar12) * 4;
                lVar38 = 0;
                uVar48 = param_3;
                do {
                  pfVar14 = (float *)((long)param_8 + lVar38 + lVar32);
                  pfVar18 = (float *)((long)param_8 + lVar38 + lVar49 + -4);
                  pfVar19 = (float *)(param_6 + lVar32 + lVar38);
                  pfVar29 = (float *)(param_6 + -4 + lVar49 + lVar38);
                  uVar48 = uVar48 - 1;
                  pfVar19[-1] = pfVar14[-1] + *pfVar18;
                  lVar38 = lVar38 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2);
                  *pfVar29 = *pfVar14 - pfVar18[1];
                  *pfVar19 = *pfVar14 + pfVar18[1];
                  pfVar29[1] = *pfVar18 - pfVar14[-1];
                } while (uVar48 != 0);
              }
              iVar31 = iVar31 + 2;
              iVar16 = iVar16 + 2;
              iVar12 = iVar12 + 2;
            } while (iVar31 < (int)param_1);
          }
          iVar54 = iVar54 + 1;
          iVar41 = iVar41 - param_3 * param_1;
          iVar46 = iVar46 + param_3 * param_1;
        } while (iVar54 < iVar8);
      }
    }
    else if (2 < param_2) {
      uVar30 = param_3 * param_1;
      uVar42 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2;
      iVar46 = 1;
      uVar37 = uVar30 * iVar54;
      uVar48 = uVar30;
      do {
        if (0 < (int)param_3) {
          uVar64 = 0;
          puVar21 = param_8;
          lVar38 = param_6;
          do {
            if (2 < (int)param_1) {
              iVar54 = 2;
              lVar32 = (-(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar37 << 2) + 4;
              uVar68 = -(ulong)(uVar48 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar48 << 2;
              do {
                uVar68 = uVar68 + 8;
                pfVar14 = (float *)((long)puVar21 + uVar68);
                pfVar18 = (float *)((long)puVar21 + lVar32);
                pfVar19 = (float *)(lVar38 + lVar32);
                iVar54 = iVar54 + 2;
                ((float *)(lVar38 + uVar68))[-1] = pfVar14[-1] + *pfVar18;
                lVar32 = lVar32 + 8;
                *pfVar19 = *pfVar14 - pfVar18[1];
                *(float *)(lVar38 + uVar68) = *pfVar14 + pfVar18[1];
                pfVar19[1] = *pfVar18 - pfVar14[-1];
              } while (iVar54 < (int)param_1);
            }
            uVar64 = uVar64 + 1;
            lVar38 = lVar38 + uVar42;
            puVar21 = (undefined4 *)((long)puVar21 + uVar42);
          } while (uVar64 != param_3);
        }
        iVar46 = iVar46 + 1;
        uVar37 = uVar37 - uVar30;
        uVar48 = uVar48 + uVar30;
      } while (iVar46 < iVar8);
    }
  }
  if (0 < (int)param_4) {
    if ((param_4 < 8) ||
       ((param_7 < (undefined8 *)(param_9 + uVar67 * 4) && (param_9 < (long)param_7 + uVar67 * 4))))
    {
      uVar42 = 0;
    }
    else {
      uVar42 = uVar67 & 0xfffffff8;
      puVar35 = (undefined8 *)(param_9 + 0x10);
      puVar15 = param_7 + 2;
      uVar68 = uVar42;
      do {
        puVar28 = puVar35 + -1;
        uVar81 = puVar35[-2];
        uVar72 = puVar35[1];
        uVar84 = *puVar35;
        puVar35 = puVar35 + 4;
        uVar68 = uVar68 - 8;
        puVar15[-1] = *puVar28;
        puVar15[-2] = uVar81;
        puVar15[1] = uVar72;
        *puVar15 = uVar84;
        puVar15 = puVar15 + 4;
      } while (uVar68 != 0);
      if (uVar42 == uVar67) goto LAB_0012e1dc;
    }
    lVar38 = uVar67 - uVar42;
    puVar21 = (undefined4 *)((long)param_7 + uVar42 * 4);
    puVar36 = (undefined4 *)(param_9 + uVar42 * 4);
    do {
      lVar38 = lVar38 + -1;
      *puVar21 = *puVar36;
      puVar21 = puVar21 + 1;
      puVar36 = puVar36 + 1;
    } while (lVar38 != 0);
  }
LAB_0012e1dc:
  if (2 < param_2) {
    iVar46 = (param_3 - 1) * param_1;
    iVar41 = ~param_3 * param_1 + param_4 * param_2;
    iVar54 = 1;
    do {
      if (0 < (int)param_3) {
        lVar49 = ((long)(int)param_1 + (long)iVar41) * 4;
        lVar32 = ((long)(int)param_1 + (long)iVar46) * 4;
        lVar38 = 0;
        uVar48 = param_3;
        do {
          uVar48 = uVar48 - 1;
          *(float *)(param_6 + lVar32 + lVar38) =
               *(float *)((long)param_8 + lVar38 + lVar32) +
               *(float *)((long)param_8 + lVar38 + lVar49);
          *(float *)(param_6 + lVar49 + lVar38) =
               *(float *)((long)param_8 + lVar38 + lVar49) -
               *(float *)((long)param_8 + lVar38 + lVar32);
          lVar38 = lVar38 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2);
        } while (uVar48 != 0);
      }
      iVar54 = iVar54 + 1;
      iVar46 = iVar46 + param_3 * param_1;
      iVar41 = iVar41 - param_3 * param_1;
    } while (iVar54 < iVar8);
    if (2 < param_2) {
      uVar42 = (ulong)(param_4 - 1) + 1;
      lVar38 = uVar42 - (param_4 & 3);
      uVar39 = (ulong)param_4;
      uVar30 = (param_2 + -1) * param_4;
      iVar41 = (param_2 + -2) * param_4;
      uVar33 = -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar67 << 2;
      lVar32 = uVar42 * 4;
      lVar49 = uVar39 * 4;
      lVar50 = (long)(int)param_4;
      puVar35 = (undefined8 *)((long)param_7 + uVar33);
      uVar57 = uVar39 & 0xfffffffc;
      puVar15 = (undefined8 *)((long)param_7 + (lVar50 + uVar39) * 4);
      uVar68 = -(ulong)(uVar30 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar30 << 2;
      lVar61 = (long)(int)uVar30;
      puVar28 = (undefined8 *)((long)param_7 + uVar68);
      iVar46 = 0;
      fVar73 = 0.0;
      fVar74 = 1.0;
      puVar26 = (undefined8 *)((long)param_7 + (lVar61 + uVar39) * 4);
      iVar54 = 1;
      uVar37 = uVar30;
      uVar48 = param_4;
      do {
        lVar34 = (long)(int)uVar37;
        puVar1 = (undefined8 *)(param_9 + (long)(int)uVar37 * 4);
        lVar40 = (long)(int)uVar48;
        puVar2 = (undefined8 *)(param_9 + (long)(int)uVar48 * 4);
        uVar64 = param_4 + iVar46 * param_4;
        fVar80 = fVar74 * (float)dVar71;
        uVar24 = -(ulong)(uVar64 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar64 << 2;
        uVar64 = uVar30 + iVar46 * -param_4;
        fVar74 = fVar74 * (float)dVar70 - fVar73 * (float)dVar71;
        puVar7 = (undefined8 *)(param_9 + uVar24);
        fVar73 = fVar73 * (float)dVar70 + fVar80;
        if (0 < (int)param_4) {
          lVar60 = lVar61;
          lVar45 = lVar50;
          lVar51 = lVar40;
          lVar58 = lVar34;
          if (param_4 < 4) {
LAB_0012e53c:
            uVar44 = 0;
          }
          else {
            uVar44 = -(ulong)(uVar64 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar64 << 2;
            puVar17 = (undefined8 *)(param_9 + uVar44);
            puVar13 = (undefined8 *)(param_9 + lVar49 + uVar44);
            puVar55 = (undefined8 *)(param_9 + lVar49 + uVar24);
            uVar44 = 0;
            if ((((puVar13 <= puVar7 || puVar55 <= puVar17) &&
                 ((undefined8 *)((long)param_7 + lVar49) <= puVar7 || puVar55 <= param_7)) &&
                (puVar15 <= puVar7 || puVar55 <= puVar35)) &&
               (puVar26 <= puVar7 || puVar55 <= puVar28)) {
              if ((puVar17 < (undefined8 *)((long)param_7 + lVar49) && param_7 < puVar13) ||
                 (puVar17 < puVar15 && puVar35 < puVar13)) goto LAB_0012e53c;
              if (puVar26 <= puVar17 || puVar13 <= puVar28) {
                puVar13 = puVar2;
                puVar17 = param_7;
                uVar44 = uVar57;
                puVar55 = puVar1;
                do {
                  puVar20 = (undefined8 *)((long)puVar17 + uVar33);
                  uVar84 = puVar20[1];
                  uVar81 = *puVar20;
                  uVar72 = *puVar17;
                  uVar44 = uVar44 - 4;
                  puVar13[1] = CONCAT44((float)((ulong)puVar17[1] >> 0x20) +
                                        fVar74 * (float)((ulong)uVar84 >> 0x20),
                                        (float)puVar17[1] + fVar74 * (float)uVar84);
                  *puVar13 = CONCAT44((float)((ulong)uVar72 >> 0x20) +
                                      fVar74 * (float)((ulong)uVar81 >> 0x20),
                                      (float)uVar72 + fVar74 * (float)uVar81);
                  puVar20 = (undefined8 *)((long)puVar17 + uVar68);
                  uVar84 = puVar20[1];
                  uVar81 = *puVar20;
                  puVar17 = puVar17 + 2;
                  puVar55[1] = CONCAT44(fVar73 * (float)((ulong)uVar84 >> 0x20),
                                        fVar73 * (float)uVar84);
                  *puVar55 = CONCAT44(fVar73 * (float)((ulong)uVar81 >> 0x20),fVar73 * (float)uVar81
                                     );
                  puVar13 = puVar13 + 2;
                  puVar55 = puVar55 + 2;
                } while (uVar44 != 0);
                lVar60 = uVar57 + lVar61;
                lVar45 = uVar57 + lVar50;
                uVar44 = uVar57;
                lVar51 = uVar57 + lVar40;
                lVar58 = uVar57 + lVar34;
                if (uVar57 == uVar39) goto LAB_0012e58c;
              }
            }
          }
          lVar43 = uVar39 - uVar44;
          pfVar14 = (float *)((long)param_7 + lVar60 * 4);
          pfVar18 = (float *)((long)param_7 + lVar45 * 4);
          pfVar19 = (float *)((long)param_7 + uVar44 * 4);
          pfVar29 = (float *)(param_9 + lVar51 * 4);
          pfVar59 = (float *)(param_9 + lVar58 * 4);
          do {
            lVar43 = lVar43 + -1;
            *pfVar29 = *pfVar19 + fVar74 * *pfVar18;
            *pfVar59 = fVar73 * *pfVar14;
            pfVar14 = pfVar14 + 1;
            pfVar18 = pfVar18 + 1;
            pfVar19 = pfVar19 + 1;
            pfVar29 = pfVar29 + 1;
            pfVar59 = pfVar59 + 1;
          } while (lVar43 != 0);
        }
LAB_0012e58c:
        if (4 < param_2) {
          uVar44 = -(ulong)(uVar64 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar64 << 2;
          puVar17 = (undefined8 *)(param_9 + uVar44);
          puVar13 = (undefined8 *)(param_9 + lVar32 + uVar44);
          puVar55 = (undefined8 *)(param_9 + lVar32 + uVar24);
          iVar16 = 0;
          iVar31 = 2;
          fVar80 = fVar74;
          iVar12 = param_4 * 2;
          iVar22 = iVar41;
          fVar77 = fVar73;
          do {
            fVar87 = fVar73 * fVar80;
            fVar80 = fVar74 * fVar80 - fVar73 * fVar77;
            fVar77 = fVar74 * fVar77 + fVar87;
            if (0 < (int)param_4) {
              lVar60 = (long)iVar12;
              lVar45 = (long)iVar22;
              iVar25 = 0;
              lVar51 = lVar40;
              lVar58 = lVar34;
              if (3 < uVar42) {
                uVar64 = param_4 * 2 + iVar16 * param_4;
                uVar24 = -(ulong)(uVar64 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar64 << 2;
                uVar64 = iVar41 + iVar16 * -param_4;
                puVar20 = (undefined8 *)((long)param_7 + uVar24 + lVar32);
                uVar44 = -(ulong)(uVar64 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar64 << 2;
                puVar27 = (undefined8 *)((long)param_7 + uVar24);
                puVar52 = (undefined8 *)((long)param_7 + uVar44 + lVar32);
                puVar69 = (undefined8 *)((long)param_7 + uVar44);
                if ((((puVar13 <= puVar7 || puVar55 <= puVar17) &&
                      (puVar20 <= puVar7 || puVar55 <= puVar27)) &&
                    (puVar52 <= puVar7 || puVar55 <= puVar69)) &&
                   ((puVar20 <= puVar17 || puVar13 <= puVar27 &&
                    (puVar52 <= puVar17 || puVar13 <= puVar69)))) {
                  lVar60 = lVar38 + lVar60;
                  lVar45 = lVar38 + lVar45;
                  puVar20 = (undefined8 *)((long)param_7 + (long)iVar12 * 4);
                  puVar27 = puVar1;
                  puVar52 = (undefined8 *)((long)param_7 + (long)iVar22 * 4);
                  lVar51 = lVar38;
                  puVar69 = puVar2;
                  do {
                    uVar81 = *puVar20;
                    lVar51 = lVar51 + -4;
                    puVar69[1] = CONCAT44((float)((ulong)puVar69[1] >> 0x20) +
                                          fVar80 * (float)((ulong)puVar20[1] >> 0x20),
                                          (float)puVar69[1] + fVar80 * (float)puVar20[1]);
                    *puVar69 = CONCAT44((float)((ulong)*puVar69 >> 0x20) +
                                        fVar80 * (float)((ulong)uVar81 >> 0x20),
                                        (float)*puVar69 + fVar80 * (float)uVar81);
                    uVar81 = *puVar52;
                    puVar27[1] = CONCAT44((float)((ulong)puVar27[1] >> 0x20) +
                                          fVar77 * (float)((ulong)puVar52[1] >> 0x20),
                                          (float)puVar27[1] + fVar77 * (float)puVar52[1]);
                    *puVar27 = CONCAT44((float)((ulong)*puVar27 >> 0x20) +
                                        fVar77 * (float)((ulong)uVar81 >> 0x20),
                                        (float)*puVar27 + fVar77 * (float)uVar81);
                    puVar20 = puVar20 + 2;
                    puVar27 = puVar27 + 2;
                    puVar52 = puVar52 + 2;
                    puVar69 = puVar69 + 2;
                  } while (lVar51 != 0);
                  iVar25 = (int)lVar38;
                  lVar51 = lVar38 + lVar40;
                  lVar58 = lVar38 + lVar34;
                  if ((param_4 & 3) == 0) goto LAB_0012e790;
                }
              }
              iVar25 = param_4 - iVar25;
              pfVar14 = (float *)(param_9 + lVar51 * 4);
              pfVar18 = (float *)((long)param_7 + lVar45 * 4);
              pfVar19 = (float *)(param_9 + lVar58 * 4);
              pfVar29 = (float *)((long)param_7 + lVar60 * 4);
              do {
                iVar25 = iVar25 + -1;
                *pfVar14 = *pfVar14 + fVar80 * *pfVar29;
                *pfVar19 = *pfVar19 + fVar77 * *pfVar18;
                pfVar14 = pfVar14 + 1;
                pfVar18 = pfVar18 + 1;
                pfVar19 = pfVar19 + 1;
                pfVar29 = pfVar29 + 1;
              } while (iVar25 != 0);
            }
LAB_0012e790:
            iVar31 = iVar31 + 1;
            iVar22 = iVar22 - param_4;
            iVar12 = iVar12 + param_4;
            iVar16 = iVar16 + 1;
          } while (iVar31 < iVar8);
        }
        uVar48 = uVar48 + param_4;
        uVar37 = uVar37 - param_4;
        iVar54 = iVar54 + 1;
        iVar46 = iVar46 + 1;
      } while (iVar54 < iVar8);
      if (2 < param_2) {
        iVar46 = 0;
        uVar42 = uVar39 & 0xfffffff8;
        iVar54 = 1;
        do {
          iVar41 = (int)uVar67;
          if (0 < (int)param_4) {
            lVar38 = (long)iVar41;
            if ((param_4 < 8) ||
               ((uVar48 = param_4 + iVar46 * param_4,
                uVar67 = -(ulong)(uVar48 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar48 << 2,
                param_9 < (long)param_7 + uVar67 + lVar49 &&
                ((long)param_7 + uVar67 < param_9 + lVar49)))) {
              uVar67 = 0;
            }
            else {
              puVar35 = (undefined8 *)((long)param_7 + (long)iVar41 * 4 + 0x10);
              lVar38 = uVar42 + lVar38;
              puVar15 = (undefined8 *)(param_9 + 0x10);
              uVar67 = uVar42;
              do {
                puVar28 = puVar35 + -1;
                uVar72 = puVar35[-2];
                uVar84 = puVar35[1];
                uVar81 = *puVar35;
                uVar67 = uVar67 - 8;
                puVar35 = puVar35 + 4;
                puVar15[-1] = CONCAT44((float)((ulong)*puVar28 >> 0x20) +
                                       (float)((ulong)puVar15[-1] >> 0x20),
                                       (float)*puVar28 + (float)puVar15[-1]);
                puVar15[-2] = CONCAT44((float)((ulong)uVar72 >> 0x20) +
                                       (float)((ulong)puVar15[-2] >> 0x20),
                                       (float)uVar72 + (float)puVar15[-2]);
                puVar15[1] = CONCAT44((float)((ulong)uVar84 >> 0x20) +
                                      (float)((ulong)puVar15[1] >> 0x20),
                                      (float)uVar84 + (float)puVar15[1]);
                *puVar15 = CONCAT44((float)((ulong)uVar81 >> 0x20) +
                                    (float)((ulong)*puVar15 >> 0x20),(float)uVar81 + (float)*puVar15
                                   );
                puVar15 = puVar15 + 4;
              } while (uVar67 != 0);
              uVar67 = uVar42;
              if (uVar42 == uVar39) goto LAB_0012e8b0;
            }
            lVar32 = uVar39 - uVar67;
            pfVar14 = (float *)((long)param_7 + lVar38 * 4);
            pfVar18 = (float *)(param_9 + uVar67 * 4);
            do {
              lVar32 = lVar32 + -1;
              *pfVar18 = *pfVar14 + *pfVar18;
              pfVar14 = pfVar14 + 1;
              pfVar18 = pfVar18 + 1;
            } while (lVar32 != 0);
          }
LAB_0012e8b0:
          iVar54 = iVar54 + 1;
          uVar67 = (ulong)(iVar41 + param_4);
          iVar46 = iVar46 + 1;
        } while (iVar54 < iVar8);
      }
    }
  }
  if ((int)param_1 < (int)param_3) {
    if (0 < (int)param_1) {
      uVar67 = 0;
      puVar36 = param_8;
      puVar21 = param_5;
      do {
        puVar53 = puVar36;
        puVar56 = puVar21;
        uVar23 = param_3;
        if (0 < (int)param_3) {
          do {
            uVar23 = uVar23 - 1;
            *puVar56 = *puVar53;
            puVar53 = (undefined4 *)
                      ((long)puVar53 +
                      (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2));
            puVar56 = (undefined4 *)
                      ((long)puVar56 +
                      (-(ulong)(param_2 * param_1 >> 0x1f) & 0xfffffffc00000000 |
                      (ulong)(param_2 * param_1) << 2));
          } while (uVar23 != 0);
        }
        uVar67 = uVar67 + 1;
        puVar21 = puVar21 + 1;
        puVar36 = puVar36 + 1;
      } while (uVar67 != uVar62);
    }
  }
  else if (0 < (int)param_3) {
    uVar48 = param_2 * param_1;
    lVar38 = 0;
    uVar67 = (ulong)uVar23 + 1;
    lVar49 = 0;
    lVar32 = 0;
    puVar35 = (undefined8 *)(param_8 + 4);
    puVar15 = (undefined8 *)(param_5 + 4);
    lVar50 = uVar67 - (param_1 & 7);
    do {
      if (0 < (int)param_1) {
        if (uVar67 < 8) {
LAB_0012e9f8:
          iVar54 = 0;
          lVar61 = lVar49;
          lVar34 = lVar32;
        }
        else {
          lVar61 = lVar38 * (int)param_1;
          lVar34 = lVar38 * (int)uVar48;
          if ((param_5 + lVar34 < param_8 + uVar67 + lVar61) &&
             (param_8 + lVar61 < param_5 + uVar67 + lVar34)) goto LAB_0012e9f8;
          lVar61 = lVar49 + lVar50;
          lVar34 = lVar32 + lVar50;
          puVar26 = puVar15;
          puVar28 = puVar35;
          lVar40 = lVar50;
          do {
            puVar1 = puVar28 + -1;
            uVar72 = puVar28[-2];
            uVar84 = puVar28[1];
            uVar81 = *puVar28;
            puVar28 = puVar28 + 4;
            lVar40 = lVar40 + -8;
            puVar26[-1] = *puVar1;
            puVar26[-2] = uVar72;
            puVar26[1] = uVar84;
            *puVar26 = uVar81;
            puVar26 = puVar26 + 4;
          } while (lVar40 != 0);
          iVar54 = (int)lVar50;
          if ((param_1 & 7) == 0) goto LAB_0012ea20;
        }
        iVar54 = param_1 - iVar54;
        puVar21 = param_8 + lVar34;
        puVar36 = param_5 + lVar61;
        do {
          iVar54 = iVar54 + -1;
          *puVar36 = *puVar21;
          puVar21 = puVar21 + 1;
          puVar36 = puVar36 + 1;
        } while (iVar54 != 0);
      }
LAB_0012ea20:
      lVar38 = lVar38 + 1;
      lVar32 = lVar32 + (int)param_1;
      lVar49 = lVar49 + (int)uVar48;
      puVar35 = (undefined8 *)
                ((long)puVar35 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2));
      puVar15 = (undefined8 *)
                ((long)puVar15 +
                (-(ulong)(uVar48 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar48 << 2));
    } while ((uint)lVar38 != param_3);
  }
  iVar54 = param_1 * 2;
  if (2 < param_2) {
    iVar16 = param_3 * param_1;
    iVar12 = iVar16 * (param_2 + -1);
    iVar46 = 1;
    iVar41 = iVar16;
    iVar31 = iVar54;
    do {
      if (0 < (int)param_3) {
        puVar21 = param_5 + iVar31;
        puVar36 = param_8;
        uVar23 = param_3;
        do {
          uVar23 = uVar23 - 1;
          puVar21[-1] = puVar36[iVar41];
          puVar53 = puVar36 + iVar12;
          puVar36 = (undefined4 *)
                    ((long)puVar36 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2))
          ;
          *puVar21 = *puVar53;
          puVar21 = (undefined4 *)
                    ((long)puVar21 +
                    (-(ulong)(param_2 * param_1 >> 0x1f) & 0xfffffffc00000000 |
                    (ulong)(param_2 * param_1) << 2));
        } while (uVar23 != 0);
      }
      iVar46 = iVar46 + 1;
      iVar12 = iVar12 - iVar16;
      iVar41 = iVar41 + iVar16;
      iVar31 = iVar31 + iVar54;
    } while (iVar46 < iVar8);
  }
  if (param_1 != 1) {
    if (iVar47 < (int)param_3) {
      if (2 < param_2) {
        iVar12 = param_3 * param_1;
        iVar47 = iVar54 + 2;
        iVar31 = iVar54 + -2;
        iVar16 = iVar12 * (param_2 + -1) + 2;
        iVar46 = iVar12 + 2;
        iVar41 = 1;
        do {
          if (2 < (int)param_1) {
            iVar22 = 2;
            iVar10 = iVar31;
            iVar4 = iVar47;
            iVar3 = iVar46;
            iVar25 = iVar16;
            do {
              if (0 < (int)param_3) {
                lVar32 = 0;
                lVar38 = 0;
                uVar23 = param_3;
                do {
                  pfVar14 = (float *)((long)param_8 + lVar32 + (long)iVar3 * 4 + -4);
                  pfVar18 = (float *)((long)param_8 + lVar32 + (long)iVar25 * 4);
                  pfVar19 = (float *)((long)param_5 + lVar38 + (long)iVar4 * 4 + -4);
                  pfVar29 = (float *)((long)param_5 + lVar38 + (long)iVar10 * 4 + -4);
                  uVar23 = uVar23 - 1;
                  *pfVar19 = *pfVar14 + pfVar18[-1];
                  lVar38 = lVar38 + (-(ulong)(param_2 * param_1 >> 0x1f) & 0xfffffffc00000000 |
                                    (ulong)(param_2 * param_1) << 2);
                  lVar32 = lVar32 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2);
                  *pfVar29 = *pfVar14 - pfVar18[-1];
                  pfVar19[1] = pfVar14[1] + *pfVar18;
                  pfVar29[1] = *pfVar18 - pfVar14[1];
                } while (uVar23 != 0);
              }
              iVar22 = iVar22 + 2;
              iVar25 = iVar25 + 2;
              iVar3 = iVar3 + 2;
              iVar4 = iVar4 + 2;
              iVar10 = iVar10 + -2;
            } while (iVar22 < (int)param_1);
          }
          iVar41 = iVar41 + 1;
          iVar16 = iVar16 - iVar12;
          iVar46 = iVar46 + iVar12;
          iVar47 = iVar47 + iVar54;
          iVar31 = iVar31 + iVar54;
        } while (iVar41 < iVar8);
      }
    }
    else if (2 < param_2) {
      iVar31 = param_3 * param_1;
      uVar67 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2;
      iVar16 = iVar31 * (param_2 + -1);
      uVar42 = -(ulong)(param_2 * param_1 >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(param_2 * param_1) << 2;
      iVar47 = 1;
      iVar41 = iVar54;
      iVar46 = iVar31;
      do {
        if (0 < (int)param_3) {
          uVar23 = 0;
          pfVar14 = (float *)(param_5 + (long)iVar41 + 2);
          pfVar18 = (float *)(param_8 + (long)iVar46 + 2);
          pfVar29 = (float *)(param_5 + (long)(int)param_1 + (long)(int)uVar62 + -3);
          pfVar19 = (float *)(param_8 + (long)iVar16 + 2);
          do {
            if (2 < (int)param_1) {
              lVar38 = 2;
              pfVar59 = pfVar19;
              pfVar63 = pfVar18;
              pfVar65 = pfVar14;
              pfVar66 = pfVar29;
              do {
                lVar38 = lVar38 + 2;
                pfVar65[-1] = pfVar63[-1] + pfVar59[-1];
                *pfVar66 = pfVar63[-1] - pfVar59[-1];
                *pfVar65 = *pfVar63 + *pfVar59;
                pfVar66[1] = *pfVar59 - *pfVar63;
                pfVar66 = pfVar66 + -2;
                pfVar59 = pfVar59 + 2;
                pfVar63 = pfVar63 + 2;
                pfVar65 = pfVar65 + 2;
              } while (lVar38 < (int)param_1);
            }
            uVar23 = uVar23 + 1;
            pfVar29 = (float *)((long)pfVar29 + uVar42);
            pfVar14 = (float *)((long)pfVar14 + uVar42);
            pfVar18 = (float *)((long)pfVar18 + uVar67);
            pfVar19 = (float *)((long)pfVar19 + uVar67);
          } while (uVar23 != param_3);
        }
        iVar47 = iVar47 + 1;
        iVar16 = iVar16 - iVar31;
        iVar46 = iVar46 + iVar31;
        iVar41 = iVar41 + iVar54;
        uVar62 = (ulong)(uint)((int)uVar62 + iVar54);
      } while (iVar47 < iVar8);
    }
  }
  return;
}

