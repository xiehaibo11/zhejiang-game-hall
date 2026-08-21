
/* cocos2d::PUDoAffectorEventHandlerTranslator::~PUDoAffectorEventHandlerTranslator() */

void __thiscall
cocos2d::PUDoAffectorEventHandlerTranslator::~PUDoAffectorEventHandlerTranslator
          (PUDoAffectorEventHandlerTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

