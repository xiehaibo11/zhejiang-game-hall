
/* cocos2d::ParticleSystemQuad::~ParticleSystemQuad() */

void __thiscall cocos2d::ParticleSystemQuad::~ParticleSystemQuad(ParticleSystemQuad *this)

{
                    /* try { // try from 00f359d8 to 01035a03 has its CatchHandler @ 00f35970 */
  ~ParticleSystemQuad(this);
                    /* catch() { ... } // from try @ 00f359b4 with catch @ 00f359f0 */
  operator_delete(this);
  return;
}

