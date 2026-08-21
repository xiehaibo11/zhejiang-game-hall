
/* cocos2d::PULinearForceAffectorTranslator::~PULinearForceAffectorTranslator() */

void __thiscall
cocos2d::PULinearForceAffectorTranslator::~PULinearForceAffectorTranslator
          (PULinearForceAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

