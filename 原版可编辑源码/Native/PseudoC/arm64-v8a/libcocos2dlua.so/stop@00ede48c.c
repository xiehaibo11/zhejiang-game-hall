
/* cocos2d::Spawn::stop() */

void __thiscall cocos2d::Spawn::stop(Spawn *this)

{
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 0x38))();
  }
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 0x38))();
  }
  Action::stop((Action *)this);
  return;
}

