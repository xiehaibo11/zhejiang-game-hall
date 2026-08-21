
/* cocos2d::Console::commandAllocator(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandAllocator(int param_1,basic_string *param_2)

{
  Utility::mydprintf((int)param_2,
                     "allocator diagnostics not available. CC_ENABLE_ALLOCATOR_DIAGNOSTICS must be set to 1 in ccConfig.h\n"
                    );
  return;
}

