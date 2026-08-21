
/* btHeightfieldTerrainShape::btHeightfieldTerrainShape(int, int, void const*, float, float, float,
   int, PHY_ScalarType, bool) */

void __thiscall
btHeightfieldTerrainShape::btHeightfieldTerrainShape
          (undefined4 param_4,float param_5,undefined4 param_6,btHeightfieldTerrainShape *this,
          int param_1,int param_2,undefined8 param_3,int param_7,undefined4 param_9,byte param_10)

{
  btHeightfieldTerrainShape *pbVar1;
  btHeightfieldTerrainShape *pbVar2;
  btHeightfieldTerrainShape *pbVar3;
  btHeightfieldTerrainShape *pbVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  btConcaveShape::btConcaveShape((btConcaveShape *)this);
  *(undefined4 *)(this + 8) = 0x18;
  *(int *)(this + 0x4c) = param_1;
  *(int *)(this + 0x50) = param_2;
  *(undefined ***)this = &PTR__btHeightfieldTerrainShape_01733360;
  *(float *)(this + 0x54) = param_5;
  pbVar4 = this + 0x58;
  *(undefined4 *)pbVar4 = param_6;
  pbVar1 = this + 0x5c;
  *(float *)pbVar1 = (float)(param_1 + -1);
  pbVar3 = this + 0x60;
  *(float *)pbVar3 = (float)(param_2 + -1);
  *(undefined8 *)(this + 0x68) = param_3;
  *(undefined4 *)(this + 0x70) = param_9;
  *(undefined4 *)(this + 100) = param_4;
  this[0x74] = (btHeightfieldTerrainShape)(param_10 & 1);
  *(undefined2 *)(this + 0x75) = 0;
  *(int *)(this + 0x78) = param_7;
  *(undefined4 *)(this + 0x7c) = 0x3f800000;
  *(undefined8 *)(this + 0x80) = 0x3f8000003f800000;
  *(undefined4 *)(this + 0x88) = 0;
  if (param_7 == 0) {
    *(float *)(this + 0x1c) = param_5;
    *(undefined4 *)(this + 0x20) = 0;
    fVar5 = 0.0;
    fVar9 = 0.0;
    pbVar2 = pbVar1;
  }
  else if (param_7 == 1) {
    *(undefined4 *)(this + 0x1c) = 0;
    *(float *)(this + 0x20) = param_5;
    fVar9 = 0.0;
    pbVar2 = pbVar4;
    pbVar4 = pbVar1;
    fVar5 = param_5;
    param_5 = 0.0;
  }
  else {
    if (param_7 != 2) {
      param_5 = *(float *)(this + 0x1c);
      fVar5 = *(float *)(this + 0x20);
      fVar6 = *(float *)(this + 0x2c);
      fVar7 = *(float *)(this + 0x30);
      fVar9 = *(float *)(this + 0x24);
      fVar8 = *(float *)(this + 0x34);
      goto LAB_01228dac;
    }
    *(undefined8 *)(this + 0x1c) = 0;
    pbVar2 = pbVar3;
    pbVar3 = pbVar4;
    pbVar4 = pbVar1;
    fVar9 = param_5;
    fVar5 = 0.0;
    param_5 = 0.0;
  }
  *(float *)(this + 0x24) = fVar9;
  fVar6 = *(float *)pbVar4;
  *(undefined4 *)(this + 0x28) = 0;
  *(float *)(this + 0x2c) = fVar6;
  fVar7 = *(float *)pbVar2;
  fVar8 = *(float *)pbVar3;
  *(undefined4 *)(this + 0x38) = 0;
  *(float *)(this + 0x30) = fVar7;
  *(float *)(this + 0x34) = fVar8;
LAB_01228dac:
  *(float *)(this + 0x3c) = (fVar6 + param_5) * 0.5;
  *(float *)(this + 0x40) = (fVar7 + fVar5) * 0.5;
  *(float *)(this + 0x44) = (fVar8 + fVar9) * 0.5;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}

