
/* cocos2d::PUEmitter::setDynParticleHeight(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUEmitter::setDynParticleHeight(PUEmitter *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 8))();
  }
  *(PUDynamicAttribute **)(this + 0x168) = param_1;
  this[0x170] = (PUEmitter)0x1;
  return;
}

