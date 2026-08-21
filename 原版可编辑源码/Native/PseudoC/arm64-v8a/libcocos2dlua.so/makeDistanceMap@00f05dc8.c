
/* cocos2d::makeDistanceMap(unsigned char*, long, long) */

void * cocos2d::makeDistanceMap(uchar *param_1,long param_2,long param_3)

{
  double *pdVar1;
  long lVar2;
  uchar *puVar3;
  undefined1 *puVar4;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  void *__ptr_04;
  void *__ptr_05;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  byte *pbVar8;
  uchar *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  double *pdVar14;
  ulong uVar15;
  ulong uVar16;
  double *pdVar17;
  ulong __nmemb;
  byte bVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  
  uVar16 = param_2 + 6;
  uVar13 = param_3 + 6;
  __nmemb = uVar13 * uVar16;
  __ptr = malloc(__nmemb * 2);
  __ptr_00 = malloc(__nmemb * 2);
  __ptr_01 = calloc(__nmemb,8);
  __ptr_02 = calloc(__nmemb,8);
  __ptr_03 = calloc(__nmemb,8);
  __ptr_04 = calloc(__nmemb,8);
  __ptr_05 = calloc(__nmemb,8);
  if (0 < param_2) {
    lVar11 = 0;
    uVar15 = param_3 & 0xfffffffffffffffe;
    puVar3 = param_1;
    lVar2 = param_2;
    pvVar5 = __ptr_03;
                    /* try { // try from 00f05eb0 to 010060e3 has its CatchHandler @ 00f05eb0
                       catch() { ... } // from try @ 00f05eb0 with catch @ 00f05eb0
                       catch() { ... } // from try @ 00f06100 with catch @ 00f05eb0
                       catch() { ... } // from try @ 00f06248 with catch @ 00f05eb0 */
    do {
      if (0 < param_3) {
        uVar12 = uVar15;
        pvVar7 = pvVar5;
        puVar9 = param_1;
        if (param_3 == 1 || param_2 != 1) {
          uVar12 = 0;
        }
        else {
          do {
            dVar19 = (double)NEON_ucvtf((ulong)puVar9[lVar11]);
            dVar21 = (double)NEON_ucvtf((ulong)puVar9[lVar2]);
            uVar12 = uVar12 - 2;
            *(double *)((long)pvVar7 + 0x18) = dVar19 / 255.0;
            *(double *)((long)pvVar7 + param_2 * 8 + 0x48) = dVar21 / 255.0;
            pvVar7 = (void *)((long)pvVar7 + param_2 * 0x10 + 0x60);
            puVar9 = puVar9 + param_2 * 2;
          } while (uVar12 != 0);
          uVar12 = uVar15;
          if (uVar15 == param_3) goto LAB_00f05ecc;
        }
        lVar6 = param_3 - uVar12;
        pbVar8 = puVar3 + param_2 * uVar12;
        lVar10 = uVar16 * 8 * uVar12 + 0x18;
        do {
          bVar18 = *pbVar8;
          lVar6 = lVar6 + -1;
          pbVar8 = pbVar8 + param_2;
          dVar19 = (double)NEON_ucvtf((ulong)bVar18);
          *(double *)((long)pvVar5 + lVar10) = dVar19 / 255.0;
          lVar10 = lVar10 + param_2 * 8 + 0x30;
        } while (lVar6 != 0);
      }
LAB_00f05ecc:
      lVar11 = lVar11 + 1;
      lVar2 = lVar2 + 1;
      pvVar5 = (void *)((long)pvVar5 + 8);
      puVar3 = puVar3 + 1;
    } while (lVar11 != param_2);
  }
  computegradient(__ptr_03,uVar16 & 0xffffffff,uVar13 & 0xffffffff,__ptr_01,__ptr_02);
  edtaa3(__ptr_03,__ptr_01,__ptr_02,uVar16 & 0xffffffff,uVar13 & 0xffffffff,__ptr,__ptr_00,__ptr_04)
  ;
  if ((long)__nmemb < 1) {
LAB_00f0608c:
    computegradient(__ptr_03,uVar16 & 0xffffffff,uVar13 & 0xffffffff,__ptr_01,__ptr_02);
    edtaa3(__ptr_03,__ptr_01,__ptr_02,uVar16 & 0xffffffff,uVar13 & 0xffffffff,__ptr,__ptr_00,
           __ptr_05);
  }
  else {
    if (__nmemb < 4) {
      uVar12 = 0;
LAB_00f06044:
      lVar11 = __nmemb - uVar12;
      pdVar14 = (double *)((long)__ptr_04 + uVar12 * 8);
      do {
        if (*pdVar14 < 0.0) {
          *pdVar14 = 0.0;
        }
        lVar11 = lVar11 + -1;
        pdVar14 = pdVar14 + 1;
      } while (lVar11 != 0);
    }
    else {
      uVar12 = __nmemb & 0xfffffffffffffffc;
      pdVar14 = (double *)((long)__ptr_04 + 0x10);
      uVar15 = uVar12;
      do {
        if (pdVar14[-2] < 0.0) {
          pdVar14[-2] = 0.0;
        }
        if (pdVar14[-1] < 0.0) {
          pdVar14[-1] = 0.0;
        }
        if (*pdVar14 < 0.0) {
          *pdVar14 = 0.0;
        }
        if (pdVar14[1] < 0.0) {
          pdVar14[1] = 0.0;
        }
        uVar15 = uVar15 - 4;
        pdVar14 = pdVar14 + 4;
      } while (uVar15 != 0);
      if (__nmemb - uVar12 != 0) goto LAB_00f06044;
    }
    if ((long)__nmemb < 1) goto LAB_00f0608c;
    if (__nmemb < 4) {
      uVar12 = 0;
LAB_00f0616c:
      lVar11 = __nmemb - uVar12;
      pdVar14 = (double *)((long)__ptr_03 + uVar12 * 8);
      do {
        lVar11 = lVar11 + -1;
        *pdVar14 = 1.0 - *pdVar14;
        pdVar14 = pdVar14 + 1;
      } while (lVar11 != 0);
    }
    else {
      uVar12 = __nmemb & 0xfffffffffffffffc;
      pdVar14 = (double *)((long)__ptr_03 + 0x10);
      auVar20 = NEON_fmov(0x3ff0000000000000,8);
      uVar15 = uVar12;
      do {
        uVar15 = uVar15 - 4;
        pdVar14[-1] = auVar20._8_8_ - pdVar14[-1];
        pdVar14[-2] = auVar20._0_8_ - pdVar14[-2];
        pdVar14[1] = auVar20._8_8_ - pdVar14[1];
        *pdVar14 = auVar20._0_8_ - *pdVar14;
        pdVar14 = pdVar14 + 4;
      } while (uVar15 != 0);
      if (__nmemb - uVar12 != 0) goto LAB_00f0616c;
    }
    computegradient(__ptr_03,uVar16 & 0xffffffff,uVar13 & 0xffffffff,__ptr_01,__ptr_02);
    edtaa3(__ptr_03,__ptr_01,__ptr_02,uVar16 & 0xffffffff,uVar13 & 0xffffffff,__ptr,__ptr_00,
           __ptr_05);
    if (0 < (long)__nmemb) {
      if (__nmemb < 4) {
        uVar13 = 0;
LAB_00f06250:
                    /* catch() { ... } // from try @ 00f0622c with catch @ 00f06250 */
        lVar11 = __nmemb - uVar13;
                    /* catch() { ... } // from try @ 00f060e4 with catch @ 00f06254 */
        pdVar14 = (double *)((long)__ptr_05 + uVar13 * 8);
        do {
                    /* try { // try from 00f06270 to 010063fb has its CatchHandler @ 00f06270
                       catch() { ... } // from try @ 00f06270 with catch @ 00f06270
                       catch() { ... } // from try @ 00f06404 with catch @ 00f06270
                       catch() { ... } // from try @ 00f064c0 with catch @ 00f06270
                       catch() { ... } // from try @ 00f06550 with catch @ 00f06270
                       catch() { ... } // from try @ 00f065a4 with catch @ 00f06270
                       catch() { ... } // from try @ 00f06688 with catch @ 00f06270
                       catch() { ... } // from try @ 00f066b0 with catch @ 00f06270 */
          if (*pdVar14 < 0.0) {
            *pdVar14 = 0.0;
          }
          lVar11 = lVar11 + -1;
          pdVar14 = pdVar14 + 1;
        } while (lVar11 != 0);
      }
      else {
        uVar13 = __nmemb & 0xfffffffffffffffc;
        pdVar14 = (double *)((long)__ptr_05 + 0x10);
        uVar16 = uVar13;
        do {
          if (pdVar14[-2] < 0.0) {
            pdVar14[-2] = 0.0;
          }
          if (pdVar14[-1] < 0.0) {
            pdVar14[-1] = 0.0;
          }
                    /* try { // try from 00f0622c to 01006247 has its CatchHandler @ 00f06250 */
          if (*pdVar14 < 0.0) {
            *pdVar14 = 0.0;
          }
          if (pdVar14[1] < 0.0) {
            pdVar14[1] = 0.0;
          }
          uVar16 = uVar16 - 4;
          pdVar14 = pdVar14 + 4;
        } while (uVar16 != 0);
                    /* try { // try from 00f06248 to 0100626f has its CatchHandler @ 00f05eb0 */
        if (__nmemb - uVar13 != 0) goto LAB_00f06250;
      }
      pvVar5 = malloc(__nmemb);
      if (0 < (long)__nmemb) {
        if (__nmemb == 1) {
          uVar13 = 0;
        }
        else {
          uVar16 = 0;
          uVar13 = __nmemb & 0xfffffffffffffffe;
          pdVar14 = (double *)((long)__ptr_04 + 8);
          pdVar17 = (double *)((long)__ptr_05 + 8);
          do {
            pdVar1 = pdVar14 + -1;
            dVar21 = *pdVar14;
            puVar4 = (undefined1 *)((long)pvVar5 + uVar16);
            uVar16 = uVar16 + 2;
            pdVar14 = pdVar14 + 2;
            dVar19 = 128.0 - (*pdVar1 - pdVar17[-1]) * 16.0;
            dVar21 = 128.0 - (dVar21 - *pdVar17) * 16.0;
            if (dVar19 <= 0.0) {
              dVar19 = 0.0;
            }
            if (dVar21 <= 0.0) {
              dVar21 = 0.0;
            }
            if (255.0 < dVar19) {
              dVar19 = 255.0;
            }
            if (255.0 < dVar21) {
              dVar21 = 255.0;
            }
            pdVar17 = pdVar17 + 2;
            *puVar4 = (char)(int)dVar19;
            puVar4[1] = (char)(int)dVar21;
          } while (uVar13 != uVar16);
          if (__nmemb - uVar13 == 0) goto LAB_00f060d8;
        }
        do {
          dVar19 = (*(double *)((long)__ptr_04 + uVar13 * 8) -
                   *(double *)((long)__ptr_05 + uVar13 * 8)) * -16.0 + 128.0;
          if (dVar19 <= 0.0) {
            dVar19 = 0.0;
          }
          if (255.0 < dVar19) {
            dVar19 = 255.0;
          }
          *(char *)((long)pvVar5 + uVar13) = (char)(int)dVar19;
          uVar13 = uVar13 + 1;
        } while (__nmemb - uVar13 != 0);
      }
      goto LAB_00f060d8;
    }
  }
  pvVar5 = malloc(__nmemb);
LAB_00f060d8:
  free(__ptr);
                    /* try { // try from 00f060e4 to 010060ff has its CatchHandler @ 00f06254 */
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
                    /* try { // try from 00f06100 to 0100622b has its CatchHandler @ 00f05eb0 */
  free(__ptr_04);
  free(__ptr_05);
  return pvVar5;
}

