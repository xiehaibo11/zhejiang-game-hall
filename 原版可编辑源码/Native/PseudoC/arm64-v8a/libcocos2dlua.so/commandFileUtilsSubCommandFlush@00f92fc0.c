
/* cocos2d::Console::commandFileUtilsSubCommandFlush(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandFileUtilsSubCommandFlush(int param_1,basic_string *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FileUtils::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00f92fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}

