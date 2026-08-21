
/* cocos2d::PUOnCollisionObserverTranslator::~PUOnCollisionObserverTranslator() */

void __thiscall
cocos2d::PUOnCollisionObserverTranslator::~PUOnCollisionObserverTranslator
          (PUOnCollisionObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

