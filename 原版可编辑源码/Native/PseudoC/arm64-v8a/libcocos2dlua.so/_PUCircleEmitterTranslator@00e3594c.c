
/* cocos2d::PUCircleEmitterTranslator::~PUCircleEmitterTranslator() */

void __thiscall
cocos2d::PUCircleEmitterTranslator::~PUCircleEmitterTranslator(PUCircleEmitterTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

