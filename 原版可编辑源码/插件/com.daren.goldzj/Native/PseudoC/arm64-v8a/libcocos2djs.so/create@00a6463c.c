
/* cocos2d::extension::AssetsManagerEx::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

AssetsManagerEx *
cocos2d::extension::AssetsManagerEx::create(basic_string *param_1,basic_string *param_2)

{
  AssetsManagerEx *this;
  
                    /* try { // try from 00a64648 to 00b6464f has its CatchHandler @ 00a649ac */
                    /* try { // try from 00a64650 to 00b646bb has its CatchHandler @ 00a649c4 */
  this = operator_new(0x270,(nothrow_t *)&std::nothrow);
  if (this != (AssetsManagerEx *)0x0) {
    AssetsManagerEx(this,param_1,param_2);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

