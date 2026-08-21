
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::basic_istream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::basic_istream
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  *(basic_streambuf **)(this + 0x38) = param_1;
  *(undefined4 *)(this + 0x18) = 0x1002;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 6;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)(this + 0x10) = &PTR__basic_istream_01cdb378;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__basic_istream_01cdb350;
  *(uint *)(this + 0x30) = (uint)(param_1 == (basic_streambuf *)0x0);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  locale::locale((locale *)(this + 0x40));
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  return;
}

