
/* cocos2d::Repeat::create(cocos2d::FiniteTimeAction*, unsigned int) */

Action * cocos2d::Repeat::create(FiniteTimeAction *param_1,uint param_2)

{
  Action *this;
  long lVar1;
  float fVar2;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Repeat_016f85a8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8608;
    if (param_1 == (FiniteTimeAction *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      fVar2 = 1e-06;
      if (1e-06 < ABS(*(float *)(param_1 + 0x4c) * (float)param_2)) {
        fVar2 = *(float *)(param_1 + 0x4c) * (float)param_2;
      }
      *(undefined4 *)(this + 0x50) = 0;
      *(uint *)(this + 0x58) = param_2;
      *(undefined2 *)(this + 0x54) = 1;
      *(float *)(this + 0x4c) = fVar2;
      *(FiniteTimeAction **)(this + 0x68) = param_1;
      Ref::retain((Ref *)param_1);
      lVar1 = __dynamic_cast(param_1,&FiniteTimeAction::typeinfo,&ActionInstant::typeinfo,0);
      this[100] = (Action)(lVar1 != 0);
      *(undefined4 *)(this + 0x5c) = 0;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

