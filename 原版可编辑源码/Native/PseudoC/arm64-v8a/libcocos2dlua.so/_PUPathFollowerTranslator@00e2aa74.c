
/* cocos2d::PUPathFollowerTranslator::~PUPathFollowerTranslator() */

void __thiscall
cocos2d::PUPathFollowerTranslator::~PUPathFollowerTranslator(PUPathFollowerTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

