
/* btTransformUtil::integrateTransform(btTransform const&, btVector3 const&, btVector3 const&,
   float, btTransform&) */

void btTransformUtil::integrateTransform
               (btTransform *param_1,btVector3 *param_2,btVector3 *param_3,float param_4,
               btTransform *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_1 + 0x30);
  fVar6 = *(float *)(param_1 + 0x34);
  fVar5 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_5 + 0x3c) = 0;
  *(float *)(param_5 + 0x30) = fVar1 * param_4 + fVar3;
  *(float *)(param_5 + 0x34) = fVar2 * param_4 + fVar6;
  *(float *)(param_5 + 0x38) = fVar5 * param_4 + fVar4;
  fVar2 = *(float *)param_3 * *(float *)param_3 + *(float *)(param_3 + 4) * *(float *)(param_3 + 4)
          + *(float *)(param_3 + 8) * *(float *)(param_3 + 8);
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  fVar2 = 0.7853982 / param_4;
  if (fVar1 * param_4 <= 0.7853982) {
    fVar2 = fVar1;
  }
  if (0.001 <= fVar2) {
    fVar1 = sinf(fVar2 * 0.5 * param_4);
    fVar1 = fVar1 / fVar2;
  }
  else {
    fVar1 = param_4 * 0.5 + fVar2 * param_4 * param_4 * param_4 * -0.020833334 * fVar2;
  }
  fVar6 = fVar1 * *(float *)param_3;
  fVar7 = fVar1 * *(float *)(param_3 + 4);
  fVar1 = fVar1 * *(float *)(param_3 + 8);
  fVar2 = cosf(fVar2 * param_4 * 0.5);
  btMatrix3x3::getRotation((btMatrix3x3 *)param_1,(btQuaternion *)&local_60);
  fVar3 = (fVar7 * local_58 + fVar2 * local_60 + fVar6 * fStack_54) - fVar1 * fStack_5c;
  fVar4 = (fVar1 * local_60 + fVar2 * fStack_5c + fVar7 * fStack_54) - fVar6 * local_58;
  fVar5 = (fVar6 * fStack_5c + fVar2 * local_58 + fVar1 * fStack_54) - fVar7 * local_60;
  fVar6 = ((fVar2 * fStack_54 - fVar6 * local_60) - fVar7 * fStack_5c) - fVar1 * local_58;
  fVar2 = fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4;
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  fVar1 = 1.0 / fVar1;
  fVar3 = fVar1 * fVar3;
  fVar4 = fVar1 * fVar4;
  fVar5 = fVar1 * fVar5;
  fVar1 = fVar1 * fVar6;
  fVar2 = 2.0 / (fVar1 * fVar1 + fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  fVar7 = fVar4 * fVar2;
  fVar6 = fVar5 * fVar2;
  fVar8 = fVar1 * fVar3 * fVar2;
  fVar2 = fVar3 * fVar3 * fVar2;
  *(undefined4 *)(param_5 + 0xc) = 0;
  *(undefined4 *)(param_5 + 0x1c) = 0;
  *(float *)(param_5 + 4) = fVar3 * fVar7 - fVar1 * fVar6;
  *(float *)(param_5 + 8) = fVar3 * fVar6 + fVar1 * fVar7;
  *(float *)(param_5 + 0x14) = 1.0 - (fVar2 + fVar5 * fVar6);
  *(float *)(param_5 + 0x18) = fVar4 * fVar6 - fVar8;
  *(float *)(param_5 + 0x20) = fVar3 * fVar6 - fVar1 * fVar7;
  *(float *)(param_5 + 0x24) = fVar4 * fVar6 + fVar8;
  *(float *)param_5 = 1.0 - (fVar4 * fVar7 + fVar5 * fVar6);
  *(float *)(param_5 + 0x10) = fVar3 * fVar7 + fVar1 * fVar6;
  *(float *)(param_5 + 0x28) = 1.0 - (fVar2 + fVar4 * fVar7);
  *(undefined4 *)(param_5 + 0x2c) = 0;
  return;
}

