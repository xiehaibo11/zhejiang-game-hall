
/* cocos2d::PUMaterialTechniqueTranslator::~PUMaterialTechniqueTranslator() */

void __thiscall
cocos2d::PUMaterialTechniqueTranslator::~PUMaterialTechniqueTranslator
          (PUMaterialTechniqueTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

