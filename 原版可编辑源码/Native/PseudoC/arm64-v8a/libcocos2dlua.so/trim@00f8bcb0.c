
/* cocos2d::Console::Utility::trim(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void cocos2d::Console::Utility::trim(basic_string *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = (basic_string *)rtrim(param_1);
  ltrim(pbVar1);
  return;
}

