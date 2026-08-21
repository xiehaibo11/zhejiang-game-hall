
/* cocos2d::PUAffector::getDerivedPosition() */

long cocos2d::PUAffector::getDerivedPosition(void)

{
  long lVar1;
  long in_x0;
  PUParticleSystem3D *this;
  float fVar2;
  float in_s1;
  float in_s2;
  Vec3 aVStack_98 [16];
  Quaternion local_88 [8];
  float local_80;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = *(PUParticleSystem3D **)(in_x0 + 0x28);
  if (this == (PUParticleSystem3D *)0x0) {
    *(undefined8 *)(in_x0 + 0x4c) = *(undefined8 *)(in_x0 + 0x34);
                    /* try { // try from 00e20ee4 to 00f20eeb has its CatchHandler @ 00e211a4 */
    *(undefined4 *)(in_x0 + 0x54) = *(undefined4 *)(in_x0 + 0x3c);
  }
  else {
    Mat4::Mat4(aMStack_78);
    PUParticleSystem3D::getDerivedOrientation();
    Mat4::createRotation(local_88,aMStack_78);
    Quaternion::~Quaternion(local_88);
    fVar2 = (float)PUParticleSystem3D::getDerivedPosition(this);
    Vec3::Vec3(aVStack_98,*(float *)(in_x0 + 0x34) * *(float *)(in_x0 + 0x40),
               *(float *)(in_x0 + 0x38) * *(float *)(in_x0 + 0x44),
               *(float *)(in_x0 + 0x3c) * *(float *)(in_x0 + 0x48));
    Vec3::Vec3((Vec3 *)local_88);
    Mat4::transformVector(aMStack_78,aVStack_98,(Vec3 *)local_88);
    *(ulong *)(in_x0 + 0x4c) = CONCAT44(in_s1 + local_88._4_4_,fVar2 + local_88._0_4_);
    *(float *)(in_x0 + 0x54) = in_s2 + local_80;
    Mat4::~Mat4(aMStack_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return in_x0 + 0x4c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

