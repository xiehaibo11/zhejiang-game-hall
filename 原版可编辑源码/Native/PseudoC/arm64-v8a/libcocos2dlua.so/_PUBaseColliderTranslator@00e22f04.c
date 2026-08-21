
/* cocos2d::PUBaseColliderTranslator::~PUBaseColliderTranslator() */

void __thiscall
cocos2d::PUBaseColliderTranslator::~PUBaseColliderTranslator(PUBaseColliderTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

