
/* cocos2d::PUOnCountObserverTranslator::~PUOnCountObserverTranslator() */

void __thiscall
cocos2d::PUOnCountObserverTranslator::~PUOnCountObserverTranslator
          (PUOnCountObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

