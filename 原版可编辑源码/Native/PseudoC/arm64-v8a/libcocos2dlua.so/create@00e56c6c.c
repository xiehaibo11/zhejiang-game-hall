
/* cocos2d::PUParticle3DBoxRender::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

PUParticle3DEntityRender * cocos2d::PUParticle3DBoxRender::create(basic_string *param_1)

{
  PUParticle3DEntityRender *this;
  
  this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this != (PUParticle3DEntityRender *)0x0) {
    PUParticle3DEntityRender::PUParticle3DEntityRender(this);
    this[0x4a] = (PUParticle3DEntityRender)0x0;
    *(undefined ***)this = &PTR__PUParticle3DBoxRender_016f2938;
    PUParticle3DEntityRender::initRender(this,param_1);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

