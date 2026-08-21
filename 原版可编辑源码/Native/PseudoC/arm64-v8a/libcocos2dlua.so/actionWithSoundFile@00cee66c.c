
/* cocosbuilder::CCBSoundEffect::actionWithSoundFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, float, float) */

Action * cocosbuilder::CCBSoundEffect::actionWithSoundFile
                   (basic_string *param_1,float param_2,float param_3,float param_4)

{
  ulong uVar1;
  basic_string *pbVar2;
  Action *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
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
    cocos2d::Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__CCBSoundEffect_016cf1a0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016cf200;
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x58);
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar2 = param_1 + 1;
        uVar1 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,(char *)pbVar2,uVar1);
    }
    *(float *)(this + 0x70) = param_2;
    *(float *)(this + 0x74) = param_3;
    *(float *)(this + 0x78) = param_4;
    cocos2d::Ref::autorelease((Ref *)this);
  }
  return this;
}

