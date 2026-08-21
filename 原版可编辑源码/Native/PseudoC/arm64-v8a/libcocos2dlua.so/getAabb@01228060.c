
/* btCylinderShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btCylinderShape::getAabb
          (btCylinderShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar7 = *(float *)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x34);
  fVar2 = fVar1 + *(float *)(this + 0x28);
  fVar3 = fVar1 + *(float *)(this + 0x2c);
  fVar1 = fVar1 + *(float *)(this + 0x30);
  fVar5 = *(float *)(param_1 + 0x38);
  fVar4 = fVar2 * ABS(*(float *)param_1) + fVar3 * ABS(*(float *)(param_1 + 4)) +
          fVar1 * ABS(*(float *)(param_1 + 8));
  fVar6 = fVar2 * ABS(*(float *)(param_1 + 0x10)) + fVar3 * ABS(*(float *)(param_1 + 0x14)) +
          fVar1 * ABS(*(float *)(param_1 + 0x18));
  fVar1 = fVar2 * ABS(*(float *)(param_1 + 0x20)) + fVar3 * ABS(*(float *)(param_1 + 0x24)) +
          fVar1 * ABS(*(float *)(param_1 + 0x28));
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar7 - fVar4;
  *(float *)(param_2 + 4) = fVar8 - fVar6;
  *(float *)(param_2 + 8) = fVar5 - fVar1;
  *(float *)param_3 = fVar4 + fVar7;
  *(float *)(param_3 + 4) = fVar6 + fVar8;
  *(float *)(param_3 + 8) = fVar5 + fVar1;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}

