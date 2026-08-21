
/* cocostudio::ActionObject::play(cocos2d::CallFunc*) */

void __thiscall cocostudio::ActionObject::play(ActionObject *this,CallFunc *param_1)

{
  play(this);
  *(CallFunc **)(this + 0x70) = param_1;
  if (param_1 != (CallFunc *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
    return;
  }
  return;
}

