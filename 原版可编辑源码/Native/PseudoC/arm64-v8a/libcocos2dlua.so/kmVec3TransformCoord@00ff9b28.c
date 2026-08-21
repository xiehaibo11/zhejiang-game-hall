
/* cocos2d::kmVec3TransformCoord(cocos2d::Vec3*, cocos2d::Vec3 const*, cocos2d::Mat4 const*) */

Vec3 * cocos2d::kmVec3TransformCoord(Vec3 *param_1,Vec3 *param_2,Mat4 *param_3)

{
  long lVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Vec4::Vec4((Vec4 *)&local_60,*(float *)param_2,*(float *)(param_2 + 4),*(float *)(param_2 + 8),1.0
            );
  Mat4::transformVector(param_3,(Vec4 *)&local_60);
  Vec4::Vec4((Vec4 *)&local_70,(Vec4 *)&local_60);
  Vec4::scale((Vec4 *)&local_70,1.0 / uStack_58._4_4_);
  uStack_58 = uStack_68;
  local_60 = local_70;
  Vec4::~Vec4((Vec4 *)&local_70);
  *(undefined8 *)param_1 = local_60;
  *(undefined4 *)(param_1 + 8) = (undefined4)uStack_58;
  Vec4::~Vec4((Vec4 *)&local_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

