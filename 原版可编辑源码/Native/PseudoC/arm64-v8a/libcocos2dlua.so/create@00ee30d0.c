
/* cocos2d::TintTo::create(float, unsigned char, unsigned char, unsigned char) */

Action * cocos2d::TintTo::create(float param_1,uchar param_2,uchar param_3,uchar param_4)

{
  long lVar1;
  Action *this;
  float fVar2;
  undefined2 local_60;
  Action local_5e;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f94e8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9548;
    Color3B::Color3B((Color3B *)(this + 0x56));
    Color3B::Color3B((Color3B *)(this + 0x59));
    fVar2 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar2 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x4c) = fVar2;
    *(undefined2 *)(this + 0x54) = 1;
    Color3B::Color3B((Color3B *)&local_60,param_2,param_3,param_4);
    this[0x58] = local_5e;
    *(undefined2 *)(this + 0x56) = local_60;
    Ref::autorelease((Ref *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

