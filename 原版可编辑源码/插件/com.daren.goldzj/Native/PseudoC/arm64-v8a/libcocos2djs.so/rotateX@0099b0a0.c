
/* cocos2d::Mat4::rotateX(float) */

void __thiscall cocos2d::Mat4::rotateX(Mat4 *this,float param_1)

{
  long lVar1;
  float local_78;
  float fStack_74;
  float local_70 [5];
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float local_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
                    /* try { // try from 0099b0b0 to 00a9b117 has its CatchHandler @ 0099b2a4 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  _fStack_58 = IDENTITY._24_8_;
  register0x00005020 = IDENTITY._16_8_;
  _fStack_48 = IDENTITY._40_8_;
  _uStack_50 = IDENTITY._32_8_;
  uStack_38 = IDENTITY._56_8_;
  local_40 = IDENTITY._48_8_;
  local_70._8_8_ = IDENTITY._8_8_;
  local_70._0_8_ = IDENTITY._0_8_;
  sincosf(param_1,&fStack_74,&local_78);
  stack0xffffffffffffffa0 = CONCAT44(local_78,local_70[4]);
  _fStack_58 = CONCAT44(uStack_54,fStack_74);
  _uStack_50 = CONCAT44(-fStack_74,uStack_50);
  _fStack_48 = CONCAT44(uStack_44,local_78);
  MathUtil::multiplyMatrix((float *)this,local_70,(float *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0099b11c to 00a9b15f has its CatchHandler @ 0099b274 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

