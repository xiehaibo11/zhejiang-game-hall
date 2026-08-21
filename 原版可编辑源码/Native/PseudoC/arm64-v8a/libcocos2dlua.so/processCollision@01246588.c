
/* btConvexPlaneCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btConvexPlaneCollisionAlgorithm::processCollision
          (btConvexPlaneCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btCollisionObjectWrapper *pbVar1;
  btCollisionObjectWrapper *pbVar2;
  btPersistentManifold *this_00;
  btManifoldResult *pbVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
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
  float fVar45;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  
  if (*(long *)(this + 0x18) != 0) {
    pbVar1 = param_1;
    pbVar2 = param_2;
    if (this[0x20] == (btConvexPlaneCollisionAlgorithm)0x0) {
      pbVar1 = param_2;
      pbVar2 = param_1;
    }
    pfVar5 = *(float **)(pbVar2 + 0x18);
    pfVar7 = *(float **)(pbVar1 + 0x18);
    fVar45 = pfVar5[8];
    fVar23 = pfVar5[9];
    fVar44 = pfVar7[8];
    fVar40 = *pfVar5;
    fVar39 = pfVar5[1];
    fVar19 = pfVar5[4];
    fVar20 = pfVar5[5];
    fVar34 = *pfVar7;
    fVar30 = pfVar7[4];
    fVar11 = pfVar5[2];
    fVar22 = pfVar5[6];
    fVar32 = pfVar5[0xc];
    fVar21 = pfVar5[0xd];
    fVar14 = pfVar7[0xd];
    fVar16 = pfVar7[0xe];
    fVar27 = (float)*(undefined8 *)(pfVar7 + 9);
    fVar28 = (float)((ulong)*(undefined8 *)(pfVar7 + 9) >> 0x20);
    fVar37 = (float)*(undefined8 *)(pfVar7 + 1);
    fVar35 = (float)*(undefined8 *)(pfVar7 + 5);
    fVar38 = (float)((ulong)*(undefined8 *)(pfVar7 + 1) >> 0x20);
    fVar36 = (float)((ulong)*(undefined8 *)(pfVar7 + 5) >> 0x20);
    fVar41 = -pfVar7[0xc];
    fVar42 = -fVar14;
    fVar12 = pfVar5[10];
    fVar15 = pfVar5[0xe];
    fVar43 = -fVar16;
    lVar10 = *(long *)(pbVar1 + 8);
    fVar25 = fVar40 * fVar34 + fVar19 * fVar30 + fVar45 * fVar44;
    fVar31 = *(float *)(lVar10 + 0x40);
    fVar33 = *(float *)(lVar10 + 0x44);
    plVar9 = *(long **)(pbVar2 + 8);
    fVar26 = fVar39 * fVar34 + fVar20 * fVar30 + fVar23 * fVar44;
    fVar24 = fVar11 * fVar34 + fVar22 * fVar30 + fVar12 * fVar44;
    fVar13 = -*(float *)(lVar10 + 0x3c);
    local_a0 = (fVar25 * fVar13 - (fVar40 * fVar37 + fVar19 * fVar35 + fVar45 * fVar27) * fVar31) -
               (fVar40 * fVar38 + fVar19 * fVar36 + fVar45 * fVar28) * fVar33;
    fStack_9c = (fVar26 * fVar13 - (fVar39 * fVar37 + fVar20 * fVar35 + fVar23 * fVar27) * fVar31) -
                (fVar39 * fVar38 + fVar20 * fVar36 + fVar23 * fVar28) * fVar33;
    local_98 = (fVar24 * fVar13 - (fVar11 * fVar37 + fVar22 * fVar35 + fVar12 * fVar27) * fVar31) -
               (fVar11 * fVar38 + fVar22 * fVar36 + fVar12 * fVar28) * fVar33;
    local_94 = 0.0;
    pbVar3 = param_4;
    fVar13 = local_a0;
    fVar31 = fStack_9c;
    fVar33 = (float)(**(code **)(*plVar9 + 0x80))(plVar9,&local_a0);
    pfVar5 = *(float **)(pbVar1 + 0x18);
    fVar17 = *pfVar5;
    fVar29 = *(float *)(lVar10 + 0x3c);
    fVar18 = pfVar5[1];
    fVar14 = fVar32 * fVar34 + fVar21 * fVar30 + fVar15 * fVar44 +
             ((fVar34 * fVar41 - fVar30 * fVar14) - fVar44 * fVar16) +
             fVar24 * fVar31 + fVar25 * fVar33 + fVar26 * fVar13;
    fVar24 = pfVar5[2];
    fVar26 = pfVar5[4];
    fVar25 = pfVar5[5];
    fVar16 = fVar37 * fVar32 + fVar35 * fVar21 + fVar27 * fVar15 +
             fVar37 * fVar41 + fVar35 * fVar42 + fVar27 * fVar43 +
             (fVar37 * fVar11 + fVar35 * fVar22 + fVar27 * fVar12) * fVar31 +
             (fVar37 * fVar40 + fVar35 * fVar19 + fVar27 * fVar45) * fVar33 +
             (fVar37 * fVar39 + fVar35 * fVar20 + fVar27 * fVar23) * fVar13;
    fVar31 = fVar38 * fVar32 + fVar36 * fVar21 + fVar28 * fVar15 +
             fVar38 * fVar41 + fVar36 * fVar42 + fVar28 * fVar43 +
             (fVar38 * fVar11 + fVar36 * fVar22 + fVar28 * fVar12) * fVar31 +
             (fVar38 * fVar40 + fVar36 * fVar19 + fVar28 * fVar45) * fVar33 +
             (fVar38 * fVar39 + fVar36 * fVar20 + fVar28 * fVar23) * fVar13;
    fVar11 = pfVar5[0xc];
    fVar21 = pfVar5[6];
    fVar28 = pfVar5[8];
    fVar22 = pfVar5[9];
    fVar27 = pfVar5[10];
    fVar12 = pfVar5[0xd];
    fVar33 = pfVar5[0xe];
    fVar15 = (float)*(undefined8 *)(lVar10 + 0x40);
    fVar19 = (float)((ulong)*(undefined8 *)(lVar10 + 0x40) >> 0x20);
    fVar20 = (fVar19 * fVar31 + fVar29 * fVar14 + fVar15 * fVar16) - *(float *)(lVar10 + 0x4c);
    fVar13 = (float)btPersistentManifold::getContactBreakingThreshold
                              (*(btPersistentManifold **)(this + 0x18));
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(this + 0x18);
    if (fVar20 < fVar13) {
      fVar16 = fVar16 - fVar20 * fVar15;
      fVar14 = fVar14 - fVar29 * fVar20;
      pfVar5 = *(float **)(pbVar1 + 0x18);
      fVar31 = fVar31 - fVar20 * fVar19;
      local_a8 = fVar14 * fVar28 + fVar16 * fVar22 + fVar31 * fVar27 + fVar33;
      fVar13 = *(float *)(lVar10 + 0x3c);
      fVar33 = *(float *)(lVar10 + 0x40);
      fVar15 = *(float *)(lVar10 + 0x44);
      fStack_ac = fVar31 * fVar21 + fVar26 * fVar14 + fVar25 * fVar16 + fVar12;
      local_b0 = fVar24 * fVar31 + fVar17 * fVar14 + fVar18 * fVar16 + fVar11;
      local_a0 = *pfVar5 * fVar13 + pfVar5[1] * fVar33 + pfVar5[2] * fVar15;
      fStack_9c = fVar13 * pfVar5[4] + fVar33 * pfVar5[5] + fVar15 * pfVar5[6];
      local_98 = fVar13 * pfVar5[8] + fVar33 * pfVar5[9] + fVar15 * pfVar5[10];
      local_94 = 0.0;
      local_a4 = 0;
      (**(code **)(*(long *)param_4 + 0x20))(fVar20,param_4,&local_a0,&local_b0);
    }
    if (((int)plVar9[1] < 7) && (*(int *)(*(long *)(param_4 + 8) + 0x318) < *(int *)(this + 0x28)))
    {
      fVar13 = *(float *)(lVar10 + 0x44);
      if (ABS(fVar13) <= 0.70710677) {
        fVar31 = *(float *)(lVar10 + 0x3c) * *(float *)(lVar10 + 0x3c) +
                 *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40);
        fVar13 = SQRT(fVar31);
        if (NAN(fVar13)) {
          fVar13 = sqrtf(fVar31);
        }
        fVar11 = 0.0;
        fVar31 = -(*(float *)(lVar10 + 0x40) * (1.0 / fVar13));
        fVar13 = (1.0 / fVar13) * *(float *)(lVar10 + 0x3c);
      }
      else {
        fVar13 = fVar13 * fVar13 + *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40);
        fVar11 = SQRT(fVar13);
        if (NAN(fVar11)) {
          fVar11 = sqrtf(fVar13);
        }
        fVar31 = 0.0;
        fVar13 = -((1.0 / fVar11) * *(float *)(lVar10 + 0x44));
        fVar11 = (1.0 / fVar11) * *(float *)(lVar10 + 0x40);
      }
      fVar33 = (float)(**(code **)(*plVar9 + 0x20))(plVar9);
      fVar14 = fVar31 * fVar31 + fVar13 * fVar13 + fVar11 * fVar11;
      fVar15 = SQRT(fVar14);
      fVar12 = gContactBreakingThreshold / fVar33;
      if (0.3926991 < gContactBreakingThreshold / fVar33) {
        fVar12 = 0.3926991;
      }
      if (NAN(fVar15)) {
        fVar15 = sqrtf(fVar14);
      }
      fVar33 = sinf(fVar12 * 0.5);
      fVar12 = cosf(fVar12 * 0.5);
      iVar4 = *(int *)(this + 0x24);
      if (0 < iVar4) {
        fVar33 = fVar33 / fVar15;
        iVar8 = 0;
        fVar31 = fVar31 * fVar33;
        fVar13 = fVar13 * fVar33;
        fVar11 = fVar11 * fVar33;
        do {
          fVar33 = *(float *)(lVar10 + 0x3c) * *(float *)(lVar10 + 0x3c) +
                   *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                   *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44);
          fVar14 = SQRT(fVar33);
          if (NAN(fVar14)) {
            fVar14 = sqrtf(fVar33);
          }
          fVar15 = (6.2831855 / (float)iVar4) * (float)iVar8 * 0.5;
          fVar33 = sinf(fVar15);
          fVar33 = fVar33 / fVar14;
          fVar24 = *(float *)(lVar10 + 0x3c) * fVar33;
          fVar25 = fVar33 * *(float *)(lVar10 + 0x40);
          fVar33 = fVar33 * *(float *)(lVar10 + 0x44);
          fVar14 = cosf(fVar15);
          fVar15 = ((fVar31 * fVar14 - fVar12 * fVar24) - fVar11 * fVar25) + fVar13 * fVar33;
          fVar17 = ((fVar13 * fVar14 - fVar12 * fVar25) - fVar31 * fVar33) + fVar11 * fVar24;
          fVar18 = ((fVar11 * fVar14 - fVar12 * fVar33) - fVar13 * fVar24) + fVar31 * fVar25;
          fVar16 = fVar12 * fVar14 + fVar31 * fVar24 + fVar13 * fVar25 + fVar11 * fVar33;
          local_a0 = (fVar33 * fVar17 + fVar24 * fVar16 + fVar14 * fVar15) - fVar25 * fVar18;
          fStack_9c = (fVar24 * fVar18 + fVar14 * fVar17 + fVar25 * fVar16) - fVar33 * fVar15;
          local_98 = (fVar25 * fVar15 + fVar33 * fVar16 + fVar14 * fVar18) - fVar24 * fVar17;
          local_94 = ((fVar14 * fVar16 - fVar24 * fVar15) - fVar25 * fVar17) - fVar33 * fVar18;
          collideSingleContact
                    (this,(btQuaternion *)&local_a0,param_1,param_2,(btDispatcherInfo *)pbVar3,
                     param_4);
          iVar4 = *(int *)(this + 0x24);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar4);
      }
    }
    if (((this[0x10] != (btConvexPlaneCollisionAlgorithm)0x0) &&
        (*(int *)(*(long *)(this + 0x18) + 0x318) != 0)) &&
       (this_00 = *(btPersistentManifold **)(param_4 + 8), *(int *)(this_00 + 0x318) != 0)) {
      lVar10 = *(long *)(this_00 + 0x308);
      lVar6 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
      if (lVar10 == lVar6) {
        lVar6 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
      }
      else {
        lVar10 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
      }
      btPersistentManifold::refreshContactPoints
                (this_00,(btTransform *)(lVar10 + 8),(btTransform *)(lVar6 + 8));
    }
  }
  return;
}

