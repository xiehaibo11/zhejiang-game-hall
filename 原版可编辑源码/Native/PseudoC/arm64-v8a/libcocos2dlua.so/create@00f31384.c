
/* cocos2d::ParticleSystem::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

ParticleSystem * cocos2d::ParticleSystem::create(basic_string *param_1)

{
  ParticleSystem *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00f31340 with catch @ 00f3138c */
                    /* catch() { ... } // from try @ 00f31308 with catch @ 00f31390 */
                    /* catch() { ... } // from try @ 00f312f4 with catch @ 00f31394
                       catch() { ... } // from try @ 00f3132c with catch @ 00f31394 */
  this = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystem *)0x0) {
    ParticleSystem(this);
    uVar1 = initWithFile(this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ParticleSystem *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
                    /* try { // try from 00f313cc to 01031403 has its CatchHandler @ 00f313cc
                       catch() { ... } // from try @ 00f313cc with catch @ 00f313cc
                       catch() { ... } // from try @ 00f31794 with catch @ 00f313cc */
    }
  }
  return this;
}

