
/* cocos2d::StringUtils::UTF16ToUTF32(std::__ndk1::basic_string<char16_t,
   std::__ndk1::char_traits<char16_t>, std::__ndk1::allocator<char16_t> > const&,
   std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> >&) */

bool cocos2d::StringUtils::UTF16ToUTF32(basic_string *param_1,basic_string *param_2)

{
  bool bVar1;
  
  bVar1 = utfConvert<char16_t,char32_t,cocos2d::StringUtils::ConvertTrait<char16_t>,cocos2d::StringUtils::ConvertTrait<char32_t>>
                    (param_1,param_2,ConvertUTF16toUTF32);
  return bVar1;
}

