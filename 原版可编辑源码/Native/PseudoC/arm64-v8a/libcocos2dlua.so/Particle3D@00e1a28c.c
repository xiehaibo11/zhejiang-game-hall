
/* cocos2d::Particle3D::Particle3D() */

void __thiscall cocos2d::Particle3D::Particle3D(Particle3D *this)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__Particle3D_016edf20;
  Vec3::Vec3((Vec3 *)(this + 8));
  Quaternion::Quaternion((Quaternion *)(this + 0x14));
  Vec4::Vec4((Vec4 *)(this + 0x24),(Vec4 *)Vec4::ONE);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x3c) = 0x3f8000003f800000;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
                    /* try { // try from 00e1a314 to 00f1a3c7 has its CatchHandler @ 00e1a3d0 */
  return;
}

