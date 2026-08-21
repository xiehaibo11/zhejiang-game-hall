
/* cocos2d::PUSphereSurfaceEmitter::create() */

PUEmitter * cocos2d::PUSphereSurfaceEmitter::create(void)

{
  PUEmitter *this;
  
  this = operator_new(0x210,(nothrow_t *)&std::nothrow);
  if (this != (PUEmitter *)0x0) {
    PUEmitter::PUEmitter(this);
    *(undefined4 *)(this + 0x1fc) = 0x41200000;
    *(undefined ***)this = &PTR__PUEmitter_016f0f18;
    Vec3::Vec3((Vec3 *)(this + 0x200));
  }
  Ref::autorelease((Ref *)this);
  return this;
}

