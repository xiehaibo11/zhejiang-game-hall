
/* cocos2d::PUAlignAffectorTranslator::~PUAlignAffectorTranslator() */

void __thiscall
cocos2d::PUAlignAffectorTranslator::~PUAlignAffectorTranslator(PUAlignAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

