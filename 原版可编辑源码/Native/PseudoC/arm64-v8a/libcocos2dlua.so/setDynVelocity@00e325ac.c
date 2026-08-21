
/* cocos2d::PUEmitter::setDynVelocity(cocos2d::PUDynamicAttribute*) */

void __thiscall cocos2d::PUEmitter::setDynVelocity(PUEmitter *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 8))();
  }
  *(PUDynamicAttribute **)(this + 0x130) = param_1;
  return;
}

