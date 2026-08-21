
/* cocos2d::Console::commandDirectorSubCommandEnd(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandDirectorSubCommandEnd(int param_1,basic_string *param_2)

{
  Director *this;
  
  this = (Director *)Director::getInstance();
  Director::end(this);
  return;
}

