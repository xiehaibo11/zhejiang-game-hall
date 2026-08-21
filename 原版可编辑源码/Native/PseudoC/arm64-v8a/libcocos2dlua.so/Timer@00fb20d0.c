
/* cocos2d::Timer::Timer() */

void __thiscall cocos2d::Timer::Timer(Timer *this)

{
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x30) = 0xbf800000;
  *(undefined ***)this = &PTR__Ref_01723720;
  this[0x48] = (Timer)0x0;
  return;
}

