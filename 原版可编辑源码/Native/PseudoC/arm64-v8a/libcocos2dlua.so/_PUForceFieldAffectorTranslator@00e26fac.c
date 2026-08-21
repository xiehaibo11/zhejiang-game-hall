
/* cocos2d::PUForceFieldAffectorTranslator::~PUForceFieldAffectorTranslator() */

void __thiscall
cocos2d::PUForceFieldAffectorTranslator::~PUForceFieldAffectorTranslator
          (PUForceFieldAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

