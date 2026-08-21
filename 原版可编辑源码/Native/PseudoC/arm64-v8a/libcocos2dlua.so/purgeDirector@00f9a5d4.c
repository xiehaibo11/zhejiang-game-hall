
/* cocos2d::Director::purgeDirector() */

void __thiscall cocos2d::Director::purgeDirector(Director *this)

{
  reset(this);
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0x10))();
    *(undefined8 *)(this + 0x108) = 0;
  }
  Ref::release((Ref *)this);
  return;
}

