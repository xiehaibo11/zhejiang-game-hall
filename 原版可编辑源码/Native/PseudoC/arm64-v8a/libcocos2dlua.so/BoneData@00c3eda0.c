
/* cocostudio::BoneData::BoneData() */

void __thiscall cocostudio::BoneData::BoneData(BoneData *this)

{
  undefined8 uVar1;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x44] = (BoneData)0x0;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined8 *)(this + 0x50) = 0xff000000ff;
  *(undefined8 *)(this + 0x48) = 0xff000000ff;
  *(undefined ***)this = &PTR__BoneData_016c8db8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x58),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x70),"");
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

