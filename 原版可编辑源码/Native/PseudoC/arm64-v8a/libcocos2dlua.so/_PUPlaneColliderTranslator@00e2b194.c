
/* cocos2d::PUPlaneColliderTranslator::~PUPlaneColliderTranslator() */

void __thiscall
cocos2d::PUPlaneColliderTranslator::~PUPlaneColliderTranslator(PUPlaneColliderTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

