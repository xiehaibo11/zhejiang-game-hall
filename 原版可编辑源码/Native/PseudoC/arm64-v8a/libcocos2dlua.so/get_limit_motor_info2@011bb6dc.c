
/* btGeneric6DofConstraint::get_limit_motor_info2(btRotationalLimitMotor*, btTransform const&,
   btTransform const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3 const&,
   btTypedConstraint::btConstraintInfo2*, int, btVector3&, int, int) */

undefined8 __thiscall
btGeneric6DofConstraint::get_limit_motor_info2
          (btGeneric6DofConstraint *this,btRotationalLimitMotor *param_1,btTransform *param_2,
          btTransform *param_3,btVector3 *param_4,btVector3 *param_5,btVector3 *param_6,
          btVector3 *param_7,btConstraintInfo2 *param_8,int param_9,btVector3 *param_10,int param_11
          ,int param_12)

{
  btConstraintInfo2 *pbVar1;
  btConstraintInfo2 *pbVar2;
  float *pfVar3;
  btConstraintInfo2 *pbVar4;
  int iVar5;
  btRotationalLimitMotor bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
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
  float local_40;
  float fStack_3c;
  float local_38;
  
  bVar6 = param_1[0x2c];
  iVar5 = *(int *)(param_1 + 0x38);
  if ((bVar6 == (btRotationalLimitMotor)0x0) && (iVar5 == 0)) {
    return 0;
  }
  pbVar1 = param_8 + 0x10;
  lVar7 = (long)*(int *)(param_8 + 0x28) * (long)param_9;
  pbVar2 = pbVar1;
  if (param_11 == 0) {
    pbVar2 = param_8 + 8;
  }
  lVar11 = *(long *)pbVar2;
  pbVar2 = param_8 + 0x20;
  pbVar4 = pbVar2;
  if (param_11 == 0) {
    pbVar4 = param_8 + 0x18;
  }
  lVar12 = lVar7 * 4;
  lVar10 = *(long *)pbVar4;
  *(undefined4 *)(lVar11 + lVar12) = *(undefined4 *)param_10;
  lVar8 = ((long)(int)lVar7 + 1) * 4;
  *(undefined4 *)(lVar11 + lVar8) = *(undefined4 *)(param_10 + 4);
  lVar9 = ((long)(int)lVar7 + 2) * 4;
  *(undefined4 *)(lVar11 + lVar9) = *(undefined4 *)(param_10 + 8);
  *(float *)(lVar10 + lVar12) = -*(float *)param_10;
  *(float *)(lVar10 + lVar8) = -*(float *)(param_10 + 4);
  *(float *)(lVar10 + lVar9) = -*(float *)(param_10 + 8);
  if (param_11 == 0) {
    if (this[0x52d] == (btGeneric6DofConstraint)0x0) {
      fVar13 = *(float *)(this + 0x4b0);
      fVar16 = *(float *)(this + 0x4b4);
      fVar15 = *(float *)(param_2 + 0x30);
      fVar18 = *(float *)(param_2 + 0x34);
      fVar25 = *(float *)(this + 0x4b8);
      fVar26 = *(float *)(param_2 + 0x38);
      lVar11 = *(long *)pbVar1;
      fVar22 = *(float *)param_10;
      fVar19 = *(float *)(param_10 + 4);
      fVar23 = *(float *)(param_10 + 8);
      *(float *)(lVar11 + lVar12) = (fVar16 - fVar18) * fVar23 - (fVar25 - fVar26) * fVar19;
      *(float *)(lVar11 + lVar8) = (fVar25 - fVar26) * fVar22 - (fVar13 - fVar15) * fVar23;
      *(float *)(lVar11 + lVar9) = (fVar13 - fVar15) * fVar19 - (fVar16 - fVar18) * fVar22;
      fVar13 = *(float *)(this + 0x4b0);
      fVar16 = *(float *)(this + 0x4b4);
      fVar15 = *(float *)(param_3 + 0x30);
      fVar18 = *(float *)(param_3 + 0x34);
      fVar25 = *(float *)(this + 0x4b8);
      fVar26 = *(float *)(param_3 + 0x38);
      lVar11 = *(long *)pbVar2;
      fVar22 = *(float *)param_10;
      fVar19 = *(float *)(param_10 + 4);
      fVar23 = *(float *)(param_10 + 8);
      *(float *)(lVar11 + lVar12) = -((fVar16 - fVar18) * fVar23 - (fVar25 - fVar26) * fVar19);
      *(float *)(lVar11 + lVar8) = -((fVar25 - fVar26) * fVar22 - (fVar13 - fVar15) * fVar23);
      *(float *)(lVar11 + lVar9) = -((fVar13 - fVar15) * fVar19 - (fVar16 - fVar18) * fVar22);
    }
    else {
      fVar13 = *(float *)param_10;
      fVar15 = *(float *)(param_10 + 4);
      fVar16 = *(float *)(param_10 + 8);
      fVar22 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x30);
      fVar24 = (*(float *)(this + 0x4b0) - *(float *)(param_3 + 0x30)) * fVar13 +
               (*(float *)(this + 0x4b4) - *(float *)(param_3 + 0x34)) * fVar15 +
               (*(float *)(this + 0x4b8) - *(float *)(param_3 + 0x38)) * fVar16;
      fVar26 = fVar13 * (*(float *)(this + 0x470) - *(float *)(param_2 + 0x30)) +
               fVar15 * (*(float *)(this + 0x474) - *(float *)(param_2 + 0x34)) +
               fVar16 * (*(float *)(this + 0x478) - *(float *)(param_2 + 0x38));
      fVar18 = *(float *)(this + 0x510);
      fVar19 = *(float *)(this + 0x514);
      fVar25 = (fVar13 * fVar26 + fVar13 * fVar22) - fVar13 * fVar24;
      fVar27 = (fVar15 * fVar26 + fVar15 * fVar22) - fVar15 * fVar24;
      fVar23 = (fVar16 * fVar26 + fVar16 * fVar22) - fVar16 * fVar24;
      fVar22 = ((*(float *)(this + 0x470) - *(float *)(param_2 + 0x30)) - fVar13 * fVar26) +
               fVar18 * fVar25;
      fVar20 = ((*(float *)(this + 0x474) - *(float *)(param_2 + 0x34)) - fVar15 * fVar26) +
               fVar18 * fVar27;
      fVar21 = ((*(float *)(this + 0x478) - *(float *)(param_2 + 0x38)) - fVar16 * fVar26) +
               fVar18 * fVar23;
      fVar26 = ((*(float *)(this + 0x4b0) - *(float *)(param_3 + 0x30)) - fVar13 * fVar24) -
               fVar19 * fVar25;
      fVar25 = ((*(float *)(this + 0x4b4) - *(float *)(param_3 + 0x34)) - fVar15 * fVar24) -
               fVar19 * fVar27;
      fVar23 = ((*(float *)(this + 0x4b8) - *(float *)(param_3 + 0x38)) - fVar16 * fVar24) -
               fVar19 * fVar23;
      local_40 = fVar16 * fVar20 - fVar15 * fVar21;
      fStack_3c = fVar13 * fVar21 - fVar16 * fVar22;
      local_38 = fVar15 * fVar22 - fVar13 * fVar20;
      fVar22 = fVar25 * fVar16 - fVar23 * fVar15;
      fVar16 = fVar23 * fVar13 - fVar26 * fVar16;
      fVar13 = fVar26 * fVar15 - fVar25 * fVar13;
      if ((param_12 == 0) && (this[0x518] != (btGeneric6DofConstraint)0x0)) {
        local_40 = fVar18 * local_40;
        fStack_3c = fVar18 * fStack_3c;
        local_38 = fVar18 * local_38;
        fVar22 = fVar19 * fVar22;
        fVar16 = fVar19 * fVar16;
        fVar13 = fVar19 * fVar13;
      }
      lVar11 = *(long *)pbVar1;
      *(float *)((undefined8 *)(lVar11 + lVar12) + 1) = local_38;
      *(undefined8 *)(lVar11 + lVar12) = CONCAT44(fStack_3c,local_40);
      pfVar3 = (float *)(*(long *)pbVar2 + lVar12);
      *pfVar3 = -fVar22;
      pfVar3[1] = -fVar16;
      pfVar3[2] = -fVar13;
    }
  }
  if ((iVar5 == 0) || (*(float *)param_1 != *(float *)(param_1 + 4))) {
    lVar11 = *(long *)(param_8 + 0x30);
    *(undefined4 *)(lVar11 + lVar7 * 4) = 0;
    if (bVar6 == (btRotationalLimitMotor)0x0) {
      fVar13 = 0.0;
      if (iVar5 == 0) {
        return 1;
      }
    }
    else {
      *(undefined4 *)(*(long *)(param_8 + 0x38) + lVar7 * 4) = *(undefined4 *)(param_1 + 0x1c);
      if (iVar5 == 0) {
        fVar13 = *(float *)(param_1 + 8);
        if (param_11 == 0) {
          fVar13 = -*(float *)(param_1 + 8);
        }
        fVar13 = (float)btTypedConstraint::getMotorFactor
                                  (*(float *)(param_1 + 0x34),*(float *)param_1,
                                   *(float *)(param_1 + 4),fVar13,
                                   *(float *)param_8 * *(float *)(param_1 + 0x20));
        *(float *)(*(long *)(param_8 + 0x30) + lVar12) =
             fVar13 * *(float *)(param_1 + 8) + *(float *)(*(long *)(param_8 + 0x30) + lVar12);
        *(float *)(*(long *)(param_8 + 0x40) + lVar12) = -*(float *)(param_1 + 0xc);
        *(undefined4 *)(*(long *)(param_8 + 0x48) + lVar12) = *(undefined4 *)(param_1 + 0xc);
        return 1;
      }
      fVar13 = *(float *)(lVar11 + lVar7 * 4);
    }
  }
  else {
    lVar11 = *(long *)(param_8 + 0x30);
    fVar13 = 0.0;
    *(undefined4 *)(lVar11 + lVar7 * 4) = 0;
  }
  fVar16 = -(*(float *)param_8 * *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x30));
  if (param_11 == 0) {
    fVar16 = *(float *)param_8 * *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x30);
  }
  *(float *)(lVar11 + lVar12) = fVar13 + fVar16;
  *(undefined4 *)(*(long *)(param_8 + 0x38) + lVar12) = *(undefined4 *)(param_1 + 0x24);
  if (*(float *)param_1 == *(float *)(param_1 + 4)) {
    *(undefined4 *)(*(long *)(param_8 + 0x40) + lVar12) = 0xff7fffff;
    *(undefined4 *)(*(long *)(param_8 + 0x48) + lVar12) = 0x7f7fffff;
  }
  else {
    uVar14 = 0;
    if (iVar5 != 1) {
      uVar14 = 0xff7fffff;
    }
    uVar17 = 0x7f7fffff;
    *(undefined4 *)(*(long *)(param_8 + 0x40) + lVar12) = uVar14;
    if (iVar5 != 1) {
      uVar17 = 0;
    }
    *(undefined4 *)(*(long *)(param_8 + 0x48) + lVar12) = uVar17;
    fVar13 = *(float *)(param_1 + 0x28);
    if (0.0 < fVar13) {
      if (param_11 == 0) {
        param_7 = param_5;
        param_6 = param_4;
      }
      fVar16 = (*(float *)param_6 * *(float *)param_10 +
                *(float *)(param_6 + 4) * *(float *)(param_10 + 4) +
               *(float *)(param_6 + 8) * *(float *)(param_10 + 8)) -
               (*(float *)param_10 * *(float *)param_7 +
                *(float *)(param_10 + 4) * *(float *)(param_7 + 4) +
               *(float *)(param_10 + 8) * *(float *)(param_7 + 8));
      if (iVar5 == 1) {
        if (0.0 <= fVar16) {
          return 1;
        }
        fVar13 = -(fVar13 * fVar16);
        if (fVar13 <= *(float *)(lVar11 + lVar7 * 4)) {
          return 1;
        }
      }
      else {
        if (fVar16 <= 0.0) {
          return 1;
        }
        fVar13 = -(fVar13 * fVar16);
        if (*(float *)(lVar11 + lVar7 * 4) <= fVar13) {
          return 1;
        }
      }
      *(float *)(lVar11 + lVar7 * 4) = fVar13;
    }
  }
  return 1;
}

