
/* cocos2d::Node::setPositionZ(float) */

void __thiscall cocos2d::Node::setPositionZ(Node *this,float param_1)

{
  if (*(float *)(this + 0x58) == param_1) {
    return;
  }
  this[0x150] = (Node)0x1;
  this[0x10c] = (Node)0x1;
  this[0x161] = (Node)0x1;
  *(float *)(this + 0x58) = param_1;
  return;
}

