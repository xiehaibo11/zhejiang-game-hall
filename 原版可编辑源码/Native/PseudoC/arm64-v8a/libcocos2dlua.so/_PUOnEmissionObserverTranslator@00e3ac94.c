
/* cocos2d::PUOnEmissionObserverTranslator::~PUOnEmissionObserverTranslator() */

void __thiscall
cocos2d::PUOnEmissionObserverTranslator::~PUOnEmissionObserverTranslator
          (PUOnEmissionObserverTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
                    /* catch() { ... } // from try @ 00e3abc0 with catch @ 00e3acac */
  operator_delete(this);
  return;
}

