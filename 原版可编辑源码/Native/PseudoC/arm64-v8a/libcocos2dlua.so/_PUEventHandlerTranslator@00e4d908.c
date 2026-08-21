
/* cocos2d::PUEventHandlerTranslator::~PUEventHandlerTranslator() */

void __thiscall
cocos2d::PUEventHandlerTranslator::~PUEventHandlerTranslator(PUEventHandlerTranslator *this)

{
                    /* try { // try from 00e4d918 to 00f4d96f has its CatchHandler @ 00e4d918
                       catch() { ... } // from try @ 00e4d918 with catch @ 00e4d918
                       catch() { ... } // from try @ 00e4d9a8 with catch @ 00e4d918 */
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

