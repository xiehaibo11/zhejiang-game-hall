
/* cocos2d::Node::setVisible(bool) */

void __thiscall cocos2d::Node::setVisible(Node *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((Node)param_1 != this[0x1f9]) {
    this[0x1f9] = (Node)param_1;
    if (param_1) {
      this[0x150] = (Node)0x1;
      this[0x10c] = (Node)0x1;
      this[0x161] = (Node)0x1;
    }
    puVar1 = *(undefined8 **)(this + 0x180);
    for (puVar2 = *(undefined8 **)(this + 0x178); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x4f8))();
    }
  }
  return;
}

