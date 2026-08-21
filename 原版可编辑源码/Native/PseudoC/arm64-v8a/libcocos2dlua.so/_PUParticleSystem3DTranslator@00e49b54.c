
/* cocos2d::PUParticleSystem3DTranslator::~PUParticleSystem3DTranslator() */

void __thiscall
cocos2d::PUParticleSystem3DTranslator::~PUParticleSystem3DTranslator
          (PUParticleSystem3DTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

