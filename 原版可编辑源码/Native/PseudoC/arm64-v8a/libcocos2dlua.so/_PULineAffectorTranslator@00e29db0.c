
/* cocos2d::PULineAffectorTranslator::~PULineAffectorTranslator() */

void __thiscall
cocos2d::PULineAffectorTranslator::~PULineAffectorTranslator(PULineAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
                    /* catch() { ... } // from try @ 00e29c90 with catch @ 00e29dc4 */
  operator_delete(this);
  return;
}

