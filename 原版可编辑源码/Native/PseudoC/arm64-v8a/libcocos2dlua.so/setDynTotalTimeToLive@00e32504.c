
/* cocos2d::PUEmitter::setDynTotalTimeToLive(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUEmitter::setDynTotalTimeToLive(PUEmitter *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 8))();
  }
  *(PUDynamicAttribute **)(this + 0x120) = param_1;
  return;
}

