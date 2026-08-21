
/* cocos2d::PUParticleFollower::~PUParticleFollower() */

void __thiscall cocos2d::PUParticleFollower::~PUParticleFollower(PUParticleFollower *this)

{
  PUAffector::~PUAffector((PUAffector *)this);
                    /* catch() { ... } // from try @ 00e2a100 with catch @ 00e2a0c4
                       catch() { ... } // from try @ 00e2a14c with catch @ 00e2a0c4 */
  operator_delete(this);
  return;
}

