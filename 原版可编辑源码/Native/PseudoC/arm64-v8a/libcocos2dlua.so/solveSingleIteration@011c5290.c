
/* btSequentialImpulseConstraintSolver::solveSingleIteration(int, btCollisionObject**, int,
   btPersistentManifold**, int, btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*)
    */

undefined1  [16]
btSequentialImpulseConstraintSolver::solveSingleIteration
          (int param_1,btCollisionObject **param_2,int param_3,btPersistentManifold **param_4,
          int param_5,btTypedConstraint **param_6,int param_7,btContactSolverInfo *param_8,
          btIDebugDraw *param_9)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  btSequentialImpulseConstraintSolver *this;
  ulong uVar9;
  btSequentialImpulseConstraintSolver *this_00;
  btSolverConstraint *pbVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  
  plVar11 = (long *)(ulong)(uint)param_7;
  this = (btSequentialImpulseConstraintSolver *)(ulong)(uint)param_1;
  uVar16 = (ulong)param_8 & 0xffffffff;
  iVar7 = (int)param_2;
  this_00 = this;
  if (((byte)param_9[0x40] & 1) != 0) {
    uVar2 = *(uint *)(this + 0x4c);
    uVar3 = *(uint *)(this + 0x2c);
    uVar4 = *(uint *)(this + 0x6c);
    if (0 < (int)uVar2) {
      lVar13 = *(long *)(this + 0xd8);
      uVar15 = *(ulong *)(this + 0x130);
      uVar14 = 0;
      do {
        uVar5 = *(undefined4 *)(lVar13 + uVar14 * 4);
        uVar1 = uVar14 + 1;
        uVar6 = (int)uVar15 * 0x19660d + 0x3c6ef35f;
        uVar15 = (ulong)uVar6;
        uVar9 = uVar15;
        if (uVar1 < 0x10001) {
          uVar6 = uVar6 ^ uVar6 >> 0x10;
          uVar9 = (ulong)uVar6;
          if (uVar1 < 0x101) {
            uVar6 = uVar6 ^ uVar6 >> 8;
            uVar9 = (ulong)uVar6;
            if (uVar1 < 0x11) {
              uVar6 = uVar6 ^ uVar6 >> 4;
              uVar9 = (ulong)uVar6;
              if (uVar1 < 5) {
                uVar6 = uVar6 ^ uVar6 >> 2;
                uVar9 = (ulong)uVar6;
                if (uVar1 < 3) {
                  uVar9 = (ulong)(uVar6 ^ uVar6 >> 1);
                }
              }
            }
          }
        }
        iVar8 = 0;
        if (uVar1 != 0) {
          iVar8 = (int)(uVar9 / uVar1);
        }
        uVar6 = (int)uVar9 - iVar8 * (int)uVar1;
        this_00 = (btSequentialImpulseConstraintSolver *)
                  (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2);
        *(undefined4 *)(lVar13 + uVar14 * 4) = *(undefined4 *)(this_00 + lVar13);
        *(undefined4 *)(this_00 + lVar13) = uVar5;
        uVar14 = uVar1;
      } while (uVar2 != uVar1);
      *(ulong *)(this + 0x130) = uVar15;
    }
    if (iVar7 < *(int *)(param_9 + 0x14)) {
      if (0 < (int)uVar3) {
        lVar13 = *(long *)(this + 0xb8);
        uVar15 = *(ulong *)(this + 0x130);
        uVar14 = 0;
        do {
          uVar5 = *(undefined4 *)(lVar13 + uVar14 * 4);
          uVar1 = uVar14 + 1;
          uVar2 = (int)uVar15 * 0x19660d + 0x3c6ef35f;
          uVar15 = (ulong)uVar2;
          uVar9 = uVar15;
          if (uVar1 < 0x10001) {
            uVar2 = uVar2 ^ uVar2 >> 0x10;
            uVar9 = (ulong)uVar2;
            if (uVar1 < 0x101) {
              uVar2 = uVar2 ^ uVar2 >> 8;
              uVar9 = (ulong)uVar2;
              if (uVar1 < 0x11) {
                uVar2 = uVar2 ^ uVar2 >> 4;
                uVar9 = (ulong)uVar2;
                if (uVar1 < 5) {
                  uVar2 = uVar2 ^ uVar2 >> 2;
                  uVar9 = (ulong)uVar2;
                  if (uVar1 < 3) {
                    uVar9 = (ulong)(uVar2 ^ uVar2 >> 1);
                  }
                }
              }
            }
          }
          iVar8 = 0;
          if (uVar1 != 0) {
            iVar8 = (int)(uVar9 / uVar1);
          }
          uVar2 = (int)uVar9 - iVar8 * (int)uVar1;
          uVar9 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
          uVar2 = *(uint *)(lVar13 + uVar9);
          this_00 = (btSequentialImpulseConstraintSolver *)(ulong)uVar2;
          *(uint *)(lVar13 + uVar14 * 4) = uVar2;
          *(undefined4 *)(lVar13 + uVar9) = uVar5;
          uVar14 = uVar1;
        } while (uVar3 != uVar1);
        *(ulong *)(this + 0x130) = uVar15;
      }
      if (0 < (int)uVar4) {
        lVar13 = *(long *)(this + 0xf8);
        uVar15 = *(ulong *)(this + 0x130);
        uVar14 = 0;
        do {
          uVar5 = *(undefined4 *)(lVar13 + uVar14 * 4);
          uVar1 = uVar14 + 1;
          uVar2 = (int)uVar15 * 0x19660d + 0x3c6ef35f;
          uVar15 = (ulong)uVar2;
          uVar9 = uVar15;
          if (uVar1 < 0x10001) {
            uVar2 = uVar2 ^ uVar2 >> 0x10;
            uVar9 = (ulong)uVar2;
            if (uVar1 < 0x101) {
              uVar2 = uVar2 ^ uVar2 >> 8;
              uVar9 = (ulong)uVar2;
              if (uVar1 < 0x11) {
                uVar2 = uVar2 ^ uVar2 >> 4;
                uVar9 = (ulong)uVar2;
                if (uVar1 < 5) {
                  uVar2 = uVar2 ^ uVar2 >> 2;
                  uVar9 = (ulong)uVar2;
                  if (uVar1 < 3) {
                    uVar9 = (ulong)(uVar2 ^ uVar2 >> 1);
                  }
                }
              }
            }
          }
          iVar8 = 0;
          if (uVar1 != 0) {
            iVar8 = (int)(uVar9 / uVar1);
          }
          uVar2 = (int)uVar9 - iVar8 * (int)uVar1;
          uVar9 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
          *(undefined4 *)(lVar13 + uVar14 * 4) = *(undefined4 *)(lVar13 + uVar9);
          *(undefined4 *)(lVar13 + uVar9) = uVar5;
          uVar14 = uVar1;
        } while (uVar4 != uVar1);
        *(ulong *)(this + 0x130) = uVar15;
      }
    }
  }
  iVar8 = *(int *)(this + 0x4c);
  if (((byte)param_9[0x41] & 1) == 0) {
    if (0 < iVar8) {
      lVar13 = 0;
      do {
        lVar12 = (long)*(int *)(*(long *)(this + 0xd8) + lVar13 * 4);
        if (iVar7 < *(int *)(*(long *)(this + 0x58) + lVar12 * 0xa0 + 0x90)) {
          pbVar10 = (btSolverConstraint *)(*(long *)(this + 0x58) + lVar12 * 0xa0);
          this_00 = (btSequentialImpulseConstraintSolver *)
                    resolveSingleConstraintRowGeneric
                              (this_00,(btSolverBody *)
                                       (*(long *)(this + 0x18) +
                                       (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                               (btSolverBody *)
                               (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                               pbVar10);
          iVar8 = *(int *)(this + 0x4c);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar8);
    }
    if (iVar7 < *(int *)(param_9 + 0x14)) {
      if (0 < (int)param_8) {
        do {
          if (*(char *)(*plVar11 + 0x1c) != '\0') {
            iVar7 = getOrInitSolverBody(this,*(btCollisionObject **)(*plVar11 + 0x28),
                                        *(float *)(param_9 + 0xc));
            iVar8 = getOrInitSolverBody(this,*(btCollisionObject **)(*plVar11 + 0x30),
                                        *(float *)(param_9 + 0xc));
            this_00 = (btSequentialImpulseConstraintSolver *)
                      (**(code **)(*(long *)*plVar11 + 0x30))
                                (*(undefined4 *)(param_9 + 0xc),(long *)*plVar11,
                                 *(long *)(this + 0x18) + (long)iVar7 * 0xf8,
                                 *(long *)(this + 0x18) + (long)iVar8 * 0xf8);
          }
          uVar16 = uVar16 - 1;
          plVar11 = plVar11 + 1;
        } while (uVar16 != 0);
      }
      uVar2 = *(uint *)(this + 0x2c);
      if (0 < (int)uVar2) {
        uVar16 = 0;
        do {
          pbVar10 = (btSolverConstraint *)
                    (*(long *)(this + 0x38) +
                    (long)*(int *)(*(long *)(this + 0xb8) + uVar16 * 4) * 0xa0);
          this_00 = (btSequentialImpulseConstraintSolver *)
                    resolveSingleConstraintRowLowerLimit
                              (this_00,(btSolverBody *)
                                       (*(long *)(this + 0x18) +
                                       (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                               (btSolverBody *)
                               (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                               pbVar10);
          uVar16 = uVar16 + 1;
        } while (uVar2 != uVar16);
      }
      uVar2 = *(uint *)(this + 0x6c);
      if (0 < (int)uVar2) {
        uVar16 = 0;
        do {
          lVar13 = (long)*(int *)(*(long *)(this + 0xf8) + uVar16 * 4);
          fVar17 = *(float *)(*(long *)(this + 0x38) +
                              (long)*(int *)(*(long *)(this + 0x78) + lVar13 * 0xa0 + 0x94) * 0xa0 +
                             100);
          if (0.0 < fVar17) {
            pbVar10 = (btSolverConstraint *)(*(long *)(this + 0x78) + lVar13 * 0xa0);
            *(float *)(pbVar10 + 0x78) = -(fVar17 * *(float *)(pbVar10 + 0x68));
            *(float *)(pbVar10 + 0x7c) = fVar17 * *(float *)(pbVar10 + 0x68);
            this_00 = (btSequentialImpulseConstraintSolver *)
                      resolveSingleConstraintRowGeneric
                                (this_00,(btSolverBody *)
                                         (*(long *)(this + 0x18) +
                                         (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                                 (btSolverBody *)
                                 (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                                 pbVar10);
          }
          uVar16 = uVar16 + 1;
        } while (uVar2 != uVar16);
      }
      uVar16 = (ulong)*(uint *)(this + 0x8c);
      if (0 < (int)*(uint *)(this + 0x8c)) {
        lVar13 = 0;
        do {
          pbVar10 = (btSolverConstraint *)(*(long *)(this + 0x98) + lVar13);
          fVar17 = *(float *)(*(long *)(this + 0x38) + (long)*(int *)(pbVar10 + 0x94) * 0xa0 + 100);
          if (0.0 < fVar17) {
            fVar18 = *(float *)(pbVar10 + 0x68);
            fVar17 = fVar17 * fVar18;
            if (fVar17 <= fVar18) {
              fVar18 = fVar17;
            }
            *(float *)(pbVar10 + 0x78) = -fVar18;
            *(float *)(pbVar10 + 0x7c) = fVar18;
            this_00 = (btSequentialImpulseConstraintSolver *)
                      resolveSingleConstraintRowGeneric
                                (this_00,(btSolverBody *)
                                         (*(long *)(this + 0x18) +
                                         (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                                 (btSolverBody *)
                                 (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                                 pbVar10);
          }
          uVar16 = uVar16 - 1;
          lVar13 = lVar13 + 0xa0;
        } while (uVar16 != 0);
      }
    }
  }
  else {
    if (0 < iVar8) {
      lVar13 = 0;
      do {
        lVar12 = (long)*(int *)(*(long *)(this + 0xd8) + lVar13 * 4);
        if (iVar7 < *(int *)(*(long *)(this + 0x58) + lVar12 * 0xa0 + 0x90)) {
          pbVar10 = (btSolverConstraint *)(*(long *)(this + 0x58) + lVar12 * 0xa0);
          this_00 = (btSequentialImpulseConstraintSolver *)
                    resolveSingleConstraintRowGeneric
                              (this_00,(btSolverBody *)
                                       (*(long *)(this + 0x18) +
                                       (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                               (btSolverBody *)
                               (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                               pbVar10);
          iVar8 = *(int *)(this + 0x4c);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar8);
    }
    if (iVar7 < *(int *)(param_9 + 0x14)) {
      if (0 < (int)param_8) {
        do {
          if (*(char *)(*plVar11 + 0x1c) != '\0') {
            iVar7 = getOrInitSolverBody(this,*(btCollisionObject **)(*plVar11 + 0x28),
                                        *(float *)(param_9 + 0xc));
            iVar8 = getOrInitSolverBody(this,*(btCollisionObject **)(*plVar11 + 0x30),
                                        *(float *)(param_9 + 0xc));
            this_00 = (btSequentialImpulseConstraintSolver *)
                      (**(code **)(*(long *)*plVar11 + 0x30))
                                (*(undefined4 *)(param_9 + 0xc),(long *)*plVar11,
                                 *(long *)(this + 0x18) + (long)iVar7 * 0xf8,
                                 *(long *)(this + 0x18) + (long)iVar8 * 0xf8);
          }
          uVar16 = uVar16 - 1;
          plVar11 = plVar11 + 1;
        } while (uVar16 != 0);
      }
      uVar2 = *(uint *)(this + 0x2c);
      uVar3 = *(uint *)(param_9 + 0x40);
      if ((uVar3 >> 9 & 1) == 0) {
        if (0 < (int)uVar2) {
          uVar16 = 0;
          do {
            pbVar10 = (btSolverConstraint *)
                      (*(long *)(this + 0x38) +
                      (long)*(int *)(*(long *)(this + 0xb8) + uVar16 * 4) * 0xa0);
            this_00 = (btSequentialImpulseConstraintSolver *)
                      resolveSingleConstraintRowLowerLimit
                                (this_00,(btSolverBody *)
                                         (*(long *)(this + 0x18) +
                                         (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                                 (btSolverBody *)
                                 (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                                 pbVar10);
            uVar16 = uVar16 + 1;
          } while (uVar2 != uVar16);
        }
        uVar2 = *(uint *)(this + 0x6c);
        if (0 < (int)uVar2) {
          uVar16 = 0;
          do {
            lVar13 = (long)*(int *)(*(long *)(this + 0xf8) + uVar16 * 4);
            fVar17 = *(float *)(*(long *)(this + 0x38) +
                                (long)*(int *)(*(long *)(this + 0x78) + lVar13 * 0xa0 + 0x94) * 0xa0
                               + 100);
            if (0.0 < fVar17) {
              pbVar10 = (btSolverConstraint *)(*(long *)(this + 0x78) + lVar13 * 0xa0);
              *(float *)(pbVar10 + 0x78) = -(fVar17 * *(float *)(pbVar10 + 0x68));
              *(float *)(pbVar10 + 0x7c) = fVar17 * *(float *)(pbVar10 + 0x68);
              this_00 = (btSequentialImpulseConstraintSolver *)
                        resolveSingleConstraintRowGeneric
                                  (this_00,(btSolverBody *)
                                           (*(long *)(this + 0x18) +
                                           (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                                   (btSolverBody *)
                                   (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                                   pbVar10);
            }
            uVar16 = uVar16 + 1;
          } while (uVar2 != uVar16);
        }
        uVar16 = (ulong)*(uint *)(this + 0x8c);
        if (0 < (int)*(uint *)(this + 0x8c)) {
          lVar13 = 0;
          do {
            pbVar10 = (btSolverConstraint *)(*(long *)(this + 0x98) + lVar13);
            fVar17 = *(float *)(*(long *)(this + 0x38) + (long)*(int *)(pbVar10 + 0x94) * 0xa0 + 100
                               );
            if (0.0 < fVar17) {
              fVar18 = *(float *)(pbVar10 + 0x68);
              fVar17 = fVar17 * fVar18;
              if (fVar17 <= fVar18) {
                fVar18 = fVar17;
              }
              *(float *)(pbVar10 + 0x78) = -fVar18;
              *(float *)(pbVar10 + 0x7c) = fVar18;
              this_00 = (btSequentialImpulseConstraintSolver *)
                        resolveSingleConstraintRowGeneric
                                  (this_00,(btSolverBody *)
                                           (*(long *)(this + 0x18) +
                                           (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                                   (btSolverBody *)
                                   (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                                   pbVar10);
            }
            uVar16 = uVar16 - 1;
            lVar13 = lVar13 + 0xa0;
          } while (uVar16 != 0);
        }
      }
      else if (0 < (int)uVar2) {
        lVar13 = 0;
        uVar16 = 0;
        do {
          pbVar10 = (btSolverConstraint *)
                    (*(long *)(this + 0x38) +
                    (long)*(int *)(*(long *)(this + 0xb8) + uVar16 * 4) * 0xa0);
          this_00 = (btSequentialImpulseConstraintSolver *)
                    resolveSingleConstraintRowLowerLimit
                              (this_00,(btSolverBody *)
                                       (*(long *)(this + 0x18) +
                                       (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                               (btSolverBody *)
                               (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                               pbVar10);
          fVar17 = *(float *)(pbVar10 + 100);
          if (0.0 < fVar17) {
            pbVar10 = (btSolverConstraint *)
                      (*(long *)(this + 0x78) +
                      (long)*(int *)(*(long *)(this + 0xf8) + lVar13) * 0xa0);
            *(float *)(pbVar10 + 0x78) = -(fVar17 * *(float *)(pbVar10 + 0x68));
            *(float *)(pbVar10 + 0x7c) = fVar17 * *(float *)(pbVar10 + 0x68);
            this_00 = (btSequentialImpulseConstraintSolver *)
                      resolveSingleConstraintRowGeneric
                                (this_00,(btSolverBody *)
                                         (*(long *)(this + 0x18) +
                                         (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                                 (btSolverBody *)
                                 (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                                 pbVar10);
          }
          if ((((byte)param_9[0x40] >> 4 & 1) != 0) && (0.0 < fVar17)) {
            pbVar10 = (btSolverConstraint *)
                      (*(long *)(this + 0x78) +
                      (long)*(int *)(*(long *)(this + 0xf8) + lVar13 + 4) * 0xa0);
            *(float *)(pbVar10 + 0x78) = -(fVar17 * *(float *)(pbVar10 + 0x68));
            *(float *)(pbVar10 + 0x7c) = fVar17 * *(float *)(pbVar10 + 0x68);
            this_00 = (btSequentialImpulseConstraintSolver *)
                      resolveSingleConstraintRowGeneric
                                (this_00,(btSolverBody *)
                                         (*(long *)(this + 0x18) +
                                         (long)*(int *)(pbVar10 + 0x98) * 0xf8),
                                 (btSolverBody *)
                                 (*(long *)(this + 0x18) + (long)*(int *)(pbVar10 + 0x9c) * 0xf8),
                                 pbVar10);
          }
          uVar16 = uVar16 + 1;
          lVar13 = lVar13 + (ulong)((uVar3 >> 4 & 1) + 1) * 4;
        } while (uVar2 != uVar16);
      }
    }
  }
  return ZEXT816(0);
}

