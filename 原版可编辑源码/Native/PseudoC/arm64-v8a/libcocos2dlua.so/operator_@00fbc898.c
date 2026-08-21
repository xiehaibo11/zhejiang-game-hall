
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(char const*) */

Value * __thiscall cocos2d::Value::operator=(Value *this,char *param_1)

{
  char *__s;
  size_t sVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  if (*(int *)(this + 8) == 7) {
    this_00 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               this;
  }
  else {
    clear(this);
    this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this =
         this_00;
    *(undefined4 *)(this + 8) = 7;
  }
  __s = "";
  if (param_1 != (char *)0x0) {
    __s = param_1;
  }
  sVar1 = strlen(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(this_00,__s,sVar1);
  return this;
}

