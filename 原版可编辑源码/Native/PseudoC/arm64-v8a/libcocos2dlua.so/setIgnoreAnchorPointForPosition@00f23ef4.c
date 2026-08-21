
/* cocos2d::Node::setIgnoreAnchorPointForPosition(bool) */

void __thiscall cocos2d::Node::setIgnoreAnchorPointForPosition(Node *this,bool param_1)

{
  if ((Node)param_1 != this[0x1fa]) {
    this[0x1fa] = (Node)param_1;
    this[0x150] = (Node)0x1;
    this[0x10c] = (Node)0x1;
    this[0x161] = (Node)0x1;
  }
  return;
}

