
/* btGeneric6DofConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2*, btTransform
   const&, btTransform const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&) */

void __thiscall
btGeneric6DofConstraint::getInfo2NonVirtual
          (btGeneric6DofConstraint *this,btConstraintInfo2 *param_1,btTransform *param_2,
          btTransform *param_3,btVector3 *param_4,btVector3 *param_5,btVector3 *param_6,
          btVector3 *param_7)

{
  btGeneric6DofConstraint bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  calculateTransforms(this,param_2,param_3);
  fVar3 = (float)btAdjustAngleToLimits
                           (*(float *)(this + 0x4c0),*(float *)(this + 0x37c),
                            *(float *)(this + 0x380));
  fVar5 = *(float *)(this + 0x37c);
  fVar4 = *(float *)(this + 0x380);
  *(float *)(this + 0x3b0) = fVar3;
  if (fVar5 <= fVar4) {
    if (fVar5 <= fVar3) {
      if (fVar3 <= fVar4) goto LAB_011bb438;
      fVar3 = fVar3 - fVar4;
      *(undefined4 *)(this + 0x3b4) = 2;
      *(float *)(this + 0x3ac) = fVar3;
    }
    else {
      fVar3 = fVar3 - fVar5;
      *(undefined4 *)(this + 0x3b4) = 1;
      *(float *)(this + 0x3ac) = fVar3;
    }
    if (fVar3 <= 3.1415927) {
      if (-3.1415927 <= fVar3) goto LAB_011bb4bc;
      fVar4 = 6.2831855;
    }
    else {
      fVar4 = -6.2831855;
    }
    *(float *)(this + 0x3ac) = fVar3 + fVar4;
  }
  else {
LAB_011bb438:
    *(undefined4 *)(this + 0x3b4) = 0;
  }
LAB_011bb4bc:
  fVar3 = (float)btAdjustAngleToLimits
                           (*(float *)(this + 0x4c4),*(float *)(this + 0x3bc),
                            *(float *)(this + 0x3c0));
  fVar5 = *(float *)(this + 0x3bc);
  fVar4 = *(float *)(this + 0x3c0);
  *(float *)(this + 0x3f0) = fVar3;
  if (fVar5 <= fVar4) {
    if (fVar5 <= fVar3) {
      if (fVar3 <= fVar4) goto LAB_011bb4e0;
      fVar3 = fVar3 - fVar4;
      *(undefined4 *)(this + 0x3f4) = 2;
      *(float *)(this + 0x3ec) = fVar3;
    }
    else {
      fVar3 = fVar3 - fVar5;
      *(undefined4 *)(this + 0x3f4) = 1;
      *(float *)(this + 0x3ec) = fVar3;
    }
    if (fVar3 <= 3.1415927) {
      if (-3.1415927 <= fVar3) goto LAB_011bb564;
      fVar4 = 6.2831855;
    }
    else {
      fVar4 = -6.2831855;
    }
    *(float *)(this + 0x3ec) = fVar3 + fVar4;
  }
  else {
LAB_011bb4e0:
    *(undefined4 *)(this + 0x3f4) = 0;
  }
LAB_011bb564:
  fVar3 = (float)btAdjustAngleToLimits
                           (*(float *)(this + 0x4c8),*(float *)(this + 0x3fc),
                            *(float *)(this + 0x400));
  fVar5 = *(float *)(this + 0x3fc);
  fVar4 = *(float *)(this + 0x400);
  *(float *)(this + 0x430) = fVar3;
  if (fVar4 < fVar5) {
LAB_011bb588:
    *(undefined4 *)(this + 0x434) = 0;
    bVar1 = this[0x52d];
    goto joined_r0x011bb618;
  }
  if (fVar5 <= fVar3) {
    if (fVar3 <= fVar4) goto LAB_011bb588;
    fVar3 = fVar3 - fVar4;
    *(undefined4 *)(this + 0x434) = 2;
    *(float *)(this + 0x42c) = fVar3;
  }
  else {
    fVar3 = fVar3 - fVar5;
    *(undefined4 *)(this + 0x434) = 1;
    *(float *)(this + 0x42c) = fVar3;
  }
  if (fVar3 <= 3.1415927) {
    if (fVar3 < -3.1415927) {
      fVar4 = 6.2831855;
      goto LAB_011bb60c;
    }
  }
  else {
    fVar4 = -6.2831855;
LAB_011bb60c:
    *(float *)(this + 0x42c) = fVar3 + fVar4;
  }
  bVar1 = this[0x52d];
joined_r0x011bb618:
  if (bVar1 == (btGeneric6DofConstraint)0x0) {
    iVar2 = setLinearLimits(this,param_1,0,param_2,param_3,param_4,param_5,param_6,param_7);
    setAngularLimits(this,param_1,iVar2,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    iVar2 = setAngularLimits(this,param_1,0,param_2,param_3,param_4,param_5,param_6,param_7);
    setLinearLimits(this,param_1,iVar2,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

