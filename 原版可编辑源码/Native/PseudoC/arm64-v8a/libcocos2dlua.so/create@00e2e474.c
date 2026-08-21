
/* cocos2d::PUSphereCollider::create() */

PUBaseCollider * cocos2d::PUSphereCollider::create(void)

{
  PUBaseCollider *this;
  
  this = operator_new(0xe8,(nothrow_t *)&std::nothrow);
  if (this != (PUBaseCollider *)0x0) {
    PUBaseCollider::PUBaseCollider(this);
    *(undefined4 *)(this + 0xc0) = 0x42c80000;
    *(undefined ***)this = &PTR__PUSphereCollider_016eff90;
    PUSphere::PUSphere((PUSphere *)(this + 0xc4));
    Vec3::Vec3((Vec3 *)(this + 0xd4));
    this[0xe0] = (PUBaseCollider)0x0;
  }
                    /* catch() { ... } // from try @ 00e2e7e4 with catch @ 00e2e4d0 */
  Ref::autorelease((Ref *)this);
  return this;
}

