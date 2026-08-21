
/* cocos2d::ParticleSystem::addParticles(int) */

void cocos2d::ParticleSystem::addParticles(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  Node *this;
  ulong uVar7;
  int in_w1;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  undefined4 uVar24;
  float in_s1;
  float __x;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  
  this = (Node *)(ulong)(uint)param_1;
  if (this[0x52c] != (Node)0x0) {
    return;
  }
  uVar6 = rand();
  uVar3 = *(uint *)(this + 0x478);
  uVar22 = (ulong)(int)uVar3;
  iVar1 = uVar3 + in_w1;
  lVar23 = uVar22 * 4;
  *(int *)(this + 0x478) = iVar1;
  if (0 < in_w1) {
    lVar8 = *(long *)(this + 1000);
    uVar7 = uVar22;
    do {
      uVar6 = uVar6 * 0x8088405 + 1;
      in_s1 = *(float *)(this + 0x490) +
              ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x494);
      if (in_s1 <= 0.0) {
        in_s1 = 0.0;
      }
      *(float *)(lVar8 + uVar7 * 4) = in_s1;
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)iVar1);
    if (0 < in_w1) {
      lVar8 = *(long *)(this + 0x368);
      uVar7 = uVar22;
      do {
        uVar6 = uVar6 * 0x8088405 + 1;
        in_s1 = ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x488);
        *(float *)(lVar8 + uVar7 * 4) = *(float *)(this + 0x480) + in_s1;
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)iVar1);
      if (0 < in_w1) {
        lVar8 = *(long *)(this + 0x370);
        uVar7 = uVar22;
        do {
          uVar6 = uVar6 * 0x8088405 + 1;
          in_s1 = ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x48c);
          *(float *)(lVar8 + uVar7 * 4) = *(float *)(this + 0x484) + in_s1;
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)iVar1);
        if (0 < in_w1) {
          lVar8 = *(long *)(this + 0x388);
          in_s1 = 0.0;
          uVar7 = uVar22;
          do {
            uVar6 = uVar6 * 0x8088405 + 1;
            fVar28 = *(float *)(this + 0x4b4) +
                     ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x4c4)
            ;
            uVar29 = NEON_fminnm(fVar28,0x3f800000);
            uVar24 = 0;
            if (0.0 <= fVar28) {
              uVar24 = uVar29;
            }
            *(undefined4 *)(lVar8 + uVar7 * 4) = uVar24;
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)iVar1);
          if (0 < in_w1) {
            lVar8 = *(long *)(this + 0x390);
            in_s1 = 0.0;
            uVar7 = uVar22;
            do {
              uVar6 = uVar6 * 0x8088405 + 1;
              fVar28 = *(float *)(this + 0x4b8) +
                       ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                       *(float *)(this + 0x4c8);
              uVar29 = NEON_fminnm(fVar28,0x3f800000);
              uVar24 = 0;
              if (0.0 <= fVar28) {
                uVar24 = uVar29;
              }
              *(undefined4 *)(lVar8 + uVar7 * 4) = uVar24;
              uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)iVar1);
            if (0 < in_w1) {
              lVar8 = *(long *)(this + 0x398);
              in_s1 = 0.0;
              uVar7 = uVar22;
              do {
                uVar6 = uVar6 * 0x8088405 + 1;
                fVar28 = *(float *)(this + 0x4bc) +
                         ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                         *(float *)(this + 0x4cc);
                uVar29 = NEON_fminnm(fVar28,0x3f800000);
                uVar24 = 0;
                if (0.0 <= fVar28) {
                  uVar24 = uVar29;
                }
                *(undefined4 *)(lVar8 + uVar7 * 4) = uVar24;
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)iVar1);
              if (0 < in_w1) {
                lVar8 = *(long *)(this + 0x3a0);
                in_s1 = 0.0;
                uVar7 = uVar22;
                do {
                  uVar6 = uVar6 * 0x8088405 + 1;
                  fVar28 = *(float *)(this + 0x4c0) +
                           ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                           *(float *)(this + 0x4d0);
                  uVar29 = NEON_fminnm(fVar28,0x3f800000);
                  uVar24 = 0;
                  if (0.0 <= fVar28) {
                    uVar24 = uVar29;
                  }
                  *(undefined4 *)(lVar8 + uVar7 * 4) = uVar24;
                  uVar7 = uVar7 + 1;
                } while ((long)uVar7 < (long)iVar1);
                if (0 < in_w1) {
                  lVar8 = *(long *)(this + 0x3a8);
                  in_s1 = 0.0;
                  uVar7 = uVar22;
                  do {
                    uVar6 = uVar6 * 0x8088405 + 1;
                    fVar28 = *(float *)(this + 0x4d4) +
                             ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                             *(float *)(this + 0x4e4);
                    uVar29 = NEON_fminnm(fVar28,0x3f800000);
                    uVar24 = 0;
                    if (0.0 <= fVar28) {
                      uVar24 = uVar29;
                    }
                    *(undefined4 *)(lVar8 + uVar7 * 4) = uVar24;
                    uVar7 = uVar7 + 1;
                  } while ((long)uVar7 < (long)iVar1);
                  if (0 < in_w1) {
                    lVar8 = *(long *)(this + 0x3b0);
                    in_s1 = 0.0;
                    uVar7 = uVar22;
                    do {
                      uVar6 = uVar6 * 0x8088405 + 1;
                    /* try { // try from 00f33950 to 01033973 has its CatchHandler @ 00f33950
                       catch() { ... } // from try @ 00f33950 with catch @ 00f33950
                       catch() { ... } // from try @ 00f339c0 with catch @ 00f33950 */
                      fVar28 = *(float *)(this + 0x4d8) +
                               ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                               *(float *)(this + 0x4e8);
                      uVar29 = NEON_fminnm(fVar28,0x3f800000);
                      uVar24 = 0;
                      if (0.0 <= fVar28) {
                        uVar24 = uVar29;
                      }
                      *(undefined4 *)(lVar8 + uVar7 * 4) = uVar24;
                    /* try { // try from 00f33974 to 0103397b has its CatchHandler @ 00f33a48 */
                      uVar7 = uVar7 + 1;
                    } while ((long)uVar7 < (long)iVar1);
                    /* try { // try from 00f33980 to 01033987 has its CatchHandler @ 00f33a40 */
                    if (0 < in_w1) {
                      lVar8 = *(long *)(this + 0x3b8);
                    /* try { // try from 00f3398c to 01033993 has its CatchHandler @ 00f33a1c */
                      in_s1 = 0.0;
                    /* try { // try from 00f33998 to 0103399f has its CatchHandler @ 00f33a0c */
                      uVar7 = uVar22;
                      do {
                        uVar6 = uVar6 * 0x8088405 + 1;
                    /* try { // try from 00f339a4 to 010339ab has its CatchHandler @ 00f339fc */
                    /* try { // try from 00f339b0 to 010339b7 has its CatchHandler @ 00f339ec */
                    /* try { // try from 00f339bc to 010339bf has its CatchHandler @ 00f339d8 */
                        fVar28 = *(float *)(this + 0x4dc) +
                                 ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                                 *(float *)(this + 0x4ec);
                    /* try { // try from 00f339c0 to 01033a4f has its CatchHandler @ 00f33950 */
                        uVar29 = NEON_fminnm(fVar28,0x3f800000);
                        uVar24 = 0;
                        if (0.0 <= fVar28) {
                          uVar24 = uVar29;
                        }
                        *(undefined4 *)(lVar8 + uVar7 * 4) = uVar24;
                        uVar7 = uVar7 + 1;
                    /* catch() { ... } // from try @ 00f339bc with catch @ 00f339d8 */
                      } while ((long)uVar7 < (long)iVar1);
                      if (0 < in_w1) {
                        lVar8 = *(long *)(this + 0x3c0);
                    /* catch() { ... } // from try @ 00f339b0 with catch @ 00f339ec */
                        in_s1 = 0.0;
                        uVar7 = uVar22;
                        do {
                    /* catch() { ... } // from try @ 00f339a4 with catch @ 00f339fc */
                          uVar6 = uVar6 * 0x8088405 + 1;
                    /* catch() { ... } // from try @ 00f33998 with catch @ 00f33a0c */
                          fVar28 = *(float *)(this + 0x4e0) +
                                   ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                                   *(float *)(this + 0x4f0);
                    /* catch() { ... } // from try @ 00f3398c with catch @ 00f33a1c */
                          uVar29 = NEON_fminnm(fVar28,0x3f800000);
                          uVar24 = 0;
                          if (0.0 <= fVar28) {
                            uVar24 = uVar29;
                          }
                          *(undefined4 *)(lVar8 + uVar7 * 4) = uVar24;
                          uVar7 = uVar7 + 1;
                        } while ((long)uVar7 < (long)iVar1);
                        if (0 < in_w1) {
                    /* catch() { ... } // from try @ 00f33980 with catch @ 00f33a40 */
                          lVar9 = (long)iVar1;
                    /* catch() { ... } // from try @ 00f33974 with catch @ 00f33a48 */
                          lVar11 = *(long *)(this + 0x3a8);
                          lVar13 = *(long *)(this + 0x388);
                          lVar15 = *(long *)(this + 1000);
                          lVar8 = lVar9;
                          if (lVar9 < (long)(uVar22 + 1)) {
                            lVar8 = uVar22 + 1;
                          }
                          uVar17 = lVar8 - uVar22;
                          uVar7 = uVar22;
                          if (uVar17 < 8) {
LAB_00f33a6c:
                            do {
                              lVar8 = uVar7 * 4;
                              uVar10 = (ulong)(uint)*(float *)(lVar13 + lVar8);
                              uVar7 = uVar7 + 1;
                              *(float *)(lVar11 + lVar8) =
                                   (*(float *)(lVar11 + lVar8) - *(float *)(lVar13 + lVar8)) /
                                   *(float *)(lVar15 + lVar8);
                            } while ((long)uVar7 < lVar9);
                          }
                          else {
                            lVar8 = lVar9;
                            if (lVar9 < (long)(uVar22 + 1)) {
                              lVar8 = uVar22 + 1;
                            }
                            lVar8 = lVar8 * 4;
                            if (((ulong)(lVar11 + lVar23) < (ulong)(lVar13 + lVar8) &&
                                 (ulong)(lVar13 + lVar23) < (ulong)(lVar11 + lVar8)) ||
                               ((ulong)(lVar11 + lVar23) < (ulong)(lVar15 + lVar8) &&
                                (ulong)(lVar15 + lVar23) < (ulong)(lVar11 + lVar8)))
                            goto LAB_00f33a6c;
                            uVar20 = uVar17 & 0xfffffffffffffff8;
                            lVar8 = lVar23 + 0x10;
                            puVar18 = (ulong *)(lVar11 + lVar8);
                            puVar21 = (undefined8 *)(lVar15 + lVar8);
                            puVar19 = (undefined8 *)(lVar13 + lVar8);
                            uVar7 = uVar20;
                            do {
                              puVar4 = puVar19 + -1;
                              uVar26 = puVar19[-2];
                              uVar32 = puVar19[1];
                              uVar30 = *puVar19;
                              uVar7 = uVar7 - 8;
                              puVar19 = puVar19 + 4;
                              puVar5 = puVar21 + -1;
                              uVar27 = puVar21[-2];
                              uVar33 = puVar21[1];
                              uVar31 = *puVar21;
                              puVar21 = puVar21 + 4;
                              uVar10 = CONCAT44(((float)(*puVar18 >> 0x20) -
                                                (float)((ulong)uVar30 >> 0x20)) /
                                                (float)((ulong)uVar31 >> 0x20),
                                                ((float)*puVar18 - (float)uVar30) / (float)uVar31);
                              puVar18[-1] = CONCAT44(((float)(puVar18[-1] >> 0x20) -
                                                     (float)((ulong)*puVar4 >> 0x20)) /
                                                     (float)((ulong)*puVar5 >> 0x20),
                                                     ((float)puVar18[-1] - (float)*puVar4) /
                                                     (float)*puVar5);
                              puVar18[-2] = CONCAT44(((float)(puVar18[-2] >> 0x20) -
                                                     (float)((ulong)uVar26 >> 0x20)) /
                                                     (float)((ulong)uVar27 >> 0x20),
                                                     ((float)puVar18[-2] - (float)uVar26) /
                                                     (float)uVar27);
                              puVar18[1] = CONCAT44(((float)(puVar18[1] >> 0x20) -
                                                    (float)((ulong)uVar32 >> 0x20)) /
                                                    (float)((ulong)uVar33 >> 0x20),
                                                    ((float)puVar18[1] - (float)uVar32) /
                                                    (float)uVar33);
                              *puVar18 = uVar10;
                              puVar18 = puVar18 + 4;
                            } while (uVar7 != 0);
                            uVar7 = uVar20 + uVar22;
                            if (uVar17 != uVar20) goto LAB_00f33a6c;
                          }
                          in_s1 = (float)uVar10;
                          if (0 < in_w1) {
                            lVar11 = *(long *)(this + 0x3b0);
                            lVar13 = *(long *)(this + 0x390);
                    /* catch() { ... } // from try @ 00f33af4 with catch @ 00f33aa8 */
                            lVar15 = *(long *)(this + 1000);
                            lVar8 = lVar9;
                            if (lVar9 < (long)(uVar22 + 1)) {
                              lVar8 = uVar22 + 1;
                            }
                            uVar17 = lVar8 - uVar22;
                            uVar7 = uVar22;
                            if (uVar17 < 8) {
LAB_00f33ac4:
                              do {
                                lVar8 = uVar7 * 4;
                                uVar25 = (ulong)(uint)*(float *)(lVar13 + lVar8);
                                uVar7 = uVar7 + 1;
                    /* try { // try from 00f33ae8 to 01033af3 has its CatchHandler @ 00f33b20 */
                                *(float *)(lVar11 + lVar8) =
                                     (*(float *)(lVar11 + lVar8) - *(float *)(lVar13 + lVar8)) /
                                     *(float *)(lVar15 + lVar8);
                              } while ((long)uVar7 < (long)iVar1);
                            }
                            else {
                              lVar8 = lVar9;
                              if (lVar9 < (long)(uVar22 + 1)) {
                                lVar8 = uVar22 + 1;
                              }
                              lVar8 = lVar8 * 4;
                              if (((ulong)(lVar11 + lVar23) < (ulong)(lVar13 + lVar8) &&
                                   (ulong)(lVar13 + lVar23) < (ulong)(lVar11 + lVar8)) ||
                                 ((ulong)(lVar11 + lVar23) < (ulong)(lVar15 + lVar8) &&
                                  (ulong)(lVar15 + lVar23) < (ulong)(lVar11 + lVar8)))
                              goto LAB_00f33ac4;
                              uVar10 = uVar17 & 0xfffffffffffffff8;
                              lVar8 = lVar23 + 0x10;
                              uVar7 = uVar10 + uVar22;
                              puVar18 = (ulong *)(lVar11 + lVar8);
                              puVar21 = (undefined8 *)(lVar15 + lVar8);
                              puVar19 = (undefined8 *)(lVar13 + lVar8);
                              uVar20 = uVar10;
                              do {
                                puVar4 = puVar19 + -1;
                                uVar26 = puVar19[-2];
                                uVar32 = puVar19[1];
                                uVar30 = *puVar19;
                                uVar20 = uVar20 - 8;
                                puVar19 = puVar19 + 4;
                                puVar5 = puVar21 + -1;
                                uVar27 = puVar21[-2];
                                uVar33 = puVar21[1];
                                uVar31 = *puVar21;
                                puVar21 = puVar21 + 4;
                                uVar25 = CONCAT44(((float)(*puVar18 >> 0x20) -
                                                  (float)((ulong)uVar30 >> 0x20)) /
                                                  (float)((ulong)uVar31 >> 0x20),
                                                  ((float)*puVar18 - (float)uVar30) / (float)uVar31)
                                ;
                                puVar18[-1] = CONCAT44(((float)(puVar18[-1] >> 0x20) -
                                                       (float)((ulong)*puVar4 >> 0x20)) /
                                                       (float)((ulong)*puVar5 >> 0x20),
                                                       ((float)puVar18[-1] - (float)*puVar4) /
                                                       (float)*puVar5);
                                puVar18[-2] = CONCAT44(((float)(puVar18[-2] >> 0x20) -
                                                       (float)((ulong)uVar26 >> 0x20)) /
                                                       (float)((ulong)uVar27 >> 0x20),
                                                       ((float)puVar18[-2] - (float)uVar26) /
                                                       (float)uVar27);
                                puVar18[1] = CONCAT44(((float)(puVar18[1] >> 0x20) -
                                                      (float)((ulong)uVar32 >> 0x20)) /
                                                      (float)((ulong)uVar33 >> 0x20),
                                                      ((float)puVar18[1] - (float)uVar32) /
                                                      (float)uVar33);
                                *puVar18 = uVar25;
                                puVar18 = puVar18 + 4;
                              } while (uVar20 != 0);
                              if (uVar17 != uVar10) goto LAB_00f33ac4;
                            }
                            in_s1 = (float)uVar25;
                    /* try { // try from 00f33af4 to 01033b37 has its CatchHandler @ 00f33aa8 */
                            if (0 < in_w1) {
                              lVar11 = *(long *)(this + 0x3b8);
                              lVar13 = *(long *)(this + 0x398);
                              lVar15 = *(long *)(this + 1000);
                              lVar8 = lVar9;
                              if (lVar9 < (long)(uVar22 + 1)) {
                                lVar8 = uVar22 + 1;
                              }
                              uVar17 = lVar8 - uVar22;
                              uVar7 = uVar22;
                              if (uVar17 < 8) {
LAB_00f33b20:
                    /* catch() { ... } // from try @ 00f33ae8 with catch @ 00f33b20 */
                                do {
                                  lVar8 = uVar7 * 4;
                                  uVar10 = (ulong)(uint)*(float *)(lVar13 + lVar8);
                                  uVar7 = uVar7 + 1;
                                  *(float *)(lVar11 + lVar8) =
                                       (*(float *)(lVar11 + lVar8) - *(float *)(lVar13 + lVar8)) /
                                       *(float *)(lVar15 + lVar8);
                                } while ((long)uVar7 < (long)iVar1);
                              }
                              else {
                                lVar8 = lVar9;
                                if (lVar9 < (long)(uVar22 + 1)) {
                                  lVar8 = uVar22 + 1;
                                }
                                lVar8 = lVar8 * 4;
                                if (((ulong)(lVar11 + lVar23) < (ulong)(lVar13 + lVar8) &&
                                     (ulong)(lVar13 + lVar23) < (ulong)(lVar11 + lVar8)) ||
                                   ((ulong)(lVar11 + lVar23) < (ulong)(lVar15 + lVar8) &&
                                    (ulong)(lVar15 + lVar23) < (ulong)(lVar11 + lVar8)))
                                goto LAB_00f33b20;
                                uVar20 = uVar17 & 0xfffffffffffffff8;
                                lVar8 = lVar23 + 0x10;
                                puVar18 = (ulong *)(lVar11 + lVar8);
                                puVar21 = (undefined8 *)(lVar15 + lVar8);
                                puVar19 = (undefined8 *)(lVar13 + lVar8);
                                uVar7 = uVar20;
                                do {
                                  puVar4 = puVar19 + -1;
                                  uVar26 = puVar19[-2];
                                  uVar32 = puVar19[1];
                                  uVar30 = *puVar19;
                                  uVar7 = uVar7 - 8;
                                  puVar19 = puVar19 + 4;
                                  puVar5 = puVar21 + -1;
                                  uVar27 = puVar21[-2];
                                  uVar33 = puVar21[1];
                                  uVar31 = *puVar21;
                                  puVar21 = puVar21 + 4;
                                  uVar10 = CONCAT44(((float)(*puVar18 >> 0x20) -
                                                    (float)((ulong)uVar30 >> 0x20)) /
                                                    (float)((ulong)uVar31 >> 0x20),
                                                    ((float)*puVar18 - (float)uVar30) /
                                                    (float)uVar31);
                                  puVar18[-1] = CONCAT44(((float)(puVar18[-1] >> 0x20) -
                                                         (float)((ulong)*puVar4 >> 0x20)) /
                                                         (float)((ulong)*puVar5 >> 0x20),
                                                         ((float)puVar18[-1] - (float)*puVar4) /
                                                         (float)*puVar5);
                                  puVar18[-2] = CONCAT44(((float)(puVar18[-2] >> 0x20) -
                                                         (float)((ulong)uVar26 >> 0x20)) /
                                                         (float)((ulong)uVar27 >> 0x20),
                                                         ((float)puVar18[-2] - (float)uVar26) /
                                                         (float)uVar27);
                                  puVar18[1] = CONCAT44(((float)(puVar18[1] >> 0x20) -
                                                        (float)((ulong)uVar32 >> 0x20)) /
                                                        (float)((ulong)uVar33 >> 0x20),
                                                        ((float)puVar18[1] - (float)uVar32) /
                                                        (float)uVar33);
                                  *puVar18 = uVar10;
                                  puVar18 = puVar18 + 4;
                                } while (uVar7 != 0);
                                uVar7 = uVar20 + uVar22;
                                if (uVar17 != uVar20) goto LAB_00f33b20;
                              }
                              in_s1 = (float)uVar10;
                              if (0 < in_w1) {
                                lVar11 = *(long *)(this + 0x3c0);
                                lVar13 = *(long *)(this + 0x3a0);
                                lVar15 = *(long *)(this + 1000);
                                lVar8 = lVar9;
                                if (lVar9 < (long)(uVar22 + 1)) {
                                  lVar8 = uVar22 + 1;
                                }
                                uVar17 = lVar8 - uVar22;
                                uVar7 = uVar22;
                                if (uVar17 < 8) {
LAB_00f33c30:
                                  do {
                                    lVar8 = uVar7 * 4;
                                    uVar25 = (ulong)(uint)*(float *)(lVar13 + lVar8);
                                    uVar7 = uVar7 + 1;
                                    *(float *)(lVar11 + lVar8) =
                                         (*(float *)(lVar11 + lVar8) - *(float *)(lVar13 + lVar8)) /
                                         *(float *)(lVar15 + lVar8);
                                  } while ((long)uVar7 < (long)iVar1);
                                }
                                else {
                                  if (lVar9 < (long)(uVar22 + 1)) {
                                    lVar9 = uVar22 + 1;
                                  }
                                  lVar9 = lVar9 * 4;
                                  if (((ulong)(lVar11 + lVar23) < (ulong)(lVar13 + lVar9) &&
                                       (ulong)(lVar13 + lVar23) < (ulong)(lVar11 + lVar9)) ||
                                     ((ulong)(lVar11 + lVar23) < (ulong)(lVar15 + lVar9) &&
                                      (ulong)(lVar15 + lVar23) < (ulong)(lVar11 + lVar9)))
                                  goto LAB_00f33c30;
                                  uVar10 = uVar17 & 0xfffffffffffffff8;
                                  lVar8 = lVar23 + 0x10;
                                  uVar7 = uVar10 + uVar22;
                                  puVar18 = (ulong *)(lVar11 + lVar8);
                                  puVar21 = (undefined8 *)(lVar15 + lVar8);
                                  puVar19 = (undefined8 *)(lVar13 + lVar8);
                                  uVar20 = uVar10;
                                  do {
                                    puVar4 = puVar19 + -1;
                                    uVar26 = puVar19[-2];
                                    uVar32 = puVar19[1];
                                    uVar30 = *puVar19;
                                    uVar20 = uVar20 - 8;
                                    puVar19 = puVar19 + 4;
                                    puVar5 = puVar21 + -1;
                                    uVar27 = puVar21[-2];
                                    uVar33 = puVar21[1];
                                    uVar31 = *puVar21;
                                    puVar21 = puVar21 + 4;
                                    uVar25 = CONCAT44(((float)(*puVar18 >> 0x20) -
                                                      (float)((ulong)uVar30 >> 0x20)) /
                                                      (float)((ulong)uVar31 >> 0x20),
                                                      ((float)*puVar18 - (float)uVar30) /
                                                      (float)uVar31);
                                    puVar18[-1] = CONCAT44(((float)(puVar18[-1] >> 0x20) -
                                                           (float)((ulong)*puVar4 >> 0x20)) /
                                                           (float)((ulong)*puVar5 >> 0x20),
                                                           ((float)puVar18[-1] - (float)*puVar4) /
                                                           (float)*puVar5);
                                    puVar18[-2] = CONCAT44(((float)(puVar18[-2] >> 0x20) -
                                                           (float)((ulong)uVar26 >> 0x20)) /
                                                           (float)((ulong)uVar27 >> 0x20),
                                                           ((float)puVar18[-2] - (float)uVar26) /
                                                           (float)uVar27);
                                    puVar18[1] = CONCAT44(((float)(puVar18[1] >> 0x20) -
                                                          (float)((ulong)uVar32 >> 0x20)) /
                                                          (float)((ulong)uVar33 >> 0x20),
                                                          ((float)puVar18[1] - (float)uVar32) /
                                                          (float)uVar33);
                                    *puVar18 = uVar25;
                                    puVar18 = puVar18 + 4;
                                  } while (uVar20 != 0);
                                  if (uVar17 != uVar10) goto LAB_00f33c30;
                                }
                                in_s1 = (float)uVar25;
                                if (0 < in_w1) {
                                  lVar8 = *(long *)(this + 0x3c8);
                                  uVar7 = uVar22;
                                  do {
                                    uVar6 = uVar6 * 0x8088405 + 1;
                                    in_s1 = *(float *)(this + 0x4a4) +
                                            ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                                            *(float *)(this + 0x4a8);
                                    if (in_s1 <= 0.0) {
                                      in_s1 = 0.0;
                                    }
                                    *(float *)(lVar8 + uVar7 * 4) = in_s1;
                                    uVar7 = uVar7 + 1;
                                  } while ((long)uVar7 < (long)iVar1);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  fVar28 = *(float *)(this + 0x4ac);
  if (fVar28 == -1.0) {
    if (0 < in_w1) {
      iVar2 = iVar1;
      if (iVar1 <= (int)(uVar3 + 1)) {
        iVar2 = uVar3 + 1;
      }
      memset((void *)(*(long *)(this + 0x3d0) + uVar22 * 4),0,(ulong)(iVar2 + ~uVar3) * 4 + 4);
LAB_00f33d74:
      lVar8 = *(long *)(this + 0x3d8);
      uVar7 = uVar22;
      do {
        uVar6 = uVar6 * 0x8088405 + 1;
        in_s1 = ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x4f8);
        *(float *)(lVar8 + uVar7 * 4) = *(float *)(this + 0x4f4) + in_s1;
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)iVar1);
      if (0 < in_w1) {
        lVar8 = *(long *)(this + 0x3d8);
        lVar9 = *(long *)(this + 1000);
        lVar11 = *(long *)(this + 0x3e0);
        uVar7 = uVar22;
        do {
          uVar6 = uVar6 * 0x8088405 + 1;
          lVar13 = uVar7 * 4;
          in_s1 = ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x500);
          uVar7 = uVar7 + 1;
          *(float *)(lVar11 + lVar13) =
               ((*(float *)(this + 0x4fc) + in_s1) - *(float *)(lVar8 + lVar13)) /
               *(float *)(lVar9 + lVar13);
        } while ((long)uVar7 < (long)iVar1);
      }
    }
  }
  else if (0 < in_w1) {
    lVar8 = *(long *)(this + 0x3c8);
    lVar9 = *(long *)(this + 1000);
    lVar11 = *(long *)(this + 0x3d0);
    in_s1 = 0.0;
    uVar7 = uVar22;
    while( true ) {
      uVar6 = uVar6 * 0x8088405 + 1;
      lVar13 = uVar7 * 4;
      fVar28 = fVar28 + ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                        *(float *)(this + 0x4b0);
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      uVar7 = uVar7 + 1;
      *(float *)(lVar11 + lVar13) =
           (fVar28 - *(float *)(lVar8 + lVar13)) / *(float *)(lVar9 + lVar13);
      if ((long)iVar1 <= (long)uVar7) break;
      fVar28 = *(float *)(this + 0x4ac);
    }
    if (0 < in_w1) goto LAB_00f33d74;
  }
  if (*(int *)(this + 0x528) == 0) {
    uVar24 = Node::convertToWorldSpace(this,(Vec2 *)&Vec2::ZERO);
  }
  else if (*(int *)(this + 0x528) == 1) {
    uVar24 = *(undefined4 *)(this + 0x50);
    in_s1 = *(float *)(this + 0x54);
  }
  else {
    uVar24 = 0;
    in_s1 = 0.0;
  }
  iVar1 = *(int *)(this + 0x478);
  lVar8 = (long)iVar1;
  if (iVar1 <= (int)uVar3) goto LAB_00f33f1c;
  lVar9 = *(long *)(this + 0x378);
  uVar17 = lVar8 - uVar22;
  uVar7 = uVar22;
  if (uVar17 < 8) {
LAB_00f33eac:
    do {
      *(undefined4 *)(lVar9 + uVar7 * 4) = uVar24;
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < lVar8);
  }
  else {
    uVar10 = uVar17 & 0xfffffffffffffff8;
    uVar7 = uVar10 + uVar22;
    puVar19 = (undefined8 *)(lVar9 + uVar22 * 4 + 0x10);
    uVar20 = uVar10;
    do {
      puVar19[-1] = CONCAT44(uVar24,uVar24);
      puVar19[-2] = CONCAT44(uVar24,uVar24);
      puVar19[1] = CONCAT44(uVar24,uVar24);
      *puVar19 = CONCAT44(uVar24,uVar24);
      uVar20 = uVar20 - 8;
      puVar19 = puVar19 + 4;
    } while (uVar20 != 0);
    if (uVar17 != uVar10) goto LAB_00f33eac;
  }
  if ((int)uVar3 < iVar1) {
    lVar9 = *(long *)(this + 0x380);
    uVar17 = lVar8 - uVar22;
    uVar7 = uVar22;
    if (7 < uVar17) {
      uVar10 = uVar17 & 0xfffffffffffffff8;
      uVar7 = uVar10 + uVar22;
      puVar19 = (undefined8 *)(lVar9 + uVar22 * 4 + 0x10);
      uVar20 = uVar10;
      do {
        puVar19[-1] = CONCAT44(in_s1,in_s1);
        puVar19[-2] = CONCAT44(in_s1,in_s1);
        puVar19[1] = CONCAT44(in_s1,in_s1);
        *puVar19 = CONCAT44(in_s1,in_s1);
        uVar20 = uVar20 - 8;
        puVar19 = puVar19 + 4;
      } while (uVar20 != 0);
      if (uVar17 == uVar10) goto LAB_00f33f1c;
    }
    lVar11 = lVar8 - uVar7;
    pfVar12 = (float *)(lVar9 + uVar7 * 4);
    do {
      lVar11 = lVar11 + -1;
      *pfVar12 = in_s1;
      pfVar12 = pfVar12 + 1;
    } while (lVar11 != 0);
  }
LAB_00f33f1c:
  if (*(int *)(this + 0x4a0) == 0) {
    if ((int)uVar3 < iVar1) {
      lVar11 = lVar8 - uVar22;
      pfVar12 = (float *)(*(long *)(this + 0x408) + uVar22 * 4);
      lVar9 = lVar11;
      do {
        uVar6 = uVar6 * 0x8088405 + 1;
        lVar9 = lVar9 + -1;
        *pfVar12 = *(float *)(this + 0x344) +
                   ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x348);
        pfVar12 = pfVar12 + 1;
      } while (lVar9 != 0);
                    /* catch() { ... } // from try @ 00f33f80 with catch @ 00f340a0 */
                    /* catch() { ... } // from try @ 00f33f6c with catch @ 00f340a4 */
      if ((int)uVar3 < iVar1) {
        pfVar12 = (float *)(*(long *)(this + 0x410) + uVar22 * 4);
        do {
                    /* catch() { ... } // from try @ 00f33f64 with catch @ 00f340b4 */
                    /* catch() { ... } // from try @ 00f33f8c with catch @ 00f340b8 */
          uVar6 = uVar6 * 0x8088405 + 1;
                    /* catch() { ... } // from try @ 00f340f8 with catch @ 00f340cc */
          lVar11 = lVar11 + -1;
          *pfVar12 = *(float *)(this + 0x33c) +
                     ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x340)
          ;
          pfVar12 = pfVar12 + 1;
        } while (lVar11 != 0);
      }
    }
    if (this[0x34c] == (Node)0x0) {
                    /* catch() { ... } // from try @ 00f341c8 with catch @ 00f3422c */
      if ((int)uVar3 < iVar1) {
        lVar8 = lVar8 - uVar22;
        pfVar12 = (float *)(*(long *)(this + 0x400) + lVar23);
        pfVar14 = (float *)(*(long *)(this + 0x3f8) + lVar23);
        do {
          uVar3 = uVar6 * 0x8088405 + 1;
          sincosf((*(float *)(this + 0x498) +
                  ((float)((uVar3 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x49c)) *
                  0.017453292,&fStack_7c,&local_80);
          uVar6 = uVar3 * 0x8088405 + 1;
          fVar28 = *(float *)(this + 0x334) +
                   ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x338);
          lVar8 = lVar8 + -1;
          *pfVar14 = local_80 * fVar28;
          *pfVar12 = fStack_7c * fVar28;
          pfVar12 = pfVar12 + 1;
          pfVar14 = pfVar14 + 1;
        } while (lVar8 != 0);
      }
    }
    else {
                    /* try { // try from 00f340f0 to 010340f7 has its CatchHandler @ 00f34140 */
      if ((int)uVar3 < iVar1) {
                    /* try { // try from 00f340f8 to 0103415b has its CatchHandler @ 00f340cc */
        lVar8 = lVar8 - uVar22;
        pfVar12 = (float *)(*(long *)(this + 0x3d8) + lVar23);
        pfVar14 = (float *)(*(long *)(this + 0x3f8) + lVar23);
        pfVar16 = (float *)(*(long *)(this + 0x400) + lVar23);
        do {
          uVar3 = uVar6 * 0x8088405 + 1;
                    /* catch() { ... } // from try @ 00f340f0 with catch @ 00f34140 */
          sincosf((*(float *)(this + 0x498) +
                  ((float)((uVar3 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x49c)) *
                  0.017453292,&fStack_74,&local_78);
          uVar6 = uVar3 * 0x8088405 + 1;
          fVar28 = *(float *)(this + 0x334) +
                   ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x338);
          __x = local_78 * fVar28;
          fVar28 = fStack_74 * fVar28;
          *pfVar14 = __x;
          *pfVar16 = fVar28;
          fVar28 = atan2f(fVar28,__x);
                    /* catch() { ... } // from try @ 00f341d0 with catch @ 00f341a0 */
          lVar8 = lVar8 + -1;
          *pfVar12 = fVar28 * -57.29578;
          pfVar12 = pfVar12 + 1;
          pfVar14 = pfVar14 + 1;
          pfVar16 = pfVar16 + 1;
        } while (lVar8 != 0);
      }
    }
  }
  else {
                    /* try { // try from 00f33f24 to 01033f63 has its CatchHandler @ 00f33f24
                       catch() { ... } // from try @ 00f33f24 with catch @ 00f33f24
                       catch() { ... } // from try @ 00f34034 with catch @ 00f33f24 */
    if ((int)uVar3 < iVar1) {
      lVar11 = lVar8 - uVar22;
      pfVar12 = (float *)(*(long *)(this + 0x428) + uVar22 * 4);
      lVar9 = lVar11;
      do {
        uVar6 = uVar6 * 0x8088405 + 1;
                    /* try { // try from 00f33f64 to 01033f6b has its CatchHandler @ 00f340b4 */
        lVar9 = lVar9 + -1;
        *pfVar12 = *(float *)(this + 0x350) +
                   ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x354);
        pfVar12 = pfVar12 + 1;
                    /* try { // try from 00f33f6c to 01033f77 has its CatchHandler @ 00f340a4 */
      } while (lVar9 != 0);
      if ((int)uVar3 < iVar1) {
                    /* try { // try from 00f33f80 to 01033f87 has its CatchHandler @ 00f340a0 */
                    /* try { // try from 00f33f8c to 01034033 has its CatchHandler @ 00f340b8 */
        pfVar12 = (float *)(*(long *)(this + 0x418) + uVar22 * 4);
        lVar9 = lVar11;
        do {
          uVar6 = uVar6 * 0x8088405 + 1;
          lVar9 = lVar9 + -1;
          *pfVar12 = (*(float *)(this + 0x498) +
                     ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) * *(float *)(this + 0x49c)
                     ) * 0.017453292;
          pfVar12 = pfVar12 + 1;
        } while (lVar9 != 0);
        if ((int)uVar3 < iVar1) {
          pfVar12 = (float *)(*(long *)(this + 0x420) + uVar22 * 4);
          do {
            uVar6 = uVar6 * 0x8088405 + 1;
            lVar11 = lVar11 + -1;
            *pfVar12 = (*(float *)(this + 0x360) +
                       ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                       *(float *)(this + 0x364)) * 0.017453292;
            pfVar12 = pfVar12 + 1;
          } while (lVar11 != 0);
        }
      }
    }
    fVar28 = *(float *)(this + 0x358);
    if (fVar28 == -1.0) {
      if ((int)uVar3 < iVar1) {
                    /* try { // try from 00f34034 to 010340cb has its CatchHandler @ 00f33f24 */
        memset((void *)(*(long *)(this + 0x430) + uVar22 * 4),0,(ulong)(iVar1 + ~uVar3) * 4 + 4);
      }
    }
    else if ((int)uVar3 < iVar1) {
                    /* try { // try from 00f341c8 to 010341cf has its CatchHandler @ 00f3422c */
      lVar8 = ~uVar22 + lVar8;
      pfVar12 = (float *)(*(long *)(this + 0x428) + lVar23);
                    /* try { // try from 00f341d0 to 01034247 has its CatchHandler @ 00f341a0 */
      pfVar14 = (float *)(*(long *)(this + 1000) + lVar23);
      pfVar16 = (float *)(*(long *)(this + 0x430) + lVar23);
      while( true ) {
        uVar6 = uVar6 * 0x8088405 + 1;
        *pfVar16 = ((fVar28 + ((float)((uVar6 & 0x7fff) << 8 | 0x40000000) + -3.0) *
                              *(float *)(this + 0x35c)) - *pfVar12) / *pfVar14;
        if (lVar8 == 0) break;
        fVar28 = *(float *)(this + 0x358);
        pfVar12 = pfVar12 + 1;
        pfVar14 = pfVar14 + 1;
        pfVar16 = pfVar16 + 1;
        lVar8 = lVar8 + -1;
      }
    }
  }
  return;
}

