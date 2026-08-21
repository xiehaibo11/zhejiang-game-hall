
/* cocos2d::PUScaleVelocityAffectorTranslator::~PUScaleVelocityAffectorTranslator() */

void __thiscall
cocos2d::PUScaleVelocityAffectorTranslator::~PUScaleVelocityAffectorTranslator
          (PUScaleVelocityAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

