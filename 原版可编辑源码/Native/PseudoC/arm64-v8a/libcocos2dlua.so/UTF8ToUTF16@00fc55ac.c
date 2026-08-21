
/* cocos2d::StringUtils::UTF8ToUTF16(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char16_t,
   std::__ndk1::char_traits<char16_t>, std::__ndk1::allocator<char16_t> >&) */

bool cocos2d::StringUtils::UTF8ToUTF16(basic_string *param_1,basic_string *param_2)

{
  bool bVar1;
  
  bVar1 = utfConvert<char,char16_t,cocos2d::StringUtils::ConvertTrait<char>,cocos2d::StringUtils::ConvertTrait<char16_t>>
                    (param_1,param_2,ConvertUTF8toUTF16);
  return bVar1;
}

