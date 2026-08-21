
/* cocos2d::PUUtil::randomDeviant(cocos2d::Vec3 const&, float, cocos2d::Vec3 const&) */

undefined4 cocos2d::PUUtil::randomDeviant(Vec3 *param_1,float param_2,Vec3 *param_3)

{
  long lVar1;
  float fVar2;
  int iVar3;
  Quaternion aQStack_b8 [16];
  undefined8 local_a8;
  float local_a0;
  undefined4 local_98 [2];
  undefined4 local_90;
  float local_88;
  float fStack_84;
  float local_80;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_a8);
  if (((*(float *)param_3 == 0.0) && (*(float *)(param_3 + 4) == 0.0)) &&
     (*(float *)(param_3 + 8) == 0.0)) {
    Vec3::Vec3((Vec3 *)&local_88);
    Vec3::cross(param_1,(Vec3 *)&Vec3::UNIT_X,(Vec3 *)&local_88);
    if (local_88 * local_88 + fStack_84 * fStack_84 + local_80 * local_80 < 1e-12) {
      Vec3::cross(param_1,(Vec3 *)Vec3::UNIT_Y,(Vec3 *)&local_88);
    }
    Vec3::normalize((Vec3 *)&local_88);
    local_a8 = CONCAT44(fStack_84,local_88);
    local_a0 = local_80;
  }
  else {
    local_a0 = *(float *)(param_3 + 8);
    local_a8 = *(undefined8 *)param_3;
  }
  Quaternion::Quaternion(aQStack_b8);
  Mat4::Mat4((Mat4 *)&local_88);
  iVar3 = rand();
  fVar2 = (float)iVar3 * 4.656613e-10 * 3.1415927;
  Quaternion::createFromAxisAngle(param_1,fVar2 + fVar2,aQStack_b8);
  Mat4::createRotation(aQStack_b8,(Mat4 *)&local_88);
  Vec3::Vec3((Vec3 *)local_98);
  Mat4::transformVector((Mat4 *)&local_88,(Vec3 *)&local_a8,(Vec3 *)local_98);
  local_a0 = (float)local_90;
  Quaternion::createFromAxisAngle((Vec3 *)&local_a8,param_2,aQStack_b8);
  Mat4::createRotation(aQStack_b8,(Mat4 *)&local_88);
  Vec3::Vec3((Vec3 *)local_98);
  Mat4::transformVector((Mat4 *)&local_88,param_1,(Vec3 *)local_98);
  Mat4::~Mat4((Mat4 *)&local_88);
  Quaternion::~Quaternion(aQStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return local_98[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

