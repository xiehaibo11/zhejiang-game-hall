
/* cocos2d::PUTranslateManager::translateParticleSystem(cocos2d::PUParticleSystem3D*,
   std::__ndk1::list<cocos2d::PUAbstractNode*, std::__ndk1::allocator<cocos2d::PUAbstractNode*> >
   const*) */

void __thiscall
cocos2d::PUTranslateManager::translateParticleSystem
          (PUTranslateManager *this,PUParticleSystem3D *param_1,list *param_2)

{
  PUScriptCompiler *pPVar1;
  list *plVar2;
  
  plVar2 = *(list **)(param_2 + 8);
  if (param_2 != plVar2) {
    do {
      *(PUParticleSystem3D **)(this + 0x10) = param_1;
      pPVar1 = (PUScriptCompiler *)PUScriptCompiler::Instance();
      PUParticleSystem3DTranslator::translate
                ((PUParticleSystem3DTranslator *)(this + 8),pPVar1,
                 *(PUAbstractNode **)(plVar2 + 0x10));
      plVar2 = *(list **)(plVar2 + 8);
    } while (param_2 != plVar2);
  }
  return;
}

