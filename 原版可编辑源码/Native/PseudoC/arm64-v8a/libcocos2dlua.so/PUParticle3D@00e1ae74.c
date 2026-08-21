
/* cocos2d::PUParticle3D::PUParticle3D() */

void __thiscall cocos2d::PUParticle3D::PUParticle3D(PUParticle3D *this)

{
  undefined4 uVar1;
  
  Particle3D::Particle3D((Particle3D *)this);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined ***)this = &PTR__PUParticle3D_016ee530;
  *(undefined4 *)(this + 0x90) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x94));
  Vec3::Vec3((Vec3 *)(this + 0xa0));
  Vec3::Vec3((Vec3 *)(this + 0xac));
  Vec3::Vec3((Vec3 *)(this + 0xb8));
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd8) = 0x3f800000;
  *(undefined8 *)(this + 0xd0) = 0;
  Vec4::Vec4((Vec4 *)(this + 0xdc),(Vec4 *)Vec4::ONE);
  *(undefined4 *)(this + 0xec) = 0;
  Quaternion::Quaternion((Quaternion *)(this + 0xf0));
  *(undefined4 *)(this + 0x124) = 0;
  this[0x128] = (PUParticle3D)0x0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x120] = (PUParticle3D)0x0;
  *(undefined8 *)(this + 0x100) = 0x3f5eb85200000000;
  uVar1 = DEFAULT_TTL;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 300) = uVar1;
  *(undefined4 *)(this + 0x130) = uVar1;
  *(undefined4 *)(this + 0x138) = DEFAULT_MASS;
  *(undefined8 *)(this + 0x13c) = 0x3dcccccd;
  *(undefined2 *)(this + 0x144) = 0;
  this[0x146] = (PUParticle3D)0x1;
  *(undefined8 *)(this + 0x148) = 0;
                    /* try { // try from 00e1af7c to 00f1af83 has its CatchHandler @ 00e1be84 */
  return;
}

