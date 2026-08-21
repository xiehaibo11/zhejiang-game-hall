
/* cocos2d::PUEmitter::setDynAngle(cocos2d::PUDynamicAttribute*) */

void __thiscall cocos2d::PUEmitter::setDynAngle(PUEmitter *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  *(PUDynamicAttribute **)(this + 0xf8) = param_1;
  return;
}

