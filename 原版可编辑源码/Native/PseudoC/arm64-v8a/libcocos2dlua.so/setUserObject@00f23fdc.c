
/* cocos2d::Node::setUserObject(cocos2d::Ref*) */

void __thiscall cocos2d::Node::setUserObject(Node *this,Ref *param_1)

{
  if (param_1 != (Ref *)0x0) {
    Ref::retain(param_1);
  }
  if (*(Ref **)(this + 0x1d0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x1d0));
  }
  *(Ref **)(this + 0x1d0) = param_1;
  return;
}

