
/* btGeneric6DofConstraint::getInfo1(btTypedConstraint::btConstraintInfo1*) */

void __thiscall
btGeneric6DofConstraint::getInfo1(btGeneric6DofConstraint *this,btConstraintInfo1 *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (this[0x534] != (btGeneric6DofConstraint)0x0) {
    *(undefined8 *)param_1 = 0;
    return;
  }
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  *(undefined8 *)param_1 = 0x600000000;
  if ((*(int *)(this + 0x370) == 0) && (this[0x32c] == (btGeneric6DofConstraint)0x0)) {
    iVar2 = 6;
    iVar1 = 0;
    if (*(int *)(this + 0x374) != 0) goto LAB_011babd4;
LAB_011babac:
    if (this[0x32d] != (btGeneric6DofConstraint)0x0) goto LAB_011babd4;
    if (*(int *)(this + 0x378) == 0) goto LAB_011babbc;
LAB_011babe8:
    *(int *)param_1 = iVar1 + 1;
    *(int *)(param_1 + 4) = iVar2 + -1;
  }
  else {
    iVar1 = 1;
    *(undefined8 *)param_1 = 0x500000001;
    iVar2 = 5;
    if (*(int *)(this + 0x374) == 0) goto LAB_011babac;
LAB_011babd4:
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + -1;
    *(int *)param_1 = iVar1;
    *(int *)(param_1 + 4) = iVar2;
    if (*(int *)(this + 0x378) != 0) goto LAB_011babe8;
LAB_011babbc:
    if (this[0x32e] != (btGeneric6DofConstraint)0x0) goto LAB_011babe8;
  }
  fVar3 = (float)btAdjustAngleToLimits
                           (*(float *)(this + 0x4c0),*(float *)(this + 0x37c),
                            *(float *)(this + 0x380));
  fVar5 = *(float *)(this + 0x37c);
  fVar4 = *(float *)(this + 0x380);
  *(float *)(this + 0x3b0) = fVar3;
  if (fVar5 <= fVar4) {
    if (fVar5 <= fVar3) {
      if (fVar3 <= fVar4) goto LAB_011bac18;
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
      if (-3.1415927 <= fVar3) goto LAB_011baca4;
      fVar4 = 6.2831855;
    }
    else {
      fVar4 = -6.2831855;
    }
    *(float *)(this + 0x3ac) = fVar3 + fVar4;
LAB_011baca4:
    *(int *)param_1 = *(int *)param_1 + 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  else {
LAB_011bac18:
    *(undefined4 *)(this + 0x3b4) = 0;
    if (this[0x3a8] != (btGeneric6DofConstraint)0x0) goto LAB_011baca4;
  }
  fVar3 = (float)btAdjustAngleToLimits
                           (*(float *)(this + 0x4c4),*(float *)(this + 0x3bc),
                            *(float *)(this + 0x3c0));
  fVar5 = *(float *)(this + 0x3bc);
  fVar4 = *(float *)(this + 0x3c0);
  *(float *)(this + 0x3f0) = fVar3;
  if (fVar5 <= fVar4) {
    if (fVar5 <= fVar3) {
      if (fVar3 <= fVar4) goto LAB_011bacd8;
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
      if (-3.1415927 <= fVar3) goto LAB_011bad64;
      fVar4 = 6.2831855;
    }
    else {
      fVar4 = -6.2831855;
    }
    *(float *)(this + 0x3ec) = fVar3 + fVar4;
LAB_011bad64:
    *(int *)param_1 = *(int *)param_1 + 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  else {
LAB_011bacd8:
    *(undefined4 *)(this + 0x3f4) = 0;
    if (this[1000] != (btGeneric6DofConstraint)0x0) goto LAB_011bad64;
  }
  fVar3 = (float)btAdjustAngleToLimits
                           (*(float *)(this + 0x4c8),*(float *)(this + 0x3fc),
                            *(float *)(this + 0x400));
  fVar5 = *(float *)(this + 0x3fc);
  fVar4 = *(float *)(this + 0x400);
  *(float *)(this + 0x430) = fVar3;
  if (fVar5 <= fVar4) {
    if (fVar5 <= fVar3) {
      if (fVar3 <= fVar4) goto LAB_011bad98;
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
      if (-3.1415927 <= fVar3) goto LAB_011bae24;
      fVar4 = 6.2831855;
    }
    else {
      fVar4 = -6.2831855;
    }
    *(float *)(this + 0x42c) = fVar3 + fVar4;
  }
  else {
LAB_011bad98:
    *(undefined4 *)(this + 0x434) = 0;
    if (this[0x428] == (btGeneric6DofConstraint)0x0) {
      return;
    }
  }
LAB_011bae24:
  *(int *)param_1 = *(int *)param_1 + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return;
}

