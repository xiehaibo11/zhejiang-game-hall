
/* cocos2d::PUJetAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUJetAffector::updatePUAffector(PUJetAffector *this,PUParticle3D *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = (float)(**(code **)(**(long **)(this + 0xb0) + 0x10))(*(undefined4 *)(param_1 + 0x134));
  fVar1 = fVar1 * param_2;
  *(float *)(this + 0xac) = fVar1;
                    /* try { // try from 00e28cc0 to 00f28ccb has its CatchHandler @ 00e293a0 */
  fVar2 = *(float *)(param_1 + 0xac);
  fVar3 = *(float *)(param_1 + 0xb0);
  if (((fVar2 == 0.0) && (fVar3 == 0.0)) && (fVar5 = *(float *)(param_1 + 0xb4), fVar5 == 0.0)) {
    fVar6 = fVar1 * *(float *)(param_1 + 0xc0);
    fVar4 = fVar1 * *(float *)(param_1 + 0xbc);
    fVar8 = *(float *)(param_1 + 0xb8);
    fVar7 = fVar3;
  }
  else {
    fVar6 = *(float *)(param_1 + 0xb4);
    fVar7 = fVar1 * fVar3;
    fVar5 = fVar1 * fVar6;
    fVar4 = fVar3;
    fVar8 = fVar2;
  }
  *(float *)(param_1 + 0xac) = fVar2 + fVar1 * fVar8;
  *(float *)(param_1 + 0xb0) = fVar4 + fVar7;
  *(float *)(param_1 + 0xb4) = fVar6 + fVar5;
  return;
}

