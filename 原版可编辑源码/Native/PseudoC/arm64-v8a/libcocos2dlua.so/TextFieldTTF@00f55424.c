
/* cocos2d::TextFieldTTF::TextFieldTTF() */

void __thiscall cocos2d::TextFieldTTF::TextFieldTTF(TextFieldTTF *this)

{
  undefined4 uVar1;
  
  Label::Label((Label *)this,0,0);
  IMEDelegate::IMEDelegate((IMEDelegate *)(this + 0x6a0));
  *(undefined ***)this = &PTR__TextFieldTTF_01711e18;
  *(undefined ***)(this + 0x300) = &PTR__TextFieldTTF_01712500;
  *(undefined ***)(this + 0x2f8) = &PTR__TextFieldTTF_017124d0;
  *(undefined ***)(this + 0x6a0) = &PTR__TextFieldTTF_01712530;
  *(undefined8 *)(this + 0x6b0) = 0;
  *(undefined8 *)(this + 0x6a8) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x6b8),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x6d0),"");
  Color4B::Color4B((Color4B *)(this + 0x6e8));
  uVar1 = Color4B::WHITE;
  this[0x6f0] = (TextFieldTTF)0x0;
  *(undefined4 *)(this + 0x6ec) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x6f8),&DAT_0143dc4d);
  this[0x710] = (TextFieldTTF)0x0;
  *(undefined8 *)(this + 0x718) = 0;
  *(undefined4 *)(this + 0x724) = 0;
  this[0x728] = (TextFieldTTF)0x0;
  this[0x720] = (TextFieldTTF)0x7c;
  *(undefined4 *)(this + 0x6e8) = 0xff7f7f7f;
  return;
}

