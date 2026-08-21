
/* btCapsuleShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btCapsuleShape::getAabb
          (btCapsuleShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_50 [4];
  
  iVar1 = *(int *)(this + 0x40);
  local_50[0] = *(float *)(this + (long)((iVar1 + 2) % 3) * 4 + 0x28);
  local_50[3] = 0.0;
  local_50[1] = local_50[0];
  local_50[2] = local_50[0];
  local_50[iVar1] = *(float *)(this + (long)iVar1 * 4 + 0x28) + local_50[0];
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar2 = fVar2 + local_50[0];
  fVar3 = fVar3 + local_50[1];
  fVar8 = *(float *)(param_1 + 0x30);
  fVar9 = *(float *)(param_1 + 0x34);
  fVar4 = fVar4 + local_50[2];
  fVar6 = *(float *)(param_1 + 0x38);
  fVar5 = fVar4 * ABS(*(float *)(param_1 + 8)) +
          ABS(*(float *)param_1) * fVar2 + ABS(*(float *)(param_1 + 4)) * fVar3;
  fVar7 = fVar4 * ABS(*(float *)(param_1 + 0x18)) +
          ABS(*(float *)(param_1 + 0x10)) * fVar2 + ABS(*(float *)(param_1 + 0x14)) * fVar3;
  fVar2 = fVar4 * ABS(*(float *)(param_1 + 0x28)) +
          ABS(*(float *)(param_1 + 0x20)) * fVar2 + ABS(*(float *)(param_1 + 0x24)) * fVar3;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar8 - fVar5;
  *(float *)(param_2 + 4) = fVar9 - fVar7;
  *(float *)(param_2 + 8) = fVar6 - fVar2;
  *(float *)param_3 = fVar8 + fVar5;
  *(float *)(param_3 + 4) = fVar9 + fVar7;
  *(float *)(param_3 + 8) = fVar6 + fVar2;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}

