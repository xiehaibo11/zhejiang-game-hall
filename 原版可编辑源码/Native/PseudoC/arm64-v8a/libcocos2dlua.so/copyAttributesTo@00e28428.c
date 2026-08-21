
/* cocos2d::PUParticle3DInterParticleCollider::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUParticle3DInterParticleCollider::copyAttributesTo
          (PUParticle3DInterParticleCollider *this,PUAffector *param_1)

{
  PUBaseCollider::copyAttributesTo((PUBaseCollider *)this,param_1);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(this + 0xc0);
  return;
}

