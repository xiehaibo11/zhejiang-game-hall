
/* btTriangleMeshShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btTriangleMeshShape::getAabb
          (btTriangleMeshShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(this + 0x2c);
  fVar5 = *(float *)(this + 0x30);
  fVar6 = *(float *)(this + 0x1c);
  fVar7 = *(float *)(this + 0x20);
  fVar8 = *(float *)(this + 0x34);
  fVar9 = *(float *)(this + 0x24);
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar2 = (fVar1 - fVar6) * 0.5 + fVar2;
  fVar3 = (fVar5 - fVar7) * 0.5 + fVar3;
  fVar4 = (fVar8 - fVar9) * 0.5 + fVar4;
  fVar5 = (*(float *)(this + 0x2c) + *(float *)(this + 0x1c)) * 0.5;
  fVar6 = (*(float *)(this + 0x30) + *(float *)(this + 0x20)) * 0.5;
  fVar8 = (*(float *)(this + 0x34) + *(float *)(this + 0x24)) * 0.5;
  fVar1 = fVar2 * ABS(*(float *)(param_1 + 0x20)) + fVar3 * ABS(*(float *)(param_1 + 0x24)) +
          fVar4 * ABS(*(float *)(param_1 + 0x28));
  fVar7 = fVar2 * ABS(*(float *)param_1) + fVar3 * ABS(*(float *)(param_1 + 4)) +
          fVar4 * ABS(*(float *)(param_1 + 8));
  fVar9 = fVar2 * ABS(*(float *)(param_1 + 0x10)) + fVar3 * ABS(*(float *)(param_1 + 0x14)) +
          fVar4 * ABS(*(float *)(param_1 + 0x18));
  fVar2 = fVar5 * *(float *)param_1 + fVar6 * *(float *)(param_1 + 4) +
          fVar8 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
  fVar3 = fVar5 * *(float *)(param_1 + 0x10) + fVar6 * *(float *)(param_1 + 0x14) +
          fVar8 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
  fVar4 = fVar5 * *(float *)(param_1 + 0x20) + fVar6 * *(float *)(param_1 + 0x24) +
          fVar8 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar2 - fVar7;
  *(float *)(param_2 + 4) = fVar3 - fVar9;
  *(float *)(param_2 + 8) = fVar4 - fVar1;
  *(float *)param_3 = fVar7 + fVar2;
  *(float *)(param_3 + 4) = fVar9 + fVar3;
  *(float *)(param_3 + 8) = fVar1 + fVar4;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}

