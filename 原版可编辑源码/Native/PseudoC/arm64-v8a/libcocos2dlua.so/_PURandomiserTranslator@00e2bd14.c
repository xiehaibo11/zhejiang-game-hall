
/* cocos2d::PURandomiserTranslator::~PURandomiserTranslator() */

void __thiscall
cocos2d::PURandomiserTranslator::~PURandomiserTranslator(PURandomiserTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

