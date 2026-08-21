
/* cocos2d::PUTechniqueTranslator::~PUTechniqueTranslator() */

void __thiscall cocos2d::PUTechniqueTranslator::~PUTechniqueTranslator(PUTechniqueTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

