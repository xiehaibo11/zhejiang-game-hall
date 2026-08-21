
/* cocos2d::PUEmitterTranslator::~PUEmitterTranslator() */

void __thiscall cocos2d::PUEmitterTranslator::~PUEmitterTranslator(PUEmitterTranslator *this)

{
                    /* try { // try from 00e4d620 to 00f4d65f has its CatchHandler @ 00e4d620
                       catch() { ... } // from try @ 00e4d620 with catch @ 00e4d620
                       catch() { ... } // from try @ 00e4d84c with catch @ 00e4d620 */
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

