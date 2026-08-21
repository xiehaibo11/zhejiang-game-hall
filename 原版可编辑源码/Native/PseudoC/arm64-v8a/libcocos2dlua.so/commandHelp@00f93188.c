
/* cocos2d::Console::commandHelp(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandHelp(int param_1,basic_string *param_2)

{
  sendHelp((int)param_2,(unordered_map *)((ulong)(uint)param_1 + 0xd8),"\nAvailable commands:\n");
  return;
}

