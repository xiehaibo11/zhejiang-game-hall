
/* cocos2d::Node::convertToWorldSpaceAR(cocos2d::Vec2 const&) const */

void __thiscall cocos2d::Node::convertToWorldSpaceAR(Node *this,Vec2 *param_1)

{
  undefined8 local_18;
  
  local_18 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20),
                      (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(this + 0x70));
  convertToWorldSpace(this,(Vec2 *)&local_18);
  return;
}

