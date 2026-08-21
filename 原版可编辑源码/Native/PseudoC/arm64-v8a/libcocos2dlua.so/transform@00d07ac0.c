
/* cocos2d::OBB::transform(cocos2d::Mat4 const&) */

void __thiscall cocos2d::OBB::transform(OBB *this,Mat4 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  Vec3 aVStack_88 [16];
  Vec3 local_78 [8];
  float local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Vec4::Vec4((Vec4 *)&local_68,*(float *)this,*(float *)(this + 4),*(float *)(this + 8),1.0);
  Vec4::Vec4((Vec4 *)&local_58);
  Mat4::transformVector(param_1,(Vec4 *)&local_68,(Vec4 *)&local_58);
  Vec4::~Vec4((Vec4 *)&local_68);
  *(undefined8 *)this = local_58;
  *(undefined4 *)(this + 8) = local_50;
  Vec3::Vec3((Vec3 *)&local_68);
  Mat4::transformVector(param_1,(Vec3 *)(this + 0xc),(Vec3 *)&local_68);
  *(undefined8 *)(this + 0xc) = local_68;
  *(undefined4 *)(this + 0x14) = local_60;
  Vec3::Vec3((Vec3 *)&local_68);
  Mat4::transformVector(param_1,(Vec3 *)(this + 0x18),(Vec3 *)&local_68);
  *(undefined8 *)(this + 0x18) = local_68;
  *(undefined4 *)(this + 0x20) = local_60;
  Vec3::Vec3((Vec3 *)&local_68);
  Mat4::transformVector(param_1,(Vec3 *)(this + 0x24),(Vec3 *)&local_68);
  *(undefined8 *)(this + 0x24) = local_68;
  *(undefined4 *)(this + 0x2c) = local_60;
  Vec3::normalize((Vec3 *)(this + 0xc));
  Vec3::normalize((Vec3 *)(this + 0x18));
  Vec3::normalize((Vec3 *)(this + 0x24));
  Vec3::Vec3(local_78);
  Vec3::Vec3(aVStack_88);
  Quaternion::Quaternion((Quaternion *)&local_68);
  Mat4::decompose(param_1,local_78,(Quaternion *)&local_68,aVStack_88);
  fVar2 = local_78._0_4_ * (float)*(undefined8 *)(this + 0x54);
  fVar3 = local_78._4_4_ * (float)((ulong)*(undefined8 *)(this + 0x54) >> 0x20);
  *(ulong *)(this + 0x54) = CONCAT44(fVar3,fVar2);
  *(ulong *)(this + 0x30) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xc) >> 0x20) * fVar2,
                (float)*(undefined8 *)(this + 0xc) * fVar2);
  *(ulong *)(this + 0x38) =
       CONCAT44(fVar3 * (float)((ulong)*(undefined8 *)(this + 0x14) >> 0x20),
                fVar2 * (float)*(undefined8 *)(this + 0x14));
  local_70 = local_70 * *(float *)(this + 0x5c);
  *(float *)(this + 0x5c) = local_70;
  *(ulong *)(this + 0x40) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20) * fVar3,
                (float)*(undefined8 *)(this + 0x1c) * fVar3);
  *(ulong *)(this + 0x48) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x24) >> 0x20) * local_70,
                (float)*(undefined8 *)(this + 0x24) * local_70);
  *(float *)(this + 0x50) = local_70 * *(float *)(this + 0x2c);
  Quaternion::~Quaternion((Quaternion *)&local_68);
  Vec4::~Vec4((Vec4 *)&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

