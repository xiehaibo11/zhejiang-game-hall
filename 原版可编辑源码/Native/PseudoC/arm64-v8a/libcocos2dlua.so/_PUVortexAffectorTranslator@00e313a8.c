
/* cocos2d::PUVortexAffectorTranslator::~PUVortexAffectorTranslator() */

void __thiscall
cocos2d::PUVortexAffectorTranslator::~PUVortexAffectorTranslator(PUVortexAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

