
/* btTriangleShape::getPreferredPenetrationDirection(int, btVector3&) const */

void __thiscall
btTriangleShape::getPreferredPenetrationDirection
          (btTriangleShape *this,int param_1,btVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(this + 0x58) - *(float *)(this + 0x48);
  fVar3 = *(float *)(this + 0x68) - *(float *)(this + 0x48);
  fVar2 = *(float *)(this + 0x5c) - *(float *)(this + 0x4c);
  fVar6 = *(float *)(this + 0x60) - *(float *)(this + 0x50);
  fVar5 = *(float *)(this + 0x6c) - *(float *)(this + 0x4c);
  fVar7 = *(float *)(this + 0x70) - *(float *)(this + 0x50);
  fVar4 = fVar2 * fVar7 - fVar6 * fVar5;
  fVar6 = fVar6 * fVar3 - fVar1 * fVar7;
  fVar1 = fVar1 * fVar5 - fVar2 * fVar3;
  *(float *)param_2 = fVar4;
  *(float *)(param_2 + 4) = fVar6;
  *(float *)(param_2 + 8) = fVar1;
  fVar2 = fVar1 * fVar1 + fVar4 * fVar4 + fVar6 * fVar6;
  fVar1 = SQRT(fVar2);
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8);
  fVar1 = 1.0 / fVar1;
  *(float *)param_2 = fVar1 * fVar2;
  *(float *)(param_2 + 4) = fVar1 * fVar3;
  *(float *)(param_2 + 8) = fVar1 * fVar4;
  if (param_1 != 0) {
    *(float *)param_2 = -(fVar1 * fVar2);
    *(float *)(param_2 + 4) = -(fVar1 * fVar3);
    *(float *)(param_2 + 8) = -(fVar1 * fVar4);
  }
  return;
}

