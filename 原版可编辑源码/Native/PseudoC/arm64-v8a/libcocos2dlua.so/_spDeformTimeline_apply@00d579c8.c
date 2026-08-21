
void _spDeformTimeline_apply
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,int param_8)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  void *__dest;
  int iVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  void *pvVar17;
  ulong uVar18;
  float *pfVar19;
  undefined8 *puVar20;
  int iVar21;
  long lVar22;
  void *pvVar23;
  float *pfVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  undefined8 *puVar28;
  float *pfVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  ulong uVar33;
  long lVar34;
  float *pfVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d57914 with catch @ 00d579e4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d579c0 with catch @ 00d579e8
                        */
  lVar34 = *(long *)(*(long *)(param_5 + 0x28) + (long)*(int *)(param_4 + 0x38) * 8);
  lVar14 = *(long *)(lVar34 + 0x28);
  if ((lVar14 == *(long *)(param_4 + 0x40)) ||
     ((((lVar14 != 0 && (*(int *)(lVar14 + 8) == 2)) && (*(int *)(lVar14 + 200) != 0)) &&
      (*(long *)(lVar14 + 0xc0) == *(long *)(param_4 + 0x40))))) {
    uVar3 = *(uint *)(param_4 + 0x28);
    uVar33 = (ulong)uVar3;
    pfVar35 = *(float **)(param_4 + 0x20);
    iVar26 = *(int *)(param_4 + 0x18);
    if ((*(int *)(lVar34 + 0x34) < (int)uVar3) && (*(int *)(lVar34 + 0x30) < (int)uVar3)) {
      _spFree(*(void **)(lVar34 + 0x38));
      uVar12 = _spMalloc((long)(int)uVar3 << 2,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                         ,0x352);
      *(undefined8 *)(lVar34 + 0x38) = uVar12;
      *(uint *)(lVar34 + 0x30) = uVar3;
    }
    *(uint *)(lVar34 + 0x34) = uVar3;
    fVar36 = *pfVar35;
    __dest = *(void **)(lVar34 + 0x38);
    if (param_2 < fVar36) {
      lVar14 = *(long *)(lVar34 + 0x28);
      if (param_8 - 1U < 2) {
        if (param_3 != 1.0) {
          if (*(long *)(lVar14 + 0x28) == 0) {
            if (0 < (int)uVar3) {
              pvVar16 = *(void **)(lVar14 + 0x38);
              if ((uVar3 < 8) ||
                 ((__dest < (void *)((long)pvVar16 + uVar33 * 4) &&
                  (pvVar16 < (void *)((long)__dest + uVar33 * 4))))) {
                uVar18 = 0;
              }
              else {
                uVar18 = uVar33 & 0xfffffff8;
                puVar20 = (undefined8 *)((long)pvVar16 + 0x10);
                puVar25 = (undefined8 *)((long)__dest + 0x10);
                uVar15 = uVar18;
                do {
                  puVar28 = puVar20 + -1;
                  uVar12 = puVar20[-2];
                  uVar42 = puVar20[1];
                  uVar39 = *puVar20;
                  puVar20 = puVar20 + 4;
                  uVar15 = uVar15 - 8;
                  fVar36 = (float)puVar25[-2];
                  fVar44 = (float)((ulong)puVar25[-2] >> 0x20);
                  fVar37 = (float)puVar25[-1];
                  fVar46 = (float)((ulong)puVar25[-1] >> 0x20);
                  fVar38 = (float)*puVar25;
                  fVar40 = (float)((ulong)*puVar25 >> 0x20);
                  fVar41 = (float)puVar25[1];
                  fVar43 = (float)((ulong)puVar25[1] >> 0x20);
                  puVar25[-1] = CONCAT44(fVar46 + ((float)((ulong)*puVar28 >> 0x20) - fVar46) *
                                                  param_3,
                                         fVar37 + ((float)*puVar28 - fVar37) * param_3);
                  puVar25[-2] = CONCAT44(fVar44 + ((float)((ulong)uVar12 >> 0x20) - fVar44) *
                                                  param_3,
                                         fVar36 + ((float)uVar12 - fVar36) * param_3);
                  puVar25[1] = CONCAT44(fVar43 + ((float)((ulong)uVar42 >> 0x20) - fVar43) * param_3
                                        ,fVar41 + ((float)uVar42 - fVar41) * param_3);
                  *puVar25 = CONCAT44(fVar40 + ((float)((ulong)uVar39 >> 0x20) - fVar40) * param_3,
                                      fVar38 + ((float)uVar39 - fVar38) * param_3);
                  puVar25 = puVar25 + 4;
                } while (uVar15 != 0);
                if (uVar18 == uVar33) {
                  return;
                }
              }
              lVar14 = uVar33 - uVar18;
              pfVar35 = (float *)((long)pvVar16 + uVar18 * 4);
              pfVar19 = (float *)((long)__dest + uVar18 * 4);
              do {
                lVar14 = lVar14 + -1;
                *pfVar19 = *pfVar19 + (*pfVar35 - *pfVar19) * param_3;
                pfVar35 = pfVar35 + 1;
                pfVar19 = pfVar19 + 1;
              } while (lVar14 != 0);
            }
          }
          else if (0 < (int)uVar3) {
            param_3 = 1.0 - param_3;
            if (uVar3 < 8) {
              uVar15 = 0;
            }
            else {
              uVar15 = uVar33 & 0xfffffff8;
              puVar20 = (undefined8 *)((long)__dest + 0x10);
              uVar18 = uVar15;
              do {
                uVar18 = uVar18 - 8;
                puVar20[-1] = CONCAT44(param_3 * (float)((ulong)puVar20[-1] >> 0x20),
                                       param_3 * (float)puVar20[-1]);
                puVar20[-2] = CONCAT44(param_3 * (float)((ulong)puVar20[-2] >> 0x20),
                                       param_3 * (float)puVar20[-2]);
                puVar20[1] = CONCAT44(param_3 * (float)((ulong)puVar20[1] >> 0x20),
                                      param_3 * (float)puVar20[1]);
                *puVar20 = CONCAT44(param_3 * (float)((ulong)*puVar20 >> 0x20),
                                    param_3 * (float)*puVar20);
                puVar20 = puVar20 + 4;
              } while (uVar18 != 0);
              if (uVar15 == uVar33) {
                return;
              }
            }
            lVar14 = uVar33 - uVar15;
            pfVar35 = (float *)((long)__dest + uVar15 * 4);
            do {
              lVar14 = lVar14 + -1;
              *pfVar35 = param_3 * *pfVar35;
              pfVar35 = pfVar35 + 1;
            } while (lVar14 != 0);
          }
        }
      }
      else if (param_8 == 0) {
        if (*(long *)(lVar14 + 0x28) == 0) {
          pvVar16 = *(void **)(lVar14 + 0x38);
          goto LAB_00d57d1c;
        }
        if (0 < (int)uVar3) {
          memset(__dest,0,uVar33 << 2);
        }
      }
    }
    else {
      iVar13 = iVar26 + -1;
      lVar14 = *(long *)(param_4 + 0x30);
      if (pfVar35[iVar13] <= param_2) {
        pvVar16 = *(void **)(lVar14 + (long)iVar13 * 8);
        if (param_3 == 1.0) {
LAB_00d57d1c:
          memcpy(__dest,pvVar16,(long)(int)uVar3 << 2);
          return;
        }
        if (param_8 == 0) {
          if (*(long *)(*(long *)(lVar34 + 0x28) + 0x28) == 0) {
            if (0 < (int)uVar3) {
              pvVar17 = *(void **)(*(long *)(lVar34 + 0x28) + 0x38);
              if (uVar3 < 8) {
                uVar18 = 0;
              }
              else {
                lVar14 = uVar33 * 4;
                uVar18 = 0;
                if (((void *)((long)pvVar17 + lVar14) <= __dest ||
                     (void *)((long)__dest + lVar14) <= pvVar17) &&
                   ((void *)((long)pvVar16 + lVar14) <= __dest ||
                    (void *)((long)__dest + lVar14) <= pvVar16)) {
                  uVar18 = uVar33 & 0xfffffff8;
                  puVar20 = (undefined8 *)((long)pvVar17 + 0x10);
                  puVar25 = (undefined8 *)((long)pvVar16 + 0x10);
                  puVar28 = (undefined8 *)((long)__dest + 0x10);
                  uVar15 = uVar18;
                  do {
                    puVar32 = puVar20 + -2;
                    puVar4 = puVar20 + -1;
                    puVar5 = puVar20 + 1;
                    uVar12 = *puVar20;
                    puVar7 = puVar25 + -1;
                    uVar39 = puVar25[-2];
                    uVar47 = puVar25[1];
                    uVar42 = *puVar25;
                    puVar20 = puVar20 + 4;
                    puVar25 = puVar25 + 4;
                    uVar15 = uVar15 - 8;
                    fVar36 = (float)*puVar32;
                    fVar44 = (float)((ulong)*puVar32 >> 0x20);
                    fVar37 = (float)*puVar4;
                    fVar46 = (float)((ulong)*puVar4 >> 0x20);
                    fVar38 = (float)uVar12;
                    fVar40 = (float)((ulong)uVar12 >> 0x20);
                    fVar41 = (float)*puVar5;
                    fVar43 = (float)((ulong)*puVar5 >> 0x20);
                    puVar28[-1] = CONCAT44(fVar46 + ((float)((ulong)*puVar7 >> 0x20) - fVar46) *
                                                    param_3,
                                           fVar37 + ((float)*puVar7 - fVar37) * param_3);
                    puVar28[-2] = CONCAT44(fVar44 + ((float)((ulong)uVar39 >> 0x20) - fVar44) *
                                                    param_3,
                                           fVar36 + ((float)uVar39 - fVar36) * param_3);
                    puVar28[1] = CONCAT44(fVar43 + ((float)((ulong)uVar47 >> 0x20) - fVar43) *
                                                   param_3,
                                          fVar41 + ((float)uVar47 - fVar41) * param_3);
                    *puVar28 = CONCAT44(fVar40 + ((float)((ulong)uVar42 >> 0x20) - fVar40) * param_3
                                        ,fVar38 + ((float)uVar42 - fVar38) * param_3);
                    puVar28 = puVar28 + 4;
                  } while (uVar15 != 0);
                  if (uVar18 == uVar33) {
                    return;
                  }
                }
              }
              lVar34 = uVar18 * 4;
              lVar14 = uVar33 - uVar18;
              pfVar35 = (float *)((long)pvVar17 + lVar34);
              pfVar19 = (float *)((long)__dest + lVar34);
              pfVar24 = (float *)((long)pvVar16 + lVar34);
              do {
                lVar14 = lVar14 + -1;
                *pfVar19 = *pfVar35 + (*pfVar24 - *pfVar35) * param_3;
                pfVar35 = pfVar35 + 1;
                pfVar19 = pfVar19 + 1;
                pfVar24 = pfVar24 + 1;
              } while (lVar14 != 0);
            }
          }
          else if (0 < (int)uVar3) {
            if ((uVar3 < 8) ||
               ((__dest < (void *)((long)pvVar16 + uVar33 * 4) &&
                (pvVar16 < (void *)((long)__dest + uVar33 * 4))))) {
              uVar18 = 0;
            }
            else {
              uVar18 = uVar33 & 0xfffffff8;
              puVar20 = (undefined8 *)((long)pvVar16 + 0x10);
              puVar25 = (undefined8 *)((long)__dest + 0x10);
              uVar15 = uVar18;
              do {
                puVar28 = puVar20 + -1;
                uVar12 = puVar20[-2];
                uVar42 = puVar20[1];
                uVar39 = *puVar20;
                puVar20 = puVar20 + 4;
                uVar15 = uVar15 - 8;
                puVar25[-1] = CONCAT44((float)((ulong)*puVar28 >> 0x20) * param_3,
                                       (float)*puVar28 * param_3);
                puVar25[-2] = CONCAT44((float)((ulong)uVar12 >> 0x20) * param_3,
                                       (float)uVar12 * param_3);
                puVar25[1] = CONCAT44((float)((ulong)uVar42 >> 0x20) * param_3,
                                      (float)uVar42 * param_3);
                *puVar25 = CONCAT44((float)((ulong)uVar39 >> 0x20) * param_3,(float)uVar39 * param_3
                                   );
                puVar25 = puVar25 + 4;
              } while (uVar15 != 0);
              if (uVar18 == uVar33) {
                return;
              }
            }
            lVar14 = uVar33 - uVar18;
            pfVar35 = (float *)((long)__dest + uVar18 * 4);
            pfVar19 = (float *)((long)pvVar16 + uVar18 * 4);
            do {
              lVar14 = lVar14 + -1;
              *pfVar35 = *pfVar19 * param_3;
              pfVar35 = pfVar35 + 1;
              pfVar19 = pfVar19 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (0 < (int)uVar3) {
                    /* try { // try from 00d57b78 to 00e57b7b has its CatchHandler @ 00d57bf8 */
                    /* try { // try from 00d57b7c to 00e57c0b has its CatchHandler @ 00d57b18 */
          if ((uVar3 < 8) ||
             ((__dest < (void *)((long)pvVar16 + uVar33 * 4) &&
              (pvVar16 < (void *)((long)__dest + uVar33 * 4))))) {
            uVar18 = 0;
          }
          else {
            uVar18 = uVar33 & 0xfffffff8;
            puVar20 = (undefined8 *)((long)pvVar16 + 0x10);
            puVar25 = (undefined8 *)((long)__dest + 0x10);
            uVar15 = uVar18;
            do {
              puVar28 = puVar20 + -1;
              uVar12 = puVar20[-2];
              uVar42 = puVar20[1];
              uVar39 = *puVar20;
              puVar20 = puVar20 + 4;
              uVar15 = uVar15 - 8;
              fVar36 = (float)puVar25[-2];
              fVar44 = (float)((ulong)puVar25[-2] >> 0x20);
              fVar37 = (float)puVar25[-1];
              fVar46 = (float)((ulong)puVar25[-1] >> 0x20);
              fVar38 = (float)*puVar25;
              fVar40 = (float)((ulong)*puVar25 >> 0x20);
              fVar41 = (float)puVar25[1];
              fVar43 = (float)((ulong)puVar25[1] >> 0x20);
              puVar25[-1] = CONCAT44(fVar46 + ((float)((ulong)*puVar28 >> 0x20) - fVar46) * param_3,
                                     fVar37 + ((float)*puVar28 - fVar37) * param_3);
              puVar25[-2] = CONCAT44(fVar44 + ((float)((ulong)uVar12 >> 0x20) - fVar44) * param_3,
                                     fVar36 + ((float)uVar12 - fVar36) * param_3);
              puVar25[1] = CONCAT44(fVar43 + ((float)((ulong)uVar42 >> 0x20) - fVar43) * param_3,
                                    fVar41 + ((float)uVar42 - fVar41) * param_3);
              *puVar25 = CONCAT44(fVar40 + ((float)((ulong)uVar39 >> 0x20) - fVar40) * param_3,
                                  fVar38 + ((float)uVar39 - fVar38) * param_3);
              puVar25 = puVar25 + 4;
            } while (uVar15 != 0);
            if (uVar18 == uVar33) {
              return;
            }
          }
          lVar14 = uVar33 - uVar18;
          pfVar35 = (float *)((long)__dest + uVar18 * 4);
          pfVar19 = (float *)((long)pvVar16 + uVar18 * 4);
          do {
            lVar14 = lVar14 + -1;
            *pfVar35 = *pfVar35 + (*pfVar19 - *pfVar35) * param_3;
            pfVar35 = pfVar35 + 1;
            pfVar19 = pfVar19 + 1;
          } while (lVar14 != 0);
        }
      }
      else {
        iVar26 = iVar26 + -2;
        if (iVar26 == 0) {
          iVar13 = 1;
        }
        else {
          iVar13 = 0;
          iVar21 = iVar26;
          do {
            iVar2 = iVar26 >> 1;
            if (pfVar35[iVar2 + 1] <= param_2) {
              iVar13 = iVar2 + 1;
              iVar2 = iVar21;
            }
                    /* try { // try from 00d57b18 to 00e57b77 has its CatchHandler @ 00d57b18
                       catch() { ... } // from try @ 00d57b18 with catch @ 00d57b18
                       catch() { ... } // from try @ 00d57b7c with catch @ 00d57b18 */
            iVar26 = iVar13 + iVar2;
            iVar21 = iVar2;
          } while (iVar13 != iVar2);
          fVar36 = pfVar35[iVar13];
          iVar13 = iVar13 + 1;
        }
        lVar22 = *(long *)(param_4 + 0x10);
        iVar26 = (int)((long)iVar13 + -1) * 0x13;
                    /* catch() { ... } // from try @ 00d57b78 with catch @ 00d57bf8 */
        fVar44 = *(float *)(lVar22 + (long)iVar26 * 4);
        pvVar16 = *(void **)(lVar14 + (long)iVar13 * 8);
        pvVar17 = *(void **)(lVar14 + ((long)iVar13 + -1) * 8);
        fVar36 = 1.0 - (param_2 - pfVar35[iVar13]) / (fVar36 - pfVar35[iVar13]);
        bVar11 = 0.0 <= fVar36;
        if (1.0 < fVar36) {
          fVar36 = 1.0;
        }
        fVar37 = 0.0;
        if (bVar11) {
          fVar37 = fVar36;
        }
        fVar36 = fVar37;
        if ((fVar44 != 0.0) && (fVar36 = 0.0, fVar44 != 1.0)) {
          uVar27 = iVar26 + 1;
          lVar14 = 0;
          lVar30 = ((ulong)uVar27 << 0x20) + -0x100000000;
          lVar31 = ((ulong)uVar27 << 0x20) + -0x200000000;
          do {
            fVar36 = *(float *)(lVar22 + (long)(int)uVar27 * 4 + lVar14 * 4);
            if (fVar37 <= fVar36) {
              if ((int)lVar14 == 0) {
                fVar44 = 0.0;
                fVar46 = 0.0;
              }
              else {
                fVar44 = *(float *)(lVar22 + (lVar31 >> 0x1e));
                fVar46 = *(float *)(lVar22 + (lVar30 >> 0x1e));
                uVar27 = (int)lVar14 + uVar27;
              }
              fVar36 = fVar46 + ((fVar37 - fVar44) *
                                (*(float *)(lVar22 + (long)(int)(uVar27 + 1) * 4) - fVar46)) /
                                (fVar36 - fVar44);
              goto joined_r0x00d57d10;
            }
            lVar14 = lVar14 + 2;
            lVar30 = lVar30 + 0x200000000;
            lVar31 = lVar31 + 0x200000000;
          } while ((long)(int)uVar27 + -2 + lVar14 < (long)(iVar26 + 0x11));
          fVar44 = *(float *)(lVar22 + (lVar30 >> 0x1e));
          fVar36 = fVar44 + ((fVar37 - fVar36) * (1.0 - fVar44)) / (1.0 - fVar36);
        }
joined_r0x00d57d10:
        if (param_3 == 1.0) {
          if (0 < (int)uVar3) {
            if (uVar3 < 8) {
              uVar18 = 0;
            }
            else {
              lVar14 = uVar33 * 4;
              uVar18 = 0;
              if (((void *)((long)pvVar17 + lVar14) <= __dest ||
                   (void *)((long)__dest + lVar14) <= pvVar17) &&
                 ((void *)((long)pvVar16 + lVar14) <= __dest ||
                  (void *)((long)__dest + lVar14) <= pvVar16)) {
                uVar18 = uVar33 & 0xfffffff8;
                puVar20 = (undefined8 *)((long)pvVar17 + 0x10);
                puVar25 = (undefined8 *)((long)pvVar16 + 0x10);
                puVar28 = (undefined8 *)((long)__dest + 0x10);
                uVar15 = uVar18;
                do {
                  puVar32 = puVar20 + -2;
                  puVar4 = puVar20 + -1;
                  puVar5 = puVar20 + 1;
                  uVar12 = *puVar20;
                  puVar7 = puVar25 + -1;
                  uVar39 = puVar25[-2];
                  uVar47 = puVar25[1];
                  uVar42 = *puVar25;
                  puVar20 = puVar20 + 4;
                  puVar25 = puVar25 + 4;
                  uVar15 = uVar15 - 8;
                  fVar44 = (float)*puVar32;
                  fVar37 = (float)((ulong)*puVar32 >> 0x20);
                  fVar46 = (float)*puVar4;
                  fVar38 = (float)((ulong)*puVar4 >> 0x20);
                  fVar40 = (float)uVar12;
                  fVar41 = (float)((ulong)uVar12 >> 0x20);
                  fVar43 = (float)*puVar5;
                  fVar45 = (float)((ulong)*puVar5 >> 0x20);
                  puVar28[-1] = CONCAT44(fVar38 + fVar36 * ((float)((ulong)*puVar7 >> 0x20) - fVar38
                                                           ),
                                         fVar46 + fVar36 * ((float)*puVar7 - fVar46));
                  puVar28[-2] = CONCAT44(fVar37 + fVar36 * ((float)((ulong)uVar39 >> 0x20) - fVar37)
                                         ,fVar44 + fVar36 * ((float)uVar39 - fVar44));
                  puVar28[1] = CONCAT44(fVar45 + fVar36 * ((float)((ulong)uVar47 >> 0x20) - fVar45),
                                        fVar43 + fVar36 * ((float)uVar47 - fVar43));
                  *puVar28 = CONCAT44(fVar41 + fVar36 * ((float)((ulong)uVar42 >> 0x20) - fVar41),
                                      fVar40 + fVar36 * ((float)uVar42 - fVar40));
                  puVar28 = puVar28 + 4;
                } while (uVar15 != 0);
                if (uVar18 == uVar33) {
                  return;
                }
              }
            }
            lVar34 = uVar18 * 4;
            lVar14 = uVar33 - uVar18;
            pfVar35 = (float *)((long)pvVar16 + lVar34);
            pfVar19 = (float *)((long)pvVar17 + lVar34);
            pfVar24 = (float *)((long)__dest + lVar34);
            do {
              lVar14 = lVar14 + -1;
              *pfVar24 = *pfVar19 + fVar36 * (*pfVar35 - *pfVar19);
              pfVar35 = pfVar35 + 1;
              pfVar19 = pfVar19 + 1;
              pfVar24 = pfVar24 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (param_8 == 0) {
          if (*(long *)(*(long *)(lVar34 + 0x28) + 0x28) == 0) {
            if (0 < (int)uVar3) {
              pvVar23 = *(void **)(*(long *)(lVar34 + 0x28) + 0x38);
              if (uVar3 < 8) {
                uVar18 = 0;
              }
              else {
                lVar14 = uVar33 * 4;
                pvVar1 = (void *)((long)__dest + lVar14);
                uVar18 = 0;
                if ((((void *)((long)pvVar17 + lVar14) <= __dest || pvVar1 <= pvVar17) &&
                    ((void *)((long)pvVar23 + lVar14) <= __dest || pvVar1 <= pvVar23)) &&
                   ((void *)((long)pvVar16 + lVar14) <= __dest || pvVar1 <= pvVar16)) {
                  uVar18 = uVar33 & 0xfffffff8;
                  puVar20 = (undefined8 *)((long)pvVar17 + 0x10);
                  puVar25 = (undefined8 *)((long)pvVar23 + 0x10);
                  puVar28 = (undefined8 *)((long)pvVar16 + 0x10);
                  puVar32 = (undefined8 *)((long)__dest + 0x10);
                  uVar15 = uVar18;
                  do {
                    puVar4 = puVar20 + -2;
                    puVar7 = puVar20 + -1;
                    puVar6 = puVar20 + 1;
                    uVar12 = *puVar20;
                    puVar10 = puVar28 + -1;
                    uVar42 = puVar28[-2];
                    uVar56 = puVar28[1];
                    uVar47 = *puVar28;
                    puVar5 = puVar25 + -2;
                    puVar8 = puVar25 + -1;
                    puVar9 = puVar25 + 1;
                    uVar39 = *puVar25;
                    puVar20 = puVar20 + 4;
                    puVar25 = puVar25 + 4;
                    fVar44 = (float)*puVar4;
                    fVar37 = (float)((ulong)*puVar4 >> 0x20);
                    fVar46 = (float)*puVar7;
                    fVar38 = (float)((ulong)*puVar7 >> 0x20);
                    fVar40 = (float)uVar12;
                    fVar41 = (float)((ulong)uVar12 >> 0x20);
                    fVar43 = (float)*puVar6;
                    fVar45 = (float)((ulong)*puVar6 >> 0x20);
                    fVar48 = (float)*puVar5;
                    fVar49 = (float)((ulong)*puVar5 >> 0x20);
                    fVar50 = (float)*puVar8;
                    fVar51 = (float)((ulong)*puVar8 >> 0x20);
                    fVar52 = (float)uVar39;
                    fVar53 = (float)((ulong)uVar39 >> 0x20);
                    fVar54 = (float)*puVar9;
                    fVar55 = (float)((ulong)*puVar9 >> 0x20);
                    puVar28 = puVar28 + 4;
                    uVar15 = uVar15 - 8;
                    puVar32[-1] = CONCAT44(fVar51 + ((fVar38 + fVar36 * ((float)((ulong)*puVar10 >>
                                                                                0x20) - fVar38)) -
                                                    fVar51) * param_3,
                                           fVar50 + ((fVar46 + fVar36 * ((float)*puVar10 - fVar46))
                                                    - fVar50) * param_3);
                    puVar32[-2] = CONCAT44(fVar49 + ((fVar37 + fVar36 * ((float)((ulong)uVar42 >>
                                                                                0x20) - fVar37)) -
                                                    fVar49) * param_3,
                                           fVar48 + ((fVar44 + fVar36 * ((float)uVar42 - fVar44)) -
                                                    fVar48) * param_3);
                    puVar32[1] = CONCAT44(fVar55 + ((fVar45 + fVar36 * ((float)((ulong)uVar56 >>
                                                                               0x20) - fVar45)) -
                                                   fVar55) * param_3,
                                          fVar54 + ((fVar43 + fVar36 * ((float)uVar56 - fVar43)) -
                                                   fVar54) * param_3);
                    *puVar32 = CONCAT44(fVar53 + ((fVar41 + fVar36 * ((float)((ulong)uVar47 >> 0x20)
                                                                     - fVar41)) - fVar53) * param_3,
                                        fVar52 + ((fVar40 + fVar36 * ((float)uVar47 - fVar40)) -
                                                 fVar52) * param_3);
                    puVar32 = puVar32 + 4;
                  } while (uVar15 != 0);
                  if (uVar18 == uVar33) {
                    return;
                  }
                }
              }
              lVar34 = uVar18 * 4;
              lVar14 = uVar33 - uVar18;
              pfVar35 = (float *)((long)pvVar16 + lVar34);
              pfVar19 = (float *)((long)pvVar17 + lVar34);
              pfVar24 = (float *)((long)pvVar23 + lVar34);
              pfVar29 = (float *)((long)__dest + lVar34);
              do {
                lVar14 = lVar14 + -1;
                *pfVar29 = *pfVar24 +
                           ((*pfVar19 + fVar36 * (*pfVar35 - *pfVar19)) - *pfVar24) * param_3;
                pfVar35 = pfVar35 + 1;
                pfVar19 = pfVar19 + 1;
                pfVar24 = pfVar24 + 1;
                pfVar29 = pfVar29 + 1;
              } while (lVar14 != 0);
            }
          }
          else if (0 < (int)uVar3) {
            if (uVar3 < 8) {
              uVar18 = 0;
            }
            else {
              lVar14 = uVar33 * 4;
              uVar18 = 0;
              if (((void *)((long)pvVar17 + lVar14) <= __dest ||
                   (void *)((long)__dest + lVar14) <= pvVar17) &&
                 ((void *)((long)pvVar16 + lVar14) <= __dest ||
                  (void *)((long)__dest + lVar14) <= pvVar16)) {
                uVar18 = uVar33 & 0xfffffff8;
                puVar20 = (undefined8 *)((long)pvVar17 + 0x10);
                puVar25 = (undefined8 *)((long)pvVar16 + 0x10);
                puVar28 = (undefined8 *)((long)__dest + 0x10);
                uVar15 = uVar18;
                do {
                  puVar32 = puVar20 + -2;
                  puVar4 = puVar20 + -1;
                  puVar5 = puVar20 + 1;
                  uVar12 = *puVar20;
                  puVar7 = puVar25 + -1;
                  uVar39 = puVar25[-2];
                  uVar47 = puVar25[1];
                  uVar42 = *puVar25;
                  puVar20 = puVar20 + 4;
                  puVar25 = puVar25 + 4;
                  uVar15 = uVar15 - 8;
                  fVar44 = (float)*puVar32;
                  fVar37 = (float)((ulong)*puVar32 >> 0x20);
                  fVar46 = (float)*puVar4;
                  fVar38 = (float)((ulong)*puVar4 >> 0x20);
                  fVar40 = (float)uVar12;
                  fVar41 = (float)((ulong)uVar12 >> 0x20);
                  fVar43 = (float)*puVar5;
                  fVar45 = (float)((ulong)*puVar5 >> 0x20);
                  puVar28[-1] = CONCAT44((fVar38 + fVar36 * ((float)((ulong)*puVar7 >> 0x20) -
                                                            fVar38)) * param_3,
                                         (fVar46 + fVar36 * ((float)*puVar7 - fVar46)) * param_3);
                  puVar28[-2] = CONCAT44((fVar37 + fVar36 * ((float)((ulong)uVar39 >> 0x20) - fVar37
                                                            )) * param_3,
                                         (fVar44 + fVar36 * ((float)uVar39 - fVar44)) * param_3);
                  puVar28[1] = CONCAT44((fVar45 + fVar36 * ((float)((ulong)uVar47 >> 0x20) - fVar45)
                                        ) * param_3,
                                        (fVar43 + fVar36 * ((float)uVar47 - fVar43)) * param_3);
                  *puVar28 = CONCAT44((fVar41 + fVar36 * ((float)((ulong)uVar42 >> 0x20) - fVar41))
                                      * param_3,
                                      (fVar40 + fVar36 * ((float)uVar42 - fVar40)) * param_3);
                  puVar28 = puVar28 + 4;
                } while (uVar15 != 0);
                if (uVar18 == uVar33) {
                  return;
                }
              }
            }
            lVar34 = uVar18 * 4;
            lVar14 = uVar33 - uVar18;
            pfVar35 = (float *)((long)pvVar16 + lVar34);
            pfVar19 = (float *)((long)pvVar17 + lVar34);
            pfVar24 = (float *)((long)__dest + lVar34);
            do {
              lVar14 = lVar14 + -1;
              *pfVar24 = (*pfVar19 + fVar36 * (*pfVar35 - *pfVar19)) * param_3;
              pfVar35 = pfVar35 + 1;
              pfVar19 = pfVar19 + 1;
              pfVar24 = pfVar24 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (0 < (int)uVar3) {
          if (uVar3 < 8) {
            uVar18 = 0;
          }
          else {
            lVar14 = uVar33 * 4;
            uVar18 = 0;
            if (((void *)((long)pvVar17 + lVar14) <= __dest ||
                 (void *)((long)__dest + lVar14) <= pvVar17) &&
               ((void *)((long)pvVar16 + lVar14) <= __dest ||
                (void *)((long)__dest + lVar14) <= pvVar16)) {
              uVar18 = uVar33 & 0xfffffff8;
              puVar20 = (undefined8 *)((long)pvVar17 + 0x10);
              puVar25 = (undefined8 *)((long)pvVar16 + 0x10);
              puVar28 = (undefined8 *)((long)__dest + 0x10);
              uVar15 = uVar18;
              do {
                puVar32 = puVar20 + -2;
                puVar4 = puVar20 + -1;
                puVar7 = puVar20 + 1;
                uVar39 = *puVar20;
                puVar5 = puVar25 + -1;
                uVar12 = puVar25[-2];
                uVar47 = puVar25[1];
                uVar42 = *puVar25;
                puVar20 = puVar20 + 4;
                puVar25 = puVar25 + 4;
                uVar15 = uVar15 - 8;
                fVar44 = (float)*puVar32;
                fVar37 = (float)((ulong)*puVar32 >> 0x20);
                fVar46 = (float)*puVar4;
                fVar38 = (float)((ulong)*puVar4 >> 0x20);
                fVar48 = (float)uVar39;
                fVar49 = (float)((ulong)uVar39 >> 0x20);
                fVar50 = (float)*puVar7;
                fVar51 = (float)((ulong)*puVar7 >> 0x20);
                fVar40 = (float)puVar28[-2];
                fVar41 = (float)((ulong)puVar28[-2] >> 0x20);
                fVar43 = (float)puVar28[-1];
                fVar45 = (float)((ulong)puVar28[-1] >> 0x20);
                fVar52 = (float)*puVar28;
                fVar53 = (float)((ulong)*puVar28 >> 0x20);
                fVar54 = (float)puVar28[1];
                fVar55 = (float)((ulong)puVar28[1] >> 0x20);
                puVar28[-1] = CONCAT44(fVar45 + ((fVar38 + fVar36 * ((float)((ulong)*puVar5 >> 0x20)
                                                                    - fVar38)) - fVar45) * param_3,
                                       fVar43 + ((fVar46 + fVar36 * ((float)*puVar5 - fVar46)) -
                                                fVar43) * param_3);
                puVar28[-2] = CONCAT44(fVar41 + ((fVar37 + fVar36 * ((float)((ulong)uVar12 >> 0x20)
                                                                    - fVar37)) - fVar41) * param_3,
                                       fVar40 + ((fVar44 + fVar36 * ((float)uVar12 - fVar44)) -
                                                fVar40) * param_3);
                puVar28[1] = CONCAT44(fVar55 + ((fVar51 + fVar36 * ((float)((ulong)uVar47 >> 0x20) -
                                                                   fVar51)) - fVar55) * param_3,
                                      fVar54 + ((fVar50 + fVar36 * ((float)uVar47 - fVar50)) -
                                               fVar54) * param_3);
                *puVar28 = CONCAT44(fVar53 + ((fVar49 + fVar36 * ((float)((ulong)uVar42 >> 0x20) -
                                                                 fVar49)) - fVar53) * param_3,
                                    fVar52 + ((fVar48 + fVar36 * ((float)uVar42 - fVar48)) - fVar52)
                                             * param_3);
                puVar28 = puVar28 + 4;
              } while (uVar15 != 0);
              if (uVar18 == uVar33) {
                return;
              }
            }
          }
          lVar34 = uVar18 * 4;
          lVar14 = uVar33 - uVar18;
          pfVar35 = (float *)((long)pvVar16 + lVar34);
          pfVar19 = (float *)((long)pvVar17 + lVar34);
          pfVar24 = (float *)((long)__dest + lVar34);
          do {
            lVar14 = lVar14 + -1;
            *pfVar24 = *pfVar24 + ((*pfVar19 + fVar36 * (*pfVar35 - *pfVar19)) - *pfVar24) * param_3
            ;
            pfVar35 = pfVar35 + 1;
            pfVar19 = pfVar19 + 1;
            pfVar24 = pfVar24 + 1;
          } while (lVar14 != 0);
        }
      }
    }
  }
  return;
}

