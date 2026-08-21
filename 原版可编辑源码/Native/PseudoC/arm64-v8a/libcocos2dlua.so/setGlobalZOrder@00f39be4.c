
/* cocos2d::ProtectedNode::setGlobalZOrder(float) */

void __thiscall cocos2d::ProtectedNode::setGlobalZOrder(ProtectedNode *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00005004;
  
  Node::setGlobalZOrder((Node *)this,param_1);
  puVar1 = *(undefined8 **)(this + 0x300);
  for (puVar2 = *(undefined8 **)(this + 0x2f8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x40))(CONCAT44(in_register_00005004,param_1));
  }
  return;
}

