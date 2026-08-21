
/* cocos2d::PUEmitter::setDynParticleAllDimensions(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUEmitter::setDynParticleAllDimensions(PUEmitter *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 8))();
  }
  *(PUDynamicAttribute **)(this + 0x148) = param_1;
  this[0x150] = (PUEmitter)0x1;
  return;
}

