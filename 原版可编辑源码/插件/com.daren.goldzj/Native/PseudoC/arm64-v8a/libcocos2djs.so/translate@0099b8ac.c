
/* cocos2d::Mat4::translate(cocos2d::Vec3 const&, cocos2d::Mat4*) const */

void __thiscall cocos2d::Mat4::translate(Mat4 *this,Vec3 *param_1,Mat4 *param_2)

{
  long lVar1;
  float local_70 [12];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0099b8c0 to 00a9b8cb has its CatchHandler @ 0099ba2c */
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0099b8cc to 00a9b8d7 has its CatchHandler @ 0099ba28 */
  local_40 = *(undefined8 *)param_1;
  local_70._40_8_ = IDENTITY._40_8_;
  local_70._32_8_ = IDENTITY._32_8_;
                    /* try { // try from 0099b8d8 to 00a9b9b3 has its CatchHandler @ 0099ba40 */
  local_70._8_8_ = IDENTITY._8_8_;
  local_70._0_8_ = IDENTITY._0_8_;
  local_70._24_8_ = IDENTITY._24_8_;
  local_70._16_8_ = IDENTITY._16_8_;
  _local_38 = CONCAT44(SUB84(IDENTITY._56_8_,4),*(undefined4 *)(param_1 + 8));
  MathUtil::multiplyMatrix((float *)this,local_70,(float *)param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

