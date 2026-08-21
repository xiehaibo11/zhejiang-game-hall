
/* cocos2d::PURealTimeForceFieldCalculationFactory::determineForce(cocos2d::Vec3 const&,
   cocos2d::Vec3&, float) */

void __thiscall
cocos2d::PURealTimeForceFieldCalculationFactory::determineForce
          (PURealTimeForceFieldCalculationFactory *this,Vec3 *param_1,Vec3 *param_2,float param_3)

{
  PUNoise3D *this_00;
  float fVar1;
  float fVar4;
  double dVar2;
  double dVar3;
  float fVar5;
  
  fVar1 = (float)*(undefined8 *)(this + 0x850) * (float)*(undefined8 *)param_1;
  fVar4 = (float)((ulong)*(undefined8 *)(this + 0x850) >> 0x20) *
          (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  *(ulong *)(this + 0x868) = CONCAT44(fVar4,fVar1);
  fVar5 = *(float *)(this + 0x858) * *(float *)(param_1 + 8);
  *(float *)(this + 0x870) = fVar5;
  if ((((0.0 <= fVar1) && (fVar1 <= 1.0)) && (fVar5 <= 1.0)) &&
     (((0.0 <= fVar4 && (fVar4 <= 1.0)) && (0.0 <= fVar5)))) {
    this_00 = (PUNoise3D *)(this + 8);
    dVar2 = (double)PUNoise3D::noise(this_00,(double)(fVar1 + param_3),(double)fVar4,(double)fVar5);
    dVar3 = (double)PUNoise3D::noise(this_00,(double)(*(float *)(this + 0x868) - param_3),
                                     (double)*(float *)(this + 0x86c),
                                     (double)*(float *)(this + 0x870));
    *(float *)param_2 = (float)(dVar2 - dVar3);
    dVar2 = (double)PUNoise3D::noise(this_00,(double)*(float *)(this + 0x868),
                                     (double)(*(float *)(this + 0x86c) + param_3),
                                     (double)*(float *)(this + 0x870));
    dVar3 = (double)PUNoise3D::noise(this_00,(double)*(float *)(this + 0x868),
                                     (double)(*(float *)(this + 0x86c) - param_3),
                                     (double)*(float *)(this + 0x870));
    *(float *)(param_2 + 4) = (float)(dVar2 - dVar3);
    dVar2 = (double)PUNoise3D::noise(this_00,(double)*(float *)(this + 0x868),
                                     (double)*(float *)(this + 0x86c),
                                     (double)(*(float *)(this + 0x870) + param_3));
    dVar3 = (double)PUNoise3D::noise(this_00,(double)*(float *)(this + 0x868),
                                     (double)*(float *)(this + 0x86c),
                                     (double)(*(float *)(this + 0x870) - param_3));
    *(float *)(param_2 + 8) = (float)(dVar2 - dVar3);
  }
  return;
}

