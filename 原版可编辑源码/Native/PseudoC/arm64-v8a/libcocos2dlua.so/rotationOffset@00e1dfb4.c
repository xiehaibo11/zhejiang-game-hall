
/* cocos2d::PUParticleSystem3D::rotationOffset(cocos2d::Vec3&) */

void __thiscall cocos2d::PUParticleSystem3D::rotationOffset(PUParticleSystem3D *this,Vec3 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_98;
  float local_90;
  Vec3 local_88 [8];
  float local_80;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Mat4::Mat4(aMStack_78);
  Mat4::createRotation((Quaternion *)(this + 0x444),aMStack_78);
  uVar2 = *(undefined8 *)(this + 0x454);
  local_98 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) - (float)((ulong)uVar2 >> 0x20)
                      ,(float)*(undefined8 *)param_1 - (float)uVar2);
  local_90 = *(float *)(param_1 + 8) - *(float *)(this + 0x45c);
  Vec3::Vec3(local_88);
  Mat4::transformVector(aMStack_78,(Vec3 *)&local_98,local_88);
  uVar2 = *(undefined8 *)(this + 0x454);
  fVar3 = *(float *)(this + 0x45c);
  *(ulong *)param_1 =
       CONCAT44(local_88._4_4_ + (float)((ulong)uVar2 >> 0x20),local_88._0_4_ + (float)uVar2);
  *(float *)(param_1 + 8) = local_80 + fVar3;
  Mat4::~Mat4(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

