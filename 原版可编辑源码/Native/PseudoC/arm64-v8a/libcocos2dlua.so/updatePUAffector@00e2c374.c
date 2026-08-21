
/* cocos2d::PUScaleAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUScaleAffector::updatePUAffector
          (PUScaleAffector *this,PUParticle3D *param_1,float param_2)

{
  PUParticle3D *pPVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (this[0xd3] == (PUScaleAffector)0x0) {
    fVar2 = 0.0;
    if (this[0xd0] != (PUScaleAffector)0x0) {
      fVar2 = 0.0;
      if (param_1 != (PUParticle3D *)0x0) {
        if (this[0xd5] == (PUScaleAffector)0x0) {
          pPVar1 = param_1 + 0x134;
        }
        else {
          pPVar1 = (PUParticle3D *)(*(long *)(this + 0x28) + 0x440);
        }
        fVar2 = (float)PUDynamicAttributeHelper::calculate
                                 ((PUDynamicAttributeHelper *)(this + 0xd4),
                                  *(PUDynamicAttribute **)(this + 0xb0),*(float *)pPVar1,0.0);
      }
      fVar5 = *(float *)(param_1 + 0x44) + fVar2 * param_2 * *(float *)(this + 0x40);
      fVar2 = 0.0;
      if (0.0 < fVar5) {
        fVar2 = fVar5;
      }
    }
    fVar5 = 0.0;
    if (this[0xd1] != (PUScaleAffector)0x0) {
      fVar5 = 0.0;
      if (param_1 != (PUParticle3D *)0x0) {
        if (this[0xd5] == (PUScaleAffector)0x0) {
          pPVar1 = param_1 + 0x134;
        }
        else {
          pPVar1 = (PUParticle3D *)(*(long *)(this + 0x28) + 0x440);
        }
        fVar5 = (float)PUDynamicAttributeHelper::calculate
                                 ((PUDynamicAttributeHelper *)(this + 0xd4),
                                  *(PUDynamicAttribute **)(this + 0xb8),*(float *)pPVar1,0.0);
      }
      fVar3 = *(float *)(param_1 + 0x48) + fVar5 * param_2 * *(float *)(this + 0x44);
      fVar5 = 0.0;
      if (0.0 < fVar3) {
        fVar5 = fVar3;
      }
    }
    if (this[0xd2] == (PUScaleAffector)0x0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = 0.0;
      if (param_1 != (PUParticle3D *)0x0) {
        if (this[0xd5] == (PUScaleAffector)0x0) {
          pPVar1 = param_1 + 0x134;
        }
        else {
          pPVar1 = (PUParticle3D *)(*(long *)(this + 0x28) + 0x440);
        }
        fVar3 = (float)PUDynamicAttributeHelper::calculate
                                 ((PUDynamicAttributeHelper *)(this + 0xd4),
                                  *(PUDynamicAttribute **)(this + 0xc0),*(float *)pPVar1,0.0);
      }
      fVar4 = *(float *)(param_1 + 0x4c) + fVar3 * param_2 * *(float *)(this + 0x48);
      fVar3 = 0.0;
      if (0.0 < fVar4) {
        fVar3 = fVar4;
      }
    }
  }
  else {
    fVar4 = 0.0;
    fVar2 = 0.0;
    if (param_1 != (PUParticle3D *)0x0) {
      if (this[0xd5] == (PUScaleAffector)0x0) {
        pPVar1 = param_1 + 0x134;
      }
      else {
        pPVar1 = (PUParticle3D *)(*(long *)(this + 0x28) + 0x440);
      }
      fVar2 = (float)PUDynamicAttributeHelper::calculate
                               ((PUDynamicAttributeHelper *)(this + 0xd4),
                                *(PUDynamicAttribute **)(this + 200),*(float *)pPVar1,0.0);
    }
    fVar3 = (float)PUAffector::calculateAffectSpecialisationFactor((PUAffector *)this,param_1);
    fVar3 = fVar2 * param_2 * fVar3;
    fVar2 = *(float *)(param_1 + 0x44) + fVar3 * *(float *)(this + 0x40);
    fVar5 = *(float *)(param_1 + 0x48) + fVar3 * *(float *)(this + 0x44);
    fVar3 = *(float *)(param_1 + 0x4c) + fVar3 * *(float *)(this + 0x48);
    if (fVar2 <= 0.0) {
      fVar2 = fVar4;
    }
    if (fVar5 <= 0.0) {
      fVar5 = fVar4;
    }
    if (fVar3 <= 0.0) {
      fVar3 = fVar4;
    }
  }
  PUParticle3D::setOwnDimensions(param_1,fVar2,fVar5,fVar3);
  return;
}

