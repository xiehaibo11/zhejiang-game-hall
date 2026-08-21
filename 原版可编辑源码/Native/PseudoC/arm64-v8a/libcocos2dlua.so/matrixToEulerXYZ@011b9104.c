
/* matrixToEulerXYZ(btMatrix3x3 const&, btVector3&) */

undefined8 matrixToEulerXYZ(btMatrix3x3 *param_1,btVector3 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (1.0 <= *(float *)(param_1 + 0x20)) {
    fVar3 = atan2f(*(float *)(param_1 + 4),*(float *)(param_1 + 0x14));
    uVar2 = 0x3fc90fdb;
  }
  else {
    if (-1.0 < *(float *)(param_1 + 0x20)) {
      fVar3 = atan2f(-*(float *)(param_1 + 0x24),*(float *)(param_1 + 0x28));
      *(float *)param_2 = fVar3;
      fVar3 = *(float *)(param_1 + 0x20);
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      fVar3 = asinf(fVar3);
      *(float *)(param_2 + 4) = fVar3;
      fVar3 = atan2f(-*(float *)(param_1 + 0x10),*(float *)param_1);
      uVar1 = 1;
      goto LAB_011b91b8;
    }
    fVar3 = atan2f(*(float *)(param_1 + 4),*(float *)(param_1 + 0x14));
    fVar3 = -fVar3;
    uVar2 = 0xbfc90fdb;
  }
  uVar1 = 0;
  *(float *)param_2 = fVar3;
  fVar3 = 0.0;
  *(undefined4 *)(param_2 + 4) = uVar2;
LAB_011b91b8:
  *(float *)(param_2 + 8) = fVar3;
  return uVar1;
}

