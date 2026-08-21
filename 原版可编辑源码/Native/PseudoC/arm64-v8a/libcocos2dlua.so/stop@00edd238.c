
/* cocos2d::Repeat::stop() */

void __thiscall cocos2d::Repeat::stop(Repeat *this)

{
  (**(code **)(**(long **)(this + 0x68) + 0x38))();
  Action::stop((Action *)this);
  return;
}

