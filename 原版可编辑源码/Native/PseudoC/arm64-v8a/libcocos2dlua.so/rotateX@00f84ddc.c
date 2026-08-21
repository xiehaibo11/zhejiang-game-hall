
/* cocos2d::Mat4::rotateX(float, cocos2d::Mat4*) const */

void __thiscall cocos2d::Mat4::rotateX(Mat4 *this,float param_1,Mat4 *param_2)

{
  long lVar1;
  float local_88;
  float fStack_84;
  float local_80 [5];
  float local_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  _fStack_58 = IDENTITY._40_8_;
  _local_60 = IDENTITY._32_8_;
  uStack_48 = IDENTITY._56_8_;
  uStack_50 = IDENTITY._48_8_;
  local_80._8_8_ = IDENTITY._8_8_;
  local_80._0_8_ = IDENTITY._0_8_;
  _fStack_68 = IDENTITY._24_8_;
  register0x00005060 = IDENTITY._16_8_;
  sincosf(param_1,&fStack_84,&local_88);
  stack0xffffffffffffff90 = CONCAT44(local_88,local_80[4]);
  _fStack_68 = CONCAT44(uStack_64,fStack_84);
  _local_60 = CONCAT44(-fStack_84,local_60);
  _fStack_58 = CONCAT44(uStack_54,local_88);
  MathUtil::multiplyMatrix((float *)this,local_80,(float *)param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

