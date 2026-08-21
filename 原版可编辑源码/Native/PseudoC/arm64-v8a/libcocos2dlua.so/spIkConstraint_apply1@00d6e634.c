
void spIkConstraint_apply1(float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_4 + 0x10);
  if (*(int *)(param_4 + 0x60) == 0) {
    spBone_updateAppliedTransform(param_4);
  }
  param_1 = param_1 - *(float *)(lVar1 + 0x6c);
  param_2 = param_2 - *(float *)(lVar1 + 0x78);
  fVar4 = *(float *)(param_4 + 0x44);
  fVar5 = *(float *)(param_4 + 0x48);
  fVar3 = 1.0 / (*(float *)(lVar1 + 100) * *(float *)(lVar1 + 0x74) -
                *(float *)(lVar1 + 0x68) * *(float *)(lVar1 + 0x70));
  fVar3 = atan2f(fVar3 * (*(float *)(lVar1 + 100) * param_2 - *(float *)(lVar1 + 0x70) * param_1) -
                 fVar5,fVar3 * (*(float *)(lVar1 + 0x74) * param_1 -
                               *(float *)(lVar1 + 0x68) * param_2) - fVar4);
  fVar2 = (fVar3 * 57.295776 - *(float *)(param_4 + 0x58)) - *(float *)(param_4 + 0x4c);
  fVar3 = fVar2 + 180.0;
  if (0.0 <= *(float *)(param_4 + 0x50)) {
    fVar3 = fVar2;
  }
  if (fVar3 <= 180.0) {
    if (-180.0 <= fVar3) goto LAB_00d6e724;
    fVar2 = 360.0;
  }
  else {
    fVar2 = -360.0;
  }
  fVar3 = fVar3 + fVar2;
LAB_00d6e724:
  spBone_updateWorldTransformWith
            (fVar4,fVar5,*(float *)(param_4 + 0x4c) + fVar3 * param_3,*(float *)(param_4 + 0x50),
             *(undefined4 *)(param_4 + 0x54),*(float *)(param_4 + 0x58),
             *(undefined4 *)(param_4 + 0x5c),param_4);
  return;
}

