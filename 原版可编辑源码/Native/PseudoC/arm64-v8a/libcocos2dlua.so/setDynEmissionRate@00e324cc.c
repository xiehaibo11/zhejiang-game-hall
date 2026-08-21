
/* cocos2d::PUEmitter::setDynEmissionRate(cocos2d::PUDynamicAttribute*) */

void __thiscall cocos2d::PUEmitter::setDynEmissionRate(PUEmitter *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x100) + 8))();
  }
  *(PUDynamicAttribute **)(this + 0x100) = param_1;
  return;
}

