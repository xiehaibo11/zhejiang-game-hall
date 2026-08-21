
/* cocos2d::Speed::initWithAction(cocos2d::ActionInterval*, float) */

bool __thiscall cocos2d::Speed::initWithAction(Speed *this,ActionInterval *param_1,float param_2)

{
  if (param_1 == (ActionInterval *)0x0) {
    log("Speed::initWithAction error: action is nullptr!");
  }
  else {
    Ref::retain((Ref *)param_1);
    *(ActionInterval **)(this + 0x50) = param_1;
    *(float *)(this + 0x4c) = param_2;
  }
  return param_1 != (ActionInterval *)0x0;
}

