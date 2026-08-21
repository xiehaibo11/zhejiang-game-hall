
/* cocostudio::ArmatureAnimation::create(cocostudio::Armature*) */

ProcessBase * cocostudio::ArmatureAnimation::create(Armature *param_1)

{
  ProcessBase *this;
  ulong uVar1;
  
  this = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
  if (this != (ProcessBase *)0x0) {
    ProcessBase::ProcessBase(this);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x60) = 0x3f800000;
    *(undefined ***)this = &PTR__ArmatureAnimation_016c8968;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x78),"");
    *(undefined4 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    this[0xb0] = (ProcessBase)0x0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0x110) = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)(this + 0x12a) = 0;
    *(undefined8 *)(this + 0x122) = 0;
    *(undefined4 *)(this + 0x138) = 0xffffffff;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0x1a0) = 0;
    *(undefined8 *)(this + 0x1d0) = 0;
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x140) = 0;
    *(undefined8 *)(this + 0x158) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x160) = 0;
    *(undefined8 *)(this + 0x170) = 0;
    uVar1 = (**(code **)(*(long *)this + 0xa0))(this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ProcessBase *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

