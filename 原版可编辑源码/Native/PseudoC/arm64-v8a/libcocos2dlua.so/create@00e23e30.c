
/* cocos2d::PUBoxCollider::create() */

PUBaseCollider * cocos2d::PUBoxCollider::create(void)

{
  PUBaseCollider *this;
  
                    /* try { // try from 00e23e38 to 00f23e47 has its CatchHandler @ 00e242ac */
  this = operator_new(0x110,(nothrow_t *)&std::nothrow);
  if (this != (PUBaseCollider *)0x0) {
    PUBaseCollider::PUBaseCollider(this);
                    /* try { // try from 00e23e70 to 00f23e77 has its CatchHandler @ 00e241d8 */
    *(undefined8 *)(this + 0xcc) = 0;
    *(undefined8 *)(this + 0xdc) = 0;
    *(undefined4 *)(this + 200) = 0x42c80000;
    *(undefined ***)this = &PTR__PUBoxCollider_016eed90;
    *(undefined8 *)(this + 0xc0) = 0x42c8000042c80000;
    *(undefined8 *)(this + 0xd4) = 0;
    AABB::AABB((AABB *)(this + 0xe4));
    Vec3::Vec3((Vec3 *)(this + 0xfc));
    this[0x108] = (PUBaseCollider)0x0;
  }
                    /* try { // try from 00e23ea0 to 00f23eab has its CatchHandler @ 00e241d4 */
  Ref::autorelease((Ref *)this);
  return this;
}

