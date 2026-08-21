
/* cocos2d::PUCircleEmitter::getRotationTo(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3
   const&) const */

void cocos2d::PUCircleEmitter::getRotationTo(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  long lVar1;
  Vec3 *in_x3;
  Quaternion *in_x8;
  float fVar2;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Quaternion::Quaternion((Quaternion *)&local_68);
  local_70 = *(undefined4 *)(param_2 + 8);
  local_78 = *(undefined8 *)param_2;
  local_80 = *(undefined4 *)(param_3 + 8);
  local_88 = *(undefined8 *)param_3;
  Vec3::normalize((Vec3 *)&local_78);
  Vec3::normalize((Vec3 *)&local_88);
  fVar2 = (float)Vec3::dot((Vec3 *)&local_78,(Vec3 *)&local_88);
  if (1.0 <= fVar2) {
    Quaternion::Quaternion(in_x8);
  }
  else {
    if (-0.999999 <= fVar2) {
      Vec3::Vec3((Vec3 *)&local_98);
      Vec3::cross((Vec3 *)&local_78,(Vec3 *)&local_88,(Vec3 *)&local_98);
      fStack_5c = SQRT(fVar2 + 1.0 + fVar2 + 1.0);
      local_60 = 1.0 / fStack_5c;
      fStack_5c = fStack_5c * 0.5;
      local_68 = CONCAT44(fStack_94 * local_60,local_98 * local_60);
      local_60 = local_60 * local_90;
      Quaternion::normalize((Quaternion *)&local_68);
    }
    else if (((*(float *)in_x3 == 0.0) && (*(float *)(in_x3 + 4) == 0.0)) &&
            (*(float *)(in_x3 + 8) == 0.0)) {
      Vec3::Vec3((Vec3 *)&local_98);
      Vec3::cross((Vec3 *)&Vec3::UNIT_X,param_2,(Vec3 *)&local_98);
      if (local_98 * local_98 + fStack_94 * fStack_94 + local_90 * local_90 < 1e-12) {
        Vec3::cross((Vec3 *)Vec3::UNIT_Y,param_2,(Vec3 *)&local_98);
      }
      Vec3::normalize((Vec3 *)&local_98);
      Quaternion::set((Quaternion *)&local_68,(Vec3 *)&local_98,3.1415927);
    }
    else {
      Quaternion::set((Quaternion *)&local_68,in_x3,3.1415927);
    }
    Quaternion::Quaternion(in_x8,(Quaternion *)&local_68);
  }
  Quaternion::~Quaternion((Quaternion *)&local_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

