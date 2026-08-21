
/* cocostudio::FrameData::FrameData() */

void __thiscall cocostudio::FrameData::FrameData(FrameData *this)

{
  undefined8 uVar1;
  
  cocos2d::Ref::Ref((Ref *)this);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x44] = (FrameData)0x0;
  *(undefined8 *)(this + 0x38) = uVar1;
  this[0x70] = (FrameData)0x1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined ***)this = &PTR__FrameData_016c8e20;
  *(undefined8 *)(this + 0x50) = 0xff000000ff;
  *(undefined8 *)(this + 0x48) = 0xff000000ff;
  *(undefined8 *)(this + 0x58) = 0x100000000;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0x30300000001;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x80),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x98),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0xb0),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 200),"");
  return;
}

