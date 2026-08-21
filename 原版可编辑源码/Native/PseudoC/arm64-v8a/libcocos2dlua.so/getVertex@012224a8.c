
/* btBoxShape::getVertex(int, btVector3&) const */

void __thiscall btBoxShape::getVertex(btBoxShape *this,int param_1,btVector3 *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *(float *)(this + 0x28);
  fVar7 = *(float *)(this + 0x2c);
  fVar8 = *(float *)(this + 0x30);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar5 = (float)(**(code **)(*(long *)this + 0x60))(this);
  uVar1 = (uint)param_1 >> 1 & 1;
  uVar2 = (uint)param_1 >> 2 & 1;
  *(float *)param_2 =
       (fVar6 + fVar3) * (float)(param_1 & 1U ^ 1) - (fVar6 + fVar3) * (float)(param_1 & 1U);
  *(float *)(param_2 + 4) = (fVar7 + fVar4) * (float)(uVar1 ^ 1) - (fVar7 + fVar4) * (float)uVar1;
  *(float *)(param_2 + 8) = (fVar8 + fVar5) * (float)(uVar2 ^ 1) - (fVar8 + fVar5) * (float)uVar2;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

