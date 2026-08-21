
/* cocos2d::StringUtils::UTF8ToUTF32(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> >&) */

bool cocos2d::StringUtils::UTF8ToUTF32(basic_string *param_1,basic_string *param_2)

{
  bool bVar1;
  
  bVar1 = utfConvert<char,char32_t,cocos2d::StringUtils::ConvertTrait<char>,cocos2d::StringUtils::ConvertTrait<char32_t>>
                    (param_1,param_2,ConvertUTF8toUTF32);
  return bVar1;
}

