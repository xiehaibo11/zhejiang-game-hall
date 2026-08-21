
/* cocos2d::Node::getChildrenCount() const */

long __thiscall cocos2d::Node::getChildrenCount(Node *this)

{
  return *(long *)(this + 0x180) - *(long *)(this + 0x178) >> 3;
}

