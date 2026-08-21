
/* cocos2d::Console::commandVersion(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandVersion(int param_1,basic_string *param_2)

{
  undefined8 uVar1;
  
  uVar1 = cocos2dVersion((cocos2d *)(ulong)(uint)param_1);
  Utility::mydprintf((int)param_2,"%s\n",uVar1);
  return;
}

