
/* cocos2d::TextureCache::getTextureFilePath(cocos2d::Texture2D*) const */

void cocos2d::TextureCache::getTextureFilePath(Texture2D *param_1)

{
  long in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x158);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(in_x8,"");
      return;
    }
    if (plVar1[5] == in_x1) break;
    plVar1 = (long *)*plVar1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,(basic_string *)(plVar1 + 2));
  return;
}

