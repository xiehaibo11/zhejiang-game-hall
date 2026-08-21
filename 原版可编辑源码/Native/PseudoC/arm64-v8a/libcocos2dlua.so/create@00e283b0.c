
/* cocos2d::PUParticle3DInterParticleCollider::create() */

PUBaseCollider * cocos2d::PUParticle3DInterParticleCollider::create(void)

{
  PUBaseCollider *this;
  
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (PUBaseCollider *)0x0) {
    PUBaseCollider::PUBaseCollider(this);
    *(undefined8 *)(this + 0xc0) = 0x3f800000;
    *(undefined ***)this = &PTR__PUParticle3DInterParticleCollider_016ef490;
  }
  Ref::autorelease((Ref *)this);
                    /* try { // try from 00e28404 to 00f2840b has its CatchHandler @ 00e28a74 */
  return this;
}

