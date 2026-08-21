
/* cocos2d::PUPathFollower::updatePUAffector(cocos2d::PUParticle3D*, float) */

void cocos2d::PUPathFollower::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  PUSimpleSpline *this;
  short sVar1;
  long in_x1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s2;
  
  this = (PUSimpleSpline *)(param_1 + 0xb0);
  sVar1 = PUSimpleSpline::getNumPoints(this);
  if (sVar1 != 0) {
    fVar2 = *(float *)(in_x1 + 0x130);
    fVar5 = fVar2 - *(float *)(in_x1 + 300);
                    /* try { // try from 00e2a758 to 00f2a7d7 has its CatchHandler @ 00e2a758
                       catch() { ... } // from try @ 00e2a758 with catch @ 00e2a758
                       catch() { ... } // from try @ 00e2a7f0 with catch @ 00e2a758 */
    fVar6 = 1.0;
    fVar3 = (float)NEON_fminnm((fVar5 + param_2) / fVar2,0x3f800000);
    fVar4 = (float)PUSimpleSpline::interpolate(this,fVar3);
    fVar3 = in_s2;
    fVar7 = fVar6;
    fVar2 = (float)PUSimpleSpline::interpolate(this,fVar5 / fVar2);
    fVar5 = *(float *)(param_1 + 0x48);
    *(ulong *)(in_x1 + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * (fVar6 - fVar7) +
                  (float)((ulong)*(undefined8 *)(in_x1 + 8) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x40) * (fVar4 - fVar2) +
                  (float)*(undefined8 *)(in_x1 + 8));
    *(float *)(in_x1 + 0x10) = (in_s2 - fVar3) * fVar5 + *(float *)(in_x1 + 0x10);
  }
  return;
}

