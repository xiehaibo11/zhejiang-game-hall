
/* cocos2d::FontFreeType::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float, cocos2d::GlyphCollection, char const*, bool, float)
    */

FontFreeType *
cocos2d::FontFreeType::create
          (float param_2,float param_2_00,basic_string *param_1,int param_4,char *param_5,
          byte param_6)

{
  FontFreeType *this;
  size_t sVar1;
  ulong uVar2;
  
                    /* try { // try from 00f04ba0 to 01004baf has its CatchHandler @ 00f04edc */
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (FontFreeType *)0x0) {
    FontFreeType(this,(bool)(param_6 & 1),param_2_00);
    *(int *)(this + 0x70) = param_4;
    if (param_4 == 3) {
      sVar1 = strlen(param_5);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x78),param_5,sVar1);
    }
                    /* try { // try from 00f04c24 to 01004c5b has its CatchHandler @ 00f04ee0 */
    uVar2 = createFontObject(this,param_1,param_2);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (FontFreeType *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

