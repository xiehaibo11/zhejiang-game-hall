
/* cocos2d::ProtectedNode::disableCascadeColor() */

void __thiscall cocos2d::ProtectedNode::disableCascadeColor(ProtectedNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x180);
  for (puVar1 = *(undefined8 **)(this + 0x178); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x4c8))((long *)*puVar1,&Color3B::WHITE);
  }
  puVar2 = *(undefined8 **)(this + 0x300);
  for (puVar1 = *(undefined8 **)(this + 0x2f8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x4c8))((long *)*puVar1,&Color3B::WHITE);
  }
  return;
}

