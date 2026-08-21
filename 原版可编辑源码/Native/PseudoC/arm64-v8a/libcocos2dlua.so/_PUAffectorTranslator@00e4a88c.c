
/* cocos2d::PUAffectorTranslator::~PUAffectorTranslator() */

void __thiscall cocos2d::PUAffectorTranslator::~PUAffectorTranslator(PUAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

