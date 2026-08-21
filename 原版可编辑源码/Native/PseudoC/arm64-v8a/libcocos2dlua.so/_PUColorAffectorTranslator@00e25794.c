
/* cocos2d::PUColorAffectorTranslator::~PUColorAffectorTranslator() */

void __thiscall
cocos2d::PUColorAffectorTranslator::~PUColorAffectorTranslator(PUColorAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

