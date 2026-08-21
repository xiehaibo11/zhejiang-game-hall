
/* cocos2d::PUOnTimeObserverTranslator::~PUOnTimeObserverTranslator() */

void __thiscall
cocos2d::PUOnTimeObserverTranslator::~PUOnTimeObserverTranslator(PUOnTimeObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

