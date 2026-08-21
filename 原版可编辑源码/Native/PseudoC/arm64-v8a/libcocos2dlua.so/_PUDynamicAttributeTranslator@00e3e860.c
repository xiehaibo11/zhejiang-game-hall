
/* cocos2d::PUDynamicAttributeTranslator::~PUDynamicAttributeTranslator() */

void __thiscall
cocos2d::PUDynamicAttributeTranslator::~PUDynamicAttributeTranslator
          (PUDynamicAttributeTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

