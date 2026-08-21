
/* btCollisionShape::calculateTemporalAabb(btTransform const&, btVector3 const&, btVector3 const&,
   float, btVector3&, btVector3&) const */

void __thiscall
btCollisionShape::calculateTemporalAabb
          (btCollisionShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3,
          float param_4,btVector3 *param_5,btVector3 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  (**(code **)(*(long *)this + 0x10))(this,param_1,param_5,param_6);
  fVar7 = *(float *)param_6;
  fVar2 = *(float *)(param_6 + 4);
  fVar5 = *(float *)(param_6 + 8);
  fVar8 = *(float *)param_5;
  fVar4 = *(float *)(param_5 + 4);
  fVar3 = *(float *)(param_5 + 8);
  fVar6 = *(float *)param_2 * param_4;
  fVar1 = *(float *)(param_2 + 4) * param_4;
  if (fVar6 <= 0.0) {
    fVar8 = fVar6 + fVar8;
  }
  else {
    fVar7 = fVar6 + fVar7;
  }
  fVar6 = *(float *)(param_2 + 8) * param_4;
  if (fVar1 <= 0.0) {
    fVar4 = fVar1 + fVar4;
  }
  else {
    fVar2 = fVar1 + fVar2;
  }
  if (0.0 < fVar6) {
    fVar5 = fVar6 + fVar5;
  }
  else {
    fVar3 = fVar6 + fVar3;
  }
  fVar1 = *(float *)param_3 * *(float *)param_3 + *(float *)(param_3 + 4) * *(float *)(param_3 + 4)
          + *(float *)(param_3 + 8) * *(float *)(param_3 + 8);
  fVar6 = SQRT(fVar1);
  if (NAN(fVar6)) {
    fVar6 = sqrtf(fVar1);
  }
  fVar1 = (float)(**(code **)(*(long *)this + 0x20))(this);
  *(float *)param_5 = fVar8;
  *(float *)(param_5 + 4) = fVar4;
  *(float *)(param_5 + 8) = fVar3;
  *(undefined4 *)(param_5 + 0xc) = 0;
  *(float *)param_6 = fVar7;
  *(float *)(param_6 + 4) = fVar2;
  *(float *)(param_6 + 8) = fVar5;
  *(undefined4 *)(param_6 + 0xc) = 0;
  fVar7 = fVar6 * fVar1 * param_4;
  *(float *)param_5 = *(float *)param_5 - fVar7;
  *(float *)(param_5 + 4) = *(float *)(param_5 + 4) - fVar7;
  *(float *)(param_5 + 8) = *(float *)(param_5 + 8) - fVar7;
  *(float *)param_6 = fVar7 + *(float *)param_6;
  *(float *)(param_6 + 4) = fVar7 + *(float *)(param_6 + 4);
  *(float *)(param_6 + 8) = fVar7 + *(float *)(param_6 + 8);
  return;
}

