
/* btHeightfieldTerrainShape::btHeightfieldTerrainShape(int, int, void const*, float, int, bool,
   bool) */

void __thiscall
btHeightfieldTerrainShape::btHeightfieldTerrainShape
          (btHeightfieldTerrainShape *this,int param_1,int param_2,void *param_3,float param_4,
          int param_5,bool param_6,bool param_7)

{
  btHeightfieldTerrainShape *pbVar1;
  btHeightfieldTerrainShape *pbVar2;
  btHeightfieldTerrainShape *pbVar3;
  btHeightfieldTerrainShape *pbVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  btConcaveShape::btConcaveShape((btConcaveShape *)this);
  *(undefined4 *)(this + 8) = 0x18;
  *(undefined ***)this = &PTR__btHeightfieldTerrainShape_01733360;
  *(int *)(this + 0x4c) = param_1;
  *(int *)(this + 0x50) = param_2;
  *(undefined4 *)(this + 0x54) = 0;
  pbVar4 = this + 0x58;
  *(float *)pbVar4 = param_4;
  pbVar1 = this + 0x5c;
  *(float *)pbVar1 = (float)(param_1 + -1);
  pbVar3 = this + 0x60;
  *(float *)pbVar3 = (float)(param_2 + -1);
  uVar5 = 0;
  if (!param_6) {
    uVar5 = 5;
  }
  *(undefined4 *)(this + 0x70) = uVar5;
  *(void **)(this + 0x68) = param_3;
  this[0x74] = (btHeightfieldTerrainShape)param_7;
  *(undefined2 *)(this + 0x75) = 0;
  *(int *)(this + 0x78) = param_5;
  *(undefined4 *)(this + 0x7c) = 0x3f800000;
  *(undefined8 *)(this + 0x80) = 0x3f8000003f800000;
  *(float *)(this + 100) = param_4 / 65535.0;
  *(undefined4 *)(this + 0x88) = 0;
  if (param_5 == 0) {
    *(undefined8 *)(this + 0x1c) = 0;
    pbVar2 = pbVar1;
  }
  else if (param_5 == 1) {
    *(undefined8 *)(this + 0x1c) = 0;
    pbVar2 = pbVar4;
    pbVar4 = pbVar1;
  }
  else {
    if (param_5 != 2) {
      fVar10 = *(float *)(this + 0x1c);
      fVar7 = *(float *)(this + 0x20);
      fVar9 = *(float *)(this + 0x2c);
      fVar8 = *(float *)(this + 0x30);
      fVar6 = *(float *)(this + 0x24);
      fVar11 = *(float *)(this + 0x34);
      goto LAB_01229078;
    }
    *(undefined8 *)(this + 0x1c) = 0;
    pbVar2 = pbVar3;
    pbVar3 = pbVar4;
    pbVar4 = pbVar1;
  }
  *(undefined8 *)(this + 0x24) = 0;
  fVar9 = *(float *)pbVar4;
  fVar8 = *(float *)pbVar2;
  fVar6 = 0.0;
  fVar7 = 0.0;
  *(float *)(this + 0x2c) = fVar9;
  *(float *)(this + 0x30) = fVar8;
  fVar11 = *(float *)pbVar3;
  fVar10 = 0.0;
  *(float *)(this + 0x34) = fVar11;
  *(undefined4 *)(this + 0x38) = 0;
LAB_01229078:
  *(float *)(this + 0x3c) = (fVar9 + fVar10) * 0.5;
  *(float *)(this + 0x40) = (fVar8 + fVar7) * 0.5;
  *(float *)(this + 0x44) = (fVar11 + fVar6) * 0.5;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}

