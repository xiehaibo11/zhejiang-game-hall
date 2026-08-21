
/* cocos2d::ui::TextAtlas::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

TextAtlas *
cocos2d::ui::TextAtlas::create
          (basic_string *param_1,basic_string *param_2,int param_3,int param_4,basic_string *param_5
          )

{
  TextAtlas *this;
  ulong uVar1;
  
  this = operator_new(0x550,(nothrow_t *)&std::nothrow);
  if (this != (TextAtlas *)0x0) {
    TextAtlas(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TextAtlas *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
      setProperty(this,param_1,param_2,param_3,param_4,param_5);
    }
  }
  return this;
}

