
/* cocos2d::PURibbonTrailRender::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

PURibbonTrailRender * cocos2d::PURibbonTrailRender::create(basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  PURibbonTrailRender *this;
  
  this = operator_new(0x128,(nothrow_t *)&std::nothrow);
  if (this != (PURibbonTrailRender *)0x0) {
    PURibbonTrailRender(this);
  }
  Ref::autorelease((Ref *)this);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x110) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x110),(char *)pbVar2,uVar1);
  }
  return this;
}

