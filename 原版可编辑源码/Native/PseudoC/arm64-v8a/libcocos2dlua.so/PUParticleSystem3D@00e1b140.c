
/* cocos2d::PUParticleSystem3D::PUParticleSystem3D() */

void __thiscall cocos2d::PUParticleSystem3D::PUParticleSystem3D(PUParticleSystem3D *this)

{
  ParticleSystem3D::ParticleSystem3D((ParticleSystem3D *)this);
                    /* try { // try from 00e1b164 to 00f1b16b has its CatchHandler @ 00e1bed4 */
                    /* try { // try from 00e1b16c to 00f1b1eb has its CatchHandler @ 00e1ab10 */
  *(undefined ***)this = &PTR__PUParticleSystem3D_016ee550;
  *(undefined ***)(this + 0x2f8) = &PTR__PUParticleSystem3D_016eead8;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined4 *)(this + 0x3d0) = 0x3f800000;
  *(undefined4 *)(this + 0x3f8) = 0x3f800000;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x400) = 0xa00000032;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined2 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x43c) = 0x3f800000;
  Quaternion::Quaternion((Quaternion *)(this + 0x444));
  Vec3::Vec3((Vec3 *)(this + 0x454));
  this[0x470] = (PUParticleSystem3D)0x0;
                    /* try { // try from 00e1b1ec to 00f1b1f3 has its CatchHandler @ 00e1bebc */
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x488) = 0;
                    /* try { // try from 00e1b1f4 to 00f1b23f has its CatchHandler @ 00e1ab10 */
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x468) = 0x461c3c0042480000;
  *(undefined8 *)(this + 0x460) = 0x4248000042480000;
  this[0x490] = (PUParticleSystem3D)0x0;
  Vec3::Vec3((Vec3 *)(this + 0x494));
  Vec3::Vec3((Vec3 *)(this + 0x4a0));
  Quaternion::Quaternion((Quaternion *)(this + 0x4ac));
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined4 *)(this + 0x36c) = 500;
  return;
}

