
/* cocos2d::StringUtils::UTF16ToUTF8(std::__ndk1::basic_string<char16_t,
   std::__ndk1::char_traits<char16_t>, std::__ndk1::allocator<char16_t> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

bool cocos2d::StringUtils::UTF16ToUTF8(basic_string *param_1,basic_string *param_2)

{
  bool bVar1;
  
  bVar1 = utfConvert<char16_t,char,cocos2d::StringUtils::ConvertTrait<char16_t>,cocos2d::StringUtils::ConvertTrait<char>>
                    (param_1,param_2,ConvertUTF16toUTF8);
  return bVar1;
}

