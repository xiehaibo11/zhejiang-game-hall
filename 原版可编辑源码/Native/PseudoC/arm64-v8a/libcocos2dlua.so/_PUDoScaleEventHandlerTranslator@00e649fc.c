
/* cocos2d::PUDoScaleEventHandlerTranslator::~PUDoScaleEventHandlerTranslator() */

void __thiscall
cocos2d::PUDoScaleEventHandlerTranslator::~PUDoScaleEventHandlerTranslator
          (PUDoScaleEventHandlerTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

