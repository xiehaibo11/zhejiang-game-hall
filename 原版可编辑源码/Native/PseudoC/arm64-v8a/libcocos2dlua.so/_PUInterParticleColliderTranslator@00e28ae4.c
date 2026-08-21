
/* cocos2d::PUInterParticleColliderTranslator::~PUInterParticleColliderTranslator() */

void __thiscall
cocos2d::PUInterParticleColliderTranslator::~PUInterParticleColliderTranslator
          (PUInterParticleColliderTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

