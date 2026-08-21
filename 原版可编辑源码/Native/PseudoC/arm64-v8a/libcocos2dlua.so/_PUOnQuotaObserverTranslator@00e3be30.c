
/* cocos2d::PUOnQuotaObserverTranslator::~PUOnQuotaObserverTranslator() */

void __thiscall
cocos2d::PUOnQuotaObserverTranslator::~PUOnQuotaObserverTranslator
          (PUOnQuotaObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

