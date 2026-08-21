
/* cocos2d::Mat4::rotateZ(float) */

void __thiscall cocos2d::Mat4::rotateZ(Mat4 *this,float param_1)

{
  long lVar1;
  float local_78;
  float fStack_74;
  float local_70 [4];
  float local_60;
  float fStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70._8_8_ = IDENTITY._8_8_;
  local_70._0_8_ = IDENTITY._0_8_;
  uStack_58 = IDENTITY._24_8_;
  _local_60 = IDENTITY._16_8_;
  uStack_48 = IDENTITY._40_8_;
  local_50 = IDENTITY._32_8_;
  uStack_38 = IDENTITY._56_8_;
  uStack_40 = IDENTITY._48_8_;
  sincosf(param_1,&fStack_74,&local_78);
  _local_60 = CONCAT44(local_78,-fStack_74);
  MathUtil::multiplyMatrix((float *)this,local_70,(float *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

