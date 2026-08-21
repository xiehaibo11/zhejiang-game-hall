
/* cocos2d::Node::updateVisual() */

void __thiscall cocos2d::Node::updateVisual(Node *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x180);
  for (puVar2 = *(undefined8 **)(this + 0x178); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x4f8))();
  }
  return;
}

