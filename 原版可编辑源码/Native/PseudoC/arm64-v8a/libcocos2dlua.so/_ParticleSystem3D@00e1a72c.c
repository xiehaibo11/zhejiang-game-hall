
/* cocos2d::ParticleSystem3D::~ParticleSystem3D() */

void __thiscall cocos2d::ParticleSystem3D::~ParticleSystem3D(ParticleSystem3D *this)

{
  ~ParticleSystem3D(this);
                    /* try { // try from 00e1a740 to 00f1a79f has its CatchHandler @ 00e1a740
                       catch() { ... } // from try @ 00e1a740 with catch @ 00e1a740
                       catch() { ... } // from try @ 00e1a7ac with catch @ 00e1a740
                       catch() { ... } // from try @ 00e1aa28 with catch @ 00e1a740 */
  operator_delete(this);
  return;
}

