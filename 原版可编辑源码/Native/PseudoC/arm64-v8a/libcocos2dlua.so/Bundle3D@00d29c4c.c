
/* cocos2d::Bundle3D::Bundle3D() */

void __thiscall cocos2d::Bundle3D::Bundle3D(Bundle3D *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &PTR_clear_016d3420;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 8),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x20),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x38),"");
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0x400;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  puVar1 = operator_new(0x28);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0x10000;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined8 **)(this + 0x80) = puVar1;
  *(undefined8 **)(this + 0x88) = puVar1;
  Data::Data((Data *)(this + 0xd0));
  BundleReader::BundleReader((BundleReader *)(this + 0xe0));
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  this[0x130] = (Bundle3D)0x0;
  return;
}

