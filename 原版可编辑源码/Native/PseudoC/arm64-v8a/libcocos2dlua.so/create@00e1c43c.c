
/* cocos2d::PUParticleSystem3D::create() */

PUParticleSystem3D * cocos2d::PUParticleSystem3D::create(void)

{
  PUParticleSystem3D *this;
  
  this = operator_new(0x4d0,(nothrow_t *)&std::nothrow);
  if (this != (PUParticleSystem3D *)0x0) {
    PUParticleSystem3D(this);
  }
  Ref::autorelease((Ref *)this);
  return this;
}

