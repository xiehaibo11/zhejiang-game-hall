
/* se::Value::setString(char const*) */

void __thiscall se::Value::setString(Value *this,char *param_1)

{
  size_t sVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  if (param_1 != (char *)0x0) {
    reset(this,4);
    this_00 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               this;
    sVar1 = strlen(param_1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,param_1,sVar1);
    return;
  }
  reset(this,1);
  return;
}

