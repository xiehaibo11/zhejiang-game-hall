
/* cocos2d::PUEmitter::getDerivedPosition() */

long cocos2d::PUEmitter::getDerivedPosition(void)

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
  
                    /* try { // try from 00e31a80 to 00f31a8f has its CatchHandler @ 00e31b24 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(in_x0 + 0x1f8) == '\0') {
    this = *(PUParticleSystem3D **)(in_x0 + 0x28);
    Mat4::Mat4(aMStack_78);
    PUParticleSystem3D::getDerivedOrientation();
    Mat4::createRotation(local_88,aMStack_78);
                    /* try { // try from 00e31ae4 to 00f31ae7 has its CatchHandler @ 00e31b28 */
    Quaternion::~Quaternion(local_88);
    fVar2 = (float)PUParticleSystem3D::getDerivedPosition(this);
    Vec3::Vec3(aVStack_98,*(float *)(in_x0 + 0x38) * *(float *)(in_x0 + 0x68),
               *(float *)(in_x0 + 0x3c) * *(float *)(in_x0 + 0x6c),
               *(float *)(in_x0 + 0x40) * *(float *)(in_x0 + 0x70));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e31a80 with catch @ 00e31b24
                        */
    Vec3::Vec3((Vec3 *)local_88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e31ae4 with catch @ 00e31b28
                        */
    Mat4::transformVector(aMStack_78,aVStack_98,(Vec3 *)local_88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e31aa8 with catch @ 00e31b3c
                        */
    *(ulong *)(in_x0 + 0x5c) = CONCAT44(in_s1 + local_88._4_4_,fVar2 + local_88._0_4_);
    *(float *)(in_x0 + 100) = in_s2 + local_80;
    Mat4::~Mat4(aMStack_78);
  }
  else {
                    /* try { // try from 00e31aa8 to 00f31aab has its CatchHandler @ 00e31b3c */
    *(undefined8 *)(in_x0 + 0x5c) = *(undefined8 *)(in_x0 + 0x38);
    *(undefined4 *)(in_x0 + 100) = *(undefined4 *)(in_x0 + 0x40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return in_x0 + 0x5c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

