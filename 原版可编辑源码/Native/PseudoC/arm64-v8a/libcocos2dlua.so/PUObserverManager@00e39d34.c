
/* cocos2d::PUObserverManager::PUObserverManager() */

void __thiscall cocos2d::PUObserverManager::PUObserverManager(PUObserverManager *this)

{
  PUOnClearObserverTranslator::PUOnClearObserverTranslator((PUOnClearObserverTranslator *)this);
  PUOnCollisionObserverTranslator::PUOnCollisionObserverTranslator
            ((PUOnCollisionObserverTranslator *)(this + 8));
  PUOnCountObserverTranslator::PUOnCountObserverTranslator
            ((PUOnCountObserverTranslator *)(this + 0x10));
  PUOnEmissionObserverTranslator::PUOnEmissionObserverTranslator
            ((PUOnEmissionObserverTranslator *)(this + 0x18));
  PUOnEventFlagObserverTranslator::PUOnEventFlagObserverTranslator
            ((PUOnEventFlagObserverTranslator *)(this + 0x20));
  PUOnExpireObserverTranslator::PUOnExpireObserverTranslator
            ((PUOnExpireObserverTranslator *)(this + 0x28));
  PUOnPositionObserverTranslator::PUOnPositionObserverTranslator
            ((PUOnPositionObserverTranslator *)(this + 0x30));
  PUOnQuotaObserverTranslator::PUOnQuotaObserverTranslator
            ((PUOnQuotaObserverTranslator *)(this + 0x38));
  PUOnRandomObserverTranslator::PUOnRandomObserverTranslator
            ((PUOnRandomObserverTranslator *)(this + 0x40));
  PUOnTimeObserverTranslator::PUOnTimeObserverTranslator
            ((PUOnTimeObserverTranslator *)(this + 0x48));
  PUOnVelocityObserverTranslator::PUOnVelocityObserverTranslator
            ((PUOnVelocityObserverTranslator *)(this + 0x50));
  return;
}

