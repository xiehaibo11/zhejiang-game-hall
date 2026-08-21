
/* cocos2d::JniHelper::reportError(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void cocos2d::JniHelper::reportError
               (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  basic_string *pbVar3;
  
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  pbVar1 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
  }
  pbVar3 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  if (((byte)*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  __android_log_print(6,"JniHelper",
                      "Failed to find static java method. Class name: %s, method name: %s, signature: %s "
                      ,pbVar2,pbVar1,pbVar3);
  return;
}

