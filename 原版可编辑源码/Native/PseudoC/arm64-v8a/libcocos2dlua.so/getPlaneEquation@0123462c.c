
/* btTriangleShape::getPlaneEquation(int, btVector3&, btVector3&) const */

void __thiscall
btTriangleShape::getPlaneEquation
          (btTriangleShape *this,int param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(this + 0x58) - *(float *)(this + 0x48);
  fVar4 = *(float *)(this + 0x68) - *(float *)(this + 0x48);
  fVar3 = *(float *)(this + 0x5c) - *(float *)(this + 0x4c);
  fVar7 = *(float *)(this + 0x60) - *(float *)(this + 0x50);
  fVar6 = *(float *)(this + 0x6c) - *(float *)(this + 0x4c);
  fVar8 = *(float *)(this + 0x70) - *(float *)(this + 0x50);
  fVar5 = fVar3 * fVar8 - fVar7 * fVar6;
  fVar7 = fVar7 * fVar4 - fVar1 * fVar8;
  fVar1 = fVar1 * fVar6 - fVar3 * fVar4;
  *(float *)param_2 = fVar5;
  *(float *)(param_2 + 4) = fVar7;
  *(float *)(param_2 + 8) = fVar1;
  fVar3 = fVar1 * fVar1 + fVar5 * fVar5 + fVar7 * fVar7;
  fVar1 = SQRT(fVar3);
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar3);
  }
  fVar1 = 1.0 / fVar1;
  *(float *)param_2 = fVar1 * *(float *)param_2;
  *(float *)(param_2 + 4) = fVar1 * *(float *)(param_2 + 4);
  *(float *)(param_2 + 8) = fVar1 * *(float *)(param_2 + 8);
  uVar2 = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(this + 0x50);
  *(undefined8 *)param_3 = uVar2;
  return;
}

