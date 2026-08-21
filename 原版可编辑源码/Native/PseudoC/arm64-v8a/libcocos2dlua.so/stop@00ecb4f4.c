
/* cocos2d::Speed::stop() */

void __thiscall cocos2d::Speed::stop(Speed *this)

{
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 0x38))();
  }
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

