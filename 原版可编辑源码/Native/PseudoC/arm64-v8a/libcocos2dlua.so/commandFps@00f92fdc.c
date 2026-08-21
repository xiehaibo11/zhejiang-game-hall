
/* cocos2d::Console::commandFps(int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandFps(int param_1,basic_string *param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = Director::getInstance();
  pcVar1 = "off";
  if (*(char *)(lVar2 + 0x120) != '\0') {
    pcVar1 = "on";
  }
  Utility::mydprintf((int)param_2,"FPS is: %s\n",pcVar1);
  return;
}

