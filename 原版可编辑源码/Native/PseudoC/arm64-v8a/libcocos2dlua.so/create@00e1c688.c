
/* cocos2d::PUParticleSystem3D::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

PUParticleSystem3D * cocos2d::PUParticleSystem3D::create(basic_string *param_1)

{
  PUParticleSystem3D *this;
  ulong uVar1;
  
  this = operator_new(0x4d0,(nothrow_t *)&std::nothrow);
  if (this != (PUParticleSystem3D *)0x0) {
    PUParticleSystem3D(this);
    uVar1 = initWithFilePath(this,param_1);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00e1c6d8 to 00f1c6ff has its CatchHandler @ 00e1c684 */
      (**(code **)(*(long *)this + 8))(this);
      this = (PUParticleSystem3D *)0x0;
    }
    else {
                    /* try { // try from 00e1c6c8 to 00f1c6d7 has its CatchHandler @ 00e1cfc0 */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

