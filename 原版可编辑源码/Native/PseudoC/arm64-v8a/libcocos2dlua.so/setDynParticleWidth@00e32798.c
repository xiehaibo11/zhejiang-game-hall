
/* cocos2d::PUEmitter::setDynParticleWidth(cocos2d::PUDynamicAttribute*) */

void __thiscall cocos2d::PUEmitter::setDynParticleWidth(PUEmitter *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 8))();
  }
  *(PUDynamicAttribute **)(this + 0x158) = param_1;
  this[0x160] = (PUEmitter)0x1;
  return;
}

