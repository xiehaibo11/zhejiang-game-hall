
/* btSequentialImpulseConstraintSolver::setFrictionConstraintImpulse(btSolverConstraint&, int, int,
   btManifoldPoint&, btContactSolverInfo const&) */

void __thiscall
btSequentialImpulseConstraintSolver::setFrictionConstraintImpulse
          (btSequentialImpulseConstraintSolver *this,btSolverConstraint *param_1,int param_2,
          int param_3,btManifoldPoint *param_4,btContactSolverInfo *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
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
  
  lVar3 = *(long *)(this + 0x18);
  plVar7 = (long *)(lVar3 + (long)param_2 * 0xf8 + 0xf0);
  lVar9 = *plVar7;
  plVar6 = (long *)(lVar3 + (long)param_3 * 0xf8 + 0xf0);
  lVar5 = *plVar6;
  lVar4 = *(long *)(this + 0x78);
  uVar1 = *(uint *)(param_5 + 0x40);
  lVar11 = (long)*(int *)(param_1 + 0x94);
  if ((uVar1 >> 2 & 1) == 0) {
    *(undefined4 *)(lVar4 + lVar11 * 0xa0 + 100) = 0;
  }
  else {
    fVar12 = *(float *)(param_4 + 0x80) * *(float *)(param_5 + 0x3c);
    pfVar10 = (float *)(lVar4 + lVar11 * 0xa0 + 100);
    *pfVar10 = fVar12;
    if (lVar9 != 0) {
      lVar8 = lVar4 + lVar11 * 0xa0;
      fVar13 = *(float *)(lVar9 + 0x174);
      fVar14 = *(float *)(lVar8 + 0x14);
      fVar15 = *(float *)(lVar8 + 0x18);
      fVar17 = *(float *)(lVar9 + 0x17c);
      fVar16 = *(float *)(lVar9 + 0x180);
      lVar2 = lVar3 + (long)param_2 * 0xf8;
      *(float *)(lVar2 + 0x40) =
           fVar12 * fVar13 * *(float *)(lVar8 + 0x10) * *(float *)(lVar9 + 0x178) *
           *(float *)(lVar2 + 0x70) + *(float *)(lVar2 + 0x40);
      *(float *)(lVar2 + 0x44) =
           fVar12 * fVar13 * fVar14 * fVar17 * *(float *)(lVar2 + 0x74) + *(float *)(lVar2 + 0x44);
      *(float *)(lVar2 + 0x48) =
           fVar12 * fVar13 * fVar15 * fVar16 * *(float *)(lVar2 + 0x78) + *(float *)(lVar2 + 0x48);
      fVar13 = *(float *)(lVar8 + 0x44);
      fVar14 = *(float *)(lVar8 + 0x48);
      *(float *)(lVar2 + 0x50) =
           fVar12 * *(float *)(lVar2 + 0x60) * *(float *)(lVar8 + 0x40) + *(float *)(lVar2 + 0x50);
      *(float *)(lVar2 + 0x54) =
           fVar12 * *(float *)(lVar2 + 100) * fVar13 + *(float *)(lVar2 + 0x54);
      *(float *)(lVar2 + 0x58) =
           fVar12 * *(float *)(lVar2 + 0x68) * fVar14 + *(float *)(lVar2 + 0x58);
    }
    if ((lVar5 != 0) && (*plVar6 != 0)) {
      fVar13 = *pfVar10;
      lVar2 = lVar4 + lVar11 * 0xa0;
      fVar12 = *(float *)(lVar5 + 0x174);
      lVar8 = lVar3 + (long)param_3 * 0xf8;
      fVar17 = *(float *)(lVar2 + 0x30);
      fVar18 = *(float *)(lVar2 + 0x34);
      fVar19 = *(float *)(lVar2 + 0x38);
      fVar14 = *(float *)(lVar5 + 0x178);
      fVar15 = *(float *)(lVar5 + 0x17c);
      fVar16 = *(float *)(lVar5 + 0x180);
      fVar20 = -fVar13;
      fVar22 = *(float *)(lVar2 + 0x54);
      fVar21 = *(float *)(lVar2 + 0x58);
      *(float *)(lVar8 + 0x50) =
           *(float *)(lVar8 + 0x50) - *(float *)(lVar2 + 0x50) * *(float *)(lVar8 + 0x60) * fVar20;
      *(float *)(lVar8 + 0x54) =
           *(float *)(lVar8 + 0x54) - fVar22 * *(float *)(lVar8 + 100) * fVar20;
      *(float *)(lVar8 + 0x58) =
           *(float *)(lVar8 + 0x58) - fVar21 * *(float *)(lVar8 + 0x68) * fVar20;
      *(float *)(lVar8 + 0x40) =
           fVar13 * fVar12 * fVar17 * fVar14 * *(float *)(lVar8 + 0x70) + *(float *)(lVar8 + 0x40);
      *(float *)(lVar8 + 0x44) =
           fVar13 * fVar12 * fVar18 * fVar15 * *(float *)(lVar8 + 0x74) + *(float *)(lVar8 + 0x44);
      *(float *)(lVar8 + 0x48) =
           fVar13 * fVar12 * fVar19 * fVar16 * *(float *)(lVar8 + 0x78) + *(float *)(lVar8 + 0x48);
    }
  }
  if ((uVar1 >> 4 & 1) != 0) {
    lVar11 = lVar11 + 1;
    if ((uVar1 >> 2 & 1) == 0) {
      *(undefined4 *)(lVar4 + lVar11 * 0xa0 + 100) = 0;
    }
    else {
      fVar12 = *(float *)(param_4 + 0x84) * *(float *)(param_5 + 0x3c);
      pfVar10 = (float *)(lVar4 + lVar11 * 0xa0 + 100);
      *pfVar10 = fVar12;
      if ((lVar9 != 0) && (*plVar7 != 0)) {
        lVar8 = lVar4 + lVar11 * 0xa0;
        fVar13 = *(float *)(lVar9 + 0x174);
        fVar14 = *(float *)(lVar8 + 0x14);
        fVar15 = *(float *)(lVar8 + 0x18);
        lVar9 = lVar3 + (long)param_2 * 0xf8;
        *(float *)(lVar9 + 0x40) =
             fVar12 * fVar13 * *(float *)(lVar8 + 0x10) * *(float *)(lVar9 + 0x70) +
             *(float *)(lVar9 + 0x40);
        *(float *)(lVar9 + 0x44) =
             fVar12 * fVar13 * fVar14 * *(float *)(lVar9 + 0x74) + *(float *)(lVar9 + 0x44);
        *(float *)(lVar9 + 0x48) =
             fVar12 * fVar13 * fVar15 * *(float *)(lVar9 + 0x78) + *(float *)(lVar9 + 0x48);
        fVar13 = *(float *)(lVar8 + 0x44);
        fVar14 = *(float *)(lVar8 + 0x48);
        *(float *)(lVar9 + 0x50) =
             fVar12 * *(float *)(lVar9 + 0x60) * *(float *)(lVar8 + 0x40) + *(float *)(lVar9 + 0x50)
        ;
        *(float *)(lVar9 + 0x54) =
             fVar12 * *(float *)(lVar9 + 100) * fVar13 + *(float *)(lVar9 + 0x54);
        *(float *)(lVar9 + 0x58) =
             fVar12 * *(float *)(lVar9 + 0x68) * fVar14 + *(float *)(lVar9 + 0x58);
      }
      if ((lVar5 != 0) && (*plVar6 != 0)) {
        fVar12 = *(float *)(lVar5 + 0x174);
        lVar4 = lVar4 + lVar11 * 0xa0;
        fVar13 = *pfVar10;
        lVar3 = lVar3 + (long)param_3 * 0xf8;
        fVar15 = *(float *)(lVar4 + 0x30);
        fVar16 = *(float *)(lVar4 + 0x34);
        fVar17 = *(float *)(lVar4 + 0x38);
        fVar14 = *(float *)(lVar4 + 0x54);
        fVar18 = -fVar13;
        fVar21 = *(float *)(lVar4 + 0x58);
        *(float *)(lVar3 + 0x50) =
             *(float *)(lVar3 + 0x50) - *(float *)(lVar4 + 0x50) * *(float *)(lVar3 + 0x60) * fVar18
        ;
        *(float *)(lVar3 + 0x54) =
             *(float *)(lVar3 + 0x54) - fVar14 * *(float *)(lVar3 + 100) * fVar18;
        *(float *)(lVar3 + 0x40) =
             fVar13 * fVar12 * fVar15 * *(float *)(lVar3 + 0x70) + *(float *)(lVar3 + 0x40);
        *(float *)(lVar3 + 0x44) =
             fVar13 * fVar12 * fVar16 * *(float *)(lVar3 + 0x74) + *(float *)(lVar3 + 0x44);
        *(float *)(lVar3 + 0x48) =
             fVar13 * fVar12 * fVar17 * *(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 0x48);
        *(float *)(lVar3 + 0x58) =
             *(float *)(lVar3 + 0x58) - fVar21 * *(float *)(lVar3 + 0x68) * fVar18;
        return;
      }
    }
  }
  return;
}

