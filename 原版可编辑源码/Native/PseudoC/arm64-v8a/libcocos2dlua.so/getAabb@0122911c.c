
/* btHeightfieldTerrainShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btHeightfieldTerrainShape::getAabb
          (btHeightfieldTerrainShape *this,btTransform *param_1,btVector3 *param_2,
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
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar14 = *(float *)param_1;
  fVar15 = *(float *)(param_1 + 4);
  fVar17 = *(float *)(param_1 + 0x10);
  fVar18 = *(float *)(param_1 + 0x14);
  fVar8 = *(float *)(param_1 + 0x20);
  fVar9 = *(float *)(param_1 + 0x24);
  fVar16 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x28);
  fVar11 = *(float *)(param_1 + 0x30);
  fVar12 = *(float *)(param_1 + 0x34);
  fVar1 = (*(float *)(this + 0x2c) - *(float *)(this + 0x1c)) * *(float *)(this + 0x7c) * 0.5;
  fVar5 = (*(float *)(this + 0x30) - *(float *)(this + 0x20)) * *(float *)(this + 0x80) * 0.5;
  fVar13 = *(float *)(param_1 + 0x38);
  fVar7 = (*(float *)(this + 0x34) - *(float *)(this + 0x24)) * *(float *)(this + 0x84) * 0.5;
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar2 = fVar1 * ABS(fVar14) + fVar5 * ABS(fVar15) + fVar7 * ABS(fVar16) + fVar2;
  fVar3 = fVar1 * ABS(fVar17) + fVar5 * ABS(fVar18) + fVar7 * ABS(fVar6) + fVar3;
  fVar4 = fVar1 * ABS(fVar8) + fVar5 * ABS(fVar9) + fVar7 * ABS(fVar10) + fVar4;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar11 - fVar2;
  *(float *)(param_2 + 4) = fVar12 - fVar3;
  *(float *)(param_2 + 8) = fVar13 - fVar4;
  *(float *)param_3 = fVar11 + fVar2;
  *(float *)(param_3 + 4) = fVar12 + fVar3;
  *(float *)(param_3 + 8) = fVar13 + fVar4;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}

