
/* cocos2d::kmMat4Inverse(cocos2d::Mat4*, cocos2d::Mat4 const*) */

Mat4 * cocos2d::kmMat4Inverse(Mat4 *param_1,Mat4 *param_2)

{
  long lVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Mat4::getInversed();
  *(undefined8 *)(param_1 + 0x28) = uStack_40;
  *(undefined8 *)(param_1 + 0x20) = local_48;
  *(undefined8 *)(param_1 + 0x38) = uStack_30;
  *(undefined8 *)(param_1 + 0x30) = local_38;
  *(undefined8 *)(param_1 + 8) = uStack_60;
  *(undefined8 *)param_1 = local_68;
  *(undefined8 *)(param_1 + 0x18) = uStack_50;
  *(undefined8 *)(param_1 + 0x10) = local_58;
  Mat4::~Mat4((Mat4 *)&local_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

