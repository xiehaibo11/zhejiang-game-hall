
/* cocos2d::Mat4::scale(float, float, float, cocos2d::Mat4*) const */

void __thiscall
cocos2d::Mat4::scale(Mat4 *this,float param_1,float param_2,float param_3,Mat4 *param_4)

{
  long lVar1;
  float local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  float local_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  float fStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_68 = IDENTITY._8_8_;
  uStack_58 = IDENTITY._24_8_;
  local_50 = IDENTITY._32_8_;
  uStack_38 = IDENTITY._56_8_;
  uStack_40 = IDENTITY._48_8_;
  _local_70 = CONCAT44(SUB84(IDENTITY._0_8_,4),param_1);
  _uStack_60 = CONCAT44(param_2,(int)IDENTITY._16_8_);
  _fStack_48 = CONCAT44(SUB84(IDENTITY._40_8_,4),param_3);
  MathUtil::multiplyMatrix((float *)this,&local_70,(float *)param_4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

