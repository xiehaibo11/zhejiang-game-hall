
/* cocos2d::PUScaleVelocityAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUScaleVelocityAffector::updatePUAffector
          (PUScaleVelocityAffector *this,PUParticle3D *param_1,float param_2)

{
  PUParticle3D *pPVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* catch() { ... } // from try @ 00e2d0a8 with catch @ 00e2d1b4 */
                    /* catch() { ... } // from try @ 00e2d0ec with catch @ 00e2d1c4 */
  if (this[0xb9] == (PUScaleVelocityAffector)0x0) {
    pPVar1 = param_1 + 0x134;
  }
  else {
    pPVar1 = (PUParticle3D *)(*(long *)(this + 0x28) + 0x440);
  }
  fVar2 = (float)PUDynamicAttributeHelper::calculate
                           ((PUDynamicAttributeHelper *)(this + 0xb8),
                            *(PUDynamicAttribute **)(this + 0xb0),*(float *)pPVar1,0.0);
  fVar5 = *(float *)(param_1 + 0xac);
  fVar4 = *(float *)(param_1 + 0xb0);
                    /* try { // try from 00e2d200 to 00f2d283 has its CatchHandler @ 00e2d200
                       catch() { ... } // from try @ 00e2d200 with catch @ 00e2d200
                       catch() { ... } // from try @ 00e2d2b0 with catch @ 00e2d200 */
  fVar2 = fVar2 * param_2;
  fVar3 = *(float *)(param_1 + 0xb4);
  fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar8 = fVar5 + fVar2 * (fVar5 / fVar6);
  fVar7 = fVar4 + fVar2 * (fVar4 / fVar6);
  fVar2 = fVar3 + fVar2 * (fVar3 / fVar6);
                    /* try { // try from 00e2d284 to 00f2d28f has its CatchHandler @ 00e2d338 */
                    /* try { // try from 00e2d2a8 to 00f2d2af has its CatchHandler @ 00e2d34c */
  if ((this[0xba] == (PUScaleVelocityAffector)0x0) ||
     ((((0.0 <= fVar5 || (fVar8 <= 0.0)) && ((0.0 <= fVar4 || (fVar7 <= 0.0)))) &&
      ((((0.0 <= fVar3 || (fVar2 <= 0.0)) && ((fVar5 <= 0.0 || (0.0 <= fVar8)))) &&
       (((fVar4 <= 0.0 || (0.0 <= fVar7)) && ((fVar3 <= 0.0 || (0.0 <= fVar2)))))))))) {
    *(float *)(param_1 + 0xac) = fVar8;
    *(float *)(param_1 + 0xb0) = fVar7;
                    /* try { // try from 00e2d2b0 to 00f2d37f has its CatchHandler @ 00e2d200 */
    *(float *)(param_1 + 0xb4) = fVar2;
  }
  return;
}

