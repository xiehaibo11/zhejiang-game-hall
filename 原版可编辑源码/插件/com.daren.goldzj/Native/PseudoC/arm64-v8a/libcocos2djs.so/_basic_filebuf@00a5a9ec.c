
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::~basic_filebuf() */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this)

{
  int iVar1;
  FILE *__stream;
  
  __stream = *(FILE **)(this + 0x78);
  *(undefined ***)this = &PTR__basic_filebuf_01c6e668;
  if (__stream != (FILE *)0x0) {
    sync(this);
    iVar1 = fclose(__stream);
    if (iVar1 == 0) {
      *(undefined8 *)(this + 0x78) = 0;
    }
    (**(code **)(*(long *)this + 0x18))(this,0,0);
  }
  if ((this[0xa0] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) &&
     (*(void **)(this + 0x40) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x40));
  }
  if ((this[0xa1] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) &&
     (*(void **)(this + 0x68) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x68));
  }
                    /* try { // try from 00a5aa70 to 00b5aacb has its CatchHandler @ 00a5aa70
                       catch() { ... } // from try @ 00a5aa70 with catch @ 00a5aa70
                       catch() { ... } // from try @ 00a5aafc with catch @ 00a5aa70 */
  *(undefined ***)this = &PTR__basic_streambuf_01c671a8;
  locale::~locale((locale *)(this + 8));
  return;
}

