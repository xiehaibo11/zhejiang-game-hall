
/* cocos2d::ActionTween::create(float, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, float) */

Action * cocos2d::ActionTween::create
                   (float param_1,basic_string *param_2,float param_3,float param_4)

{
  basic_string *pbVar1;
  Action *this;
  ulong uVar2;
  
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined ***)this = &PTR__ActionTween_016fa340;
    *(undefined ***)(this + 0x28) = &PTR_clone_016fa3a0;
    *(undefined8 *)(this + 0x58) = 0;
    uVar2 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (this + 0x58) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2)
      {
        uVar2 = *(ulong *)(param_2 + 8);
        pbVar1 = *(basic_string **)(param_2 + 0x10);
        if (((byte)*param_2 & 1) == 0) {
          pbVar1 = param_2 + 1;
          uVar2 = (ulong)((byte)*param_2 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x58),(char *)pbVar1,uVar2);
      }
      *(float *)(this + 0x70) = param_3;
      *(float *)(this + 0x74) = param_4;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

