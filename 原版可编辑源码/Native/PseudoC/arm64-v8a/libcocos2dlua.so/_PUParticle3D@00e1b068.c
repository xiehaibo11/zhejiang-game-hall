
/* cocos2d::PUParticle3D::~PUParticle3D() */

void __thiscall cocos2d::PUParticle3D::~PUParticle3D(PUParticle3D *this)

{
                    /* try { // try from 00e1b06c to 00f1b097 has its CatchHandler @ 00e1bf5c */
  ~PUParticle3D(this);
  operator_delete(this);
  return;
}

