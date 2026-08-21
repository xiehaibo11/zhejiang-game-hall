
/* cocos2d::Node::setScaleX(float) */

void __thiscall cocos2d::Node::setScaleX(Node *this,float param_1)

{
  if (*(float *)(this + 0x44) == param_1) {
    return;
  }
  *(float *)(this + 0x44) = param_1;
  this[0x150] = (Node)0x1;
  this[0x10c] = (Node)0x1;
  this[0x161] = (Node)0x1;
  return;
}

