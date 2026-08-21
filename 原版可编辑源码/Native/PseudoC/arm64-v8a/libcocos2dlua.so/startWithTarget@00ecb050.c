
/* cocos2d::Action::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::Action::startWithTarget(Action *this,Node *param_1)

{
  *(Node **)(this + 0x30) = param_1;
  *(Node **)(this + 0x38) = param_1;
  return;
}

