
/* cocos2d::PUSlaveBehaviourTranslator::~PUSlaveBehaviourTranslator() */

void __thiscall
cocos2d::PUSlaveBehaviourTranslator::~PUSlaveBehaviourTranslator(PUSlaveBehaviourTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

