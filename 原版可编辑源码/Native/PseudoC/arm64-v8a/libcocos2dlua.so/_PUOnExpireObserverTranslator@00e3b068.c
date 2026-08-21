
/* cocos2d::PUOnExpireObserverTranslator::~PUOnExpireObserverTranslator() */

void __thiscall
cocos2d::PUOnExpireObserverTranslator::~PUOnExpireObserverTranslator
          (PUOnExpireObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

