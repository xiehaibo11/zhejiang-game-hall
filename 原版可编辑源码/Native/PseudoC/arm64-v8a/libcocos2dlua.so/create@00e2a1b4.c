
/* cocos2d::PUParticleFollower::create() */

PUAffector * cocos2d::PUParticleFollower::create(void)

{
  PUAffector *this;
  
                    /* try { // try from 00e2a1b8 to 00f2a1bf has its CatchHandler @ 00e2a2a4 */
                    /* try { // try from 00e2a1c0 to 00f2a2cf has its CatchHandler @ 00e2a16c */
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (PUAffector *)0x0) {
    PUAffector::PUAffector(this);
    *(undefined8 *)(this + 0xac) = 0x7f7fffee41200000;
    *(undefined ***)this = &PTR__PUParticleFollower_016ef890;
    Vec3::Vec3((Vec3 *)(this + 0xb4));
    this[0xc0] = (PUAffector)0x0;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

