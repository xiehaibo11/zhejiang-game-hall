
/* cocos2d::PUTranslateManager::PUTranslateManager() */

void __thiscall cocos2d::PUTranslateManager::PUTranslateManager(PUTranslateManager *this)

{
  *(undefined ***)this = &PTR_getTranslator_016f2178;
  PUParticleSystem3DTranslator::PUParticleSystem3DTranslator
            ((PUParticleSystem3DTranslator *)(this + 8));
  PUTechniqueTranslator::PUTechniqueTranslator((PUTechniqueTranslator *)(this + 0x18));
  PURendererTranslator::PURendererTranslator((PURendererTranslator *)(this + 0x28));
  PUEmitterTranslator::PUEmitterTranslator((PUEmitterTranslator *)(this + 0x38));
  PUAffectorTranslator::PUAffectorTranslator((PUAffectorTranslator *)(this + 0x48));
  CCPUMaterialTranslator::CCPUMaterialTranslator((CCPUMaterialTranslator *)(this + 0x58));
  PUEventHandlerTranslator::PUEventHandlerTranslator((PUEventHandlerTranslator *)(this + 0x70));
  PUObserverTranslator::PUObserverTranslator((PUObserverTranslator *)(this + 0x80));
  PUBehaviourTranslator::PUBehaviourTranslator((PUBehaviourTranslator *)(this + 0x90));
  return;
}

