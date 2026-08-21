
/* cocos2d::Node::convertToNodeSpaceAR(cocos2d::Vec2 const&) const */

float __thiscall cocos2d::Node::convertToNodeSpaceAR(Node *this,Vec2 *param_1)

{
  float fVar1;
  
  fVar1 = (float)convertToNodeSpace(this,param_1);
  return fVar1 - *(float *)(this + 0x70);
}

