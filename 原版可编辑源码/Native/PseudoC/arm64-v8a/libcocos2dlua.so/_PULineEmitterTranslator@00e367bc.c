
/* cocos2d::PULineEmitterTranslator::~PULineEmitterTranslator() */

void __thiscall
cocos2d::PULineEmitterTranslator::~PULineEmitterTranslator(PULineEmitterTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

