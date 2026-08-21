
/* cocos2d::Console::commandDebugMsg(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandDebugMsg(int param_1,basic_string *param_2)

{
  char *pcVar1;
  
  pcVar1 = "off";
  if (*(char *)((ulong)(uint)param_1 + 0x100) != '\0') {
    pcVar1 = "on";
  }
  Utility::mydprintf((int)param_2,"Debug message is: %s\n",pcVar1);
  return;
}

