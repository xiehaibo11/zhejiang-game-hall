
/* cocos2d::Node::removeAllComponents() */

void __thiscall cocos2d::Node::removeAllComponents(Node *this)

{
  if (*(ComponentContainer **)(this + 0x210) != (ComponentContainer *)0x0) {
    ComponentContainer::removeAll(*(ComponentContainer **)(this + 0x210));
    return;
  }
  return;
}

