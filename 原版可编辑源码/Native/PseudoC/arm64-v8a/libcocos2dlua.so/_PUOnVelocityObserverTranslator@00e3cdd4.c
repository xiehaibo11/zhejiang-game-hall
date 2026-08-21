
/* cocos2d::PUOnVelocityObserverTranslator::~PUOnVelocityObserverTranslator() */

void __thiscall
cocos2d::PUOnVelocityObserverTranslator::~PUOnVelocityObserverTranslator
          (PUOnVelocityObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

