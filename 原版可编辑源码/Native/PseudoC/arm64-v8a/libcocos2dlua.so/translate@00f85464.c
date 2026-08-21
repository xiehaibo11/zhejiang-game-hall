
/* cocos2d::Mat4::translate(float, float, float, cocos2d::Mat4*) const */

void __thiscall
cocos2d::Mat4::translate(Mat4 *this,float param_1,float param_2,float param_3,Mat4 *param_4)

{
  long lVar1;
  float local_70 [12];
  float local_40;
  float fStack_3c;
  float local_38;
  undefined4 uStack_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70._8_8_ = IDENTITY._8_8_;
  local_70._0_8_ = IDENTITY._0_8_;
  local_70._24_8_ = IDENTITY._24_8_;
  local_70._16_8_ = IDENTITY._16_8_;
  local_70._40_8_ = IDENTITY._40_8_;
  local_70._32_8_ = IDENTITY._32_8_;
  _local_40 = CONCAT44(param_2,param_1);
  _local_38 = CONCAT44(SUB84(IDENTITY._56_8_,4),param_3);
  MathUtil::multiplyMatrix((float *)this,local_70,(float *)param_4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

