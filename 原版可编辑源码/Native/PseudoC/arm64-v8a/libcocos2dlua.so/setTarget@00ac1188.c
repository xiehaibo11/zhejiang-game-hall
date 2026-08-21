
/* fairygui::GTweener::setTarget(cocos2d::Ref*) */

GTweener * __thiscall fairygui::GTweener::setTarget(GTweener *this,Ref *param_1)

{
  if (*(Ref **)(this + 0x90) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x90));
  }
  *(Ref **)(this + 0x88) = param_1;
  *(Ref **)(this + 0x90) = param_1;
  *(undefined4 *)(this + 0x98) = 0;
  if (param_1 != (Ref *)0x0) {
    cocos2d::Ref::retain(param_1);
  }
  return this;
}

