
/* dragonBones::BoundingBoxDisplayData::_onClear() */

void __thiscall dragonBones::BoundingBoxDisplayData::_onClear(BoundingBoxDisplayData *this)

{
  undefined8 uVar1;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x18),"",0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x30),"",0);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 0x60) = 0;
  if (*(BaseObject **)(this + 0x68) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x68));
  }
  *(undefined4 *)(this + 0x10) = 3;
  *(undefined8 *)(this + 0x68) = 0;
  return;
}

