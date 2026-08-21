
/* cocos2d::Node::setPosition(float, float) */

void __thiscall cocos2d::Node::setPosition(Node *this,float param_1,float param_2)

{
  if ((*(float *)(this + 0x50) == param_1) && (*(float *)(this + 0x54) == param_2)) {
    return;
  }
  *(float *)(this + 0x50) = param_1;
  *(float *)(this + 0x54) = param_2;
  this[0x150] = (Node)0x1;
  this[0x10c] = (Node)0x1;
  this[0x161] = (Node)0x1;
  this[100] = (Node)0x0;
  return;
}

