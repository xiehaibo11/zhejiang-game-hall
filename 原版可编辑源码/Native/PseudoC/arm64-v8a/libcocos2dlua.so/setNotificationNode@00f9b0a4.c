
/* cocos2d::Director::setNotificationNode(cocos2d::Node*) */

void __thiscall cocos2d::Director::setNotificationNode(Director *this,Node *param_1)

{
  if (*(long **)(this + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a8) + 0x338))();
    (**(code **)(**(long **)(this + 0x1a8) + 0x330))();
    (**(code **)(**(long **)(this + 0x1a8) + 0x340))();
    if (*(Ref **)(this + 0x1a8) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x1a8));
    }
  }
  *(Node **)(this + 0x1a8) = param_1;
  if (param_1 != (Node *)0x0) {
    (**(code **)(*(long *)param_1 + 800))(param_1);
    (**(code **)(**(long **)(this + 0x1a8) + 0x328))();
    if (*(Ref **)(this + 0x1a8) != (Ref *)0x0) {
      Ref::retain(*(Ref **)(this + 0x1a8));
      return;
    }
  }
  return;
}

