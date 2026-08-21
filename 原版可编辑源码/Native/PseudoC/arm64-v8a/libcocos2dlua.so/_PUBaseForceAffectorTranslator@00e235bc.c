
/* cocos2d::PUBaseForceAffectorTranslator::~PUBaseForceAffectorTranslator() */

void __thiscall
cocos2d::PUBaseForceAffectorTranslator::~PUBaseForceAffectorTranslator
          (PUBaseForceAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

