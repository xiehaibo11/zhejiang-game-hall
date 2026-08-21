
void FUN_011da74c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 param_2,int param_3)

{
  if ((param_3 != 1) && (param_3 < 0x1000)) {
    FUN_01211c40();
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(param_1,"unspecified iostream_category error");
  return;
}

