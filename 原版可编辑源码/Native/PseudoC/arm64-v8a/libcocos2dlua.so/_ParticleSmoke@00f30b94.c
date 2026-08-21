
/* non-virtual thunk to cocos2d::ParticleSmoke::~ParticleSmoke() */

void __thiscall cocos2d::ParticleSmoke::~ParticleSmoke(ParticleSmoke *this)

{
                    /* try { // try from 00f30b94 to 01030b9f has its CatchHandler @ 00f30c84 */
                    /* try { // try from 00f30ba0 to 01030bab has its CatchHandler @ 00f30c74 */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x300));
                    /* try { // try from 00f30bb4 to 01030c03 has its CatchHandler @ 00f30c88 */
  operator_delete((ParticleSystemQuad *)(this + -0x300));
  return;
}

