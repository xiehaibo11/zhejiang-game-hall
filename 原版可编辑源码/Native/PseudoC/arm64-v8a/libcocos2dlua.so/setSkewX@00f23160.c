
/* cocos2d::Node::setSkewX(float) */

void __thiscall cocos2d::Node::setSkewX(Node *this,float param_1)

{
  if (*(float *)(this + 0x68) == param_1) {
    return;
  }
  *(float *)(this + 0x68) = param_1;
  this[0x150] = (Node)0x1;
  this[0x10c] = (Node)0x1;
  this[0x161] = (Node)0x1;
  return;
}

