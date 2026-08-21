
/* btPolyhedralConvexAabbCachingShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btPolyhedralConvexAabbCachingShape::getAabb
          (btPolyhedralConvexAabbCachingShape *this,btTransform *param_1,btVector3 *param_2,
          btVector3 *param_3)

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
  fVar2 = (*(float *)(this + 0x58) + *(float *)(this + 0x48)) * 0.5;
  fVar3 = (*(float *)(this + 0x5c) + *(float *)(this + 0x4c)) * 0.5;
  fVar4 = (*(float *)(this + 0x60) + *(float *)(this + 0x50)) * 0.5;
  fVar7 = fVar1 + (*(float *)(this + 0x58) - *(float *)(this + 0x48)) * 0.5;
  fVar8 = fVar1 + (*(float *)(this + 0x5c) - *(float *)(this + 0x4c)) * 0.5;
  fVar1 = fVar1 + (*(float *)(this + 0x60) - *(float *)(this + 0x50)) * 0.5;
  fVar5 = fVar2 * *(float *)param_1 + fVar3 * *(float *)(param_1 + 4) +
          fVar4 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
  fVar6 = fVar2 * *(float *)(param_1 + 0x10) + fVar3 * *(float *)(param_1 + 0x14) +
          fVar4 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
  fVar2 = fVar2 * *(float *)(param_1 + 0x20) + fVar3 * *(float *)(param_1 + 0x24) +
          fVar4 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
  fVar3 = fVar7 * ABS(*(float *)param_1) + fVar8 * ABS(*(float *)(param_1 + 4)) +
          fVar1 * ABS(*(float *)(param_1 + 8));
  fVar4 = fVar7 * ABS(*(float *)(param_1 + 0x10)) + fVar8 * ABS(*(float *)(param_1 + 0x14)) +
          fVar1 * ABS(*(float *)(param_1 + 0x18));
  fVar1 = fVar7 * ABS(*(float *)(param_1 + 0x20)) + fVar8 * ABS(*(float *)(param_1 + 0x24)) +
          fVar1 * ABS(*(float *)(param_1 + 0x28));
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar5 - fVar3;
  *(float *)(param_2 + 4) = fVar6 - fVar4;
  *(float *)(param_2 + 8) = fVar2 - fVar1;
  *(float *)param_3 = fVar3 + fVar5;
  *(float *)(param_3 + 4) = fVar4 + fVar6;
  *(float *)(param_3 + 8) = fVar1 + fVar2;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}

