
/* cocos2d::PUEmitter::initParticleDimensions(cocos2d::PUParticle3D*) */

void __thiscall cocos2d::PUEmitter::initParticleDimensions(PUEmitter *this,PUParticle3D *param_1)

{
  PUDynamicAttribute *pPVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 00e33250 to 00f3325b has its CatchHandler @ 00e33654 */
                    /* try { // try from 00e3325c to 00f332b7 has its CatchHandler @ 00e32fe0 */
  if (this[0x150] == (PUEmitter)0x0) {
    if (this[0x160] == (PUEmitter)0x0) {
      if ((this[0x170] == (PUEmitter)0x0) && (this[0x180] == (PUEmitter)0x0)) {
        fVar4 = *(float *)(this + 0x68);
        fVar3 = (float)PUParticleSystem3D::getDefaultWidth(*(PUParticleSystem3D **)(this + 0x28));
                    /* try { // try from 00e333bc to 00f333c7 has its CatchHandler @ 00e3364c */
        *(float *)(param_1 + 0x44) = fVar4 * fVar3;
                    /* try { // try from 00e333c8 to 00f3341b has its CatchHandler @ 00e32fe0 */
        fVar4 = *(float *)(this + 0x6c);
        fVar3 = (float)PUParticleSystem3D::getDefaultHeight(*(PUParticleSystem3D **)(this + 0x28));
        *(float *)(param_1 + 0x48) = fVar4 * fVar3;
        fVar4 = *(float *)(this + 0x70);
        fVar3 = (float)PUParticleSystem3D::getDefaultDepth(*(PUParticleSystem3D **)(this + 0x28));
        *(float *)(param_1 + 0x4c) = fVar4 * fVar3;
        PUParticle3D::calculateBoundingSphereRadius(param_1);
        return;
      }
    }
    else {
      pPVar1 = *(PUDynamicAttribute **)(this + 0x158);
      if (pPVar1 != (PUDynamicAttribute *)0x0) goto LAB_00e332c0;
    }
LAB_00e332f0:
    fVar2 = 0.0;
  }
  else {
    if (*(PUDynamicAttribute **)(this + 0x148) != (PUDynamicAttribute *)0x0) {
      fVar2 = (float)PUDynamicAttributeHelper::calculate
                               ((PUDynamicAttributeHelper *)(this + 0x194),
                                *(PUDynamicAttribute **)(this + 0x148),
                                *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
      fVar3 = fVar2;
      fVar4 = fVar2;
      goto LAB_00e33368;
    }
                    /* try { // try from 00e332b8 to 00f332bb has its CatchHandler @ 00e3361c */
                    /* try { // try from 00e332bc to 00f33303 has its CatchHandler @ 00e32fe0 */
    if ((this[0x160] == (PUEmitter)0x0) ||
       (pPVar1 = *(PUDynamicAttribute **)(this + 0x158), pPVar1 == (PUDynamicAttribute *)0x0))
    goto LAB_00e332f0;
LAB_00e332c0:
    fVar2 = (float)PUDynamicAttributeHelper::calculate
                             ((PUDynamicAttributeHelper *)(this + 0x194),pPVar1,
                              *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
  }
  fVar3 = 0.0;
  if (this[0x170] != (PUEmitter)0x0) {
                    /* try { // try from 00e33304 to 00f3330f has its CatchHandler @ 00e33650 */
    fVar3 = 0.0;
    if (*(PUDynamicAttribute **)(this + 0x168) != (PUDynamicAttribute *)0x0) {
                    /* try { // try from 00e33310 to 00f3336b has its CatchHandler @ 00e32fe0 */
      fVar3 = (float)PUDynamicAttributeHelper::calculate
                               ((PUDynamicAttributeHelper *)(this + 0x194),
                                *(PUDynamicAttribute **)(this + 0x168),
                                *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
    }
  }
  fVar4 = 0.0;
  if ((this[0x180] != (PUEmitter)0x0) &&
     (fVar4 = 0.0, *(PUDynamicAttribute **)(this + 0x178) != (PUDynamicAttribute *)0x0)) {
    fVar4 = (float)PUDynamicAttributeHelper::calculate
                             ((PUDynamicAttributeHelper *)(this + 0x194),
                              *(PUDynamicAttribute **)(this + 0x178),
                              *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
  }
  if (((this[0x160] == (PUEmitter)0x0) && (this[0x170] == (PUEmitter)0x0)) &&
     (this[0x180] == (PUEmitter)0x0)) {
    return;
  }
LAB_00e33368:
                    /* try { // try from 00e3336c to 00f3336f has its CatchHandler @ 00e33618 */
                    /* try { // try from 00e33370 to 00f333bb has its CatchHandler @ 00e32fe0 */
  PUParticle3D::setOwnDimensions
            (param_1,fVar2 * *(float *)(this + 0x68),fVar3 * *(float *)(this + 0x6c),
             fVar4 * *(float *)(this + 0x70));
  return;
}

