
/* cocos2d::ProtectedNode::setCameraMask(unsigned short, bool) */

void __thiscall
cocos2d::ProtectedNode::setCameraMask(ProtectedNode *this,ushort param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Node::setCameraMask((Node *)this,param_1,param_2);
  if (param_2) {
    puVar1 = *(undefined8 **)(this + 0x300);
    for (puVar2 = *(undefined8 **)(this + 0x2f8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x4f0))((long *)*puVar2,param_1,1);
    }
  }
  return;
}

