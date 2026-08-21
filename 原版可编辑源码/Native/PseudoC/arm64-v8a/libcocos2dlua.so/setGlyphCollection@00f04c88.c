
/* cocos2d::FontFreeType::setGlyphCollection(cocos2d::GlyphCollection, char const*) */

void __thiscall
cocos2d::FontFreeType::setGlyphCollection(FontFreeType *this,int param_2,char *param_3)

{
  size_t sVar1;
  
  *(int *)(this + 0x70) = param_2;
  if (param_2 == 3) {
    sVar1 = strlen(param_3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x78),param_3,sVar1);
  }
  return;
}

