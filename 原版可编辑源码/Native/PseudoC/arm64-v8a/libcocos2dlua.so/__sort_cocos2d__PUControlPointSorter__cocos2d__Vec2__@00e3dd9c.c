
/* void std::__ndk1::__sort<cocos2d::PUControlPointSorter&, cocos2d::Vec2*>(cocos2d::Vec2*,
   cocos2d::Vec2*, cocos2d::PUControlPointSorter&) */

void std::__ndk1::__sort<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
               (Vec2 *param_1,Vec2 *param_2,PUControlPointSorter *param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  undefined4 uVar12;
  undefined1 (*pauVar11) [16];
  long lVar13;
  undefined8 uVar14;
  undefined1 (*pauVar15) [16];
  undefined8 uVar16;
  long lVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  
LAB_00e3ddc8:
  pauVar18 = (undefined1 (*) [16])(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
  pauVar11 = (undefined1 (*) [16])param_1;
LAB_00e3ddd4:
  param_1 = *pauVar11;
  lVar13 = (long)param_2 - (long)param_1;
  uVar9 = lVar13 >> 3;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_00e3e180_caseD_0;
  case 2:
    if (*(float *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) <
        *(float *)*(undefined1 (*) [16])param_1) {
      uVar14 = *(undefined8 *)*(undefined1 (*) [16])param_1;
      *(undefined8 *)*(undefined1 (*) [16])param_1 =
           *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar14;
      return;
    }
    return;
  case 3:
    fVar20 = *(float *)(*(undefined1 (*) [16])param_1 + 8);
                    /* try { // try from 00e3e2b4 to 00f3e2cb has its CatchHandler @ 00e3e350 */
    if (fVar20 < *(float *)*(undefined1 (*) [16])param_1) {
      uVar14 = *(undefined8 *)*(undefined1 (*) [16])param_1;
      if (fVar20 <= *(float *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8)) {
        *(undefined8 *)*(undefined1 (*) [16])param_1 =
             *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8);
        *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) = uVar14;
        if ((float)uVar14 <= *(float *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8)) {
          return;
        }
        *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) =
             *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
      }
      else {
        *(undefined8 *)*(undefined1 (*) [16])param_1 =
             *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
      }
      *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar14;
      return;
    }
    if (*(float *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) < fVar20) {
      uVar14 = *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8);
      *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) =
           *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar14;
      if (*(float *)(*(undefined1 (*) [16])param_1 + 8) < *(float *)*(undefined1 (*) [16])param_1) {
        auVar21 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
        *(long *)(*(undefined1 (*) [16])param_1 + 8) = auVar21._8_8_;
        *(long *)*(undefined1 (*) [16])param_1 = auVar21._0_8_;
        return;
      }
      return;
    }
    return;
  case 4:
                    /* try { // try from 00e3e36c to 00f3e7d3 has its CatchHandler @ 00e3e36c
                       catch() { ... } // from try @ 00e3e36c with catch @ 00e3e36c
                       catch() { ... } // from try @ 00e3e854 with catch @ 00e3e36c
                       catch() { ... } // from try @ 00e3e954 with catch @ 00e3e36c */
    __sort4<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
              (param_1,*(undefined1 (*) [16])param_1 + 8,(Vec2 *)((long)param_1 + 0x10),
               (Vec2 *)pauVar18,param_3);
    return;
  case 5:
                    /* try { // try from 00e3e2d0 to 00f3e2db has its CatchHandler @ 00e3e340 */
    pauVar11 = (undefined1 (*) [16])((long)param_1 + 0x10);
    pfVar1 = (float *)(*(undefined1 (*) [16])((long)param_1 + 0x10) + 8);
                    /* try { // try from 00e3e2dc to 00f3e36b has its CatchHandler @ 00e3e210 */
    __sort4<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
              (param_1,*(undefined1 (*) [16])param_1 + 8,(Vec2 *)pauVar11,(Vec2 *)pfVar1,param_3);
    if (*(float *)(*(undefined1 (*) [16])((long)param_1 + 0x10) + 8) <=
        *(float *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8)) {
      return;
    }
    uVar14 = *(undefined8 *)pfVar1;
    *(undefined8 *)pfVar1 = *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
    *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar14;
    if (*(float *)*pauVar11 <= *pfVar1) {
      return;
    }
    auVar21 = *pauVar11;
    auVar23 = NEON_ext(auVar21,auVar21,8,1);
    *(long *)(*(undefined1 (*) [16])((long)param_1 + 0x10) + 8) = auVar23._8_8_;
    *(long *)*pauVar11 = auVar23._0_8_;
                    /* catch() { ... } // from try @ 00e3e2d0 with catch @ 00e3e340 */
    if (*(float *)(*(undefined1 (*) [16])param_1 + 8) <= auVar21._8_4_) {
      return;
    }
                    /* catch() { ... } // from try @ 00e3e284 with catch @ 00e3e344 */
    fVar20 = *(float *)*(undefined1 (*) [16])param_1;
                    /* catch() { ... } // from try @ 00e3e26c with catch @ 00e3e348 */
    uVar14 = *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8);
                    /* catch() { ... } // from try @ 00e3e2b4 with catch @ 00e3e350 */
    *(long *)(*(undefined1 (*) [16])param_1 + 8) = auVar21._8_8_;
    *(undefined8 *)*(undefined1 (*) [16])((long)param_1 + 0x10) = uVar14;
    if (fVar20 <= auVar21._8_4_) {
      return;
    }
    uVar14 = *(undefined8 *)*(undefined1 (*) [16])param_1;
    *(long *)*(undefined1 (*) [16])param_1 = auVar21._8_8_;
    *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) = uVar14;
    return;
  default:
    if (0xf7 < lVar13) {
      uVar3 = uVar9;
      if ((long)uVar9 < 0) {
        uVar3 = uVar9 + 1;
      }
      pauVar11 = (undefined1 (*) [16])
                 (*(undefined1 (*) [16])param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
      if (lVar13 < 0x1f39) {
        fVar20 = *(float *)*pauVar11;
        if (*(float *)*(undefined1 (*) [16])param_1 <= fVar20) {
          if (fVar20 <= *(float *)*pauVar18) {
            uVar8 = 0;
          }
          else {
            uVar14 = *(undefined8 *)*pauVar11;
            *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar18;
            *(undefined8 *)*pauVar18 = uVar14;
            if (*(float *)*(undefined1 (*) [16])param_1 <= *(float *)*pauVar11) goto LAB_00e3df78;
            uVar14 = *(undefined8 *)*(undefined1 (*) [16])param_1;
            *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar11;
            *(undefined8 *)*pauVar11 = uVar14;
LAB_00e3df68:
            uVar8 = 2;
          }
        }
        else {
          uVar14 = *(undefined8 *)*(undefined1 (*) [16])param_1;
          if (fVar20 <= *(float *)*pauVar18) {
            *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar11;
            *(undefined8 *)*pauVar11 = uVar14;
            if (*(float *)*pauVar18 < (float)uVar14) {
              *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar18;
              *(undefined8 *)*pauVar18 = uVar14;
              goto LAB_00e3df68;
            }
LAB_00e3df78:
            uVar8 = 1;
          }
          else {
            uVar8 = 1;
            *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar18;
            *(undefined8 *)*pauVar18 = uVar14;
          }
        }
      }
      else {
        uVar3 = uVar9 + 3;
        if (-1 < (long)uVar9) {
          uVar3 = uVar9;
        }
        lVar13 = (uVar3 & 0x7ffffffffffffffc) * 2;
        pfVar1 = (float *)(*(undefined1 (*) [16])param_1 + lVar13);
        pfVar2 = (float *)(*pauVar11 + lVar13);
        uVar8 = __sort4<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
                          (param_1,(Vec2 *)pfVar1,(Vec2 *)pauVar11,(Vec2 *)pfVar2,param_3);
        if (*(float *)*pauVar18 < *pfVar2) {
          uVar14 = *(undefined8 *)pfVar2;
          *(undefined8 *)pfVar2 = *(undefined8 *)*pauVar18;
          *(undefined8 *)*pauVar18 = uVar14;
          if (*(float *)*pauVar11 <= *pfVar2) {
            uVar8 = uVar8 + 1;
          }
          else {
            uVar14 = *(undefined8 *)*pauVar11;
            *(undefined8 *)*pauVar11 = *(undefined8 *)pfVar2;
            *(undefined8 *)pfVar2 = uVar14;
            if (*pfVar1 <= *(float *)*pauVar11) {
              uVar8 = uVar8 + 2;
            }
            else {
              uVar14 = *(undefined8 *)pfVar1;
              *(undefined8 *)pfVar1 = *(undefined8 *)*pauVar11;
              *(undefined8 *)*pauVar11 = uVar14;
              if (*(float *)*(undefined1 (*) [16])param_1 <= *pfVar1) {
                uVar8 = uVar8 + 3;
              }
              else {
                uVar14 = *(undefined8 *)*(undefined1 (*) [16])param_1;
                uVar8 = uVar8 + 4;
                *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)pfVar1;
                *(undefined8 *)pfVar1 = uVar14;
              }
            }
          }
        }
      }
      fVar20 = *(float *)*(undefined1 (*) [16])param_1;
      pauVar10 = pauVar18;
      pauVar15 = (undefined1 (*) [16])((long)param_2 + -0x10);
      if (*(float *)*pauVar11 <= fVar20) break;
      goto LAB_00e3dfd0;
    }
    fVar24 = *(float *)(*(undefined1 (*) [16])param_1 + 8);
    fVar22 = *(float *)*(undefined1 (*) [16])param_1;
    fVar20 = *(float *)*(undefined1 (*) [16])((long)param_1 + 0x10);
    if (fVar22 <= fVar24) {
      if (fVar20 < fVar24) {
        fVar20 = *(float *)(*(undefined1 (*) [16])param_1 + 8);
        uVar12 = *(undefined4 *)(*(undefined1 (*) [16])param_1 + 0xc);
        uVar14 = *(undefined8 *)*(undefined1 (*) [16])((long)param_1 + 0x10);
        *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) = uVar14;
        *(float *)*(undefined1 (*) [16])((long)param_1 + 0x10) = fVar20;
        *(undefined4 *)(*(undefined1 (*) [16])((long)param_1 + 0x10) + 4) = uVar12;
        if ((float)uVar14 < fVar22) {
          uVar16 = *(undefined8 *)*(undefined1 (*) [16])param_1;
          *(undefined8 *)*(undefined1 (*) [16])param_1 = uVar14;
          *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) = uVar16;
        }
      }
    }
    else {
      fVar22 = *(float *)*(undefined1 (*) [16])param_1;
      uVar12 = *(undefined4 *)(*(undefined1 (*) [16])param_1 + 4);
      if (fVar24 <= fVar20) {
                    /* try { // try from 00e3e210 to 00f3e26b has its CatchHandler @ 00e3e210
                       catch() { ... } // from try @ 00e3e210 with catch @ 00e3e210
                       catch() { ... } // from try @ 00e3e2dc with catch @ 00e3e210 */
        *(undefined8 *)*(undefined1 (*) [16])param_1 =
             *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8);
        *(float *)(*(undefined1 (*) [16])param_1 + 8) = fVar22;
        *(undefined4 *)(*(undefined1 (*) [16])param_1 + 0xc) = uVar12;
        if (fVar20 < fVar22) {
          *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) =
               *(undefined8 *)*(undefined1 (*) [16])((long)param_1 + 0x10);
          *(float *)*(undefined1 (*) [16])((long)param_1 + 0x10) = fVar22;
          *(undefined4 *)(*(undefined1 (*) [16])((long)param_1 + 0x10) + 4) = uVar12;
          fVar20 = fVar22;
        }
      }
      else {
        uVar14 = *(undefined8 *)*(undefined1 (*) [16])((long)param_1 + 0x10);
        *(float *)*(undefined1 (*) [16])((long)param_1 + 0x10) = fVar22;
        *(undefined4 *)(*(undefined1 (*) [16])((long)param_1 + 0x10) + 4) = uVar12;
        *(undefined8 *)*(undefined1 (*) [16])param_1 = uVar14;
        fVar20 = fVar22;
      }
    }
    if ((undefined1 (*) [16])(*(undefined1 (*) [16])((long)param_1 + 0x10) + 8) ==
        (undefined1 (*) [16])param_2) {
      return;
    }
    lVar13 = 0;
    pauVar11 = (undefined1 (*) [16])(*(undefined1 (*) [16])((long)param_1 + 0x10) + 8);
    goto LAB_00e3e238;
  }
  while (pauVar10 = pauVar15, (undefined1 (*) [16])param_1 != pauVar10) {
    pauVar15 = (undefined1 (*) [16])(pauVar10[-1] + 8);
    if (*(float *)*pauVar10 < *(float *)*pauVar11) goto code_r0x00e3dfbc;
  }
  pauVar10 = (undefined1 (*) [16])(*(undefined1 (*) [16])param_1 + 8);
  if (*(float *)*pauVar18 <= fVar20) {
    if (pauVar10 == pauVar18) {
      return;
    }
    pauVar10 = (undefined1 (*) [16])((long)param_1 + 0x10);
    while (*(float *)(pauVar10[-1] + 8) <= fVar20) {
      pauVar10 = (undefined1 (*) [16])(*pauVar10 + 8);
      if ((undefined1 (*) [16])param_2 == pauVar10) {
        return;
      }
    }
    uVar14 = *(undefined8 *)(pauVar10[-1] + 8);
    *(undefined8 *)(pauVar10[-1] + 8) = *(undefined8 *)*pauVar18;
    *(undefined8 *)*pauVar18 = uVar14;
  }
  pauVar15 = pauVar18;
  if (pauVar10 == pauVar18) {
    return;
  }
  while( true ) {
    pauVar11 = (undefined1 (*) [16])(pauVar10[-1] + 8);
    do {
      pauVar10 = pauVar11;
      pauVar11 = (undefined1 (*) [16])(*pauVar10 + 8);
    } while (*(float *)*pauVar11 <= *(float *)*(undefined1 (*) [16])param_1);
    pauVar10 = pauVar10 + 1;
    do {
      pauVar15 = (undefined1 (*) [16])(pauVar15[-1] + 8);
    } while (*(float *)*(undefined1 (*) [16])param_1 < *(float *)*pauVar15);
    if (pauVar15 <= pauVar11) break;
    uVar14 = *(undefined8 *)*pauVar11;
    *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar15;
    *(undefined8 *)*pauVar15 = uVar14;
  }
  goto LAB_00e3ddd4;
code_r0x00e3dfbc:
  uVar14 = *(undefined8 *)*(undefined1 (*) [16])param_1;
  uVar8 = uVar8 + 1;
  *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar10;
  *(undefined8 *)*pauVar10 = uVar14;
LAB_00e3dfd0:
  pauVar15 = (undefined1 (*) [16])(*(undefined1 (*) [16])param_1 + 8);
  pauVar5 = pauVar11;
  pauVar19 = pauVar15;
  if (pauVar15 < pauVar10) {
    while( true ) {
      pauVar11 = pauVar5;
      pauVar15 = (undefined1 (*) [16])(pauVar19[-1] + 8);
      do {
        pauVar19 = pauVar15;
        pauVar15 = (undefined1 (*) [16])(*pauVar19 + 8);
      } while (*(float *)*pauVar15 < *(float *)*pauVar11);
      pauVar19 = pauVar19 + 1;
      do {
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
      } while (*(float *)*pauVar11 <= *(float *)*pauVar10);
      if (pauVar10 < pauVar15) break;
      uVar14 = *(undefined8 *)*pauVar15;
      uVar8 = uVar8 + 1;
      *(undefined8 *)*pauVar15 = *(undefined8 *)*pauVar10;
      *(undefined8 *)*pauVar10 = uVar14;
      pauVar5 = pauVar10;
      if (pauVar11 != pauVar15) {
        pauVar5 = pauVar11;
      }
    }
  }
  if ((pauVar15 != pauVar11) && (*(float *)*pauVar11 < *(float *)*pauVar15)) {
    uVar14 = *(undefined8 *)*pauVar15;
    uVar8 = uVar8 + 1;
    *(undefined8 *)*pauVar15 = *(undefined8 *)*pauVar11;
    *(undefined8 *)*pauVar11 = uVar14;
  }
  if (uVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
                      (param_1,*pauVar15,param_3);
    bVar7 = __insertion_sort_incomplete<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
                      ((Vec2 *)(*pauVar15 + 8),param_2,param_3);
    if (bVar7) goto LAB_00e3e160;
    pauVar11 = (undefined1 (*) [16])(*pauVar15 + 8);
    if (bVar6) goto LAB_00e3ddd4;
  }
  if ((long)param_2 - (long)pauVar15 <= (long)pauVar15 - (long)param_1) {
    __sort<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>(*pauVar15 + 8,param_2,param_3);
    param_2 = *pauVar15;
    goto LAB_00e3ddc8;
  }
  __sort<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>(param_1,*pauVar15,param_3);
  pauVar11 = (undefined1 (*) [16])(*pauVar15 + 8);
  goto LAB_00e3ddd4;
LAB_00e3e160:
  param_2 = *pauVar15;
  if (bVar6) {
    return;
  }
  goto LAB_00e3ddc8;
LAB_00e3e238:
  fVar22 = *(float *)*pauVar11;
  if (fVar22 < fVar20) {
    uVar12 = *(undefined4 *)(*pauVar11 + 4);
    lVar4 = lVar13;
    do {
      lVar17 = lVar4;
      *(undefined8 *)(*(undefined1 (*) [16])((long)param_1 + 0x10) + lVar17 + 8) =
           *(undefined8 *)(*(undefined1 (*) [16])((long)param_1 + 0x10) + lVar17);
      pauVar18 = (undefined1 (*) [16])param_1;
      if (lVar17 == -0x10) goto LAB_00e3e280;
                    /* try { // try from 00e3e26c to 00f3e273 has its CatchHandler @ 00e3e348 */
      lVar4 = lVar17 + -8;
    } while (fVar22 < *(float *)(*(undefined1 (*) [16])param_1 + lVar17 + 8));
    pauVar18 = (undefined1 (*) [16])(*(undefined1 (*) [16])((long)param_1 + 0x10) + lVar17);
LAB_00e3e280:
    *(float *)*pauVar18 = fVar22;
                    /* try { // try from 00e3e284 to 00f3e28f has its CatchHandler @ 00e3e344 */
    *(undefined4 *)(*pauVar18 + 4) = uVar12;
  }
  if ((undefined1 (*) [16])(*pauVar11 + 8) == (undefined1 (*) [16])param_2) {
switchD_00e3e180_caseD_0:
    return;
  }
  fVar20 = *(float *)*pauVar11;
  lVar13 = lVar13 + 8;
  pauVar11 = (undefined1 (*) [16])(*pauVar11 + 8);
  goto LAB_00e3e238;
}

