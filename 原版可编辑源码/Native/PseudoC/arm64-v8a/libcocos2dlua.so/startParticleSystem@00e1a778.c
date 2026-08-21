
/* cocos2d::ParticleSystem3D::startParticleSystem() */

void __thiscall cocos2d::ParticleSystem3D::startParticleSystem(ParticleSystem3D *this)

{
  if (*(int *)(this + 0x300) != 1) {
    if (*(long **)(this + 0x328) != (long *)0x0) {
                    /* try { // try from 00e1a7a0 to 00f1a7ab has its CatchHandler @ 00e1aafc */
      (**(code **)(**(long **)(this + 0x328) + 0x18))();
    }
                    /* try { // try from 00e1a7ac to 00f1a9f3 has its CatchHandler @ 00e1a740 */
    Node::scheduleUpdate((Node *)this);
    *(undefined4 *)(this + 0x300) = 1;
  }
  return;
}

