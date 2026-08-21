
/* cocos2d::PUUtil::perpendicular(cocos2d::Vec3 const&) */

void cocos2d::PUUtil::perpendicular(Vec3 *param_1)

{
  long lVar1;
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_38);
  Vec3::cross(param_1,(Vec3 *)&Vec3::UNIT_X,(Vec3 *)&local_38);
  if (local_38 * local_38 + fStack_34 * fStack_34 + local_30 * local_30 < 1e-12) {
    Vec3::cross(param_1,(Vec3 *)Vec3::UNIT_Y,(Vec3 *)&local_38);
  }
  Vec3::normalize((Vec3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,fStack_34,local_30);
}

