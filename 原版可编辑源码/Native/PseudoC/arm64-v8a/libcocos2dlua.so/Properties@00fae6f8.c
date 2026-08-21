
/* cocos2d::Properties::Properties(cocos2d::Data*, long*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char const*, char const*,
   cocos2d::Properties*) */

void __thiscall
cocos2d::Properties::Properties
          (Properties *this,Data *param_1,long *param_2,basic_string *param_3,char *param_4,
          char *param_5,Properties *param_6)

{
  size_t sVar1;
  
                    /* try { // try from 00fae718 to 010ae947 has its CatchHandler @ 00fae718
                       catch() { ... } // from try @ 00fae718 with catch @ 00fae718
                       catch() { ... } // from try @ 00fae9e8 with catch @ 00fae718
                       catch() { ... } // from try @ 00faeb8c with catch @ 00fae718 */
  *(long **)this = param_2;
  *(Data **)(this + 8) = param_1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x10),param_3);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(Properties **)(this + 0xa8) = param_6;
  if (param_4 != (char *)0x0) {
    sVar1 = strlen(param_4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x28),param_4,sVar1);
  }
  if (param_5 != (char *)0x0) {
    sVar1 = strlen(param_5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x40),param_5,sVar1);
  }
  readProperties(this);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x80);
  return;
}

