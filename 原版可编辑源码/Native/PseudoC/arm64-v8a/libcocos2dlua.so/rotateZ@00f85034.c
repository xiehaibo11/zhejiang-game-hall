
/* cocos2d::Mat4::rotateZ(float, cocos2d::Mat4*) const */

void __thiscall cocos2d::Mat4::rotateZ(Mat4 *this,float param_1,Mat4 *param_2)

{
  long lVar1;
  float local_88;
  float fStack_84;
  float local_80 [4];
  float local_70;
  float fStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80._8_8_ = IDENTITY._8_8_;
  local_80._0_8_ = IDENTITY._0_8_;
  uStack_68 = IDENTITY._24_8_;
  _local_70 = IDENTITY._16_8_;
  uStack_58 = IDENTITY._40_8_;
  local_60 = IDENTITY._32_8_;
  uStack_48 = IDENTITY._56_8_;
  uStack_50 = IDENTITY._48_8_;
  sincosf(param_1,&fStack_84,&local_88);
  _local_70 = CONCAT44(local_88,-fStack_84);
  MathUtil::multiplyMatrix((float *)this,local_80,(float *)param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

