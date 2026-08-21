
/* btHeightfieldTerrainShape::getVertex(int, int, btVector3&) const */

void __thiscall
btHeightfieldTerrainShape::getVertex
          (btHeightfieldTerrainShape *this,int param_1,int param_2,btVector3 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)(**(code **)(*(long *)this + 0x88))();
  iVar1 = *(int *)(this + 0x78);
  if (iVar1 == 0) {
    fVar3 = fVar2 - *(float *)(this + 0x3c);
    fVar4 = (float)param_1 - *(float *)(this + 0x5c) * 0.5;
    fVar2 = (float)param_2 - *(float *)(this + 0x60) * 0.5;
  }
  else if (iVar1 == 1) {
    fVar4 = fVar2 - *(float *)(this + 0x40);
    fVar3 = (float)param_1 - *(float *)(this + 0x5c) * 0.5;
    fVar2 = (float)param_2 - *(float *)(this + 0x60) * 0.5;
  }
  else {
    if (iVar1 != 2) {
      fVar3 = *(float *)param_3;
      fVar4 = *(float *)(param_3 + 4);
      fVar2 = *(float *)(param_3 + 8);
      goto LAB_012293fc;
    }
    fVar3 = (float)param_1 - *(float *)(this + 0x5c) * 0.5;
    fVar4 = (float)param_2 - *(float *)(this + 0x60) * 0.5;
    fVar2 = fVar2 - *(float *)(this + 0x44);
  }
  *(float *)param_3 = fVar3;
  *(float *)(param_3 + 4) = fVar4;
  *(float *)(param_3 + 8) = fVar2;
  *(undefined4 *)(param_3 + 0xc) = 0;
LAB_012293fc:
  *(float *)param_3 = *(float *)(this + 0x7c) * fVar3;
  *(float *)(param_3 + 4) = *(float *)(this + 0x80) * fVar4;
  *(float *)(param_3 + 8) = *(float *)(this + 0x84) * fVar2;
  return;
}

