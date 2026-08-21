
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PUVortexAffector::preUpdateAffector(float) */

void __thiscall cocos2d::PUVortexAffector::preUpdateAffector(PUVortexAffector *this,float param_1)

{
  long lVar1;
  float fVar2;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  Mat4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x28) == 0) {
    fVar2 = (float)PUDynamicAttributeHelper::calculate
                             ((PUDynamicAttributeHelper *)(this + 0xd0),
                              *(PUDynamicAttribute **)(this + 200),_DAT_00000440,0.0);
    Quaternion::set((Quaternion *)(this + 0xb8),(Vec3 *)(this + 0xac),fVar2 * param_1);
  }
  else {
    Mat4::Mat4(aMStack_88);
    PUParticleSystem3D::getDerivedOrientation();
    Mat4::createRotation((Quaternion *)&local_98,aMStack_88);
    Quaternion::~Quaternion((Quaternion *)&local_98);
    Vec3::Vec3((Vec3 *)&local_98);
    Mat4::transformVector(aMStack_88,(Vec3 *)(this + 0xac),(Vec3 *)&local_98);
    local_a8 = local_98;
    local_a0 = local_90;
    fVar2 = (float)PUDynamicAttributeHelper::calculate
                             ((PUDynamicAttributeHelper *)(this + 0xd0),
                              *(PUDynamicAttribute **)(this + 200),
                              *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
    Quaternion::set((Quaternion *)(this + 0xb8),(Vec3 *)&local_a8,fVar2 * param_1);
    Mat4::~Mat4(aMStack_88);
  }
  PUAffector::getDerivedPosition();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

