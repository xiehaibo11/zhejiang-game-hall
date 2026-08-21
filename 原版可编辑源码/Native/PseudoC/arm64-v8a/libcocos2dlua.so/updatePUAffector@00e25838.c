
/* cocos2d::PUFlockCenteringAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUFlockCenteringAffector::updatePUAffector
          (PUFlockCenteringAffector *this,PUParticle3D *param_1,float param_2)

{
  float fVar1;
  
  *(ulong *)(this + 0xac) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0xac) >> 0x20),
                (float)*(undefined8 *)(param_1 + 8) + (float)*(undefined8 *)(this + 0xac));
  fVar1 = *(float *)(param_1 + 0x10);
  *(float *)(this + 0xc4) = *(float *)(this + 0xc4) + 1.0;
  *(float *)(this + 0xb4) = fVar1 + *(float *)(this + 0xb4);
  fVar1 = *(float *)(this + 0xc0);
  *(ulong *)(param_1 + 0xac) =
       CONCAT44(((float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20)) * param_2 +
                (float)((ulong)*(undefined8 *)(param_1 + 0xac) >> 0x20),
                ((float)*(undefined8 *)(this + 0xb8) - (float)*(undefined8 *)(param_1 + 8)) *
                param_2 + (float)*(undefined8 *)(param_1 + 0xac));
  *(float *)(param_1 + 0xb4) =
       (fVar1 - *(float *)(param_1 + 0x10)) * param_2 + *(float *)(param_1 + 0xb4);
  return;
}

