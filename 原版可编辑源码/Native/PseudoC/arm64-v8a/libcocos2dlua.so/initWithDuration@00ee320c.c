
/* cocos2d::TintTo::initWithDuration(float, unsigned char, unsigned char, unsigned char) */

undefined8 __thiscall
cocos2d::TintTo::initWithDuration
          (TintTo *this,float param_1,uchar param_2,uchar param_3,uchar param_4)

{
  long lVar1;
  float fVar2;
  undefined2 local_30;
  TintTo local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar2 = param_1;
  }
  *(float *)(this + 0x4c) = fVar2;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  Color3B::Color3B((Color3B *)&local_30,param_2,param_3,param_4);
  this[0x58] = local_2e;
  *(undefined2 *)(this + 0x56) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

