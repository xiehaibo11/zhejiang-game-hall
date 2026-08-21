
/* cocos2d::Particle3DQuadRender::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Particle3DQuadRender * cocos2d::Particle3DQuadRender::create(basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  Particle3DQuadRender *this;
  
  this = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this != (Particle3DQuadRender *)0x0) {
    Particle3DQuadRender(this);
    initQuadRender(this,param_1);
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0xa8) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar2 = param_1 + 1;
        uVar1 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0xa8),(char *)pbVar2,uVar1);
    }
    Ref::autorelease((Ref *)this);
  }
  return this;
}

