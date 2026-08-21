
/* cocos2d::ParticleSystem::update(float) */

void __thiscall cocos2d::ParticleSystem::update(ParticleSystem *this,float param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  float *pfVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  int iVar34;
  float fVar35;
  
  if ((this[0x474] != (ParticleSystem)0x0) && (*(float *)(this + 0x504) != 0.0)) {
    fVar35 = 1.0 / *(float *)(this + 0x504);
    fVar28 = __totalParticleCountFactor * (float)*(int *)(this + 0x508);
    fVar24 = *(float *)(this + 0x458);
    if (*(int *)(this + 0x478) < (int)fVar28) {
      fVar24 = fVar24 + param_1;
      *(float *)(this + 0x458) = fVar24;
      if (fVar24 < 0.0) {
        fVar24 = 0.0;
        *(undefined4 *)(this + 0x458) = 0;
      }
    }
    fVar28 = (float)((int)fVar28 - *(int *)(this + 0x478));
    fVar24 = fVar24 / fVar35;
    if (fVar24 <= fVar28) {
      fVar28 = fVar24;
    }
                    /* try { // try from 00f3477c to 010347c3 has its CatchHandler @ 00f3477c
                       catch() { ... } // from try @ 00f3477c with catch @ 00f3477c
                       catch() { ... } // from try @ 00f347c8 with catch @ 00f3477c */
    addParticles((int)this);
    fVar24 = *(float *)(this + 0x47c);
    fVar29 = *(float *)(this + 0x328) + param_1;
    *(float *)(this + 0x458) = *(float *)(this + 0x458) - fVar35 * (float)(int)fVar28;
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
    *(float *)(this + 0x328) = fVar29;
    if ((fVar24 != -1.0) && (fVar24 < fVar29)) {
                    /* try { // try from 00f347c4 to 010347c7 has its CatchHandler @ 00f347ec */
      this[0x474] = (ParticleSystem)0x0;
                    /* try { // try from 00f347c8 to 010347ff has its CatchHandler @ 00f3477c */
      *(float *)(this + 0x328) = fVar24;
      *(undefined4 *)(this + 0x458) = 0;
    }
  }
  uVar19 = *(uint *)(this + 0x478);
  if (0 < (int)uVar19) {
    lVar1 = *(long *)(this + 1000);
    uVar4 = (ulong)(int)uVar19;
    if (uVar19 < 8) {
                    /* catch() { ... } // from try @ 00f347c4 with catch @ 00f347ec */
      uVar6 = 0;
LAB_00f34828:
      do {
        lVar8 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        *(float *)(lVar1 + lVar8) = *(float *)(lVar1 + lVar8) - param_1;
      } while ((long)uVar6 < (long)uVar4);
    }
    else {
      uVar6 = uVar4 & 0xfffffffffffffff8;
      puVar17 = (undefined8 *)(lVar1 + 0x10);
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 - 8;
        puVar17[-1] = CONCAT44((float)((ulong)puVar17[-1] >> 0x20) - param_1,
                               (float)puVar17[-1] - param_1);
        puVar17[-2] = CONCAT44((float)((ulong)puVar17[-2] >> 0x20) - param_1,
                               (float)puVar17[-2] - param_1);
        puVar17[1] = CONCAT44((float)((ulong)puVar17[1] >> 0x20) - param_1,
                              (float)puVar17[1] - param_1);
        *puVar17 = CONCAT44((float)((ulong)*puVar17 >> 0x20) - param_1,(float)*puVar17 - param_1);
        puVar17 = puVar17 + 4;
      } while (uVar7 != 0);
      if (uVar6 != uVar4) goto LAB_00f34828;
    }
    if (0 < (int)uVar19) {
      lVar1 = 0;
      do {
        if (*(float *)(*(long *)(this + 1000) + lVar1 * 4) <= 0.0) {
          iVar30 = uVar19 - 1;
          if (0 < iVar30) {
            lVar8 = (long)iVar30;
            do {
              if (0.0 < *(float *)(*(long *)(this + 1000) + lVar8 * 4)) break;
              lVar8 = lVar8 + -1;
              uVar19 = uVar19 - 1;
              *(uint *)(this + 0x478) = uVar19;
            } while (0 < lVar8);
            iVar30 = uVar19 - 1;
          }
          ParticleData::copyParticle((ParticleData *)(this + 0x368),(int)lVar1,iVar30);
          if (*(ParticleBatchNode **)(this + 0x460) != (ParticleBatchNode *)0x0) {
            iVar30 = *(int *)(*(long *)(this + 0x3f0) + lVar1 * 4);
            ParticleBatchNode::disableParticle
                      (*(ParticleBatchNode **)(this + 0x460),*(int *)(this + 0x468) + iVar30);
            *(int *)(*(long *)(this + 0x3f0) + (long)*(int *)(this + 0x478) * 4 + -4) = iVar30;
          }
                    /* try { // try from 00f348e8 to 01034947 has its CatchHandler @ 00f348e8
                       catch() { ... } // from try @ 00f348e8 with catch @ 00f348e8
                       catch() { ... } // from try @ 00f34af8 with catch @ 00f348e8 */
          uVar19 = *(int *)(this + 0x478) - 1;
          *(uint *)(this + 0x478) = uVar19;
          if (uVar19 == 0) {
            if (this[0x309] != (ParticleSystem)0x0) {
              Node::unscheduleUpdate((Node *)this);
                    /* WARNING: Could not recover jumptable at 0x00f3493c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(**(long **)(this + 400) + 0x280))(*(long **)(this + 400),this,1);
              return;
            }
            uVar19 = 0;
          }
        }
        lVar1 = lVar1 + 1;
      } while (lVar1 < (int)uVar19);
    }
  }
  if (*(int *)(this + 0x4a0) == 0) {
                    /* try { // try from 00f34a38 to 01034a43 has its CatchHandler @ 00f34b0c */
    if ((int)uVar19 < 1) goto LAB_00f3504c;
    iVar30 = *(int *)(this + 0x524);
    lVar8 = *(long *)(this + 0x368);
    lVar3 = *(long *)(this + 0x408);
    lVar10 = *(long *)(this + 0x410);
    lVar11 = *(long *)(this + 0x3f8);
    lVar12 = *(long *)(this + 0x400);
    lVar14 = *(long *)(this + 0x370);
    lVar1 = 0;
    do {
                    /* catch() { ... } // from try @ 00f349e8 with catch @ 00f34b04 */
      fVar24 = *(float *)(lVar8 + lVar1 * 4);
                    /* catch() { ... } // from try @ 00f34948 with catch @ 00f34b08 */
                    /* catch() { ... } // from try @ 00f34958 with catch @ 00f34b0c
                       catch() { ... } // from try @ 00f34a38 with catch @ 00f34b0c */
      if ((fVar24 == 0.0) && (*(float *)(lVar14 + lVar1 * 4) == 0.0)) {
LAB_00f34a74:
        fVar28 = 0.0;
        fVar25 = 0.0;
      }
      else {
        fVar29 = *(float *)(lVar14 + lVar1 * 4);
        fVar35 = fVar24 * fVar24 + fVar29 * fVar29;
                    /* try { // try from 00f34b2c to 01034d47 has its CatchHandler @ 00f34b2c
                       catch() { ... } // from try @ 00f34b2c with catch @ 00f34b2c
                       catch() { ... } // from try @ 00f34dd8 with catch @ 00f34b2c */
        fVar28 = 0.0;
        if (fVar35 == 1.0) goto LAB_00f34a74;
        fVar35 = SQRT(fVar35);
        fVar25 = 0.0;
        if (2e-37 <= fVar35) {
          fVar35 = 1.0 / fVar35;
          fVar28 = fVar24 * fVar35;
          fVar25 = fVar29 * fVar35;
        }
      }
                    /* try { // try from 00f34a78 to 01034af7 has its CatchHandler @ 00f34b00 */
      lVar16 = lVar1 * 4;
      fVar24 = *(float *)(lVar3 + lVar16);
      fVar35 = *(float *)(lVar10 + lVar16);
      lVar1 = lVar1 + 1;
      fVar29 = *(float *)(this + 0x330);
      *(float *)(lVar11 + lVar16) =
           *(float *)(lVar11 + lVar16) +
           (*(float *)(this + 0x32c) + (fVar28 * fVar24 - fVar25 * fVar35)) * param_1;
      fVar24 = (fVar25 * fVar24 + fVar28 * fVar35 + fVar29) * param_1 + *(float *)(lVar12 + lVar16);
      *(float *)(lVar12 + lVar16) = fVar24;
      *(float *)(lVar8 + lVar16) =
           *(float *)(lVar8 + lVar16) + *(float *)(lVar11 + lVar16) * param_1 * (float)iVar30;
                    /* try { // try from 00f34af8 to 01034b1f has its CatchHandler @ 00f348e8 */
      *(float *)(lVar14 + lVar16) = fVar24 * param_1 * (float)iVar30 + *(float *)(lVar14 + lVar16);
                    /* catch() { ... } // from try @ 00f34a78 with catch @ 00f34b00 */
    } while (lVar1 < (int)uVar19);
  }
  else {
                    /* try { // try from 00f34948 to 01034957 has its CatchHandler @ 00f34b08 */
    if ((int)uVar19 < 1) goto LAB_00f3504c;
    uVar4 = *(ulong *)(this + 0x420);
    uVar6 = *(ulong *)(this + 0x418);
                    /* try { // try from 00f34958 to 010349e3 has its CatchHandler @ 00f34b0c */
    uVar7 = (ulong)(int)uVar19;
    if ((uVar19 < 8) || ((uVar6 < uVar4 + uVar7 * 4 && (uVar4 < uVar6 + uVar7 * 4)))) {
      uVar9 = 0;
LAB_00f34984:
      do {
        lVar1 = uVar9 * 4;
        uVar9 = uVar9 + 1;
        *(float *)(uVar6 + lVar1) = *(float *)(uVar4 + lVar1) * param_1 + *(float *)(uVar6 + lVar1);
      } while ((long)uVar9 < (long)uVar7);
    }
    else {
      uVar9 = uVar7 & 0xfffffffffffffff8;
      puVar17 = (undefined8 *)(uVar4 + 0x10);
      puVar18 = (undefined8 *)(uVar6 + 0x10);
      uVar13 = uVar9;
      do {
        puVar22 = puVar17 + -1;
        uVar26 = puVar17[-2];
        uVar33 = puVar17[1];
        uVar27 = *puVar17;
        puVar17 = puVar17 + 4;
        uVar13 = uVar13 - 8;
        puVar18[-1] = CONCAT44((float)((ulong)*puVar22 >> 0x20) * param_1 +
                               (float)((ulong)puVar18[-1] >> 0x20),
                               (float)*puVar22 * param_1 + (float)puVar18[-1]);
        puVar18[-2] = CONCAT44((float)((ulong)uVar26 >> 0x20) * param_1 +
                               (float)((ulong)puVar18[-2] >> 0x20),
                               (float)uVar26 * param_1 + (float)puVar18[-2]);
        puVar18[1] = CONCAT44((float)((ulong)uVar33 >> 0x20) * param_1 +
                              (float)((ulong)puVar18[1] >> 0x20),
                              (float)uVar33 * param_1 + (float)puVar18[1]);
        *puVar18 = CONCAT44((float)((ulong)uVar27 >> 0x20) * param_1 +
                            (float)((ulong)*puVar18 >> 0x20),
                            (float)uVar27 * param_1 + (float)*puVar18);
        puVar18 = puVar18 + 4;
      } while (uVar13 != 0);
      if (uVar9 != uVar7) goto LAB_00f34984;
    }
    if ((int)uVar19 < 1) goto LAB_00f3504c;
    uVar4 = *(ulong *)(this + 0x430);
    uVar6 = *(ulong *)(this + 0x428);
    uVar7 = (ulong)uVar19;
    lVar1 = uVar7 * 4;
    if ((uVar19 < 8) || ((uVar6 < uVar4 + lVar1 && (uVar4 < uVar6 + lVar1)))) {
      uVar9 = 0;
LAB_00f349e4:
                    /* try { // try from 00f349e8 to 01034a37 has its CatchHandler @ 00f34b04 */
      lVar8 = uVar7 - uVar9;
      pfVar2 = (float *)(uVar4 + uVar9 * 4);
      pfVar5 = (float *)(uVar6 + uVar9 * 4);
      do {
        lVar8 = lVar8 + -1;
        *pfVar5 = *pfVar2 * param_1 + *pfVar5;
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
      } while (lVar8 != 0);
    }
    else {
      uVar9 = uVar7 & 0xfffffff8;
      puVar17 = (undefined8 *)(uVar4 + 0x10);
      puVar18 = (undefined8 *)(uVar6 + 0x10);
      uVar13 = uVar9;
      do {
        puVar22 = puVar17 + -1;
        uVar26 = puVar17[-2];
        uVar33 = puVar17[1];
        uVar27 = *puVar17;
        puVar17 = puVar17 + 4;
        uVar13 = uVar13 - 8;
        puVar18[-1] = CONCAT44((float)((ulong)*puVar22 >> 0x20) * param_1 +
                               (float)((ulong)puVar18[-1] >> 0x20),
                               (float)*puVar22 * param_1 + (float)puVar18[-1]);
        puVar18[-2] = CONCAT44((float)((ulong)uVar26 >> 0x20) * param_1 +
                               (float)((ulong)puVar18[-2] >> 0x20),
                               (float)uVar26 * param_1 + (float)puVar18[-2]);
        puVar18[1] = CONCAT44((float)((ulong)uVar33 >> 0x20) * param_1 +
                              (float)((ulong)puVar18[1] >> 0x20),
                              (float)uVar33 * param_1 + (float)puVar18[1]);
        *puVar18 = CONCAT44((float)((ulong)uVar27 >> 0x20) * param_1 +
                            (float)((ulong)*puVar18 >> 0x20),
                            (float)uVar27 * param_1 + (float)*puVar18);
        puVar18 = puVar18 + 4;
      } while (uVar13 != 0);
      if (uVar9 != uVar7) goto LAB_00f349e4;
    }
    if ((int)uVar19 < 1) goto LAB_00f3504c;
    puVar17 = *(undefined8 **)(this + 0x418);
    puVar18 = *(undefined8 **)(this + 0x428);
    puVar22 = *(undefined8 **)(this + 0x368);
    if (uVar19 < 4) {
      uVar4 = 0;
LAB_00f34c80:
      lVar3 = uVar4 * 4;
      lVar8 = uVar7 - uVar4;
      pfVar2 = (float *)((long)puVar17 + lVar3);
      pfVar5 = (float *)((long)puVar18 + lVar3);
      pfVar20 = (float *)((long)puVar22 + lVar3);
      do {
        fVar24 = cosf(*pfVar2);
        lVar8 = lVar8 + -1;
        *pfVar20 = -(fVar24 * *pfVar5);
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
        pfVar20 = pfVar20 + 1;
      } while (lVar8 != 0);
    }
    else {
      uVar4 = 0;
      if ((puVar22 < (undefined8 *)((long)puVar17 + lVar1) &&
           puVar17 < (undefined8 *)((long)puVar22 + lVar1)) ||
         (puVar22 < (undefined8 *)((long)puVar18 + lVar1) &&
          puVar18 < (undefined8 *)((long)puVar22 + lVar1))) goto LAB_00f34c80;
      uVar4 = uVar7 & 0xfffffffc;
      puVar15 = puVar17;
      puVar21 = puVar18;
      uVar6 = uVar4;
      puVar23 = puVar22;
      do {
        uVar27 = puVar15[1];
        uVar26 = *puVar15;
        fVar24 = cosf((float)((ulong)uVar26 >> 0x20));
        fVar28 = cosf((float)uVar26);
        fVar35 = cosf((float)uVar27);
        fVar29 = cosf((float)((ulong)uVar27 >> 0x20));
        uVar26 = *puVar21;
        uVar6 = uVar6 - 4;
        puVar23[1] = CONCAT44(-(fVar29 * (float)((ulong)puVar21[1] >> 0x20)),
                              -(fVar35 * (float)puVar21[1]));
        *puVar23 = CONCAT44(-(fVar24 * (float)((ulong)uVar26 >> 0x20)),-(fVar28 * (float)uVar26));
        puVar15 = puVar15 + 2;
        puVar21 = puVar21 + 2;
        puVar23 = puVar23 + 2;
      } while (uVar6 != 0);
      if (uVar4 != uVar7) goto LAB_00f34c80;
    }
    if ((int)uVar19 < 1) goto LAB_00f3504c;
    puVar17 = *(undefined8 **)(this + 0x418);
    puVar18 = *(undefined8 **)(this + 0x428);
    puVar22 = *(undefined8 **)(this + 0x370);
    fVar24 = (float)*(int *)(this + 0x524);
    uVar4 = 0;
    if (3 < uVar19) {
      if (((undefined8 *)((long)puVar17 + lVar1) <= puVar22 ||
           (undefined8 *)((long)puVar22 + lVar1) <= puVar17) &&
         ((undefined8 *)((long)puVar18 + lVar1) <= puVar22 ||
          (undefined8 *)((long)puVar22 + lVar1) <= puVar18)) {
        uVar4 = uVar7 & 0xfffffffc;
        uVar6 = uVar4;
        puVar15 = puVar17;
        puVar21 = puVar22;
        puVar23 = puVar18;
        do {
          uVar27 = puVar15[1];
          uVar26 = *puVar15;
          fVar28 = sinf((float)((ulong)uVar26 >> 0x20));
                    /* try { // try from 00f34d48 to 01034d4f has its CatchHandler @ 00f34e60 */
                    /* try { // try from 00f34d50 to 01034d5b has its CatchHandler @ 00f34e50 */
          fVar35 = sinf((float)uVar26);
                    /* try { // try from 00f34d60 to 01034d67 has its CatchHandler @ 00f34e40 */
                    /* try { // try from 00f34d68 to 01034d73 has its CatchHandler @ 00f34e3c */
          fVar29 = sinf((float)uVar27);
          fVar25 = sinf((float)((ulong)uVar27 >> 0x20));
                    /* try { // try from 00f34d84 to 01034d8b has its CatchHandler @ 00f34e38 */
          uVar26 = *puVar23;
          uVar6 = uVar6 - 4;
          puVar21[1] = CONCAT44(-(fVar25 * (float)((ulong)puVar23[1] >> 0x20) * fVar24),
                                -(fVar29 * (float)puVar23[1] * fVar24));
          *puVar21 = CONCAT44(-(fVar28 * (float)((ulong)uVar26 >> 0x20) * fVar24),
                              -(fVar35 * (float)uVar26 * fVar24));
          puVar15 = puVar15 + 2;
          puVar21 = puVar21 + 2;
          puVar23 = puVar23 + 2;
        } while (uVar6 != 0);
                    /* try { // try from 00f34db4 to 01034dd7 has its CatchHandler @ 00f34e64 */
        if (uVar4 == uVar7) goto LAB_00f34dfc;
      }
    }
    lVar8 = uVar4 * 4;
    lVar1 = uVar7 - uVar4;
    pfVar2 = (float *)((long)puVar22 + lVar8);
    pfVar5 = (float *)((long)puVar18 + lVar8);
    pfVar20 = (float *)((long)puVar17 + lVar8);
    do {
                    /* try { // try from 00f34dd8 to 01034e77 has its CatchHandler @ 00f34b2c */
      fVar28 = sinf(*pfVar20);
      lVar1 = lVar1 + -1;
      *pfVar2 = -(fVar28 * *pfVar5 * fVar24);
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
      pfVar20 = pfVar20 + 1;
    } while (lVar1 != 0);
  }
LAB_00f34dfc:
  if ((int)uVar19 < 1) goto LAB_00f3504c;
  uVar4 = *(ulong *)(this + 0x3a8);
  uVar6 = *(ulong *)(this + 0x388);
  uVar7 = (ulong)(int)uVar19;
  if ((uVar19 < 8) || ((uVar6 < uVar4 + uVar7 * 4 && (uVar4 < uVar6 + uVar7 * 4)))) {
    uVar9 = 0;
LAB_00f34e38:
    do {
                    /* catch() { ... } // from try @ 00f34d84 with catch @ 00f34e38 */
      lVar1 = uVar9 * 4;
                    /* catch() { ... } // from try @ 00f34d68 with catch @ 00f34e3c */
                    /* catch() { ... } // from try @ 00f34d60 with catch @ 00f34e40 */
      uVar9 = uVar9 + 1;
                    /* catch() { ... } // from try @ 00f34d50 with catch @ 00f34e50 */
      *(float *)(uVar6 + lVar1) = *(float *)(uVar4 + lVar1) * param_1 + *(float *)(uVar6 + lVar1);
    } while ((long)uVar9 < (long)uVar7);
  }
  else {
    uVar9 = uVar7 & 0xfffffffffffffff8;
    puVar17 = (undefined8 *)(uVar4 + 0x10);
    puVar18 = (undefined8 *)(uVar6 + 0x10);
    uVar13 = uVar9;
    do {
      puVar22 = puVar17 + -1;
      uVar26 = puVar17[-2];
      uVar33 = puVar17[1];
      uVar27 = *puVar17;
      puVar17 = puVar17 + 4;
      uVar13 = uVar13 - 8;
      puVar18[-1] = CONCAT44((float)((ulong)*puVar22 >> 0x20) * param_1 +
                             (float)((ulong)puVar18[-1] >> 0x20),
                             (float)*puVar22 * param_1 + (float)puVar18[-1]);
      puVar18[-2] = CONCAT44((float)((ulong)uVar26 >> 0x20) * param_1 +
                             (float)((ulong)puVar18[-2] >> 0x20),
                             (float)uVar26 * param_1 + (float)puVar18[-2]);
      puVar18[1] = CONCAT44((float)((ulong)uVar33 >> 0x20) * param_1 +
                            (float)((ulong)puVar18[1] >> 0x20),
                            (float)uVar33 * param_1 + (float)puVar18[1]);
      *puVar18 = CONCAT44((float)((ulong)uVar27 >> 0x20) * param_1 +
                          (float)((ulong)*puVar18 >> 0x20),(float)uVar27 * param_1 + (float)*puVar18
                         );
      puVar18 = puVar18 + 4;
    } while (uVar13 != 0);
    if (uVar9 != uVar7) goto LAB_00f34e38;
  }
                    /* catch() { ... } // from try @ 00f34d48 with catch @ 00f34e60 */
  if ((int)uVar19 < 1) goto LAB_00f3504c;
                    /* catch() { ... } // from try @ 00f34db4 with catch @ 00f34e64 */
  uVar6 = *(ulong *)(this + 0x3b0);
  uVar7 = *(ulong *)(this + 0x390);
  uVar4 = (ulong)uVar19;
  lVar1 = uVar4 * 4;
                    /* try { // try from 00f34e78 to 01034ecf has its CatchHandler @ 00f34e78
                       catch() { ... } // from try @ 00f34e78 with catch @ 00f34e78
                       catch() { ... } // from try @ 00f34f24 with catch @ 00f34e78
                       catch() { ... } // from try @ 00f34f90 with catch @ 00f34e78 */
  if ((uVar19 < 8) || ((uVar7 < uVar6 + lVar1 && (uVar6 < uVar7 + lVar1)))) {
    uVar9 = 0;
LAB_00f34e98:
    lVar8 = uVar4 - uVar9;
    pfVar2 = (float *)(uVar6 + uVar9 * 4);
    pfVar5 = (float *)(uVar7 + uVar9 * 4);
    do {
      lVar8 = lVar8 + -1;
      *pfVar5 = *pfVar2 * param_1 + *pfVar5;
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
    } while (lVar8 != 0);
  }
  else {
    uVar9 = uVar4 & 0xfffffff8;
    puVar17 = (undefined8 *)(uVar6 + 0x10);
    puVar18 = (undefined8 *)(uVar7 + 0x10);
    uVar13 = uVar9;
    do {
      puVar22 = puVar17 + -1;
      uVar26 = puVar17[-2];
      uVar33 = puVar17[1];
      uVar27 = *puVar17;
      puVar17 = puVar17 + 4;
      uVar13 = uVar13 - 8;
      puVar18[-1] = CONCAT44((float)((ulong)*puVar22 >> 0x20) * param_1 +
                             (float)((ulong)puVar18[-1] >> 0x20),
                             (float)*puVar22 * param_1 + (float)puVar18[-1]);
      puVar18[-2] = CONCAT44((float)((ulong)uVar26 >> 0x20) * param_1 +
                             (float)((ulong)puVar18[-2] >> 0x20),
                             (float)uVar26 * param_1 + (float)puVar18[-2]);
      puVar18[1] = CONCAT44((float)((ulong)uVar33 >> 0x20) * param_1 +
                            (float)((ulong)puVar18[1] >> 0x20),
                            (float)uVar33 * param_1 + (float)puVar18[1]);
      *puVar18 = CONCAT44((float)((ulong)uVar27 >> 0x20) * param_1 +
                          (float)((ulong)*puVar18 >> 0x20),(float)uVar27 * param_1 + (float)*puVar18
                         );
      puVar18 = puVar18 + 4;
    } while (uVar13 != 0);
    if (uVar9 != uVar4) goto LAB_00f34e98;
  }
  if ((int)uVar19 < 1) goto LAB_00f3504c;
  uVar6 = *(ulong *)(this + 0x3b8);
                    /* try { // try from 00f34ed0 to 01034ed7 has its CatchHandler @ 00f34fd8 */
  uVar7 = *(ulong *)(this + 0x398);
                    /* try { // try from 00f34ee0 to 01034f03 has its CatchHandler @ 00f34fe0 */
  if ((uVar19 < 8) || ((uVar7 < uVar6 + lVar1 && (uVar6 < uVar7 + lVar1)))) {
    uVar9 = 0;
LAB_00f34ef8:
    lVar8 = uVar4 - uVar9;
    pfVar2 = (float *)(uVar6 + uVar9 * 4);
    pfVar5 = (float *)(uVar7 + uVar9 * 4);
    do {
      lVar8 = lVar8 + -1;
                    /* try { // try from 00f34f1c to 01034f23 has its CatchHandler @ 00f34fd4 */
      *pfVar5 = *pfVar2 * param_1 + *pfVar5;
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
    } while (lVar8 != 0);
  }
  else {
    uVar9 = uVar4 & 0xfffffff8;
    puVar17 = (undefined8 *)(uVar6 + 0x10);
    puVar18 = (undefined8 *)(uVar7 + 0x10);
    uVar13 = uVar9;
    do {
      puVar22 = puVar17 + -1;
      uVar26 = puVar17[-2];
      uVar33 = puVar17[1];
      uVar27 = *puVar17;
      puVar17 = puVar17 + 4;
      uVar13 = uVar13 - 8;
      puVar18[-1] = CONCAT44((float)((ulong)*puVar22 >> 0x20) * param_1 +
                             (float)((ulong)puVar18[-1] >> 0x20),
                             (float)*puVar22 * param_1 + (float)puVar18[-1]);
      puVar18[-2] = CONCAT44((float)((ulong)uVar26 >> 0x20) * param_1 +
                             (float)((ulong)puVar18[-2] >> 0x20),
                             (float)uVar26 * param_1 + (float)puVar18[-2]);
      puVar18[1] = CONCAT44((float)((ulong)uVar33 >> 0x20) * param_1 +
                            (float)((ulong)puVar18[1] >> 0x20),
                            (float)uVar33 * param_1 + (float)puVar18[1]);
      *puVar18 = CONCAT44((float)((ulong)uVar27 >> 0x20) * param_1 +
                          (float)((ulong)*puVar18 >> 0x20),(float)uVar27 * param_1 + (float)*puVar18
                         );
      puVar18 = puVar18 + 4;
    } while (uVar13 != 0);
    if (uVar9 != uVar4) goto LAB_00f34ef8;
  }
                    /* try { // try from 00f34f24 to 01034f5b has its CatchHandler @ 00f34e78 */
  if ((int)uVar19 < 1) goto LAB_00f3504c;
  uVar6 = *(ulong *)(this + 0x3c0);
  uVar7 = *(ulong *)(this + 0x3a0);
  if ((uVar19 < 8) || ((uVar7 < uVar6 + lVar1 && (uVar6 < uVar7 + lVar1)))) {
    uVar9 = 0;
LAB_00f34f58:
                    /* try { // try from 00f34f5c to 01034f63 has its CatchHandler @ 00f34fd0 */
    lVar8 = uVar4 - uVar9;
    pfVar2 = (float *)(uVar6 + uVar9 * 4);
    pfVar5 = (float *)(uVar7 + uVar9 * 4);
    do {
                    /* try { // try from 00f34f6c to 01034f8f has its CatchHandler @ 00f34fdc */
      lVar8 = lVar8 + -1;
      *pfVar5 = *pfVar2 * param_1 + *pfVar5;
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
    } while (lVar8 != 0);
  }
  else {
    uVar9 = uVar4 & 0xfffffff8;
    puVar17 = (undefined8 *)(uVar6 + 0x10);
    puVar18 = (undefined8 *)(uVar7 + 0x10);
    uVar13 = uVar9;
    do {
      puVar22 = puVar17 + -1;
      uVar26 = puVar17[-2];
      uVar33 = puVar17[1];
      uVar27 = *puVar17;
      puVar17 = puVar17 + 4;
      uVar13 = uVar13 - 8;
      puVar18[-1] = CONCAT44((float)((ulong)*puVar22 >> 0x20) * param_1 +
                             (float)((ulong)puVar18[-1] >> 0x20),
                             (float)*puVar22 * param_1 + (float)puVar18[-1]);
      puVar18[-2] = CONCAT44((float)((ulong)uVar26 >> 0x20) * param_1 +
                             (float)((ulong)puVar18[-2] >> 0x20),
                             (float)uVar26 * param_1 + (float)puVar18[-2]);
      puVar18[1] = CONCAT44((float)((ulong)uVar33 >> 0x20) * param_1 +
                            (float)((ulong)puVar18[1] >> 0x20),
                            (float)uVar33 * param_1 + (float)puVar18[1]);
      *puVar18 = CONCAT44((float)((ulong)uVar27 >> 0x20) * param_1 +
                          (float)((ulong)*puVar18 >> 0x20),(float)uVar27 * param_1 + (float)*puVar18
                         );
      puVar18 = puVar18 + 4;
    } while (uVar13 != 0);
    if (uVar9 != uVar4) goto LAB_00f34f58;
  }
  if ((int)uVar19 < 1) goto LAB_00f3504c;
  puVar17 = *(undefined8 **)(this + 0x3d0);
                    /* try { // try from 00f34f90 to 01034ff3 has its CatchHandler @ 00f34e78 */
  puVar18 = *(undefined8 **)(this + 0x3c8);
  if ((uVar19 < 4) ||
     ((puVar18 < (undefined8 *)((long)puVar17 + lVar1) &&
      (puVar17 < (undefined8 *)((long)puVar18 + lVar1))))) {
    uVar6 = 0;
LAB_00f34fb8:
    lVar8 = uVar4 - uVar6;
    pfVar2 = (float *)((long)puVar17 + uVar6 * 4);
    pfVar5 = (float *)((long)puVar18 + uVar6 * 4);
    do {
                    /* catch() { ... } // from try @ 00f34f5c with catch @ 00f34fd0 */
                    /* catch() { ... } // from try @ 00f34f1c with catch @ 00f34fd4 */
      lVar8 = lVar8 + -1;
                    /* catch() { ... } // from try @ 00f34ed0 with catch @ 00f34fd8 */
                    /* catch() { ... } // from try @ 00f34f6c with catch @ 00f34fdc */
      fVar24 = *pfVar2 * param_1 + *pfVar5;
                    /* catch() { ... } // from try @ 00f34ee0 with catch @ 00f34fe0 */
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      *pfVar5 = fVar24;
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
    } while (lVar8 != 0);
  }
  else {
    uVar6 = uVar4 & 0xfffffffc;
    uVar7 = uVar6;
    puVar22 = puVar17;
    puVar15 = puVar18;
    do {
      uVar7 = uVar7 - 4;
      fVar24 = (float)*puVar22 * param_1 + (float)*puVar15;
      fVar28 = (float)((ulong)*puVar22 >> 0x20) * param_1 + (float)((ulong)*puVar15 >> 0x20);
      fVar35 = (float)puVar22[1] * param_1 + (float)puVar15[1];
      fVar29 = (float)((ulong)puVar22[1] >> 0x20) * param_1 + (float)((ulong)puVar15[1] >> 0x20);
      iVar30 = -(uint)(fVar24 < 0.0);
      iVar31 = -(uint)(fVar28 < 0.0);
      iVar32 = -(uint)(fVar35 < 0.0);
      iVar34 = -(uint)(fVar29 < 0.0);
      puVar15[1] = CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                            CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                     CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar34 >> 8)
                                              ,CONCAT14(SUB41(fVar29,0) & ~(byte)iVar34,
                                                        CONCAT13((byte)((uint)fVar35 >> 0x18) &
                                                                 ~(byte)((uint)iVar32 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar35 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar32 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar35 >> 8) & ~(byte)((uint)iVar32 >> 8),
                                                  SUB41(fVar35,0) & ~(byte)iVar32)))))));
      *puVar15 = CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                          CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                   CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                            CONCAT14(SUB41(fVar28,0) & ~(byte)iVar31,
                                                     CONCAT13((byte)((uint)fVar24 >> 0x18) &
                                                              ~(byte)((uint)iVar30 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar24 >> 0x10)
                                                                       & ~(byte)((uint)iVar30 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar24
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar30
                                                                                       >> 8),
                                                                                SUB41(fVar24,0) &
                                                                                ~(byte)iVar30)))))))
      ;
      puVar22 = puVar22 + 2;
      puVar15 = puVar15 + 2;
    } while (uVar7 != 0);
    if (uVar6 != uVar4) goto LAB_00f34fb8;
  }
  if (0 < (int)uVar19) {
                    /* catch() { ... } // from try @ 00f35058 with catch @ 00f34ff4 */
    uVar6 = *(ulong *)(this + 0x3e0);
    uVar7 = *(ulong *)(this + 0x3d8);
                    /* try { // try from 00f35018 to 0103501f has its CatchHandler @ 00f35098 */
    if ((uVar19 < 8) || ((uVar7 < uVar6 + lVar1 && (uVar6 < uVar7 + lVar1)))) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar4 & 0xfffffff8;
      puVar17 = (undefined8 *)(uVar6 + 0x10);
      puVar18 = (undefined8 *)(uVar7 + 0x10);
      uVar13 = uVar9;
      do {
        puVar22 = puVar17 + -1;
        uVar26 = puVar17[-2];
        uVar33 = puVar17[1];
        uVar27 = *puVar17;
        puVar17 = puVar17 + 4;
        uVar13 = uVar13 - 8;
        puVar18[-1] = CONCAT44((float)((ulong)*puVar22 >> 0x20) * param_1 +
                               (float)((ulong)puVar18[-1] >> 0x20),
                               (float)*puVar22 * param_1 + (float)puVar18[-1]);
        puVar18[-2] = CONCAT44((float)((ulong)uVar26 >> 0x20) * param_1 +
                               (float)((ulong)puVar18[-2] >> 0x20),
                               (float)uVar26 * param_1 + (float)puVar18[-2]);
        puVar18[1] = CONCAT44((float)((ulong)uVar33 >> 0x20) * param_1 +
                              (float)((ulong)puVar18[1] >> 0x20),
                              (float)uVar33 * param_1 + (float)puVar18[1]);
        *puVar18 = CONCAT44((float)((ulong)uVar27 >> 0x20) * param_1 +
                            (float)((ulong)*puVar18 >> 0x20),
                            (float)uVar27 * param_1 + (float)*puVar18);
        puVar18 = puVar18 + 4;
      } while (uVar13 != 0);
      if (uVar9 == uVar4) goto LAB_00f3504c;
    }
    lVar1 = uVar4 - uVar9;
    pfVar2 = (float *)(uVar6 + uVar9 * 4);
    pfVar5 = (float *)(uVar7 + uVar9 * 4);
    do {
      lVar1 = lVar1 + -1;
      *pfVar5 = *pfVar2 * param_1 + *pfVar5;
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
    } while (lVar1 != 0);
  }
LAB_00f3504c:
                    /* try { // try from 00f35054 to 01035057 has its CatchHandler @ 00f35088 */
                    /* try { // try from 00f35058 to 010350b3 has its CatchHandler @ 00f34ff4 */
  (**(code **)(*(long *)this + 0x530))(this);
  this[0x46c] = (ParticleSystem)0x0;
  if ((this[0x1f9] != (ParticleSystem)0x0) && (*(long *)(this + 0x460) == 0)) {
                    /* catch() { ... } // from try @ 00f35018 with catch @ 00f35098 */
                    /* WARNING: Could not recover jumptable at 0x00f350c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x538))(this);
    return;
  }
                    /* catch() { ... } // from try @ 00f35054 with catch @ 00f35088 */
  return;
}

