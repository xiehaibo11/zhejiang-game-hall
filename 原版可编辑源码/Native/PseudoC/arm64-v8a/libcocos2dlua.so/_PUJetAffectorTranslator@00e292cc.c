
/* cocos2d::PUJetAffectorTranslator::~PUJetAffectorTranslator() */

void __thiscall
cocos2d::PUJetAffectorTranslator::~PUJetAffectorTranslator(PUJetAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

