
/* cocos2d::network::SIOClientImpl::create(cocos2d::network::Uri const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

SIOClientImpl * cocos2d::network::SIOClientImpl::create(Uri *param_1,basic_string *param_2)

{
  SIOClientImpl *this;
  
                    /* catch() { ... } // from try @ 009e3cc4 with catch @ 009e3d8c */
                    /* catch() { ... } // from try @ 009e3cb8 with catch @ 009e3d90 */
  this = operator_new(0x1a0,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 009e3ccc with catch @ 009e3d98 */
  if (this != (SIOClientImpl *)0x0) {
    SIOClientImpl(this,param_1,param_2);
  }
                    /* try { // try from 009e3db4 to 00ae3e0b has its CatchHandler @ 009e3db4
                       catch() { ... } // from try @ 009e3db4 with catch @ 009e3db4
                       catch() { ... } // from try @ 009e3fac with catch @ 009e3db4 */
  return this;
}

