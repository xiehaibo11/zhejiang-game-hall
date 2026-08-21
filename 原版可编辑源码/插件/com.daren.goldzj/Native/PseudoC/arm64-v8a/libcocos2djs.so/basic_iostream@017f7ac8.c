
/* std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char>
   >::basic_iostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::basic_iostream
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  *(undefined4 *)(this + 0x20) = 0x1002;
  *(basic_streambuf **)(this + 0x40) = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0x1cdb688;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x18) = 0x1cdb6b0;
  *(uint *)(this + 0x38) = (uint)(param_1 == (basic_streambuf *)0x0);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 6;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  locale::locale((locale *)(this + 0x48));
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined8 *)this = 0x1cdb4d0;
  *(undefined8 *)(this + 0x18) = 0x1cdb520;
  *(undefined8 *)(this + 0x10) = 0x1cdb4f8;
  return;
}

