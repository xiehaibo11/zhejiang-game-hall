
/* cocosbuilder::CCBKeyframe::setObject(cocos2d::Ref*) */

void __thiscall cocosbuilder::CCBKeyframe::setObject(CCBKeyframe *this,Ref *param_1)

{
  if (param_1 != (Ref *)0x0) {
    cocos2d::Ref::retain(param_1);
  }
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x38));
  }
  *(Ref **)(this + 0x38) = param_1;
  return;
}

