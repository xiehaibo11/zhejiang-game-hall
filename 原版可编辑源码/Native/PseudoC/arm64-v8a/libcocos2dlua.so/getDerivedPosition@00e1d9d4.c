
/* cocos2d::PUParticleSystem3D::getDerivedPosition() */

void __thiscall cocos2d::PUParticleSystem3D::getDerivedPosition(PUParticleSystem3D *this)

{
  long lVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  Mat4 aMStack_68 [48];
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
                    /* try { // try from 00e1d9e0 to 00f1d9eb has its CatchHandler @ 00e1e10c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e1d9ec to 00f1da97 has its CatchHandler @ 00e1e144 */
  if (this[0x490] == (PUParticleSystem3D)0x0) {
    (**(code **)(*(long *)this + 0x430))(aMStack_68);
    Vec3::Vec3((Vec3 *)&local_78,local_38,fStack_34,local_30);
    Mat4::~Mat4(aMStack_68);
  }
  else {
    Vec3::Vec3((Vec3 *)&local_78,*(float *)(this + 0x50),*(float *)(this + 0x54),
               *(float *)(this + 0x58));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78,uStack_74,local_70);
}

