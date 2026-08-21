
/* cocos2d::PUVortexAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void cocos2d::PUVortexAffector::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  long lVar1;
  long in_x1;
  undefined4 in_register_00005004;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  float local_80;
  Mat4 aMStack_78 [64];
  long local_38;
  
  uVar2 = CONCAT44(in_register_00005004,param_2);
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(in_x1 + 0x128) == '\0') {
    Mat4::Mat4(aMStack_78);
    Mat4::createRotation((Quaternion *)(param_1 + 0xb8),aMStack_78);
    local_88 = CONCAT44((float)((ulong)*(undefined8 *)(in_x1 + 8) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20),
                        (float)*(undefined8 *)(in_x1 + 8) - (float)*(undefined8 *)(param_1 + 0x4c));
    local_80 = *(float *)(in_x1 + 0x10) - *(float *)(param_1 + 0x54);
    Vec3::Vec3((Vec3 *)&local_98);
    Mat4::transformVector(aMStack_78,(Vec3 *)&local_88,(Vec3 *)&local_98);
    fVar3 = *(float *)(param_1 + 0x54);
    *(ulong *)(in_x1 + 8) =
         CONCAT44((float)((ulong)local_98 >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20),
                  (float)local_98 + (float)*(undefined8 *)(param_1 + 0x4c));
    *(float *)(in_x1 + 0x10) = fStack_90 + fVar3;
    Vec3::Vec3((Vec3 *)&local_98);
                    /* catch() { ... } // from try @ 00e309d4 with catch @ 00e30ab8 */
    Mat4::transformVector(aMStack_78,(Vec3 *)(in_x1 + 0xac),(Vec3 *)&local_98);
    *(undefined8 *)(in_x1 + 0xac) = local_98;
    *(float *)(in_x1 + 0xb4) = fStack_90;
    Quaternion::Quaternion((Quaternion *)&local_98,(Quaternion *)(param_1 + 0xb8));
    Quaternion::multiply((Quaternion *)&local_98,(Quaternion *)(in_x1 + 0x14));
    *(ulong *)(in_x1 + 0x1c) = CONCAT44(uStack_8c,fStack_90);
    *(undefined8 *)(in_x1 + 0x14) = local_98;
    Quaternion::~Quaternion((Quaternion *)&local_98);
    uVar2 = Mat4::~Mat4(aMStack_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

