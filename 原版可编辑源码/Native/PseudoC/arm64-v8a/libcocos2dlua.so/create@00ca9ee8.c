
/* cocostudio::timeline::ActionTimelineData::create(int) */

Ref * cocostudio::timeline::ActionTimelineData::create(int param_1)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x28,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined ***)this = &PTR__Ref_016cc498;
    uVar1 = init((ActionTimelineData *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      cocos2d::Ref::autorelease(this);
    }
  }
  return this;
}

