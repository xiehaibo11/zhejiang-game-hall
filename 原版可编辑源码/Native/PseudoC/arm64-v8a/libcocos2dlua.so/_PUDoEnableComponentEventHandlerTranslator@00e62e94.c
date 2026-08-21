
/* cocos2d::PUDoEnableComponentEventHandlerTranslator::~PUDoEnableComponentEventHandlerTranslator()
    */

void __thiscall
cocos2d::PUDoEnableComponentEventHandlerTranslator::~PUDoEnableComponentEventHandlerTranslator
          (PUDoEnableComponentEventHandlerTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

