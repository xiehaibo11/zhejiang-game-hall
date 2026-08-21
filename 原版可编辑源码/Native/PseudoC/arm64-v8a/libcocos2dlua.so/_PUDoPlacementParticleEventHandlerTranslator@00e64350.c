
/* cocos2d::PUDoPlacementParticleEventHandlerTranslator::~PUDoPlacementParticleEventHandlerTranslator()
    */

void __thiscall
cocos2d::PUDoPlacementParticleEventHandlerTranslator::~PUDoPlacementParticleEventHandlerTranslator
          (PUDoPlacementParticleEventHandlerTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

