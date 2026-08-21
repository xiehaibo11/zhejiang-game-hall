
/* cocostudio::ActionNode::setObject(cocos2d::Ref*) */

void __thiscall cocostudio::ActionNode::setObject(ActionNode *this,Ref *param_1)

{
  if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x48));
  }
  *(Ref **)(this + 0x48) = param_1;
  if (param_1 != (Ref *)0x0) {
    cocos2d::Ref::retain(param_1);
    return;
  }
  return;
}

