
/* cocos2d::PUPointEmitterTranslator::~PUPointEmitterTranslator() */

void __thiscall
cocos2d::PUPointEmitterTranslator::~PUPointEmitterTranslator(PUPointEmitterTranslator *this)

{
                    /* try { // try from 00e37e54 to 00f37e5f has its CatchHandler @ 00e39804 */
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

