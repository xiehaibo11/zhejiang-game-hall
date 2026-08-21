
/* cocos2d::PUDoScaleEventHandler::handle(cocos2d::PUParticleSystem3D*, cocos2d::PUParticle3D*,
   float) */

void __thiscall
cocos2d::PUDoScaleEventHandler::handle
          (PUDoScaleEventHandler *this,PUParticleSystem3D *param_1,PUParticle3D *param_2,
          float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 != (PUParticle3D *)0x0) {
    if (*(int *)(this + 0x70) == 1) {
      fVar1 = *(float *)(this + 0x6c) * param_3;
      fVar2 = (float)*(undefined8 *)(param_2 + 0xac);
      fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0xac) >> 0x20);
      *(ulong *)(param_2 + 0xac) = CONCAT44(fVar3 + fVar3 * fVar1,fVar2 + fVar2 * fVar1);
      *(float *)(param_2 + 0xb4) = *(float *)(param_2 + 0xb4) + fVar1 * *(float *)(param_2 + 0xb4);
    }
    else if (*(int *)(this + 0x70) == 0) {
      *(float *)(param_2 + 300) =
           *(float *)(param_2 + 300) - *(float *)(this + 0x6c) * param_3 * *(float *)(param_2 + 300)
      ;
      return;
    }
  }
  return;
}

