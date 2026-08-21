
/* cocos2d::extension::AssetsManagerEx::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

AssetsManagerEx *
cocos2d::extension::AssetsManagerEx::create(basic_string *param_1,basic_string *param_2)

{
  AssetsManagerEx *this;
  
                    /* try { // try from 00e02790 to 00f027fb has its CatchHandler @ 00e02790
                       catch() { ... } // from try @ 00e02790 with catch @ 00e02790
                       catch() { ... } // from try @ 00e02814 with catch @ 00e02790
                       catch() { ... } // from try @ 00e0297c with catch @ 00e02790 */
  this = operator_new(0x250,(nothrow_t *)&std::nothrow);
  if (this != (AssetsManagerEx *)0x0) {
    AssetsManagerEx(this,param_1,param_2);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

