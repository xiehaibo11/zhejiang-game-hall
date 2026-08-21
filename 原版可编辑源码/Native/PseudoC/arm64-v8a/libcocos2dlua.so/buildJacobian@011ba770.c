
/* btGeneric6DofConstraint::buildJacobian() */

void __thiscall btGeneric6DofConstraint::buildJacobian(btGeneric6DofConstraint *this)

{
  btGeneric6DofConstraint *pbVar1;
  btGeneric6DofConstraint *pbVar2;
  btGeneric6DofConstraint *pbVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (this[0x534] == (btGeneric6DofConstraint)0x0) {
    return;
  }
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined4 *)(this + 0x3f8) = 0;
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  (**(code **)(*(long *)this + 0x58))(this);
  uStack_38 = *(undefined8 *)(this + 0x524);
  local_40 = *(undefined8 *)(this + 0x51c);
  pbVar1 = this + 0x480;
  pbVar2 = this + 0x440;
  uStack_48 = *(undefined8 *)(this + 0x524);
  local_50 = *(undefined8 *)(this + 0x51c);
  if (*(float *)(this + 0x2c0) <= *(float *)(this + 0x2d0)) {
    pbVar3 = pbVar1;
    if (this[0x52c] != (btGeneric6DofConstraint)0x0) {
      pbVar3 = pbVar2;
    }
    local_60 = CONCAT44(*(undefined4 *)(pbVar3 + 0x10),*(undefined4 *)pbVar3);
    uStack_58 = (ulong)*(uint *)(pbVar3 + 0x20);
    buildLinearJacobian(this,(btJacobianEntry *)(this + 200),(btVector3 *)&local_60,
                        (btVector3 *)&local_40,(btVector3 *)&local_50);
  }
  if (*(float *)(this + 0x2c4) <= *(float *)(this + 0x2d4)) {
    pbVar3 = pbVar1;
    if (this[0x52c] != (btGeneric6DofConstraint)0x0) {
      pbVar3 = pbVar2;
    }
    local_60 = CONCAT44(*(undefined4 *)(pbVar3 + 0x14),*(undefined4 *)(pbVar3 + 4));
    uStack_58 = (ulong)*(uint *)(pbVar3 + 0x24);
    buildLinearJacobian(this,(btJacobianEntry *)(this + 0x11c),(btVector3 *)&local_60,
                        (btVector3 *)&local_40,(btVector3 *)&local_50);
  }
  if (*(float *)(this + 0x2c8) <= *(float *)(this + 0x2d8)) {
    if (this[0x52c] != (btGeneric6DofConstraint)0x0) {
      pbVar1 = pbVar2;
    }
    local_60 = CONCAT44(*(undefined4 *)(pbVar1 + 0x18),*(undefined4 *)(pbVar1 + 8));
    uStack_58 = (ulong)*(uint *)(pbVar1 + 0x28);
    buildLinearJacobian(this,(btJacobianEntry *)(this + 0x170),(btVector3 *)&local_60,
                        (btVector3 *)&local_40,(btVector3 *)&local_50);
  }
  fVar4 = (float)btAdjustAngleToLimits
                           (*(float *)(this + 0x4c0),*(float *)(this + 0x37c),
                            *(float *)(this + 0x380));
  fVar6 = *(float *)(this + 0x37c);
  fVar5 = *(float *)(this + 0x380);
  *(float *)(this + 0x3b0) = fVar4;
  if (fVar6 <= fVar5) {
    if (fVar6 <= fVar4) {
      if (fVar4 <= fVar5) goto LAB_011ba8e0;
      fVar4 = fVar4 - fVar5;
      *(undefined4 *)(this + 0x3b4) = 2;
      *(float *)(this + 0x3ac) = fVar4;
    }
    else {
      fVar4 = fVar4 - fVar6;
      *(undefined4 *)(this + 0x3b4) = 1;
      *(float *)(this + 0x3ac) = fVar4;
    }
    if (fVar4 <= 3.1415927) {
      if (-3.1415927 <= fVar4) goto LAB_011ba96c;
      fVar5 = 6.2831855;
    }
    else {
      fVar5 = -6.2831855;
    }
    *(float *)(this + 0x3ac) = fVar4 + fVar5;
LAB_011ba96c:
    uStack_58 = *(ulong *)(this + 0x4d8);
    local_60 = *(undefined8 *)(this + 0x4d0);
    buildAngularJacobian(this,(btJacobianEntry *)(this + 0x1c4),(btVector3 *)&local_60);
  }
  else {
LAB_011ba8e0:
    *(undefined4 *)(this + 0x3b4) = 0;
    if (this[0x3a8] != (btGeneric6DofConstraint)0x0) goto LAB_011ba96c;
  }
  fVar4 = (float)btAdjustAngleToLimits
                           (*(float *)(this + 0x4c4),*(float *)(this + 0x3bc),
                            *(float *)(this + 0x3c0));
  fVar6 = *(float *)(this + 0x3bc);
  fVar5 = *(float *)(this + 0x3c0);
  *(float *)(this + 0x3f0) = fVar4;
  if (fVar6 <= fVar5) {
    if (fVar6 <= fVar4) {
      if (fVar4 <= fVar5) goto LAB_011ba9a8;
      fVar4 = fVar4 - fVar5;
      *(undefined4 *)(this + 0x3f4) = 2;
      *(float *)(this + 0x3ec) = fVar4;
    }
    else {
      fVar4 = fVar4 - fVar6;
      *(undefined4 *)(this + 0x3f4) = 1;
      *(float *)(this + 0x3ec) = fVar4;
    }
    if (fVar4 <= 3.1415927) {
      if (-3.1415927 <= fVar4) goto LAB_011baa34;
      fVar5 = 6.2831855;
    }
    else {
      fVar5 = -6.2831855;
    }
    *(float *)(this + 0x3ec) = fVar4 + fVar5;
LAB_011baa34:
    uStack_58 = *(ulong *)(this + 0x4e8);
    local_60 = *(undefined8 *)(this + 0x4e0);
    buildAngularJacobian(this,(btJacobianEntry *)(this + 0x218),(btVector3 *)&local_60);
  }
  else {
LAB_011ba9a8:
    *(undefined4 *)(this + 0x3f4) = 0;
    if (this[1000] != (btGeneric6DofConstraint)0x0) goto LAB_011baa34;
  }
  fVar4 = (float)btAdjustAngleToLimits
                           (*(float *)(this + 0x4c8),*(float *)(this + 0x3fc),
                            *(float *)(this + 0x400));
  fVar6 = *(float *)(this + 0x3fc);
  fVar5 = *(float *)(this + 0x400);
  *(float *)(this + 0x430) = fVar4;
  if (fVar6 <= fVar5) {
    if (fVar6 <= fVar4) {
      if (fVar4 <= fVar5) goto LAB_011baa70;
      fVar4 = fVar4 - fVar5;
      *(undefined4 *)(this + 0x434) = 2;
      *(float *)(this + 0x42c) = fVar4;
    }
    else {
      fVar4 = fVar4 - fVar6;
      *(undefined4 *)(this + 0x434) = 1;
      *(float *)(this + 0x42c) = fVar4;
    }
    if (fVar4 <= 3.1415927) {
      if (-3.1415927 <= fVar4) goto LAB_011baafc;
      fVar5 = 6.2831855;
    }
    else {
      fVar5 = -6.2831855;
    }
    *(float *)(this + 0x42c) = fVar4 + fVar5;
  }
  else {
LAB_011baa70:
    *(undefined4 *)(this + 0x434) = 0;
    if (this[0x428] == (btGeneric6DofConstraint)0x0) {
      return;
    }
  }
LAB_011baafc:
  uStack_58 = *(ulong *)(this + 0x4f8);
  local_60 = *(undefined8 *)(this + 0x4f0);
  buildAngularJacobian(this,(btJacobianEntry *)(this + 0x26c),(btVector3 *)&local_60);
  return;
}

