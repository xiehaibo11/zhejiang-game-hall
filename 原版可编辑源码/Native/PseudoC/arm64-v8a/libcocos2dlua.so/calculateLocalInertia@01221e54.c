
/* btBoxShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall btBoxShape::calculateLocalInertia(btBoxShape *this,float param_1,btVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(this + 0x28);
  fVar5 = *(float *)(this + 0x2c);
  fVar6 = *(float *)(this + 0x30);
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = fVar4 + fVar1 + fVar4 + fVar1;
  fVar2 = fVar5 + fVar2 + fVar5 + fVar2;
  fVar1 = fVar6 + fVar3 + fVar6 + fVar3;
  fVar2 = fVar2 * fVar2;
  fVar1 = fVar1 * fVar1;
  fVar4 = fVar4 * fVar4;
  fVar3 = param_1 / 12.0;
  *(float *)param_2 = fVar3 * (fVar2 + fVar1);
  *(float *)(param_2 + 4) = fVar3 * (fVar4 + fVar1);
  *(float *)(param_2 + 8) = fVar3 * (fVar4 + fVar2);
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

