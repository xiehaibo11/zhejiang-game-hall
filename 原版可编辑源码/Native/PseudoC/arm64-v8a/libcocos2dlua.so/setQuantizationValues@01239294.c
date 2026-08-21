
/* btQuantizedBvh::setQuantizationValues(btVector3 const&, btVector3 const&, float) */

void __thiscall
btQuantizedBvh::setQuantizationValues
          (btQuantizedBvh *this,btVector3 *param_1,btVector3 *param_2,float param_3)

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
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  *(undefined4 *)(this + 0x14) = 0;
  fVar1 = fVar1 - param_3;
  fVar2 = fVar2 - param_3;
  fVar3 = fVar3 - param_3;
  *(float *)(this + 8) = fVar1;
  *(float *)(this + 0xc) = fVar2;
  *(float *)(this + 0x10) = fVar3;
  fVar6 = *(float *)param_2 + param_3;
  fVar5 = *(float *)(param_2 + 4) + param_3;
  fVar4 = *(float *)(param_2 + 8) + param_3;
  fVar7 = 65533.0 / (fVar6 - fVar1);
  fVar8 = 65533.0 / (fVar5 - fVar2);
  fVar9 = 65533.0 / (fVar4 - fVar3);
  this[0x40] = (btQuantizedBvh)0x1;
  fVar11 = (fVar1 + (float)((int)((fVar1 - fVar1) * fVar7) & 0xfffe) / fVar7) - param_3;
  fVar10 = (fVar2 + (float)((int)((fVar2 - fVar2) * fVar8) & 0xfffe) / fVar8) - param_3;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(float *)(this + 0x18) = fVar6;
  *(float *)(this + 0x1c) = fVar5;
  *(float *)(this + 0x20) = fVar4;
  *(float *)(this + 0x28) = fVar7;
  *(float *)(this + 0x2c) = fVar8;
  *(float *)(this + 0x30) = fVar9;
  if (fVar11 < fVar1) {
    *(float *)(this + 8) = fVar11;
    fVar1 = fVar11;
  }
  fVar11 = (fVar3 + (float)((int)((fVar3 - fVar3) * fVar9) & 0xfffe) / fVar9) - param_3;
  if (fVar10 < fVar2) {
    *(float *)(this + 0xc) = fVar10;
    fVar2 = fVar10;
  }
  if (fVar11 < fVar3) {
    *(float *)(this + 0x10) = fVar11;
    fVar3 = fVar11;
  }
  fVar10 = fVar1 + (float)((int)((fVar6 - fVar1) * fVar7 + 1.0) | 1) / fVar7 + param_3;
  fVar7 = fVar2 + (float)((int)((fVar5 - fVar2) * fVar8 + 1.0) | 1) / fVar8 + param_3;
  if (fVar6 < fVar10) {
    *(float *)(this + 0x18) = fVar10;
    fVar6 = fVar10;
  }
  fVar8 = fVar3 + (float)((int)((fVar4 - fVar3) * fVar9 + 1.0) | 1) / fVar9 + param_3;
  if (fVar5 < fVar7) {
    *(float *)(this + 0x1c) = fVar7;
    fVar5 = fVar7;
  }
  if (fVar4 < fVar8) {
    *(float *)(this + 0x20) = fVar8;
    fVar4 = fVar8;
  }
  *(float *)(this + 0x28) = 65533.0 / (fVar6 - fVar1);
  *(float *)(this + 0x2c) = 65533.0 / (fVar5 - fVar2);
  *(float *)(this + 0x30) = 65533.0 / (fVar4 - fVar3);
  *(undefined4 *)(this + 0x34) = 0;
  return;
}

