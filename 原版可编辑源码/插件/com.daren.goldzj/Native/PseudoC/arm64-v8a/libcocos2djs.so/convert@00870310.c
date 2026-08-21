
/* cocos2d::JniHelper::convert(std::__ndk1::unordered_map<_JNIEnv*, std::__ndk1::vector<_jobject*,
   std::__ndk1::allocator<_jobject*> >, std::__ndk1::hash<_JNIEnv*>,
   std::__ndk1::equal_to<_JNIEnv*>, std::__ndk1::allocator<std::__ndk1::pair<_JNIEnv* const,
   std::__ndk1::vector<_jobject*, std::__ndk1::allocator<_jobject*> > > > >&,
   cocos2d::JniMethodInfo_&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void cocos2d::JniHelper::convert
               (unordered_map *param_1,JniMethodInfo_ *param_2,basic_string *param_3)

{
  basic_string *pbVar1;
  
  pbVar1 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
  }
  convert(param_1,param_2,(char *)pbVar1);
  return;
}

