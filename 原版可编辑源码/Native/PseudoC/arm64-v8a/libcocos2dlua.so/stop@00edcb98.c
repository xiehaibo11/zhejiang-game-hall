
/* cocos2d::Sequence::stop() */

void __thiscall cocos2d::Sequence::stop(Sequence *this)

{
  if ((*(int *)(this + 0x6c) != -1) &&
     (*(long **)(this + (long)*(int *)(this + 0x6c) * 8 + 0x58) != (long *)0x0)) {
    (**(code **)(**(long **)(this + (long)*(int *)(this + 0x6c) * 8 + 0x58) + 0x38))();
  }
  Action::stop((Action *)this);
  return;
}

