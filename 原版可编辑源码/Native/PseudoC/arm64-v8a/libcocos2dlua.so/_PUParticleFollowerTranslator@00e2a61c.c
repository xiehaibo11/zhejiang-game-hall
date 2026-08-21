
/* cocos2d::PUParticleFollowerTranslator::~PUParticleFollowerTranslator() */

void __thiscall
cocos2d::PUParticleFollowerTranslator::~PUParticleFollowerTranslator
          (PUParticleFollowerTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

