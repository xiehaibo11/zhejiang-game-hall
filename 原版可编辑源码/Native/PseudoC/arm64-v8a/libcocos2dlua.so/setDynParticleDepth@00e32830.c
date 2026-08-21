
/* cocos2d::PUEmitter::setDynParticleDepth(cocos2d::PUDynamicAttribute*) */

void __thiscall cocos2d::PUEmitter::setDynParticleDepth(PUEmitter *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 8))();
  }
  *(PUDynamicAttribute **)(this + 0x178) = param_1;
  this[0x180] = (PUEmitter)0x1;
  return;
}

