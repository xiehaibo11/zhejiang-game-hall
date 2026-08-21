
/* cocos2d::PUMaterialPassTranslator::~PUMaterialPassTranslator() */

void __thiscall
cocos2d::PUMaterialPassTranslator::~PUMaterialPassTranslator(PUMaterialPassTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

