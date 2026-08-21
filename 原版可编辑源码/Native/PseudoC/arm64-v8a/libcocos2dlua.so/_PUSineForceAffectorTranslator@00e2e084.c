
/* cocos2d::PUSineForceAffectorTranslator::~PUSineForceAffectorTranslator() */

void __thiscall
cocos2d::PUSineForceAffectorTranslator::~PUSineForceAffectorTranslator
          (PUSineForceAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

