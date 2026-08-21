
/* cocos2d::Mat4::rotateY(float) */

void __thiscall cocos2d::Mat4::rotateY(Mat4 *this,float param_1)

{
  long lVar1;
  float local_78;
  float fStack_74;
  float local_70 [2];
  float fStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float local_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0099b1fc to 00a9b2fb has its CatchHandler @ 0099afa4 */
  _fStack_68 = IDENTITY._8_8_;
  local_70 = (float  [2])IDENTITY._0_8_;
  uStack_58 = IDENTITY._24_8_;
  uStack_60 = IDENTITY._16_8_;
  _fStack_48 = IDENTITY._40_8_;
  _local_50 = IDENTITY._32_8_;
  uStack_38 = IDENTITY._56_8_;
  uStack_40 = IDENTITY._48_8_;
  sincosf(param_1,&fStack_74,&local_78);
  local_70[0] = local_78;
  _fStack_68 = CONCAT44(uStack_64,-fStack_74);
  _local_50 = CONCAT44(uStack_4c,fStack_74);
  _fStack_48 = CONCAT44(uStack_44,local_78);
  MathUtil::multiplyMatrix((float *)this,local_70,(float *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

