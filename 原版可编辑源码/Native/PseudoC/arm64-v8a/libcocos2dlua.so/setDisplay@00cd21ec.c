
/* cocostudio::DecorativeDisplay::setDisplay(cocos2d::Node*) */

void __thiscall cocostudio::DecorativeDisplay::setDisplay(DecorativeDisplay *this,Node *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x28);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Node *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x28);
    }
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(Node **)(this + 0x28) = param_1;
  }
  return;
}

