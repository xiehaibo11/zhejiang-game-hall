
/* cocos2d::Mat4::rotateX(float, cocos2d::Mat4*) const */

void __thiscall cocos2d::Mat4::rotateX(Mat4 *this,float param_1,Mat4 *param_2)

{
  long lVar1;
  float local_88;
  float fStack_84;
  float local_80 [5];
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float local_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0099b164 to 00a9b1a7 has its CatchHandler @ 0099b270 */
  _fStack_68 = IDENTITY._24_8_;
  register0x00005020 = IDENTITY._16_8_;
  _fStack_58 = IDENTITY._40_8_;
  _uStack_60 = IDENTITY._32_8_;
  uStack_48 = IDENTITY._56_8_;
  local_50 = IDENTITY._48_8_;
  local_80._8_8_ = IDENTITY._8_8_;
  local_80._0_8_ = IDENTITY._0_8_;
  sincosf(param_1,&fStack_84,&local_88);
  stack0xffffffffffffff90 = CONCAT44(local_88,local_80[4]);
  _fStack_68 = CONCAT44(uStack_64,fStack_84);
  _uStack_60 = CONCAT44(-fStack_84,uStack_60);
  _fStack_58 = CONCAT44(uStack_54,local_88);
  MathUtil::multiplyMatrix((float *)this,local_80,(float *)param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0099b1c0 to 00a9b1fb has its CatchHandler @ 0099b2a4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

