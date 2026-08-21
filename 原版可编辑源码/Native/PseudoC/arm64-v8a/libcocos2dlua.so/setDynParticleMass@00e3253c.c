
/* cocos2d::PUEmitter::setDynParticleMass(cocos2d::PUDynamicAttribute*) */

void __thiscall cocos2d::PUEmitter::setDynParticleMass(PUEmitter *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x128) + 8))();
  }
  *(PUDynamicAttribute **)(this + 0x128) = param_1;
  return;
}

