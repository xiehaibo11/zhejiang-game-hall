
/* btSphereShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall
btSphereShape::calculateLocalInertia(btSphereShape *this,float param_1,btVector3 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar2 = param_1 * 0.4 * fVar1 * fVar2;
  *(float *)param_2 = fVar2;
  *(float *)(param_2 + 4) = fVar2;
  *(float *)(param_2 + 8) = fVar2;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

