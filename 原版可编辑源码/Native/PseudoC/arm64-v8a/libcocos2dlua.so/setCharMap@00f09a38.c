
/* cocos2d::Label::setCharMap(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

bool __thiscall cocos2d::Label::setCharMap(Label *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = FontAtlasCache::getFontAtlasCharMap(param_1);
  if (lVar1 == 0) {
    reset(this);
  }
  else {
    *(undefined4 *)(this + 0x308) = 2;
    (**(code **)(*(long *)this + 0x5f0))(this,lVar1,0,0);
  }
  return lVar1 != 0;
}

