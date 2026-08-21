
/* cocos2d::kmMat4Multiply(cocos2d::Mat4*, cocos2d::Mat4 const*, cocos2d::Mat4 const*) */

Mat4 * cocos2d::kmMat4Multiply(Mat4 *param_1,Mat4 *param_2,Mat4 *param_3)

{
  long lVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Mat4::Mat4((Mat4 *)&local_78,param_2);
  Mat4::multiply((Mat4 *)&local_78,param_3);
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  *(undefined8 *)(param_1 + 0x20) = local_58;
  *(undefined8 *)(param_1 + 0x38) = uStack_40;
  *(undefined8 *)(param_1 + 0x30) = local_48;
  *(undefined8 *)(param_1 + 8) = uStack_70;
  *(undefined8 *)param_1 = local_78;
  *(undefined8 *)(param_1 + 0x18) = uStack_60;
  *(undefined8 *)(param_1 + 0x10) = local_68;
  Mat4::~Mat4((Mat4 *)&local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00ff97fc to 010f981b has its CatchHandler @ 00ff9948 */
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

