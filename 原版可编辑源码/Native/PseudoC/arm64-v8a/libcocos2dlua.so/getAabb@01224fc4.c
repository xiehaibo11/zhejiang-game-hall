
/* btCompoundShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btCompoundShape::getAabb
          (btCompoundShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar3 = *(float *)(this + 0x48);
  fVar8 = *(float *)(this + 0x4c);
  fVar9 = *(float *)(this + 0x38);
  fVar10 = *(float *)(this + 0x3c);
  fVar11 = *(float *)(this + 0x50);
  fVar12 = *(float *)(this + 0x40);
  iVar1 = *(int *)(this + 0x1c);
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar5 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar6 = (float)(**(code **)(*(long *)this + 0x60))(this);
  bVar2 = iVar1 != 0;
  fVar13 = 0.0;
  if (bVar2) {
    fVar13 = (fVar3 - fVar9) * 0.5;
  }
  fVar14 = 0.0;
  if (bVar2) {
    fVar14 = (fVar8 - fVar10) * 0.5;
  }
  fVar7 = 0.0;
  if (bVar2) {
    fVar7 = (fVar11 - fVar12) * 0.5;
  }
  fVar15 = 0.0;
  if (bVar2) {
    fVar15 = (fVar3 + fVar9) * 0.5;
  }
  fVar3 = 0.0;
  if (bVar2) {
    fVar3 = (fVar8 + fVar10) * 0.5;
  }
  fVar8 = 0.0;
  if (bVar2) {
    fVar8 = (fVar11 + fVar12) * 0.5;
  }
  fVar13 = fVar13 + fVar4;
  fVar14 = fVar14 + fVar5;
  fVar7 = fVar7 + fVar6;
  fVar4 = fVar15 * *(float *)param_1 + fVar3 * *(float *)(param_1 + 4) +
          fVar8 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
  fVar5 = fVar15 * *(float *)(param_1 + 0x10) + fVar3 * *(float *)(param_1 + 0x14) +
          fVar8 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
  fVar3 = fVar15 * *(float *)(param_1 + 0x20) + fVar3 * *(float *)(param_1 + 0x24) +
          fVar8 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
  fVar6 = fVar13 * ABS(*(float *)param_1) + fVar14 * ABS(*(float *)(param_1 + 4)) +
          fVar7 * ABS(*(float *)(param_1 + 8));
  fVar8 = fVar13 * ABS(*(float *)(param_1 + 0x10)) + fVar14 * ABS(*(float *)(param_1 + 0x14)) +
          fVar7 * ABS(*(float *)(param_1 + 0x18));
  fVar13 = fVar13 * ABS(*(float *)(param_1 + 0x20)) + fVar14 * ABS(*(float *)(param_1 + 0x24)) +
           fVar7 * ABS(*(float *)(param_1 + 0x28));
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar4 - fVar6;
  *(float *)(param_2 + 4) = fVar5 - fVar8;
  *(float *)(param_2 + 8) = fVar3 - fVar13;
  *(float *)param_3 = fVar6 + fVar4;
  *(float *)(param_3 + 4) = fVar8 + fVar5;
  *(float *)(param_3 + 8) = fVar13 + fVar3;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}

