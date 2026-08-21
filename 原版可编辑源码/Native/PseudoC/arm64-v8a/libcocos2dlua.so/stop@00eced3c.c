
/* cocos2d::ActionEase::stop() */

void __thiscall cocos2d::ActionEase::stop(ActionEase *this)

{
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 0x38))();
  }
  Action::stop((Action *)this);
  return;
}

