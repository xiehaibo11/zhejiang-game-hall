
/* cocos2d::PUMaterialTextureUnitTranslator::~PUMaterialTextureUnitTranslator() */

void __thiscall
cocos2d::PUMaterialTextureUnitTranslator::~PUMaterialTextureUnitTranslator
          (PUMaterialTextureUnitTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

