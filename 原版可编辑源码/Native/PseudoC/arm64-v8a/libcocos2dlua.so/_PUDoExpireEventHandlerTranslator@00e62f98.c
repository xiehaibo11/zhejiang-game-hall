
/* cocos2d::PUDoExpireEventHandlerTranslator::~PUDoExpireEventHandlerTranslator() */

void __thiscall
cocos2d::PUDoExpireEventHandlerTranslator::~PUDoExpireEventHandlerTranslator
          (PUDoExpireEventHandlerTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

