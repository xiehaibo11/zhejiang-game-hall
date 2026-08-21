
/* cocos2d::PUFlockCenteringAffectorTranslator::~PUFlockCenteringAffectorTranslator() */

void __thiscall
cocos2d::PUFlockCenteringAffectorTranslator::~PUFlockCenteringAffectorTranslator
          (PUFlockCenteringAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

