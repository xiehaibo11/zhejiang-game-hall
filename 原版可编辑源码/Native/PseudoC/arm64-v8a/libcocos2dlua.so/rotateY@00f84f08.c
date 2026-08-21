
/* cocos2d::Mat4::rotateY(float, cocos2d::Mat4*) const */

void __thiscall cocos2d::Mat4::rotateY(Mat4 *this,float param_1,Mat4 *param_2)

{
  long lVar1;
  float local_88;
  float fStack_84;
  float local_80 [2];
  float fStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float local_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  _fStack_78 = IDENTITY._8_8_;
  local_80 = (float  [2])IDENTITY._0_8_;
  uStack_68 = IDENTITY._24_8_;
  uStack_70 = IDENTITY._16_8_;
  _fStack_58 = IDENTITY._40_8_;
  _local_60 = IDENTITY._32_8_;
  uStack_48 = IDENTITY._56_8_;
  uStack_50 = IDENTITY._48_8_;
  sincosf(param_1,&fStack_84,&local_88);
  _fStack_78 = CONCAT44(uStack_74,-fStack_84);
  local_80[0] = local_88;
  _fStack_58 = CONCAT44(uStack_54,local_88);
  _local_60 = CONCAT44(uStack_5c,fStack_84);
  MathUtil::multiplyMatrix((float *)this,local_80,(float *)param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

