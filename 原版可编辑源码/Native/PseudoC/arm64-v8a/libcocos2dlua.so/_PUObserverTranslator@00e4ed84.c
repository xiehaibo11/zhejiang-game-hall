
/* cocos2d::PUObserverTranslator::~PUObserverTranslator() */

void __thiscall cocos2d::PUObserverTranslator::~PUObserverTranslator(PUObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

