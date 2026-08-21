
/* cocos2d::PUTextureRotatorTranslator::~PUTextureRotatorTranslator() */

void __thiscall
cocos2d::PUTextureRotatorTranslator::~PUTextureRotatorTranslator(PUTextureRotatorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

