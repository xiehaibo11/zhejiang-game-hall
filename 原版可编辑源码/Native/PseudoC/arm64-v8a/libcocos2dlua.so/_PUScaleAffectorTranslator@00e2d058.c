
/* cocos2d::PUScaleAffectorTranslator::~PUScaleAffectorTranslator() */

void __thiscall
cocos2d::PUScaleAffectorTranslator::~PUScaleAffectorTranslator(PUScaleAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

