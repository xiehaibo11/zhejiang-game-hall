
/* cocos2d::JumpBy::create(float, cocos2d::Vec2 const&, float, int) */

Action * cocos2d::JumpBy::create(float param_1,Vec2 *param_2,float param_3,int param_4)

{
  Action *this;
  undefined8 uVar1;
  float fVar2;
  
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined ***)this = &PTR__Action_016f8ea8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8f08;
    if (param_4 < 0) {
      log("JumpBy::initWithDuration error: Number of jumps must be >= 0");
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      fVar2 = 1e-06;
      if (1e-06 < ABS(param_1)) {
        fVar2 = param_1;
      }
      *(undefined4 *)(this + 0x50) = 0;
      *(undefined2 *)(this + 0x54) = 1;
      *(float *)(this + 0x4c) = fVar2;
      uVar1 = *(undefined8 *)param_2;
      *(float *)(this + 0x68) = param_3;
      *(int *)(this + 0x6c) = param_4;
                    /* try { // try from 00ee0cec to 00fe0e27 has its CatchHandler @ 00ee0cec
                       catch() { ... } // from try @ 00ee0cec with catch @ 00ee0cec
                       catch() { ... } // from try @ 00ee0e30 with catch @ 00ee0cec */
      *(undefined8 *)(this + 0x60) = uVar1;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

