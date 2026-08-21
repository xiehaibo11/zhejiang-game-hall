
/* cocos2d::PUBehaviourTranslator::~PUBehaviourTranslator() */

void __thiscall cocos2d::PUBehaviourTranslator::~PUBehaviourTranslator(PUBehaviourTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

