
/* cocos2d::PUPositionEmitterTranslator::~PUPositionEmitterTranslator() */

void __thiscall
cocos2d::PUPositionEmitterTranslator::~PUPositionEmitterTranslator
          (PUPositionEmitterTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

