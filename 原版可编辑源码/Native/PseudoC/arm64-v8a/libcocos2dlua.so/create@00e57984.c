
/* cocos2d::PUSphereRender::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

PUParticle3DEntityRender * cocos2d::PUSphereRender::create(basic_string *param_1)

{
  PUParticle3DEntityRender *this;
  
  this = operator_new(0x100,(nothrow_t *)&std::nothrow);
  if (this != (PUParticle3DEntityRender *)0x0) {
    PUParticle3DEntityRender::PUParticle3DEntityRender(this);
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined4 *)(this + 0xe0) = 0x100010;
    *(undefined ***)this = &PTR__PUSphereRender_016f29a0;
    this[0x4a] = (PUParticle3DEntityRender)0x0;
    PUParticle3DEntityRender::initRender(this,param_1);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

