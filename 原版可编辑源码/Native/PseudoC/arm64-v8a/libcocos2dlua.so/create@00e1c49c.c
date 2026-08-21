
/* cocos2d::PUParticleSystem3D::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

PUParticleSystem3D *
cocos2d::PUParticleSystem3D::create(basic_string *param_1,basic_string *param_2)

{
  PUParticleSystem3D *this;
  ulong uVar1;
  
  this = operator_new(0x4d0,(nothrow_t *)&std::nothrow);
  if (this != (PUParticleSystem3D *)0x0) {
    PUParticleSystem3D(this);
    uVar1 = initWithFilePathAndMaterialPath(this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (PUParticleSystem3D *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

