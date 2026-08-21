
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::basic_ostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::basic_ostream
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  *(basic_streambuf **)(this + 0x30) = param_1;
  *(undefined8 *)(this + 8) = 0x1cdb438;
  *(undefined8 *)this = 0x1cdb410;
  *(undefined4 *)(this + 0x10) = 0x1002;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 6;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(uint *)(this + 0x28) = (uint)(param_1 == (basic_streambuf *)0x0);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  locale::locale((locale *)(this + 0x38));
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  return;
}

