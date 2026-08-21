
/* btSequentialImpulseConstraintSolver::solveGroupCacheFriendlyFinish(btCollisionObject**, int,
   btContactSolverInfo const&) */

undefined4 __thiscall
btSequentialImpulseConstraintSolver::solveGroupCacheFriendlyFinish
          (btSequentialImpulseConstraintSolver *this,btCollisionObject **param_1,int param_2,
          btContactSolverInfo *param_3)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (((*(uint *)(param_3 + 0x40) >> 2 & 1) != 0) &&
     (uVar2 = (ulong)*(uint *)(this + 0x2c), 0 < (int)*(uint *)(this + 0x2c))) {
    lVar3 = *(long *)(this + 0x78);
    if ((*(uint *)(param_3 + 0x40) >> 4 & 1) == 0) {
      piVar5 = (int *)(*(long *)(this + 0x38) + 0x94);
      do {
        lVar7 = *(long *)(piVar5 + -3);
        uVar2 = uVar2 - 1;
        *(int *)(lVar7 + 0x7c) = piVar5[-0xc];
        iVar4 = *piVar5;
        piVar5 = piVar5 + 0x28;
        *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(lVar3 + (long)iVar4 * 0xa0 + 100);
      } while (uVar2 != 0);
    }
    else {
      piVar5 = (int *)(*(long *)(this + 0x38) + 0x94);
      do {
        lVar7 = *(long *)(piVar5 + -3);
        uVar2 = uVar2 - 1;
        *(int *)(lVar7 + 0x7c) = piVar5[-0xc];
        iVar4 = *piVar5;
        piVar5 = piVar5 + 0x28;
        lVar6 = lVar3 + (long)iVar4 * 0xa0;
        *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(lVar6 + 100);
        *(undefined4 *)(lVar7 + 0x84) = *(undefined4 *)(lVar6 + 0x104);
      } while (uVar2 != 0);
    }
  }
  uVar2 = (ulong)*(uint *)(this + 0x4c);
  if (0 < (int)*(uint *)(this + 0x4c)) {
    lVar3 = 100;
    do {
      lVar6 = *(long *)(this + 0x58);
      pfVar1 = (float *)(lVar6 + lVar3);
      lVar7 = *(long *)(pfVar1 + 9);
      pfVar8 = *(float **)(lVar7 + 0x40);
      if (pfVar8 != (float *)0x0) {
        fVar11 = *pfVar1;
        fVar12 = pfVar1[-0x14];
        fVar13 = pfVar1[-0x13];
        lVar9 = *(long *)(lVar7 + 0x28);
        fVar16 = *(float *)(lVar9 + 0x17c);
        fVar14 = *(float *)(lVar9 + 0x180);
        fVar15 = 1.0 / *(float *)(param_3 + 0xc);
        *pfVar8 = *pfVar8 + pfVar1[-0x15] * fVar11 * *(float *)(lVar9 + 0x178) * fVar15;
        pfVar8[1] = fVar11 * fVar12 * fVar16 * fVar15 + pfVar8[1];
        pfVar8[2] = fVar11 * fVar13 * fVar14 * fVar15 + pfVar8[2];
        fVar11 = *pfVar1;
        fVar12 = pfVar1[-0xc];
        fVar13 = pfVar1[-0xb];
        lVar9 = *(long *)(lVar7 + 0x30);
        fVar16 = *(float *)(lVar9 + 0x17c);
        fVar14 = *(float *)(lVar9 + 0x180);
        fVar15 = 1.0 / *(float *)(param_3 + 0xc);
        pfVar8[8] = pfVar8[8] + pfVar1[-0xd] * fVar11 * *(float *)(lVar9 + 0x178) * fVar15;
        pfVar8[9] = fVar11 * fVar12 * fVar16 * fVar15 + pfVar8[9];
        pfVar8[10] = fVar11 * fVar13 * fVar14 * fVar15 + pfVar8[10];
        lVar9 = *(long *)(lVar7 + 0x28);
        fVar12 = pfVar1[-0x17];
        fVar11 = pfVar1[-0x18];
        fVar14 = *pfVar1;
        fVar15 = *(float *)(lVar9 + 600);
        fVar13 = *(float *)(lVar9 + 0x254);
        fVar16 = 1.0 / *(float *)(param_3 + 0xc);
        pfVar8[4] = pfVar8[4] + pfVar1[-0x19] * *(float *)(lVar9 + 0x250) * fVar14 * fVar16;
        pfVar8[5] = fVar11 * fVar13 * fVar14 * fVar16 + pfVar8[5];
        pfVar8[6] = fVar14 * fVar12 * fVar15 * fVar16 + pfVar8[6];
        lVar9 = *(long *)(lVar7 + 0x30);
        fVar12 = pfVar1[-0xf];
        fVar11 = pfVar1[-0x10];
        fVar14 = *pfVar1;
        fVar15 = *(float *)(lVar9 + 600);
        fVar13 = *(float *)(lVar9 + 0x254);
        fVar16 = 1.0 / *(float *)(param_3 + 0xc);
        pfVar8[0xc] = pfVar8[0xc] + pfVar1[-0x11] * *(float *)(lVar9 + 0x250) * fVar14 * fVar16;
        pfVar8[0xd] = fVar11 * fVar13 * fVar14 * fVar16 + pfVar8[0xd];
        pfVar8[0xe] = fVar14 * fVar12 * fVar15 * fVar16 + pfVar8[0xe];
      }
      fVar11 = *(float *)(lVar6 + lVar3);
      *(float *)(lVar7 + 0x38) = fVar11;
      if (*(float *)(lVar7 + 0x18) <= ABS(fVar11)) {
        *(undefined1 *)(lVar7 + 0x1c) = 0;
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + 0xa0;
    } while (uVar2 != 0);
  }
  iVar4 = *(int *)(this + 0xc);
  if (0 < iVar4) {
    lVar6 = *(long *)(this + 0x18);
    lVar3 = 0;
    lVar7 = 0xb0;
    do {
      lVar9 = *(long *)(lVar6 + lVar7 + 0x40);
      if (lVar9 != 0) {
        if (*(int *)(param_3 + 0x2c) == 0) {
          pfVar1 = (float *)(lVar6 + lVar7);
          fVar12 = pfVar1[-0x1b] + pfVar1[1];
          fVar11 = pfVar1[-0x1c] + *pfVar1;
          fVar13 = pfVar1[-0x1a] + pfVar1[2];
          pfVar1[4] = pfVar1[-0x18] + pfVar1[4];
          pfVar1[5] = pfVar1[-0x17] + pfVar1[5];
          *pfVar1 = fVar11;
          pfVar1[1] = fVar12;
          pfVar1[2] = fVar13;
          pfVar1[6] = pfVar1[-0x16] + pfVar1[6];
        }
        else {
          btSolverBody::writebackVelocityAndTransform
                    ((btSolverBody *)(lVar6 + lVar7 + -0xb0),*(float *)(param_3 + 0xc),
                     *(float *)(param_3 + 0x34));
          lVar6 = *(long *)(this + 0x18);
          pfVar1 = (float *)(lVar6 + lVar7);
          lVar9 = *(long *)(pfVar1 + 0x10);
          fVar11 = *pfVar1;
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
        }
        lVar6 = lVar6 + lVar7;
        fVar14 = *(float *)(lVar6 + 0x20);
        fVar15 = *(float *)(lVar6 + 0x24);
        fVar16 = *(float *)(lVar6 + 0x28);
        *(undefined4 *)(lVar9 + 0x160) = 0;
        *(int *)(lVar9 + 0x120) = *(int *)(lVar9 + 0x120) + 1;
        *(float *)(lVar9 + 0x154) = fVar11 + fVar14;
        *(float *)(lVar9 + 0x158) = fVar12 + fVar15;
        *(float *)(lVar9 + 0x15c) = fVar13 + fVar16;
        lVar6 = *(long *)(this + 0x18) + lVar7;
        fVar11 = *(float *)(lVar6 + 0x14);
        fVar12 = *(float *)(lVar6 + 0x34);
        fVar13 = *(float *)(lVar6 + 0x18);
        fVar14 = *(float *)(lVar6 + 0x38);
        lVar9 = *(long *)(lVar6 + 0x40);
        *(float *)(lVar9 + 0x164) = *(float *)(lVar6 + 0x10) + *(float *)(lVar6 + 0x30);
        *(float *)(lVar9 + 0x168) = fVar11 + fVar12;
        *(float *)(lVar9 + 0x16c) = fVar13 + fVar14;
        *(int *)(lVar9 + 0x120) = *(int *)(lVar9 + 0x120) + 1;
        *(undefined4 *)(lVar9 + 0x170) = 0;
        if (*(int *)(param_3 + 0x2c) != 0) {
          lVar6 = *(long *)(this + 0x18) + lVar7;
          lVar9 = *(long *)(lVar6 + 0x40);
          *(int *)(lVar9 + 0x120) = *(int *)(lVar9 + 0x120) + 1;
          uVar10 = *(undefined8 *)(lVar6 + -0xb0);
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar6 + -0xa8);
          *(undefined8 *)(lVar9 + 8) = uVar10;
          uVar10 = *(undefined8 *)(lVar6 + -0xa0);
          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar6 + -0x98);
          *(undefined8 *)(lVar9 + 0x18) = uVar10;
          uVar10 = *(undefined8 *)(lVar6 + -0x90);
          *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar6 + -0x88);
          *(undefined8 *)(lVar9 + 0x28) = uVar10;
          uVar10 = *(undefined8 *)(lVar6 + -0x80);
          *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(lVar6 + -0x78);
          *(undefined8 *)(lVar9 + 0x38) = uVar10;
        }
        lVar6 = *(long *)(this + 0x18);
        *(undefined4 *)(*(long *)(lVar6 + lVar7 + 0x40) + 0xe8) = 0xffffffff;
        iVar4 = *(int *)(this + 0xc);
      }
      lVar3 = lVar3 + 1;
      lVar7 = lVar7 + 0xf8;
    } while (lVar3 < iVar4);
  }
  if ((*(int *)(this + 0x2c) < 0) && (*(int *)(this + 0x30) < 0)) {
    if (*(void **)(this + 0x38) != (void *)0x0) {
      if (this[0x40] != (btSequentialImpulseConstraintSolver)0x0) {
        btAlignedFreeInternal(*(void **)(this + 0x38));
      }
      *(undefined8 *)(this + 0x38) = 0;
    }
    *(undefined8 *)(this + 0x38) = 0;
    this[0x40] = (btSequentialImpulseConstraintSolver)0x1;
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  if ((*(int *)(this + 0x4c) < 0) && (*(int *)(this + 0x50) < 0)) {
    if (*(void **)(this + 0x58) != (void *)0x0) {
      if (this[0x60] != (btSequentialImpulseConstraintSolver)0x0) {
        btAlignedFreeInternal(*(void **)(this + 0x58));
      }
      *(undefined8 *)(this + 0x58) = 0;
    }
    *(undefined8 *)(this + 0x58) = 0;
    this[0x60] = (btSequentialImpulseConstraintSolver)0x1;
    *(undefined4 *)(this + 0x50) = 0;
  }
  *(undefined4 *)(this + 0x4c) = 0;
  if ((*(int *)(this + 0x6c) < 0) && (*(int *)(this + 0x70) < 0)) {
    if (*(void **)(this + 0x78) != (void *)0x0) {
      if (this[0x80] != (btSequentialImpulseConstraintSolver)0x0) {
        btAlignedFreeInternal(*(void **)(this + 0x78));
      }
      *(undefined8 *)(this + 0x78) = 0;
    }
    *(undefined8 *)(this + 0x78) = 0;
    this[0x80] = (btSequentialImpulseConstraintSolver)0x1;
    *(undefined4 *)(this + 0x70) = 0;
  }
  *(undefined4 *)(this + 0x6c) = 0;
  if ((*(int *)(this + 0x8c) < 0) && (*(int *)(this + 0x90) < 0)) {
    if (*(void **)(this + 0x98) != (void *)0x0) {
      if (this[0xa0] != (btSequentialImpulseConstraintSolver)0x0) {
        btAlignedFreeInternal(*(void **)(this + 0x98));
      }
      *(undefined8 *)(this + 0x98) = 0;
    }
    *(undefined8 *)(this + 0x98) = 0;
    this[0xa0] = (btSequentialImpulseConstraintSolver)0x1;
    *(undefined4 *)(this + 0x90) = 0;
  }
  *(undefined4 *)(this + 0x8c) = 0;
  if ((*(int *)(this + 0xc) < 0) && (*(int *)(this + 0x10) < 0)) {
    if (*(void **)(this + 0x18) != (void *)0x0) {
      if (this[0x20] != (btSequentialImpulseConstraintSolver)0x0) {
        btAlignedFreeInternal(*(void **)(this + 0x18));
      }
      *(undefined8 *)(this + 0x18) = 0;
    }
    *(undefined8 *)(this + 0x18) = 0;
    this[0x20] = (btSequentialImpulseConstraintSolver)0x1;
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0xc) = 0;
  return 0;
}

