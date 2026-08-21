
/* cocos2d::PUEventHandlerManager::PUEventHandlerManager() */

void __thiscall cocos2d::PUEventHandlerManager::PUEventHandlerManager(PUEventHandlerManager *this)

{
  PUDoAffectorEventHandlerTranslator::PUDoAffectorEventHandlerTranslator
            ((PUDoAffectorEventHandlerTranslator *)this);
  PUDoEnableComponentEventHandlerTranslator::PUDoEnableComponentEventHandlerTranslator
            ((PUDoEnableComponentEventHandlerTranslator *)(this + 8));
  PUDoExpireEventHandlerTranslator::PUDoExpireEventHandlerTranslator
            ((PUDoExpireEventHandlerTranslator *)(this + 0x10));
  PUDoFreezeEventHandlerTranslator::PUDoFreezeEventHandlerTranslator
            ((PUDoFreezeEventHandlerTranslator *)(this + 0x18));
  PUDoPlacementParticleEventHandlerTranslator::PUDoPlacementParticleEventHandlerTranslator
            ((PUDoPlacementParticleEventHandlerTranslator *)(this + 0x20));
  PUDoScaleEventHandlerTranslator::PUDoScaleEventHandlerTranslator
            ((PUDoScaleEventHandlerTranslator *)(this + 0x28));
  PUDoStopSystemEventHandlerTranslator::PUDoStopSystemEventHandlerTranslator
            ((PUDoStopSystemEventHandlerTranslator *)(this + 0x30));
  return;
}

