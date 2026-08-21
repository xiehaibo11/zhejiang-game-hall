
/* cocos2d::PUDoStopSystemEventHandlerTranslator::~PUDoStopSystemEventHandlerTranslator() */

void __thiscall
cocos2d::PUDoStopSystemEventHandlerTranslator::~PUDoStopSystemEventHandlerTranslator
          (PUDoStopSystemEventHandlerTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

