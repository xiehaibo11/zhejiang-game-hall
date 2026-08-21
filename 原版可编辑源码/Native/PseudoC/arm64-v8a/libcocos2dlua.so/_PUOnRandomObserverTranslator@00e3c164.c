
/* cocos2d::PUOnRandomObserverTranslator::~PUOnRandomObserverTranslator() */

void __thiscall
cocos2d::PUOnRandomObserverTranslator::~PUOnRandomObserverTranslator
          (PUOnRandomObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

