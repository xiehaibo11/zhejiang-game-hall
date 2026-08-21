
/* cocostudio::SpriteDisplayData::SpriteDisplayData() */

void __thiscall cocostudio::SpriteDisplayData::SpriteDisplayData(SpriteDisplayData *this)

{
  undefined8 uVar1;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x24) = 3;
  *(undefined ***)this = &PTR__DisplayData_016c8ce8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x28),"");
  *(undefined ***)this = &PTR__SpriteDisplayData_016c8d10;
  cocos2d::Ref::Ref((Ref *)(this + 0x40));
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  this[0x84] = (SpriteDisplayData)0x0;
  *(undefined8 *)(this + 0x78) = uVar1;
  *(undefined8 *)(this + 0x90) = 0xff000000ff;
  *(undefined8 *)(this + 0x88) = 0xff000000ff;
  *(undefined ***)(this + 0x40) = &PTR__BaseData_016c8ca8;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}

