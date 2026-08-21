
/* cocos2d::PUParticleSystem3D::getDerivedScale() */

void __thiscall cocos2d::PUParticleSystem3D::getDerivedScale(PUParticleSystem3D *this)

{
  long lVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  Mat4 aMStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e1e220 to 00f1e24b has its CatchHandler @ 00e1f628 */
  if (this[0x490] == (PUParticleSystem3D)0x0) {
    Vec3::Vec3((Vec3 *)&local_78);
    (**(code **)(*(long *)this + 0x430))(aMStack_68,this);
    Mat4::decompose(aMStack_68,(Vec3 *)&local_78,(Quaternion *)0x0,(Vec3 *)0x0);
    Mat4::~Mat4(aMStack_68);
  }
  else {
    Vec3::Vec3((Vec3 *)&local_78,*(float *)(this + 0x44),*(float *)(this + 0x48),
               *(float *)(this + 0x4c));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78,uStack_74,local_70);
}

