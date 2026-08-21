
/* cocos2d::PUTranslateManager::translateMaterialSystem(cocos2d::PUMaterialCache*,
   std::__ndk1::list<cocos2d::PUAbstractNode*, std::__ndk1::allocator<cocos2d::PUAbstractNode*> >
   const*) */

void __thiscall
cocos2d::PUTranslateManager::translateMaterialSystem
          (PUTranslateManager *this,PUMaterialCache *param_1,list *param_2)

{
  PUScriptCompiler *pPVar1;
  list *plVar2;
  
  plVar2 = *(list **)(param_2 + 8);
  if (param_2 != plVar2) {
    do {
      CCPUMaterialTranslator::setMaterialSystem((CCPUMaterialTranslator *)(this + 0x58),param_1);
      pPVar1 = (PUScriptCompiler *)PUScriptCompiler::Instance();
      CCPUMaterialTranslator::translate
                ((CCPUMaterialTranslator *)(this + 0x58),pPVar1,*(PUAbstractNode **)(plVar2 + 0x10))
      ;
      plVar2 = *(list **)(plVar2 + 8);
    } while (param_2 != plVar2);
  }
  return;
}

