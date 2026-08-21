
/* cocos2d::PUOnEventFlagObserverTranslator::~PUOnEventFlagObserverTranslator() */

void __thiscall
cocos2d::PUOnEventFlagObserverTranslator::~PUOnEventFlagObserverTranslator
          (PUOnEventFlagObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

