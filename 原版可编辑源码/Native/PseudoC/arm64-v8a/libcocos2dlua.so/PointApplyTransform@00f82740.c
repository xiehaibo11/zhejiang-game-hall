
/* cocos2d::PointApplyTransform(cocos2d::Vec2 const&, cocos2d::Mat4 const&) */

void cocos2d::PointApplyTransform(Vec2 *param_1,Mat4 *param_2)

{
  long lVar1;
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_38,*(float *)param_1,*(float *)(param_1 + 4),0.0);
  Mat4::transformVector(param_2,local_38,fStack_34,local_30,1.0,(Vec3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,fStack_34);
}

