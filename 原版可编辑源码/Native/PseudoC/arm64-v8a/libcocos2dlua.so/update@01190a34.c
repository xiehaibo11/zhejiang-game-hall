
/* dtCrowd::update(float, dtCrowdAgentDebugInfo*) */

void __thiscall dtCrowd::update(dtCrowd *this,float param_1,dtCrowdAgentDebugInfo *param_2)

{
  float *pfVar1;
  uint uVar2;
  dtCrowdAgent dVar3;
  ushort uVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  dtObstacleAvoidanceDebugData *pdVar11;
  ulong uVar12;
  long lVar13;
  dtCrowdAgent *pdVar14;
  dtCrowdAgent *pdVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  dtCrowdAgent **ppdVar19;
  ulong uVar20;
  char *pcVar21;
  int iVar22;
  dtCrowdAgent *pdVar23;
  float *pfVar24;
  float *pfVar25;
  dtCrowdAgent **ppdVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  uint uVar31;
  dtLocalBoundary *this_00;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  uint local_f0;
  undefined4 local_ec;
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  *(undefined4 *)(this + 0x13c4) = 0;
  if (param_2 == (dtCrowdAgentDebugInfo *)0x0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = (ulong)*(uint *)param_2;
  }
  iVar9 = *(int *)this;
  lVar13 = (long)iVar9;
  ppdVar26 = *(dtCrowdAgent ***)(this + 0x10);
  if (iVar9 < 1) {
    uVar29 = 0;
  }
  else {
    lVar17 = 0;
    uVar29 = 0;
    uVar8 = 0;
    if (0 < iVar9) goto LAB_01190acc;
    while( true ) {
      lVar13 = lVar13 + -1;
      lVar17 = lVar17 + 0x270;
      if (lVar13 == 0) break;
      uVar8 = uVar29;
      if ((int)uVar29 < iVar9) {
LAB_01190acc:
        uVar29 = uVar8;
        if (*(dtCrowdAgent *)(*(long *)(this + 8) + lVar17) != (dtCrowdAgent)0x0) {
          uVar29 = uVar8 + 1;
          ppdVar26[(int)uVar8] = (dtCrowdAgent *)(*(long *)(this + 8) + lVar17);
        }
      }
    }
  }
  fVar32 = (float)checkPathValidity(this,ppdVar26,uVar29,param_1);
  updateMoveRequest(fVar32);
  updateTopologyOptimization(this,ppdVar26,uVar29,param_1);
  dtProximityGrid::clear(*(dtProximityGrid **)(this + 0x360));
  if (0 < (int)uVar29) {
    uVar28 = 0;
    uVar27 = (ulong)uVar29;
    do {
      pdVar14 = ppdVar26[uVar28];
      fVar32 = *(float *)(pdVar14 + 0x1e0);
      dtProximityGrid::addItem
                (*(dtProximityGrid **)(this + 0x360),(ushort)uVar28,
                 *(float *)(pdVar14 + 0x1a0) - fVar32,*(float *)(pdVar14 + 0x1a8) - fVar32,
                 fVar32 + *(float *)(pdVar14 + 0x1a0),fVar32 + *(float *)(pdVar14 + 0x1a8));
      uVar28 = uVar28 + 1;
    } while (uVar27 != uVar28);
    if (0 < (int)uVar29) {
      uVar28 = 0;
      do {
        pdVar14 = ppdVar26[uVar28];
        if (pdVar14[1] == (dtCrowdAgent)0x1) {
          this_00 = (dtLocalBoundary *)(pdVar14 + 0x30);
          if ((*(float *)(pdVar14 + 0x1f0) * 0.25 * *(float *)(pdVar14 + 0x1f0) * 0.25 <
               (*(float *)this_00 - *(float *)(pdVar14 + 0x1a0)) *
               (*(float *)this_00 - *(float *)(pdVar14 + 0x1a0)) +
               (*(float *)(pdVar14 + 0x38) - *(float *)(pdVar14 + 0x1a8)) *
               (*(float *)(pdVar14 + 0x38) - *(float *)(pdVar14 + 0x1a8))) ||
             (uVar10 = dtLocalBoundary::isValid
                                 (this_00,*(dtNavMeshQuery **)(this + 0x13c8),
                                  (dtQueryFilter *)
                                  (this + (ulong)(byte)pdVar14[0x1fe] * 0x104 + 0x380)),
             (uVar10 & 1) == 0)) {
            if (*(int *)(pdVar14 + 0x28) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = **(uint **)(pdVar14 + 0x20);
            }
            dtLocalBoundary::update
                      (this_00,uVar8,(float *)(pdVar14 + 0x1a0),*(float *)(pdVar14 + 0x1f0),
                       *(dtNavMeshQuery **)(this + 0x13c8),
                       (dtQueryFilter *)(this + (ulong)(byte)pdVar14[0x1fe] * 0x104 + 0x380));
          }
          fVar36 = *(float *)(pdVar14 + 0x1f0);
          fVar32 = *(float *)(pdVar14 + 0x1e4);
          uVar8 = dtProximityGrid::queryItems
                            (*(dtProximityGrid **)(this + 0x360),
                             *(float *)(pdVar14 + 0x1a0) - fVar36,
                             *(float *)(pdVar14 + 0x1a8) - fVar36,
                             fVar36 + *(float *)(pdVar14 + 0x1a0),
                             fVar36 + *(float *)(pdVar14 + 0x1a8),(ushort *)&local_f0,0x20);
          if ((int)uVar8 < 1) {
            *(undefined4 *)(pdVar14 + 0x198) = 0;
          }
          else {
            uVar10 = 0;
            uVar31 = 0;
            do {
              uVar4 = *(ushort *)((long)&local_f0 + uVar10 * 2);
              pdVar15 = ppdVar26[uVar4];
              if (((pdVar15 != pdVar14) &&
                  (ABS(*(float *)(pdVar14 + 0x1a4) - *(float *)(pdVar15 + 0x1a4)) <
                   (fVar32 + *(float *)(pdVar15 + 0x1e4)) * 0.5)) &&
                 (fVar37 = (*(float *)(pdVar14 + 0x1a0) - *(float *)(pdVar15 + 0x1a0)) *
                           (*(float *)(pdVar14 + 0x1a0) - *(float *)(pdVar15 + 0x1a0)) + 0.0 +
                           (*(float *)(pdVar14 + 0x1a8) - *(float *)(pdVar15 + 0x1a8)) *
                           (*(float *)(pdVar14 + 0x1a8) - *(float *)(pdVar15 + 0x1a8)),
                 fVar37 <= fVar36 * fVar36)) {
                pdVar15 = pdVar14 + 0x168;
                if (uVar31 != 0) {
                  if (*(float *)(pdVar14 + (long)(int)uVar31 * 8 + 0x164) <= fVar37) {
                    if (5 < (int)uVar31) goto LAB_01190d28;
                    pdVar15 = pdVar14 + (long)(int)uVar31 * 8 + 0x168;
                  }
                  else {
                    if ((int)uVar31 < 1) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = 0;
                      pdVar15 = pdVar14 + 0x16c;
                      do {
                        if (fVar37 <= *(float *)pdVar15) break;
                        uVar16 = uVar16 + 1;
                        pdVar15 = pdVar15 + 8;
                      } while (uVar31 != uVar16);
                    }
                    iVar9 = (int)uVar16;
                    uVar2 = uVar31 - iVar9;
                    if ((int)(5U - iVar9) <= (int)(uVar31 - iVar9)) {
                      uVar2 = 5U - iVar9;
                    }
                    if (0 < (int)uVar2) {
                      memmove(pdVar14 + (ulong)(iVar9 + 1) * 8 + 0x168,
                              pdVar14 + (uVar16 & 0xffffffff) * 8 + 0x168,
                              -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
                    }
                    pdVar15 = pdVar14 + (uVar16 & 0xffffffff) * 8 + 0x168;
                  }
                }
                *(undefined8 *)pdVar15 = 0;
                *(uint *)pdVar15 = (uint)uVar4;
                *(float *)(pdVar15 + 4) = fVar37;
                if (4 < (int)uVar31) {
                  uVar31 = 5;
                }
                uVar31 = uVar31 + 1;
              }
LAB_01190d28:
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar8);
            *(uint *)(pdVar14 + 0x198) = uVar31;
            if (0 < (int)uVar31) {
              uVar10 = (ulong)uVar31;
              lVar13 = *(long *)(this + 8);
              if (uVar31 < 3) {
                uVar20 = 0;
              }
              else {
                uVar20 = uVar10 & 0xfffffffe;
                pdVar15 = pdVar14 + 0x170;
                uVar16 = uVar20;
                do {
                  uVar16 = uVar16 - 2;
                  pdVar23 = ppdVar26[*(int *)pdVar15];
                  *(int *)(pdVar15 + -8) =
                       (int)((ulong)((long)ppdVar26[*(int *)(pdVar15 + -8)] - lVar13) >> 4) *
                       -0x69069069;
                  *(int *)pdVar15 = (int)((ulong)((long)pdVar23 - lVar13) >> 4) * -0x69069069;
                  pdVar15 = pdVar15 + 0x10;
                } while (uVar16 != 0);
                if (uVar20 == uVar10) goto LAB_01190bb8;
              }
              lVar17 = uVar10 - uVar20;
              pdVar14 = pdVar14 + uVar20 * 8 + 0x168;
              do {
                lVar17 = lVar17 + -1;
                *(int *)pdVar14 =
                     (int)((ulong)((long)ppdVar26[*(int *)pdVar14] - lVar13) >> 4) * -0x69069069;
                pdVar14 = pdVar14 + 8;
              } while (lVar17 != 0);
            }
          }
        }
LAB_01190bb8:
        uVar28 = uVar28 + 1;
      } while (uVar28 != uVar27);
      if (0 < (int)uVar29) {
        uVar28 = 0;
        do {
          pdVar14 = ppdVar26[uVar28];
          if (((pdVar14[1] == (dtCrowdAgent)0x1) && (pdVar14[0x250] != (dtCrowdAgent)0x0)) &&
             (pdVar14[0x250] != (dtCrowdAgent)0x6)) {
            iVar9 = dtPathCorridor::findCorners
                              ((float *)(pdVar14 + 8),(uchar *)(pdVar14 + 0x208),
                               (uint *)(pdVar14 + 0x238),(int)pdVar14 + 0x23c,(dtNavMeshQuery *)0x4,
                               *(dtQueryFilter **)(this + 0x13c8));
            *(int *)(pdVar14 + 0x24c) = iVar9;
            if ((iVar9 < 1) || (((byte)pdVar14[0x1fc] >> 3 & 1) == 0)) {
              if (uVar12 == uVar28) {
                *(undefined8 *)(param_2 + 4) = 0;
                *(undefined8 *)(param_2 + 0xc) = 0;
                *(undefined8 *)(param_2 + 0x14) = 0;
              }
            }
            else {
              if (1 < iVar9) {
                iVar9 = 2;
              }
              dtPathCorridor::optimizePathVisibility
                        ((dtPathCorridor *)(pdVar14 + 8),
                         (float *)(pdVar14 + (long)(iVar9 * 3) * 4 + 0x1fc),
                         *(float *)(pdVar14 + 500),*(dtNavMeshQuery **)(this + 0x13c8),
                         (dtQueryFilter *)(this + (ulong)(byte)pdVar14[0x1fe] * 0x104 + 0x380));
              if (uVar12 == uVar28) {
                *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pdVar14 + 8);
                *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pdVar14 + 0xc);
                *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pdVar14 + 0x10);
                *(float *)(param_2 + 0x10) = *(float *)(pdVar14 + (long)(iVar9 * 3) * 4 + 0x1fc);
                *(undefined4 *)(param_2 + 0x14) =
                     *(undefined4 *)(pdVar14 + (long)(iVar9 * 3) * 4 + 0x200);
                *(undefined4 *)(param_2 + 0x18) =
                     *(undefined4 *)(pdVar14 + (long)(iVar9 * 3) * 4 + 0x204);
              }
            }
          }
          uVar28 = uVar28 + 1;
        } while (uVar27 != uVar28);
        uVar28 = uVar27;
        ppdVar19 = ppdVar26;
        if (0 < (int)uVar29) {
          do {
            pdVar14 = *ppdVar19;
            if (((((pdVar14[1] == (dtCrowdAgent)0x1) && (pdVar14[0x250] != (dtCrowdAgent)0x0)) &&
                 (pdVar14[0x250] != (dtCrowdAgent)0x6)) &&
                ((iVar9 = *(int *)(pdVar14 + 0x24c), iVar9 != 0 &&
                 (lVar13 = (long)iVar9 + -1, ((byte)pdVar14[(long)iVar9 + 0x237] >> 2 & 1) != 0))))
               && (iVar9 = (int)lVar13,
                  (*(float *)(pdVar14 + (long)iVar9 * 0xc + 0x208) - *(float *)(pdVar14 + 0x1a0)) *
                  (*(float *)(pdVar14 + (long)iVar9 * 0xc + 0x208) - *(float *)(pdVar14 + 0x1a0)) +
                  (*(float *)(pdVar14 + (long)iVar9 * 0xc + 0x210) - *(float *)(pdVar14 + 0x1a8)) *
                  (*(float *)(pdVar14 + (long)iVar9 * 0xc + 0x210) - *(float *)(pdVar14 + 0x1a8)) <
                  *(float *)(pdVar14 + 0x1e0) * 2.25 * *(float *)(pdVar14 + 0x1e0) * 2.25)) {
              lVar30 = *(long *)(this + 0x18);
              iVar9 = (int)((ulong)((long)pdVar14 - *(long *)(this + 8)) >> 4) * -0x69069069;
              lVar17 = lVar30 + (long)iVar9 * 0x34;
              pfVar1 = (float *)(lVar17 + 0x10);
              pfVar24 = (float *)(lVar17 + 0x1c);
              uVar10 = dtPathCorridor::moveOverOffmeshConnection
                                 ((dtPathCorridor *)(pdVar14 + 8),
                                  *(uint *)(pdVar14 + lVar13 * 4 + 0x23c),&local_f0,pfVar1,pfVar24,
                                  *(dtNavMeshQuery **)(this + 0x13c8));
              if ((uVar10 & 1) != 0) {
                puVar18 = (undefined1 *)(lVar30 + (long)iVar9 * 0x34);
                *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(pdVar14 + 0x1a0);
                *(undefined4 *)(puVar18 + 8) = *(undefined4 *)(pdVar14 + 0x1a4);
                *(undefined4 *)(puVar18 + 0xc) = *(undefined4 *)(pdVar14 + 0x1a8);
                *puVar18 = 1;
                *(undefined4 *)(puVar18 + 0x28) = local_ec;
                *(undefined4 *)(puVar18 + 0x2c) = 0;
                fVar32 = *pfVar24 - *pfVar1;
                *(float *)(puVar18 + 0x30) =
                     (SQRT(fVar32 * fVar32 +
                           (*(float *)(puVar18 + 0x24) - *(float *)(puVar18 + 0x18)) *
                           (*(float *)(puVar18 + 0x24) - *(float *)(puVar18 + 0x18))) /
                     *(float *)(pdVar14 + 0x1ec)) * 0.5;
                pdVar14[1] = (dtCrowdAgent)0x2;
                *(undefined4 *)(pdVar14 + 0x24c) = 0;
                *(undefined4 *)(pdVar14 + 0x198) = 0;
              }
            }
            uVar28 = uVar28 - 1;
            ppdVar19 = ppdVar19 + 1;
          } while (uVar28 != 0);
          if (0 < (int)uVar29) {
            uVar28 = 0;
            do {
              pdVar14 = ppdVar26[uVar28];
              if ((pdVar14[1] == (dtCrowdAgent)0x1) && (pdVar14[0x250] != (dtCrowdAgent)0x0)) {
                if (pdVar14[0x250] == (dtCrowdAgent)0x6) {
                  fVar32 = *(float *)(pdVar14 + 600);
                  fVar37 = *(float *)(pdVar14 + 0x25c);
                  fVar36 = *(float *)(pdVar14 + 0x260);
                  dVar3 = pdVar14[0x1fc];
                  fVar33 = SQRT(fVar36 * fVar36 + fVar37 * fVar37 + fVar32 * fVar32);
                  *(float *)(pdVar14 + 0x19c) = fVar33;
                }
                else {
                  dVar3 = pdVar14[0x1fc];
                  iVar9 = *(int *)(pdVar14 + 0x24c);
                  if (((byte)dVar3 & 1) == 0) {
                    if (iVar9 == 0) goto LAB_01191358;
                    fVar32 = *(float *)(pdVar14 + 0x208) - *(float *)(pdVar14 + 0x1a0);
                    fVar36 = *(float *)(pdVar14 + 0x210) - *(float *)(pdVar14 + 0x1a8);
                    fVar37 = fVar32 * fVar32 + 0.0 + fVar36 * fVar36;
LAB_01191324:
                    fVar37 = 1.0 / SQRT(fVar37);
                    fVar32 = fVar32 * fVar37;
                    fVar36 = fVar36 * fVar37;
                    fVar37 = fVar37 * 0.0;
                    fVar34 = *(float *)(pdVar14 + 0x1e0) + *(float *)(pdVar14 + 0x1e0);
                    fVar35 = fVar34;
                    if ((((byte)pdVar14[(long)iVar9 + 0x237] >> 1 & 1) != 0) &&
                       (fVar35 = SQRT((*(float *)(pdVar14 + (long)(iVar9 + -1) * 0xc + 0x208) -
                                      *(float *)(pdVar14 + 0x1a0)) *
                                      (*(float *)(pdVar14 + (long)(iVar9 + -1) * 0xc + 0x208) -
                                      *(float *)(pdVar14 + 0x1a0)) +
                                      (*(float *)(pdVar14 + (long)(iVar9 + -1) * 0xc + 0x210) -
                                      *(float *)(pdVar14 + 0x1a8)) *
                                      (*(float *)(pdVar14 + (long)(iVar9 + -1) * 0xc + 0x210) -
                                      *(float *)(pdVar14 + 0x1a8))), fVar34 <= fVar35)) {
                      fVar35 = fVar34;
                    }
                  }
                  else {
                    if (iVar9 != 0) {
                      iVar22 = iVar9;
                      if (1 < iVar9) {
                        iVar22 = 2;
                      }
                      fVar35 = *(float *)(pdVar14 + (long)(iVar22 * 3 + -3) * 4 + 0x208) -
                               *(float *)(pdVar14 + 0x1a0);
                      fVar32 = *(float *)(pdVar14 + 0x208) - *(float *)(pdVar14 + 0x1a0);
                      fVar36 = *(float *)(pdVar14 + 0x210) - *(float *)(pdVar14 + 0x1a8);
                      fVar37 = *(float *)(pdVar14 + (long)(iVar22 * 3 + -3) * 4 + 0x208 + 8) -
                               *(float *)(pdVar14 + 0x1a8);
                      fVar33 = SQRT(fVar35 * fVar35 + 0.0 + fVar37 * fVar37);
                      fVar34 = SQRT(fVar32 * fVar32 + 0.0 + fVar36 * fVar36);
                      if (0.001 < fVar33) {
                        fVar33 = 1.0 / fVar33;
                        fVar35 = fVar35 * fVar33;
                        fVar37 = fVar37 * fVar33;
                      }
                      fVar32 = fVar32 - fVar34 * fVar35 * 0.5;
                      fVar36 = fVar36 - fVar34 * fVar37 * 0.5;
                      fVar37 = fVar36 * fVar36 + fVar32 * fVar32 + 0.0;
                      goto LAB_01191324;
                    }
LAB_01191358:
                    fVar32 = 0.0;
                    fVar37 = 0.0;
                    fVar36 = 0.0;
                    fVar34 = *(float *)(pdVar14 + 0x1e0) + *(float *)(pdVar14 + 0x1e0);
                    fVar35 = fVar34;
                  }
                  fVar33 = *(float *)(pdVar14 + 0x1ec);
                  fVar35 = fVar33 * (fVar35 / fVar34);
                  fVar32 = fVar32 * fVar35;
                  fVar37 = fVar37 * fVar35;
                  fVar36 = fVar36 * fVar35;
                  *(float *)(pdVar14 + 0x19c) = fVar33;
                }
                if ((((byte)dVar3 >> 2 & 1) != 0) && (0 < *(int *)(pdVar14 + 0x198))) {
                  fVar39 = *(float *)(pdVar14 + 0x1f0);
                  lVar13 = 0;
                  pdVar15 = pdVar14 + 0x168;
                  fVar35 = 0.0;
                  fVar34 = 0.0;
                  fVar38 = 0.0;
                  fVar40 = 0.0;
                  do {
                    lVar17 = *(long *)(this + 8) + (long)*(int *)pdVar15 * 0x270;
                    fVar42 = *(float *)(pdVar14 + 0x1a0) - *(float *)(lVar17 + 0x1a0);
                    fVar41 = *(float *)(pdVar14 + 0x1a8) - *(float *)(lVar17 + 0x1a8);
                    fVar43 = fVar42 * fVar42 + 0.0 + fVar41 * fVar41;
                    if ((1e-05 <= fVar43) && (fVar43 <= fVar39 * fVar39)) {
                      fVar44 = (1.0 / fVar39) * SQRT(fVar43);
                      fVar43 = (*(float *)(pdVar14 + 0x1f8) * (1.0 - fVar44 * fVar44)) /
                               SQRT(fVar43);
                      fVar40 = fVar40 + fVar42 * fVar43;
                      fVar38 = fVar38 + fVar43 * 0.0;
                      fVar34 = fVar34 + fVar41 * fVar43;
                      fVar35 = fVar35 + 1.0;
                    }
                    lVar13 = lVar13 + 1;
                    pdVar15 = pdVar15 + 8;
                  } while (lVar13 < *(int *)(pdVar14 + 0x198));
                  if (0.0001 < fVar35) {
                    fVar35 = 1.0 / fVar35;
                    fVar32 = fVar32 + fVar40 * fVar35;
                    fVar37 = fVar38 * fVar35 + fVar37;
                    fVar36 = fVar34 * fVar35 + fVar36;
                    fVar35 = fVar36 * fVar36 + fVar32 * fVar32 + fVar37 * fVar37;
                    if (fVar33 * fVar33 < fVar35) {
                      fVar35 = (fVar33 * fVar33) / fVar35;
                      fVar32 = fVar32 * fVar35;
                      fVar37 = fVar37 * fVar35;
                      fVar36 = fVar36 * fVar35;
                    }
                  }
                }
                *(float *)(pdVar14 + 0x1b8) = fVar32;
                *(float *)(pdVar14 + 0x1bc) = fVar37;
                *(float *)(pdVar14 + 0x1c0) = fVar36;
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 != uVar27);
            if (0 < (int)uVar29) {
              uVar28 = 0;
              do {
                pdVar14 = ppdVar26[uVar28];
                if (pdVar14[1] == (dtCrowdAgent)0x1) {
                  if (((byte)pdVar14[0x1fc] >> 1 & 1) == 0) {
                    *(undefined8 *)(pdVar14 + 0x1c4) = *(undefined8 *)(pdVar14 + 0x1b8);
                    *(undefined4 *)(pdVar14 + 0x1cc) = *(undefined4 *)(pdVar14 + 0x1c0);
                  }
                  else {
                    dtObstacleAvoidanceQuery::reset(*(dtObstacleAvoidanceQuery **)(this + 0x358));
                    if (0 < *(int *)(pdVar14 + 0x198)) {
                      lVar13 = 0;
                      pdVar15 = pdVar14 + 0x168;
                      do {
                        lVar17 = *(long *)(this + 8) + (long)*(int *)pdVar15 * 0x270;
                        dtObstacleAvoidanceQuery::addCircle
                                  (*(dtObstacleAvoidanceQuery **)(this + 0x358),
                                   (float *)(lVar17 + 0x1a0),*(float *)(lVar17 + 0x1e0),
                                   (float *)(lVar17 + 0x1d0),(float *)(lVar17 + 0x1b8));
                        lVar13 = lVar13 + 1;
                        pdVar15 = pdVar15 + 8;
                      } while (lVar13 < *(int *)(pdVar14 + 0x198));
                    }
                    iVar9 = *(int *)(pdVar14 + 0x11c);
                    if (0 < iVar9) {
                      lVar13 = 0;
                      pdVar15 = pdVar14 + 0x3c;
                      do {
                        if (0.0 <= (*(float *)(pdVar15 + 8) - *(float *)(pdVar14 + 0x1a8)) *
                                   (*(float *)(pdVar15 + 0xc) - *(float *)(pdVar14 + 0x1a0)) -
                                   (*(float *)pdVar15 - *(float *)(pdVar14 + 0x1a0)) *
                                   (*(float *)(pdVar15 + 0x14) - *(float *)(pdVar14 + 0x1a8))) {
                          dtObstacleAvoidanceQuery::addSegment
                                    (*(dtObstacleAvoidanceQuery **)(this + 0x358),(float *)pdVar15,
                                     (float *)(pdVar15 + 0xc));
                          iVar9 = *(int *)(pdVar14 + 0x11c);
                        }
                        lVar13 = lVar13 + 1;
                        pdVar15 = pdVar15 + 0x1c;
                      } while (lVar13 < iVar9);
                    }
                    if (uVar12 == uVar28) {
                      pdVar11 = *(dtObstacleAvoidanceDebugData **)(param_2 + 0x20);
                    }
                    else {
                      pdVar11 = (dtObstacleAvoidanceDebugData *)0x0;
                    }
                    iVar9 = dtObstacleAvoidanceQuery::sampleVelocityAdaptive
                                      (*(dtObstacleAvoidanceQuery **)(this + 0x358),
                                       (float *)(pdVar14 + 0x1a0),*(float *)(pdVar14 + 0x1e0),
                                       *(float *)(pdVar14 + 0x19c),(float *)(pdVar14 + 0x1d0),
                                       (float *)(pdVar14 + 0x1b8),(float *)(pdVar14 + 0x1c4),
                                       (dtObstacleAvoidanceParams *)
                                       (this + (ulong)(byte)pdVar14[0x1fd] * 0x1c + 0x278),pdVar11);
                    *(int *)(this + 0x13c4) = *(int *)(this + 0x13c4) + iVar9;
                  }
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 != uVar27);
              ppdVar19 = ppdVar26;
              if (0 < (int)uVar29) {
                do {
                  pdVar14 = *ppdVar19;
                  if (pdVar14[1] == (dtCrowdAgent)0x1) {
                    fVar32 = (float)*(undefined8 *)(pdVar14 + 0x1d0);
                    fVar35 = (float)*(undefined8 *)(pdVar14 + 0x1c4) - fVar32;
                    fVar36 = (float)((ulong)*(undefined8 *)(pdVar14 + 0x1d0) >> 0x20);
                    fVar34 = (float)((ulong)*(undefined8 *)(pdVar14 + 0x1c4) >> 0x20) - fVar36;
                    fVar37 = *(float *)(pdVar14 + 0x1cc) - *(float *)(pdVar14 + 0x1d8);
                    fVar33 = SQRT(fVar35 * fVar35 + fVar34 * fVar34 + fVar37 * fVar37);
                    if (*(float *)(pdVar14 + 0x1e8) * param_1 < fVar33) {
                      fVar33 = (*(float *)(pdVar14 + 0x1e8) * param_1) / fVar33;
                      fVar35 = fVar35 * fVar33;
                      fVar34 = fVar34 * fVar33;
                      fVar37 = fVar37 * fVar33;
                    }
                    fVar32 = fVar32 + fVar35;
                    fVar36 = fVar36 + fVar34;
                    fVar37 = *(float *)(pdVar14 + 0x1d8) + fVar37;
                    *(ulong *)(pdVar14 + 0x1d0) = CONCAT44(fVar36,fVar32);
                    *(float *)(pdVar14 + 0x1d8) = fVar37;
                    if (SQRT(fVar37 * fVar37 + fVar32 * fVar32 + fVar36 * fVar36) <= 0.0001) {
                      *(undefined8 *)(pdVar14 + 0x1d0) = 0;
                      *(undefined4 *)(pdVar14 + 0x1d8) = 0;
                    }
                    else {
                      *(ulong *)(pdVar14 + 0x1a0) =
                           CONCAT44(fVar36 * param_1 +
                                    (float)((ulong)*(undefined8 *)(pdVar14 + 0x1a0) >> 0x20),
                                    fVar32 * param_1 + (float)*(undefined8 *)(pdVar14 + 0x1a0));
                      *(float *)(pdVar14 + 0x1a8) = fVar37 * param_1 + *(float *)(pdVar14 + 0x1a8);
                    }
                  }
                  uVar27 = uVar27 - 1;
                  ppdVar19 = ppdVar19 + 1;
                } while (uVar27 != 0);
              }
            }
          }
        }
      }
    }
  }
  iVar9 = 0;
  uVar12 = (ulong)uVar29;
  do {
    if (0 < (int)uVar29) {
      lVar13 = *(long *)(this + 8);
      uVar28 = 0;
      do {
        pdVar14 = ppdVar26[uVar28];
        if (pdVar14[1] == (dtCrowdAgent)0x1) {
          *(undefined8 *)(pdVar14 + 0x1b0) = 0;
          *(undefined4 *)(pdVar14 + 0x1ac) = 0;
          if (0 < *(int *)(pdVar14 + 0x198)) {
            lVar17 = 0;
            pdVar15 = pdVar14 + 0x168;
            fVar32 = 0.0;
            fVar37 = 0.0;
            fVar35 = 0.0;
            fVar36 = 0.0;
            do {
              lVar30 = lVar13 + (long)*(int *)pdVar15 * 0x270;
              fVar34 = *(float *)(pdVar14 + 0x1a0) - *(float *)(lVar30 + 0x1a0);
              fVar33 = *(float *)(pdVar14 + 0x1a8) - *(float *)(lVar30 + 0x1a8);
              fVar38 = *(float *)(pdVar14 + 0x1e0) + *(float *)(lVar30 + 0x1e0);
              fVar39 = fVar34 * fVar34 + 0.0 + fVar33 * fVar33;
              if (fVar39 <= fVar38 * fVar38) {
                fVar39 = SQRT(fVar39);
                if (0.0001 <= fVar39) {
                  fVar38 = (1.0 / fVar39) * (fVar38 - fVar39) * 0.5 * 0.7;
                }
                else {
                  fVar34 = *(float *)(pdVar14 + 0x1c0);
                  if ((int)((ulong)((long)*(int *)pdVar15 * 0x270) >> 4) * -0x69069069 <
                      (int)((ulong)((long)pdVar14 - lVar13) >> 4) * -0x69069069) {
                    fVar33 = *(float *)(pdVar14 + 0x1b8);
                    fVar38 = 0.01;
                    fVar34 = -fVar34;
                  }
                  else {
                    fVar38 = 0.01;
                    fVar33 = -*(float *)(pdVar14 + 0x1b8);
                  }
                }
                fVar35 = fVar35 + fVar34 * fVar38;
                fVar37 = fVar38 * 0.0 + fVar37;
                fVar32 = fVar33 * fVar38 + fVar32;
                fVar36 = fVar36 + 1.0;
                *(float *)(pdVar14 + 0x1ac) = fVar35;
                *(float *)(pdVar14 + 0x1b0) = fVar37;
                *(float *)(pdVar14 + 0x1b4) = fVar32;
              }
              lVar17 = lVar17 + 1;
              pdVar15 = pdVar15 + 8;
            } while (lVar17 < *(int *)(pdVar14 + 0x198));
            if (0.0001 < fVar36) {
              fVar36 = 1.0 / fVar36;
              *(float *)(pdVar14 + 0x1ac) = fVar36 * fVar35;
              *(float *)(pdVar14 + 0x1b0) = fVar36 * fVar37;
              *(float *)(pdVar14 + 0x1b4) = fVar36 * fVar32;
            }
          }
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 != uVar12);
      uVar28 = uVar12;
      ppdVar19 = ppdVar26;
      if (0 < (int)uVar29) {
        do {
          pdVar14 = *ppdVar19;
          if (pdVar14[1] == (dtCrowdAgent)0x1) {
            *(ulong *)(pdVar14 + 0x1a0) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pdVar14 + 0x1a0) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(pdVar14 + 0x1ac) >> 0x20),
                          (float)*(undefined8 *)(pdVar14 + 0x1a0) +
                          (float)*(undefined8 *)(pdVar14 + 0x1ac));
            *(float *)(pdVar14 + 0x1a8) = *(float *)(pdVar14 + 0x1a8) + *(float *)(pdVar14 + 0x1b4);
          }
          uVar28 = uVar28 - 1;
          ppdVar19 = ppdVar19 + 1;
        } while (uVar28 != 0);
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 4);
  ppdVar19 = ppdVar26;
  if (0 < (int)uVar29) {
    do {
      pdVar14 = *ppdVar19;
      if (pdVar14[1] == (dtCrowdAgent)0x1) {
        dtPathCorridor::movePosition
                  ((dtPathCorridor *)(pdVar14 + 8),(float *)(pdVar14 + 0x1a0),
                   *(dtNavMeshQuery **)(this + 0x13c8),
                   (dtQueryFilter *)(this + (ulong)(byte)pdVar14[0x1fe] * 0x104 + 0x380));
        *(undefined8 *)(pdVar14 + 0x1a0) = *(undefined8 *)(pdVar14 + 8);
        *(undefined4 *)(pdVar14 + 0x1a8) = *(undefined4 *)(pdVar14 + 0x10);
        if ((pdVar14[0x250] == (dtCrowdAgent)0x6) || (pdVar14[0x250] == (dtCrowdAgent)0x0)) {
          if (*(int *)(pdVar14 + 0x28) == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = **(uint **)(pdVar14 + 0x20);
          }
          dtPathCorridor::reset((dtPathCorridor *)(pdVar14 + 8),uVar29,(float *)(pdVar14 + 0x1a0));
          pdVar14[2] = (dtCrowdAgent)0x0;
        }
      }
      uVar12 = uVar12 - 1;
      ppdVar19 = ppdVar19 + 1;
    } while (uVar12 != 0);
  }
  iVar9 = *(int *)this;
  if (0 < iVar9) {
    pcVar21 = *(char **)(this + 0x18);
    lVar13 = 0;
    cVar5 = *pcVar21;
    pfVar1 = (float *)(pcVar21 + 0x18);
    while( true ) {
      if (cVar5 != '\0') {
        fVar32 = pfVar1[6];
        pdVar14 = ppdVar26[lVar13];
        fVar36 = pfVar1[5] + param_1;
        pfVar1[5] = fVar36;
        if (fVar32 < fVar36) {
          *(char *)(pfVar1 + -6) = '\0';
          pdVar14[1] = (dtCrowdAgent)0x1;
        }
        else {
          fVar37 = fVar32 * 0.15;
          if (fVar37 <= fVar36) {
            fVar32 = (fVar36 - fVar37) / (fVar32 - fVar37);
            bVar7 = 0.0 <= fVar32;
            if (1.0 < fVar32) {
              fVar32 = 1.0;
            }
            fVar37 = 0.0;
            if (bVar7) {
              fVar37 = fVar32;
            }
            *(float *)(pdVar14 + 0x1a0) = pfVar1[-2] + fVar37 * (pfVar1[1] - pfVar1[-2]);
            fVar32 = pfVar1[-1];
            fVar36 = pfVar1[2];
            pfVar24 = pfVar1 + 3;
            pfVar25 = pfVar1;
          }
          else {
            fVar36 = fVar36 / fVar37;
            bVar7 = 0.0 <= fVar36;
            if (1.0 < fVar36) {
              fVar36 = 1.0;
            }
            fVar37 = 0.0;
            if (bVar7) {
              fVar37 = fVar36;
            }
            *(float *)(pdVar14 + 0x1a0) = pfVar1[-5] + fVar37 * (pfVar1[-2] - pfVar1[-5]);
            fVar32 = pfVar1[-4];
            fVar36 = pfVar1[-1];
            pfVar24 = (float *)(pcVar21 + lVar13 * 0x34 + 0x18);
            pfVar25 = (float *)(pcVar21 + lVar13 * 0x34 + 0xc);
          }
          *(float *)(pdVar14 + 0x1a4) = fVar32 + fVar37 * (fVar36 - fVar32);
          fVar32 = *pfVar25;
          fVar36 = *pfVar24;
          *(undefined8 *)(pdVar14 + 0x1d0) = 0;
          *(undefined4 *)(pdVar14 + 0x1d8) = 0;
          *(undefined8 *)(pdVar14 + 0x1b8) = 0;
          *(float *)(pdVar14 + 0x1a8) = fVar32 + fVar37 * (fVar36 - fVar32);
          *(undefined4 *)(pdVar14 + 0x1c0) = 0;
        }
      }
      lVar13 = lVar13 + 1;
      if (iVar9 <= lVar13) break;
      cVar5 = *(char *)(pfVar1 + 7);
      pfVar1 = pfVar1 + 0xd;
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

