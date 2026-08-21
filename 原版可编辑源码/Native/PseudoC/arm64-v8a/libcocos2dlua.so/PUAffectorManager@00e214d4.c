
/* cocos2d::PUAffectorManager::PUAffectorManager() */

void __thiscall cocos2d::PUAffectorManager::PUAffectorManager(PUAffectorManager *this)

{
  PUAlignAffectorTranslator::PUAlignAffectorTranslator((PUAlignAffectorTranslator *)this);
  PUBaseColliderTranslator::PUBaseColliderTranslator((PUBaseColliderTranslator *)(this + 8));
  PUBaseForceAffectorTranslator::PUBaseForceAffectorTranslator
            ((PUBaseForceAffectorTranslator *)(this + 0x10));
  PUBoxColliderTranslator::PUBoxColliderTranslator((PUBoxColliderTranslator *)(this + 0x18));
  PUCollisionAvoidanceAffectorTranslator::PUCollisionAvoidanceAffectorTranslator
            ((PUCollisionAvoidanceAffectorTranslator *)(this + 0x20));
  PUColorAffectorTranslator::PUColorAffectorTranslator((PUColorAffectorTranslator *)(this + 0x28));
  PUFlockCenteringAffectorTranslator::PUFlockCenteringAffectorTranslator
            ((PUFlockCenteringAffectorTranslator *)(this + 0x30));
  PUForceFieldAffectorTranslator::PUForceFieldAffectorTranslator
            ((PUForceFieldAffectorTranslator *)(this + 0x38));
  PUGeometryRotatorTranslator::PUGeometryRotatorTranslator
            ((PUGeometryRotatorTranslator *)(this + 0x40));
  PUGravityAffectorTranslator::PUGravityAffectorTranslator
            ((PUGravityAffectorTranslator *)(this + 0x48));
  PUInterParticleColliderTranslator::PUInterParticleColliderTranslator
            ((PUInterParticleColliderTranslator *)(this + 0x50));
  PUJetAffectorTranslator::PUJetAffectorTranslator((PUJetAffectorTranslator *)(this + 0x58));
  PULineAffectorTranslator::PULineAffectorTranslator((PULineAffectorTranslator *)(this + 0x60));
  PULinearForceAffectorTranslator::PULinearForceAffectorTranslator
            ((PULinearForceAffectorTranslator *)(this + 0x68));
  PUParticleFollowerTranslator::PUParticleFollowerTranslator
            ((PUParticleFollowerTranslator *)(this + 0x70));
  PUPathFollowerTranslator::PUPathFollowerTranslator((PUPathFollowerTranslator *)(this + 0x78));
  PUPlaneColliderTranslator::PUPlaneColliderTranslator((PUPlaneColliderTranslator *)(this + 0x80));
  PURandomiserTranslator::PURandomiserTranslator((PURandomiserTranslator *)(this + 0x88));
  PUScaleAffectorTranslator::PUScaleAffectorTranslator((PUScaleAffectorTranslator *)(this + 0x90));
  PUScaleVelocityAffectorTranslator::PUScaleVelocityAffectorTranslator
            ((PUScaleVelocityAffectorTranslator *)(this + 0x98));
  PUSineForceAffectorTranslator::PUSineForceAffectorTranslator
            ((PUSineForceAffectorTranslator *)(this + 0xa0));
  PUSphereColliderTranslator::PUSphereColliderTranslator
            ((PUSphereColliderTranslator *)(this + 0xa8));
  PUTextureAnimatorTranslator::PUTextureAnimatorTranslator
            ((PUTextureAnimatorTranslator *)(this + 0xb0));
  PUTextureRotatorTranslator::PUTextureRotatorTranslator
            ((PUTextureRotatorTranslator *)(this + 0xb8));
  PUVelocityMatchingAffectorTranslator::PUVelocityMatchingAffectorTranslator
            ((PUVelocityMatchingAffectorTranslator *)(this + 0xc0));
  PUVortexAffectorTranslator::PUVortexAffectorTranslator((PUVortexAffectorTranslator *)(this + 200))
  ;
  return;
}

