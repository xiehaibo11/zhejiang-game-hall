
/* dragonBones::ImageDisplayData::~ImageDisplayData() */

void __thiscall dragonBones::ImageDisplayData::~ImageDisplayData(ImageDisplayData *this)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__ImageDisplayData_01c90f28;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x18),"",0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x30),"",0);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)this = &PTR__DisplayData_01c90ee0;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x18) & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

