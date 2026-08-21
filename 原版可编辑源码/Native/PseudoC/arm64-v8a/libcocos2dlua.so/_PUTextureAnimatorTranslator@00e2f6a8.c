
/* cocos2d::PUTextureAnimatorTranslator::~PUTextureAnimatorTranslator() */

void __thiscall
cocos2d::PUTextureAnimatorTranslator::~PUTextureAnimatorTranslator
          (PUTextureAnimatorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

