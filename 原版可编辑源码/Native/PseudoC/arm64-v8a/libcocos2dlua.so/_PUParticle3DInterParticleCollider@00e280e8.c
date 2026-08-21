
/* cocos2d::PUParticle3DInterParticleCollider::~PUParticle3DInterParticleCollider() */

void __thiscall
cocos2d::PUParticle3DInterParticleCollider::~PUParticle3DInterParticleCollider
          (PUParticle3DInterParticleCollider *this)

{
  PUBaseCollider::~PUBaseCollider((PUBaseCollider *)this);
  operator_delete(this);
  return;
}

