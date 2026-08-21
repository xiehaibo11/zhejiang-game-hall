
/* cocos2d::Node::setParent(cocos2d::Node*) */

void __thiscall cocos2d::Node::setParent(Node *this,Node *param_1)

{
  *(Node **)(this + 400) = param_1;
  this[0x150] = (Node)0x1;
  this[0x10c] = (Node)0x1;
  this[0x161] = (Node)0x1;
  return;
}

