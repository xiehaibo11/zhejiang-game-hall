
/* cocos2d::PUOnClearObserverTranslator::~PUOnClearObserverTranslator() */

void __thiscall
cocos2d::PUOnClearObserverTranslator::~PUOnClearObserverTranslator
          (PUOnClearObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

