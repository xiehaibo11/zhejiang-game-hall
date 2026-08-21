
/* cocos2d::PUOnPositionObserverTranslator::~PUOnPositionObserverTranslator() */

void __thiscall
cocos2d::PUOnPositionObserverTranslator::~PUOnPositionObserverTranslator
          (PUOnPositionObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

