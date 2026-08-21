
/* cocos2d::Node::removeComponent(cocos2d::Component*) */

void __thiscall cocos2d::Node::removeComponent(Node *this,Component *param_1)

{
  if (*(ComponentContainer **)(this + 0x210) != (ComponentContainer *)0x0) {
    ComponentContainer::remove(*(ComponentContainer **)(this + 0x210),param_1);
    return;
  }
  return;
}

