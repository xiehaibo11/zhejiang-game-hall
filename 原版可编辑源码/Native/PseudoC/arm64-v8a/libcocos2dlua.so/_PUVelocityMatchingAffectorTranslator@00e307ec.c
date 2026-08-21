
/* cocos2d::PUVelocityMatchingAffectorTranslator::~PUVelocityMatchingAffectorTranslator() */

void __thiscall
cocos2d::PUVelocityMatchingAffectorTranslator::~PUVelocityMatchingAffectorTranslator
          (PUVelocityMatchingAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

