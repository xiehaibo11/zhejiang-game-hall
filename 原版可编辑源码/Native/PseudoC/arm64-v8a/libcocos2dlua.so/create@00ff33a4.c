
/* cocos2d::TextureCube::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

TextureCube *
cocos2d::TextureCube::create
          (basic_string *param_1,basic_string *param_2,basic_string *param_3,basic_string *param_4,
          basic_string *param_5,basic_string *param_6)

{
  TextureCube *this;
  
  this = operator_new(0xa0,(nothrow_t *)&std::nothrow);
  if (this != (TextureCube *)0x0) {
    TextureCube(this);
    init(this,param_1,param_2,param_3,param_4,param_5,param_6);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

