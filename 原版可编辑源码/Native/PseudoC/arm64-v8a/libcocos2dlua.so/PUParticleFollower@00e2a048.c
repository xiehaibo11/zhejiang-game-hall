
/* cocos2d::PUParticleFollower::PUParticleFollower() */

void __thiscall cocos2d::PUParticleFollower::PUParticleFollower(PUParticleFollower *this)

{
                    /* try { // try from 00e2a04c to 00f2a053 has its CatchHandler @ 00e2a0a4 */
                    /* try { // try from 00e2a054 to 00f2a09b has its CatchHandler @ 00e2a01c */
  PUAffector::PUAffector((PUAffector *)this);
  *(undefined8 *)(this + 0xac) = 0x7f7fffee41200000;
  *(undefined ***)this = &PTR__PUParticleFollower_016ef890;
  Vec3::Vec3((Vec3 *)(this + 0xb4));
  this[0xc0] = (PUParticleFollower)0x0;
  return;
}

