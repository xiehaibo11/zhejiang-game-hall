
/* cocos2d::Label::setCharMap(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int, int, int) */

bool __thiscall
cocos2d::Label::setCharMap(Label *this,basic_string *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = FontAtlasCache::getFontAtlasCharMap(param_1,param_2,param_3,param_4);
  if (lVar1 == 0) {
    reset(this);
                    /* try { // try from 00f09f70 to 01009fcf has its CatchHandler @ 00f09f70
                       catch() { ... } // from try @ 00f09f70 with catch @ 00f09f70
                       catch() { ... } // from try @ 00f09fd4 with catch @ 00f09f70 */
  }
  else {
    *(undefined4 *)(this + 0x308) = 2;
    (**(code **)(*(long *)this + 0x5f0))(this,lVar1,0,0);
  }
  return lVar1 != 0;
}

