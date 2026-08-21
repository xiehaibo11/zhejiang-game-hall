
/* cocos2d::PUDoFreezeEventHandlerTranslator::~PUDoFreezeEventHandlerTranslator() */

void __thiscall
cocos2d::PUDoFreezeEventHandlerTranslator::~PUDoFreezeEventHandlerTranslator
          (PUDoFreezeEventHandlerTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

