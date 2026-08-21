
/* btSequentialImpulseConstraintSolver::convertContact(btPersistentManifold*, btContactSolverInfo
   const&) */

void __thiscall
btSequentialImpulseConstraintSolver::convertContact
          (btSequentialImpulseConstraintSolver *this,btPersistentManifold *param_1,
          btContactSolverInfo *param_2)

{
  btManifoldPoint *pbVar1;
  btPersistentManifold *pbVar2;
  btCollisionObject *pbVar3;
  btCollisionObject *pbVar4;
  btManifoldPoint *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  btVector3 *pbVar10;
  btCollisionObject *pbVar11;
  uint uVar12;
  long lVar13;
  btPersistentManifold *pbVar14;
  long lVar15;
  long lVar16;
  btPersistentManifold *pbVar17;
  btPersistentManifold *pbVar18;
  long lVar19;
  int iVar20;
  btPersistentManifold *pbVar21;
  btCollisionObject *pbVar22;
  btCollisionObject *pbVar23;
  btPersistentManifold *pbVar24;
  btSolverConstraint *pbVar25;
  long lVar26;
  btPersistentManifold *pbVar27;
  long lVar28;
  btPersistentManifold *pbVar29;
  float fVar30;
  float fVar32;
  double dVar31;
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
  btVector3 *pbVar44;
  int local_14c;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_c4;
  float local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  float local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  
  pbVar22 = *(btCollisionObject **)(param_1 + 0x308);
  pbVar23 = *(btCollisionObject **)(param_1 + 0x310);
  iVar7 = getOrInitSolverBody(this,pbVar22,*(float *)(param_2 + 0xc));
  iVar8 = getOrInitSolverBody(this,pbVar23,*(float *)(param_2 + 0xc));
  lVar13 = *(long *)(this + 0x18);
  lVar19 = (long)iVar8;
  lVar15 = (long)iVar7;
  if ((((((*(float *)(lVar13 + (long)iVar7 * 0xf8 + 0x80) != 0.0) ||
         (*(float *)(lVar13 + lVar15 * 0xf8 + 0x84) != 0.0)) ||
        (*(float *)(lVar13 + lVar15 * 0xf8 + 0x88) != 0.0)) ||
       ((*(float *)(lVar13 + lVar19 * 0xf8 + 0x80) != 0.0 ||
        (*(float *)(lVar13 + lVar19 * 0xf8 + 0x84) != 0.0)))) ||
      (*(float *)(lVar13 + lVar19 * 0xf8 + 0x88) != 0.0)) &&
     (iVar20 = *(int *)(param_1 + 0x318), 0 < iVar20)) {
    lVar16 = lVar13 + lVar15 * 0xf8;
    lVar13 = lVar13 + lVar19 * 0xf8;
    lVar15 = 0;
    local_14c = 1;
    do {
      if (*(float *)(param_1 + lVar15 * 0xc0 + 0x58) <= *(float *)(param_1 + 800)) {
        uVar12 = *(uint *)(this + 0x2c);
        pbVar5 = (btManifoldPoint *)(ulong)uVar12;
        pbVar1 = (btManifoldPoint *)(param_1 + lVar15 * 0xc0 + 8);
        lVar19 = (long)(int)uVar12;
        if (uVar12 == *(uint *)(this + 0x30)) {
          iVar20 = uVar12 << 1;
          if (uVar12 == 0) {
            iVar20 = 1;
          }
          if ((int)uVar12 < iVar20) {
            if (iVar20 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = btAlignedAllocInternal((long)iVar20 * 0xa0,0x10);
              uVar12 = *(uint *)(this + 0x2c);
            }
            if (0 < (int)uVar12) {
              lVar26 = 0;
              lVar28 = (long)(int)uVar12;
              do {
                memcpy((void *)(lVar9 + lVar26),(void *)(*(long *)(this + 0x38) + lVar26),0xa0);
                lVar28 = lVar28 + -1;
                lVar26 = lVar26 + 0xa0;
              } while (lVar28 != 0);
            }
            if (*(void **)(this + 0x38) != (void *)0x0) {
              if (this[0x40] != (btSequentialImpulseConstraintSolver)0x0) {
                btAlignedFreeInternal(*(void **)(this + 0x38));
              }
              *(undefined8 *)(this + 0x38) = 0;
            }
            uVar12 = *(uint *)(this + 0x2c);
            this[0x40] = (btSequentialImpulseConstraintSolver)0x1;
            *(long *)(this + 0x38) = lVar9;
            *(int *)(this + 0x30) = iVar20;
          }
        }
        lVar9 = *(long *)(this + 0x38);
        *(uint *)(this + 0x2c) = uVar12 + 1;
        pbVar25 = (btSolverConstraint *)(lVar9 + lVar19 * 0xa0);
        uVar12 = *(uint *)(pbVar22 + 0x100);
        uVar6 = *(uint *)(pbVar23 + 0x100);
        *(int *)(pbVar25 + 0x98) = iVar7;
        *(int *)(pbVar25 + 0x9c) = iVar8;
        *(btManifoldPoint **)(pbVar25 + 0x88) = pbVar1;
        local_a4 = 0;
        local_b0 = *(float *)(param_1 + lVar15 * 0xc0 + 0x38) - *(float *)(pbVar22 + 0x38);
        fVar33 = (float)*(undefined8 *)(param_1 + lVar15 * 0xc0 + 0x3c) -
                 (float)*(undefined8 *)(pbVar22 + 0x3c);
        fVar34 = (float)((ulong)*(undefined8 *)(param_1 + lVar15 * 0xc0 + 0x3c) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(pbVar22 + 0x3c) >> 0x20);
        local_ac = CONCAT44(fVar34,fVar33);
        local_c0 = *(float *)(param_1 + lVar15 * 0xc0 + 0x28) - *(float *)(pbVar23 + 0x38);
        fVar30 = (float)*(undefined8 *)(param_1 + lVar15 * 0xc0 + 0x2c) -
                 (float)*(undefined8 *)(pbVar23 + 0x3c);
        fVar32 = (float)((ulong)*(undefined8 *)(param_1 + lVar15 * 0xc0 + 0x2c) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(pbVar23 + 0x3c) >> 0x20);
        local_bc = CONCAT44(fVar32,fVar30);
        local_b4 = 0;
        pbVar3 = (btCollisionObject *)0x0;
        if ((uVar12 & 2) != 0) {
          pbVar3 = pbVar22;
        }
        pbVar4 = (btCollisionObject *)0x0;
        if ((uVar6 & 2) != 0) {
          pbVar4 = pbVar23;
        }
        fVar41 = 0.0;
        fVar37 = 0.0;
        fVar40 = 0.0;
        fVar42 = 0.0;
        fVar36 = 0.0;
        fVar38 = 0.0;
        if (*(long *)(lVar16 + 0xf0) != 0) {
          fVar36 = (float)*(undefined8 *)(lVar16 + 0xc0) + (float)*(undefined8 *)(lVar16 + 0xe0);
          fVar38 = (float)((ulong)*(undefined8 *)(lVar16 + 0xc0) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar16 + 0xe0) >> 0x20);
          fVar43 = *(float *)(lVar16 + 200) + *(float *)(lVar16 + 0xe8);
          fVar42 = *(float *)(lVar16 + 0xb4) + *(float *)(lVar16 + 0xd4) +
                   (fVar43 * local_b0 - fVar34 * fVar36);
          fVar36 = *(float *)(lVar16 + 0xb8) + *(float *)(lVar16 + 0xd8) +
                   (fVar36 * fVar33 - fVar38 * local_b0);
          fVar38 = *(float *)(lVar16 + 0xb0) + *(float *)(lVar16 + 0xd0) +
                   (fVar38 * fVar34 - fVar43 * fVar33);
        }
        if (*(long *)(lVar13 + 0xf0) != 0) {
          fVar33 = (float)*(undefined8 *)(lVar13 + 0xc0) + (float)*(undefined8 *)(lVar13 + 0xe0);
          fVar34 = (float)((ulong)*(undefined8 *)(lVar13 + 0xc0) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar13 + 0xe0) >> 0x20);
          fVar37 = *(float *)(lVar13 + 200) + *(float *)(lVar13 + 0xe8);
          fVar40 = *(float *)(lVar13 + 0xb4) + *(float *)(lVar13 + 0xd4) +
                   (fVar37 * local_c0 - fVar32 * fVar33);
          fVar41 = *(float *)(lVar13 + 0xb8) + *(float *)(lVar13 + 0xd8) +
                   (fVar33 * fVar30 - fVar34 * local_c0);
          fVar37 = *(float *)(lVar13 + 0xb0) + *(float *)(lVar13 + 0xd0) +
                   (fVar34 * fVar32 - fVar37 * fVar30);
        }
        pbVar17 = param_1 + lVar15 * 0xc0 + 0x4c;
        fVar39 = *(float *)pbVar17;
        pbVar10 = (btVector3 *)&local_c4;
        pbVar11 = (btCollisionObject *)&local_b0;
        pbVar14 = param_1 + lVar15 * 0xc0 + 0x48;
        fVar30 = *(float *)pbVar14;
        pbVar18 = param_1 + lVar15 * 0xc0 + 0x50;
        fVar32 = *(float *)pbVar18;
        pbVar44 = (btVector3 *)&local_c0;
        setupContactConstraint
                  (this,pbVar25,iVar7,iVar8,pbVar1,param_2,(float *)pbVar10,(btVector3 *)pbVar11,
                   pbVar44);
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar43 = 0.0;
        fVar35 = 0.0;
        *(undefined4 *)(lVar9 + lVar19 * 0xa0 + 0x94) = *(undefined4 *)(this + 0x6c);
        if (pbVar3 != (btCollisionObject *)0x0) {
          fVar34 = *(float *)(pbVar3 + 0x164);
          fVar43 = *(float *)(pbVar3 + 0x168);
          fVar35 = *(float *)(pbVar3 + 0x16c);
        }
        fStack_d4 = 0.0;
        local_d8 = 0.0;
        if (pbVar4 != (btCollisionObject *)0x0) {
          local_d8 = *(float *)(pbVar4 + 0x164);
          fStack_d4 = *(float *)(pbVar4 + 0x168);
          fVar33 = *(float *)(pbVar4 + 0x16c);
        }
        local_d8 = local_d8 - fVar34;
        fStack_d4 = fStack_d4 - fVar43;
        fVar33 = fVar33 - fVar35;
        iVar20 = local_14c + -1;
        if ((0 < local_14c) && (0.0 < *(float *)(param_1 + lVar15 * 0xc0 + 0x60))) {
          fVar43 = local_d8 * local_d8 + fStack_d4 * fStack_d4 + fVar33 * fVar33;
          fVar34 = SQRT(fVar43);
          if (NAN(fVar34)) {
            fVar34 = sqrtf(fVar43);
          }
          local_14c = iVar20;
          if (fVar34 <= *(float *)(param_2 + 0x50)) {
            addRollingFrictionConstraint
                      ((btVector3 *)this,(int)pbVar14,iVar7,iVar8,pbVar5,(btVector3 *)pbVar1,pbVar10
                       ,pbVar11,(btCollisionObject *)pbVar44,fVar34,0.0,0.0);
            fVar33 = *(float *)pbVar18;
            if (ABS(fVar33) <= 0.70710677) {
              local_f0 = *(float *)pbVar14 * *(float *)pbVar14 +
                         *(float *)pbVar17 * *(float *)pbVar17;
              fVar33 = SQRT(local_f0);
              if (NAN(fVar33)) {
                fVar33 = sqrtf(local_f0);
              }
              fVar33 = 1.0 / fVar33;
              local_e8 = -(*(float *)pbVar17 * fVar33);
              local_e0 = 0.0;
              local_e4 = fVar33 * *(float *)pbVar14;
              local_f0 = local_f0 * fVar33;
              local_f8 = -(local_e4 * *(float *)pbVar18);
              local_f4 = *(float *)pbVar18 * local_e8;
            }
            else {
              local_f8 = fVar33 * fVar33 + *(float *)pbVar17 * *(float *)pbVar17;
              local_e0 = SQRT(local_f8);
              if (NAN(local_e0)) {
                local_e0 = sqrtf(local_f8);
              }
              local_e8 = 0.0;
              local_e0 = 1.0 / local_e0;
              local_f8 = local_f8 * local_e0;
              local_e4 = -(local_e0 * *(float *)pbVar18);
              local_e0 = local_e0 * *(float *)pbVar17;
              local_f4 = -(local_e0 * *(float *)pbVar14);
              local_f0 = *(float *)pbVar14 * local_e4;
            }
            if ((*(uint *)(pbVar22 + 0xb8) >> 1 & 1) != 0) {
              fVar34 = (*(float *)(pbVar22 + 8) * local_e8 + *(float *)(pbVar22 + 0x18) * local_e4 +
                       *(float *)(pbVar22 + 0x28) * local_e0) * *(float *)(pbVar22 + 0xa8);
              fVar43 = (local_e8 * *(float *)(pbVar22 + 0xc) + local_e4 * *(float *)(pbVar22 + 0x1c)
                       + local_e0 * *(float *)(pbVar22 + 0x2c)) * *(float *)(pbVar22 + 0xac);
              fVar33 = (local_e8 * *(float *)(pbVar22 + 0x10) +
                        local_e4 * *(float *)(pbVar22 + 0x20) +
                       local_e0 * *(float *)(pbVar22 + 0x30)) * *(float *)(pbVar22 + 0xb0);
              local_e8 = *(float *)(pbVar22 + 8) * fVar34 + *(float *)(pbVar22 + 0xc) * fVar43 +
                         *(float *)(pbVar22 + 0x10) * fVar33;
              local_e4 = *(float *)(pbVar22 + 0x18) * fVar34 + *(float *)(pbVar22 + 0x1c) * fVar43 +
                         *(float *)(pbVar22 + 0x20) * fVar33;
              local_e0 = *(float *)(pbVar22 + 0x28) * fVar34 + *(float *)(pbVar22 + 0x2c) * fVar43 +
                         *(float *)(pbVar22 + 0x30) * fVar33;
            }
            if ((*(uint *)(pbVar23 + 0xb8) >> 1 & 1) != 0) {
              fVar34 = (*(float *)(pbVar23 + 8) * local_e8 + *(float *)(pbVar23 + 0x18) * local_e4 +
                       *(float *)(pbVar23 + 0x28) * local_e0) * *(float *)(pbVar23 + 0xa8);
              fVar43 = (local_e8 * *(float *)(pbVar23 + 0xc) + local_e4 * *(float *)(pbVar23 + 0x1c)
                       + local_e0 * *(float *)(pbVar23 + 0x2c)) * *(float *)(pbVar23 + 0xac);
              fVar33 = (local_e8 * *(float *)(pbVar23 + 0x10) +
                        local_e4 * *(float *)(pbVar23 + 0x20) +
                       local_e0 * *(float *)(pbVar23 + 0x30)) * *(float *)(pbVar23 + 0xb0);
              local_e8 = *(float *)(pbVar23 + 8) * fVar34 + *(float *)(pbVar23 + 0xc) * fVar43 +
                         *(float *)(pbVar23 + 0x10) * fVar33;
              local_e4 = *(float *)(pbVar23 + 0x18) * fVar34 + *(float *)(pbVar23 + 0x1c) * fVar43 +
                         *(float *)(pbVar23 + 0x20) * fVar33;
              local_e0 = *(float *)(pbVar23 + 0x28) * fVar34 + *(float *)(pbVar23 + 0x2c) * fVar43 +
                         *(float *)(pbVar23 + 0x30) * fVar33;
            }
            if ((*(uint *)(pbVar22 + 0xb8) >> 1 & 1) != 0) {
              fVar33 = (*(float *)(pbVar22 + 8) * local_f8 + *(float *)(pbVar22 + 0x18) * local_f4 +
                       *(float *)(pbVar22 + 0x28) * local_f0) * *(float *)(pbVar22 + 0xa8);
              fVar34 = (local_f8 * *(float *)(pbVar22 + 0xc) + local_f4 * *(float *)(pbVar22 + 0x1c)
                       + local_f0 * *(float *)(pbVar22 + 0x2c)) * *(float *)(pbVar22 + 0xac);
              fVar43 = (local_f8 * *(float *)(pbVar22 + 0x10) +
                        local_f4 * *(float *)(pbVar22 + 0x20) +
                       local_f0 * *(float *)(pbVar22 + 0x30)) * *(float *)(pbVar22 + 0xb0);
              local_f8 = *(float *)(pbVar22 + 8) * fVar33 + *(float *)(pbVar22 + 0xc) * fVar34 +
                         *(float *)(pbVar22 + 0x10) * fVar43;
              local_f4 = *(float *)(pbVar22 + 0x18) * fVar33 + *(float *)(pbVar22 + 0x1c) * fVar34 +
                         *(float *)(pbVar22 + 0x20) * fVar43;
              local_f0 = *(float *)(pbVar22 + 0x28) * fVar33 + *(float *)(pbVar22 + 0x2c) * fVar34 +
                         *(float *)(pbVar22 + 0x30) * fVar43;
            }
            if ((*(uint *)(pbVar23 + 0xb8) >> 1 & 1) != 0) {
              fVar33 = (*(float *)(pbVar23 + 8) * local_f8 + *(float *)(pbVar23 + 0x18) * local_f4 +
                       *(float *)(pbVar23 + 0x28) * local_f0) * *(float *)(pbVar23 + 0xa8);
              fVar34 = (local_f8 * *(float *)(pbVar23 + 0xc) + local_f4 * *(float *)(pbVar23 + 0x1c)
                       + local_f0 * *(float *)(pbVar23 + 0x2c)) * *(float *)(pbVar23 + 0xac);
              fVar43 = (local_f8 * *(float *)(pbVar23 + 0x10) +
                        local_f4 * *(float *)(pbVar23 + 0x20) +
                       local_f0 * *(float *)(pbVar23 + 0x30)) * *(float *)(pbVar23 + 0xb0);
              local_f8 = *(float *)(pbVar23 + 8) * fVar33 + *(float *)(pbVar23 + 0xc) * fVar34 +
                         *(float *)(pbVar23 + 0x10) * fVar43;
              local_f4 = *(float *)(pbVar23 + 0x18) * fVar33 + *(float *)(pbVar23 + 0x1c) * fVar34 +
                         *(float *)(pbVar23 + 0x20) * fVar43;
              local_f0 = *(float *)(pbVar23 + 0x28) * fVar33 + *(float *)(pbVar23 + 0x2c) * fVar34 +
                         *(float *)(pbVar23 + 0x30) * fVar43;
            }
            fVar34 = local_e8 * local_e8 + local_e4 * local_e4 + local_e0 * local_e0;
            fVar33 = SQRT(fVar34);
            if (NAN(fVar33)) {
              fVar33 = sqrtf(fVar34);
            }
            if (0.001 < (double)fVar33) {
              addRollingFrictionConstraint
                        ((btVector3 *)this,(int)&stack0xfffffffffffffff0 + -0xd8,iVar7,iVar8,pbVar5,
                         (btVector3 *)pbVar1,pbVar10,pbVar11,(btCollisionObject *)pbVar44,
                         SUB84((double)fVar33,0),0.0,0.0);
            }
            fVar34 = local_f8 * local_f8 + local_f4 * local_f4 + local_f0 * local_f0;
            fVar33 = SQRT(fVar34);
            if (NAN(fVar33)) {
              fVar33 = sqrtf(fVar34);
            }
            dVar31 = (double)fVar33;
            if (0.001 < dVar31) {
              iVar20 = -0xe8;
              goto LAB_011c3540;
            }
          }
          else {
            local_d0 = SQRT(fVar43);
            if (NAN(local_d0)) {
              local_d0 = sqrtf(fVar43);
            }
            local_d0 = 1.0 / local_d0;
            local_d8 = local_d0 * local_d8;
            fStack_d4 = local_d0 * fStack_d4;
            local_d0 = local_d0 * fVar33;
            if (((byte)pbVar22[0xb8] >> 1 & 1) != 0) {
              fVar34 = (*(float *)(pbVar22 + 8) * local_d8 + *(float *)(pbVar22 + 0x18) * fStack_d4
                       + local_d0 * *(float *)(pbVar22 + 0x28)) * *(float *)(pbVar22 + 0xa8);
              fVar43 = (local_d8 * *(float *)(pbVar22 + 0xc) +
                        fStack_d4 * *(float *)(pbVar22 + 0x1c) +
                       local_d0 * *(float *)(pbVar22 + 0x2c)) * *(float *)(pbVar22 + 0xac);
              fVar33 = (local_d8 * *(float *)(pbVar22 + 0x10) +
                        fStack_d4 * *(float *)(pbVar22 + 0x20) +
                       local_d0 * *(float *)(pbVar22 + 0x30)) * *(float *)(pbVar22 + 0xb0);
              local_d8 = *(float *)(pbVar22 + 8) * fVar34 + *(float *)(pbVar22 + 0xc) * fVar43 +
                         *(float *)(pbVar22 + 0x10) * fVar33;
              fStack_d4 = *(float *)(pbVar22 + 0x18) * fVar34 + *(float *)(pbVar22 + 0x1c) * fVar43
                          + *(float *)(pbVar22 + 0x20) * fVar33;
              local_d0 = *(float *)(pbVar22 + 0x28) * fVar34 + *(float *)(pbVar22 + 0x2c) * fVar43 +
                         *(float *)(pbVar22 + 0x30) * fVar33;
            }
            if (((byte)pbVar23[0xb8] >> 1 & 1) != 0) {
              fVar34 = (*(float *)(pbVar23 + 8) * local_d8 + *(float *)(pbVar23 + 0x18) * fStack_d4
                       + *(float *)(pbVar23 + 0x28) * local_d0) * *(float *)(pbVar23 + 0xa8);
              fVar43 = (local_d8 * *(float *)(pbVar23 + 0xc) +
                        fStack_d4 * *(float *)(pbVar23 + 0x1c) +
                       local_d0 * *(float *)(pbVar23 + 0x2c)) * *(float *)(pbVar23 + 0xac);
              fVar33 = (local_d8 * *(float *)(pbVar23 + 0x10) +
                        fStack_d4 * *(float *)(pbVar23 + 0x20) +
                       local_d0 * *(float *)(pbVar23 + 0x30)) * *(float *)(pbVar23 + 0xb0);
              local_d8 = *(float *)(pbVar23 + 8) * fVar34 + *(float *)(pbVar23 + 0xc) * fVar43 +
                         *(float *)(pbVar23 + 0x10) * fVar33;
              fStack_d4 = *(float *)(pbVar23 + 0x18) * fVar34 + *(float *)(pbVar23 + 0x1c) * fVar43
                          + *(float *)(pbVar23 + 0x20) * fVar33;
              local_d0 = *(float *)(pbVar23 + 0x28) * fVar34 + *(float *)(pbVar23 + 0x2c) * fVar43 +
                         *(float *)(pbVar23 + 0x30) * fVar33;
            }
            fVar34 = local_d8 * local_d8 + fStack_d4 * fStack_d4 + local_d0 * local_d0;
            fVar33 = SQRT(fVar34);
            if (NAN(fVar33)) {
              fVar33 = sqrtf(fVar34);
            }
            dVar31 = (double)fVar33;
            if (0.001 < dVar31) {
              iVar20 = -200;
LAB_011c3540:
              addRollingFrictionConstraint
                        ((btVector3 *)this,(int)&stack0xfffffffffffffff0 + iVar20,iVar7,iVar8,pbVar5
                         ,(btVector3 *)pbVar1,pbVar10,pbVar11,(btCollisionObject *)pbVar44,
                         SUB84(dVar31,0),0.0,0.0);
            }
          }
        }
        fVar33 = local_c4;
        if ((((byte)param_2[0x40] >> 5 & 1) == 0) ||
           (param_1[lVar15 * 0xc0 + 0x80] == (btPersistentManifold)0x0)) {
          fVar34 = *(float *)pbVar14;
          fVar33 = *(float *)pbVar17;
          fVar32 = fVar30 * (fVar38 - fVar37) + (fVar42 - fVar40) * fVar39 +
                   fVar32 * (fVar36 - fVar41);
          fVar43 = *(float *)pbVar18;
          fVar40 = (fVar42 - fVar40) - fVar32 * fVar33;
          fVar30 = (fVar36 - fVar41) - fVar43 * fVar32;
          fVar32 = (fVar38 - fVar37) - fVar34 * fVar32;
          pbVar24 = param_1 + lVar15 * 0xc0 + 0xa4;
          *(float *)pbVar24 = fVar32;
          pbVar29 = param_1 + lVar15 * 0xc0 + 0xa8;
          *(float *)pbVar29 = fVar40;
          pbVar27 = param_1 + lVar15 * 0xc0 + 0xac;
          *(float *)pbVar27 = fVar30;
          pbVar21 = param_1 + lVar15 * 0xc0 + 0xb0;
          *(undefined4 *)pbVar21 = 0;
          if (((*(uint *)(param_2 + 0x40) >> 6 & 1) != 0) ||
             (fVar30 = fVar32 * fVar32 + fVar40 * fVar40 + fVar30 * fVar30, fVar30 <= 1.1920929e-07)
             ) {
            pbVar2 = param_1 + lVar15 * 0xc0 + 0xb4;
            if (ABS(fVar43) <= 0.70710677) {
              fVar32 = fVar34 * fVar34 + fVar33 * fVar33;
              fVar30 = SQRT(fVar32);
              if (NAN(fVar30)) {
                fVar30 = sqrtf(fVar32);
              }
              fVar30 = 1.0 / fVar30;
              fVar34 = -(*(float *)pbVar17 * fVar30);
              *(float *)pbVar24 = fVar34;
              fVar33 = fVar30 * *(float *)pbVar14;
              *(float *)pbVar29 = fVar33;
              *(undefined4 *)pbVar27 = 0;
              fVar32 = fVar32 * fVar30;
              fVar41 = -(fVar33 * *(float *)pbVar18);
              fVar40 = *(float *)pbVar18 * fVar34;
              fVar30 = 0.0;
            }
            else {
              fVar41 = fVar43 * fVar43 + fVar33 * fVar33;
              fVar30 = SQRT(fVar41);
              if (NAN(fVar30)) {
                fVar30 = sqrtf(fVar41);
              }
              *(undefined4 *)pbVar24 = 0;
              fVar30 = 1.0 / fVar30;
              fVar41 = fVar41 * fVar30;
              fVar33 = -(fVar30 * *(float *)pbVar18);
              *(float *)pbVar29 = fVar33;
              fVar30 = fVar30 * *(float *)pbVar17;
              *(float *)pbVar27 = fVar30;
              fVar34 = 0.0;
              fVar40 = -(fVar30 * *(float *)pbVar14);
              fVar32 = *(float *)pbVar14 * fVar33;
            }
            fVar37 = local_c4;
            *(float *)pbVar2 = fVar41;
            pbVar17 = param_1 + lVar15 * 0xc0 + 0xb8;
            *(float *)pbVar17 = fVar40;
            pbVar14 = param_1 + lVar15 * 0xc0 + 0xbc;
            *(float *)pbVar14 = fVar32;
            if (((byte)pbVar22[0xb8] & 1) != 0) {
              fVar32 = (*(float *)(pbVar22 + 8) * fVar34 + *(float *)(pbVar22 + 0x18) * fVar33 +
                       *(float *)(pbVar22 + 0x28) * fVar30) * *(float *)(pbVar22 + 0xa8);
              fVar40 = (fVar34 * *(float *)(pbVar22 + 0xc) + fVar33 * *(float *)(pbVar22 + 0x1c) +
                       fVar30 * *(float *)(pbVar22 + 0x2c)) * *(float *)(pbVar22 + 0xac);
              fVar30 = (fVar34 * *(float *)(pbVar22 + 0x10) + fVar33 * *(float *)(pbVar22 + 0x20) +
                       fVar30 * *(float *)(pbVar22 + 0x30)) * *(float *)(pbVar22 + 0xb0);
              fVar34 = *(float *)(pbVar22 + 8) * fVar32 + *(float *)(pbVar22 + 0xc) * fVar40 +
                       *(float *)(pbVar22 + 0x10) * fVar30;
              fVar33 = *(float *)(pbVar22 + 0x18) * fVar32 + *(float *)(pbVar22 + 0x1c) * fVar40 +
                       *(float *)(pbVar22 + 0x20) * fVar30;
              fVar30 = *(float *)(pbVar22 + 0x28) * fVar32 + *(float *)(pbVar22 + 0x2c) * fVar40 +
                       *(float *)(pbVar22 + 0x30) * fVar30;
              *(float *)pbVar24 = fVar34;
              *(float *)pbVar29 = fVar33;
              *(float *)pbVar27 = fVar30;
              *(undefined4 *)pbVar21 = 0;
            }
            if (((byte)pbVar23[0xb8] & 1) != 0) {
              fVar41 = *(float *)(pbVar23 + 0x18);
              fVar42 = *(float *)(pbVar23 + 0x1c);
              fVar43 = *(float *)(pbVar23 + 0x20);
              fVar36 = *(float *)(pbVar23 + 0x28);
              fVar38 = *(float *)(pbVar23 + 0x2c);
              fVar35 = *(float *)(pbVar23 + 0x30);
              fVar32 = (*(float *)(pbVar23 + 8) * fVar34 + fVar41 * fVar33 + fVar36 * fVar30) *
                       *(float *)(pbVar23 + 0xa8);
              fVar40 = (fVar34 * *(float *)(pbVar23 + 0xc) + fVar33 * fVar42 + fVar30 * fVar38) *
                       *(float *)(pbVar23 + 0xac);
              fVar30 = (fVar34 * *(float *)(pbVar23 + 0x10) + fVar33 * fVar43 + fVar30 * fVar35) *
                       *(float *)(pbVar23 + 0xb0);
              *(float *)pbVar24 =
                   *(float *)(pbVar23 + 8) * fVar32 + *(float *)(pbVar23 + 0xc) * fVar40 +
                   *(float *)(pbVar23 + 0x10) * fVar30;
              *(float *)pbVar29 = fVar41 * fVar32 + fVar42 * fVar40 + fVar43 * fVar30;
              *(float *)pbVar27 = fVar36 * fVar32 + fVar38 * fVar40 + fVar35 * fVar30;
              *(undefined4 *)pbVar21 = 0;
            }
            addFrictionConstraint
                      ((btVector3 *)this,(int)pbVar24,iVar7,iVar8,pbVar5,(btVector3 *)pbVar1,
                       (btVector3 *)&local_b0,(btCollisionObject *)&local_c0,
                       (btCollisionObject *)pbVar44,local_c4,0.0,0.0);
            uVar12 = *(uint *)(param_2 + 0x40);
            if ((uVar12 >> 4 & 1) != 0) {
              if (((byte)pbVar22[0xb8] & 1) != 0) {
                fVar30 = *(float *)pbVar2;
                fVar32 = *(float *)pbVar17;
                fVar40 = *(float *)(pbVar22 + 0x18);
                fVar41 = *(float *)(pbVar22 + 0x1c);
                fVar38 = *(float *)(pbVar22 + 0x20);
                fVar34 = *(float *)pbVar14;
                fVar42 = *(float *)(pbVar22 + 0x28);
                fVar36 = *(float *)(pbVar22 + 0x2c);
                fVar43 = *(float *)(pbVar22 + 0x30);
                fVar35 = (*(float *)(pbVar22 + 8) * fVar30 + fVar40 * fVar32 + fVar42 * fVar34) *
                         *(float *)(pbVar22 + 0xa8);
                fVar33 = (fVar30 * *(float *)(pbVar22 + 0xc) + fVar32 * fVar41 + fVar34 * fVar36) *
                         *(float *)(pbVar22 + 0xac);
                fVar30 = (fVar30 * *(float *)(pbVar22 + 0x10) + fVar32 * fVar38 + fVar34 * fVar43) *
                         *(float *)(pbVar22 + 0xb0);
                *(float *)pbVar2 =
                     *(float *)(pbVar22 + 8) * fVar35 + *(float *)(pbVar22 + 0xc) * fVar33 +
                     *(float *)(pbVar22 + 0x10) * fVar30;
                *(float *)pbVar17 = fVar40 * fVar35 + fVar41 * fVar33 + fVar38 * fVar30;
                *(float *)pbVar14 = fVar42 * fVar35 + fVar36 * fVar33 + fVar43 * fVar30;
                *(undefined4 *)(param_1 + lVar15 * 0xc0 + 0xc0) = 0;
              }
              if (((byte)pbVar23[0xb8] & 1) != 0) {
                fVar30 = *(float *)pbVar2;
                fVar32 = *(float *)pbVar17;
                fVar41 = *(float *)(pbVar23 + 0x18);
                fVar42 = *(float *)(pbVar23 + 0x1c);
                fVar43 = *(float *)(pbVar23 + 0x20);
                fVar34 = *(float *)pbVar14;
                fVar36 = *(float *)(pbVar23 + 0x28);
                fVar38 = *(float *)(pbVar23 + 0x2c);
                fVar35 = *(float *)(pbVar23 + 0x30);
                fVar33 = (*(float *)(pbVar23 + 8) * fVar30 + fVar41 * fVar32 + fVar36 * fVar34) *
                         *(float *)(pbVar23 + 0xa8);
                fVar40 = (fVar30 * *(float *)(pbVar23 + 0xc) + fVar32 * fVar42 + fVar34 * fVar38) *
                         *(float *)(pbVar23 + 0xac);
                fVar30 = (fVar30 * *(float *)(pbVar23 + 0x10) + fVar32 * fVar43 + fVar34 * fVar35) *
                         *(float *)(pbVar23 + 0xb0);
                *(float *)pbVar2 =
                     *(float *)(pbVar23 + 8) * fVar33 + *(float *)(pbVar23 + 0xc) * fVar40 +
                     *(float *)(pbVar23 + 0x10) * fVar30;
                *(float *)pbVar17 = fVar41 * fVar33 + fVar42 * fVar40 + fVar43 * fVar30;
                *(float *)pbVar14 = fVar36 * fVar33 + fVar38 * fVar40 + fVar35 * fVar30;
                *(undefined4 *)(param_1 + lVar15 * 0xc0 + 0xc0) = 0;
              }
              addFrictionConstraint
                        ((btVector3 *)this,(int)pbVar2,iVar7,iVar8,pbVar5,(btVector3 *)pbVar1,
                         (btVector3 *)&local_b0,(btCollisionObject *)&local_c0,
                         (btCollisionObject *)pbVar44,fVar37,0.0,0.0);
              uVar12 = *(uint *)(param_2 + 0x40);
            }
            if (((uVar12 ^ 0xffffffff) & 0x50) == 0) {
              param_1[lVar15 * 0xc0 + 0x80] = (btPersistentManifold)0x1;
            }
          }
          else {
            fVar32 = SQRT(fVar30);
            if (NAN(fVar32)) {
              fVar32 = sqrtf(fVar30);
            }
            fVar30 = local_c4;
            fVar32 = 1.0 / fVar32;
            fVar33 = fVar32 * *(float *)pbVar24;
            *(float *)pbVar24 = fVar33;
            fVar34 = fVar32 * *(float *)pbVar29;
            *(float *)pbVar29 = fVar34;
            fVar32 = fVar32 * *(float *)pbVar27;
            *(float *)pbVar27 = fVar32;
            if (((byte)pbVar22[0xb8] & 1) != 0) {
              fVar40 = (*(float *)(pbVar22 + 8) * fVar33 + *(float *)(pbVar22 + 0x18) * fVar34 +
                       fVar32 * *(float *)(pbVar22 + 0x28)) * *(float *)(pbVar22 + 0xa8);
              fVar41 = (fVar33 * *(float *)(pbVar22 + 0xc) + fVar34 * *(float *)(pbVar22 + 0x1c) +
                       fVar32 * *(float *)(pbVar22 + 0x2c)) * *(float *)(pbVar22 + 0xac);
              fVar32 = (fVar33 * *(float *)(pbVar22 + 0x10) + fVar34 * *(float *)(pbVar22 + 0x20) +
                       fVar32 * *(float *)(pbVar22 + 0x30)) * *(float *)(pbVar22 + 0xb0);
              fVar33 = *(float *)(pbVar22 + 8) * fVar40 + *(float *)(pbVar22 + 0xc) * fVar41 +
                       *(float *)(pbVar22 + 0x10) * fVar32;
              fVar34 = *(float *)(pbVar22 + 0x18) * fVar40 + *(float *)(pbVar22 + 0x1c) * fVar41 +
                       *(float *)(pbVar22 + 0x20) * fVar32;
              fVar32 = *(float *)(pbVar22 + 0x28) * fVar40 + *(float *)(pbVar22 + 0x2c) * fVar41 +
                       *(float *)(pbVar22 + 0x30) * fVar32;
              *(float *)pbVar24 = fVar33;
              *(float *)pbVar29 = fVar34;
              *(float *)pbVar27 = fVar32;
              *(undefined4 *)pbVar21 = 0;
            }
            if (((byte)pbVar23[0xb8] & 1) != 0) {
              fVar37 = *(float *)(pbVar23 + 0x18);
              fVar42 = *(float *)(pbVar23 + 0x1c);
              fVar43 = *(float *)(pbVar23 + 0x20);
              fVar36 = *(float *)(pbVar23 + 0x28);
              fVar38 = *(float *)(pbVar23 + 0x2c);
              fVar35 = *(float *)(pbVar23 + 0x30);
              fVar40 = (*(float *)(pbVar23 + 8) * fVar33 + fVar37 * fVar34 + fVar36 * fVar32) *
                       *(float *)(pbVar23 + 0xa8);
              fVar41 = (fVar33 * *(float *)(pbVar23 + 0xc) + fVar34 * fVar42 + fVar32 * fVar38) *
                       *(float *)(pbVar23 + 0xac);
              fVar32 = (fVar33 * *(float *)(pbVar23 + 0x10) + fVar34 * fVar43 + fVar32 * fVar35) *
                       *(float *)(pbVar23 + 0xb0);
              *(float *)pbVar24 =
                   *(float *)(pbVar23 + 8) * fVar40 + *(float *)(pbVar23 + 0xc) * fVar41 +
                   *(float *)(pbVar23 + 0x10) * fVar32;
              *(float *)pbVar29 = fVar37 * fVar40 + fVar42 * fVar41 + fVar43 * fVar32;
              *(float *)pbVar27 = fVar36 * fVar40 + fVar38 * fVar41 + fVar35 * fVar32;
              *(undefined4 *)pbVar21 = 0;
            }
            addFrictionConstraint
                      ((btVector3 *)this,(int)pbVar24,iVar7,iVar8,pbVar5,(btVector3 *)pbVar1,
                       (btVector3 *)&local_b0,(btCollisionObject *)&local_c0,
                       (btCollisionObject *)pbVar44,local_c4,0.0,0.0);
            if (((byte)param_2[0x40] >> 4 & 1) != 0) {
              fVar34 = *(float *)pbVar29 * *(float *)pbVar18 - *(float *)pbVar27 * *(float *)pbVar17
              ;
              fVar33 = *(float *)pbVar27 * *(float *)pbVar14 - *(float *)pbVar18 * *(float *)pbVar24
              ;
              fVar32 = *(float *)pbVar17 * *(float *)pbVar24 - *(float *)pbVar29 * *(float *)pbVar14
              ;
              pbVar17 = param_1 + lVar15 * 0xc0 + 0xb8;
              *(float *)pbVar17 = fVar33;
              fVar33 = fVar34 * fVar34 + fVar33 * fVar33 + fVar32 * fVar32;
              pbVar14 = param_1 + lVar15 * 0xc0 + 0xb4;
              *(float *)pbVar14 = fVar34;
              pbVar21 = param_1 + lVar15 * 0xc0 + 0xbc;
              *(float *)pbVar21 = fVar32;
              fVar32 = SQRT(fVar33);
              pbVar18 = param_1 + lVar15 * 0xc0 + 0xc0;
              *(undefined4 *)pbVar18 = 0;
              if (NAN(fVar32)) {
                fVar32 = sqrtf(fVar33);
              }
              fVar32 = 1.0 / fVar32;
              fVar33 = fVar32 * *(float *)pbVar14;
              *(float *)pbVar14 = fVar33;
              fVar34 = fVar32 * *(float *)pbVar17;
              *(float *)pbVar17 = fVar34;
              fVar32 = fVar32 * *(float *)pbVar21;
              *(float *)pbVar21 = fVar32;
              if (((byte)pbVar22[0xb8] & 1) != 0) {
                fVar40 = (*(float *)(pbVar22 + 8) * fVar33 + *(float *)(pbVar22 + 0x18) * fVar34 +
                         fVar32 * *(float *)(pbVar22 + 0x28)) * *(float *)(pbVar22 + 0xa8);
                fVar41 = (fVar33 * *(float *)(pbVar22 + 0xc) + fVar34 * *(float *)(pbVar22 + 0x1c) +
                         fVar32 * *(float *)(pbVar22 + 0x2c)) * *(float *)(pbVar22 + 0xac);
                fVar32 = (fVar33 * *(float *)(pbVar22 + 0x10) + fVar34 * *(float *)(pbVar22 + 0x20)
                         + fVar32 * *(float *)(pbVar22 + 0x30)) * *(float *)(pbVar22 + 0xb0);
                fVar33 = *(float *)(pbVar22 + 8) * fVar40 + *(float *)(pbVar22 + 0xc) * fVar41 +
                         *(float *)(pbVar22 + 0x10) * fVar32;
                fVar34 = *(float *)(pbVar22 + 0x18) * fVar40 + *(float *)(pbVar22 + 0x1c) * fVar41 +
                         *(float *)(pbVar22 + 0x20) * fVar32;
                fVar32 = *(float *)(pbVar22 + 0x28) * fVar40 + *(float *)(pbVar22 + 0x2c) * fVar41 +
                         *(float *)(pbVar22 + 0x30) * fVar32;
                *(float *)pbVar14 = fVar33;
                *(float *)pbVar17 = fVar34;
                *(float *)pbVar21 = fVar32;
                *(undefined4 *)pbVar18 = 0;
              }
              if (((byte)pbVar23[0xb8] & 1) != 0) {
                fVar37 = *(float *)(pbVar23 + 0x18);
                fVar42 = *(float *)(pbVar23 + 0x1c);
                fVar43 = *(float *)(pbVar23 + 0x20);
                fVar36 = *(float *)(pbVar23 + 0x28);
                fVar38 = *(float *)(pbVar23 + 0x2c);
                fVar35 = *(float *)(pbVar23 + 0x30);
                fVar40 = (*(float *)(pbVar23 + 8) * fVar33 + fVar37 * fVar34 + fVar36 * fVar32) *
                         *(float *)(pbVar23 + 0xa8);
                fVar41 = (fVar33 * *(float *)(pbVar23 + 0xc) + fVar34 * fVar42 + fVar32 * fVar38) *
                         *(float *)(pbVar23 + 0xac);
                fVar32 = (fVar33 * *(float *)(pbVar23 + 0x10) + fVar34 * fVar43 + fVar32 * fVar35) *
                         *(float *)(pbVar23 + 0xb0);
                *(float *)pbVar14 =
                     *(float *)(pbVar23 + 8) * fVar40 + *(float *)(pbVar23 + 0xc) * fVar41 +
                     *(float *)(pbVar23 + 0x10) * fVar32;
                *(float *)pbVar17 = fVar37 * fVar40 + fVar42 * fVar41 + fVar43 * fVar32;
                *(float *)pbVar21 = fVar36 * fVar40 + fVar38 * fVar41 + fVar35 * fVar32;
                *(undefined4 *)pbVar18 = 0;
              }
              addFrictionConstraint
                        ((btVector3 *)this,(int)pbVar14,iVar7,iVar8,pbVar5,(btVector3 *)pbVar1,
                         (btVector3 *)&local_b0,(btCollisionObject *)&local_c0,
                         (btCollisionObject *)pbVar44,fVar30,0.0,0.0);
            }
          }
        }
        else {
          pbVar14 = param_1 + lVar15 * 0xc0;
          addFrictionConstraint
                    ((btVector3 *)this,(int)pbVar14 + 0xa4,iVar7,iVar8,pbVar5,(btVector3 *)pbVar1,
                     (btVector3 *)&local_b0,(btCollisionObject *)&local_c0,
                     (btCollisionObject *)pbVar44,local_c4,*(float *)(pbVar14 + 0x90),
                     *(float *)(pbVar14 + 0x98));
          if (((byte)param_2[0x40] >> 4 & 1) != 0) {
            pbVar14 = param_1 + lVar15 * 0xc0;
            addFrictionConstraint
                      ((btVector3 *)this,(int)pbVar14 + 0xb4,iVar7,iVar8,pbVar5,(btVector3 *)pbVar1,
                       (btVector3 *)&local_b0,(btCollisionObject *)&local_c0,
                       (btCollisionObject *)pbVar44,fVar33,*(float *)(pbVar14 + 0x94),
                       *(float *)(pbVar14 + 0x9c));
          }
        }
        setFrictionConstraintImpulse(this,pbVar25,iVar7,iVar8,pbVar1,param_2);
        iVar20 = *(int *)(param_1 + 0x318);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar20);
  }
  return;
}

